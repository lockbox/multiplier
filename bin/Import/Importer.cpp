// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

#include "Importer.h"

#include <cstring>
#include <filesystem>
#include <iostream>
#include <sstream>
#include <string>
#include <system_error>
#include <unordered_map>
#include <vector>

#include <gflags/gflags.h>
#include <glog/logging.h>
#include <kj/array.h>
#include <kj/async.h>
#include <llvm/Support/Format.h>
#include <llvm/Support/FormatVariadic.h>
#include <llvm/Support/JSON.h>
#include <llvm/Support/raw_ostream.h>
#include <multiplier/Action.h>
#include <multiplier/Executor.h>
#include <multiplier/Result.h>
#include <multiplier/Subprocess.h>
#include <multiplier/Types.h>
#include <pasta/Compile/Command.h>
#include <pasta/Compile/Compiler.h>
#include <pasta/Compile/Job.h>
#include <pasta/Util/ArgumentVector.h>
#include <pasta/Util/FileManager.h>
#include <pasta/Util/FileSystem.h>

DECLARE_string(system_compiler);
DECLARE_string(sysroot_dir);
DECLARE_string(resource_dir);

namespace importer {
namespace {

static std::mutex gCompileJobListLock;

using CompileJobList = std::vector<std::pair<pasta::Compiler, pasta::CompileJob>>;

struct Command {
 public:
  std::string compiler_hash;
  std::string working_dir;
  std::unordered_map<std::string, std::string> env;
  pasta::ArgumentVector vec;
  pasta::CompilerName name{pasta::CompilerName::kUnknown};
  pasta::TargetLanguage lang{pasta::TargetLanguage::kC};

  Command(const std::string &command)
      : vec(command) {}

  Command(const std::vector<std::string> &args)
      : vec(args) {}
};

class BuildCommandAction final : public mx::Action {
 private:
  pasta::FileManager &fm;
  const Command &command;
  CompileJobList &jobs;

  // If we are using something like CMake commands, then pull in the relevant
  // information by trying to execute the compiler directly.
  std::pair<std::string, std::string> InitCompilerFromCommand(void);

  void RunWithCompiler(pasta::CompileCommand cmd, pasta::Compiler cc,
                       CompileJobList &builder);

 public:
  virtual ~BuildCommandAction(void) = default;

  inline BuildCommandAction(pasta::FileManager &fm_, Command &command_,
                            CompileJobList &jobs_)
      : fm(fm_),
        command(command_),
        jobs(jobs_) {}

  void Run(mx::Executor exe, mx::WorkerId) final;
};

// If we are using something like CMake commands, then pull in the relevant
// information by trying to execute the compiler directly.
std::pair<std::string, std::string>
BuildCommandAction::InitCompilerFromCommand(void) {
  std::vector<std::string> new_args;
  for (auto arg : command.vec) {
    new_args.emplace_back(arg);
  }
  new_args.emplace_back("-Wno-missing-sysroot");
  new_args.emplace_back("-E");
  new_args.emplace_back("-v");
  pasta::ArgumentVector cmd_sysroot(new_args);

  new_args.emplace_back("-isysroot");
  new_args.emplace_back(command.working_dir + "/xyz");
  pasta::ArgumentVector cmd_no_sysroot(new_args);

  std::stringstream output_sysroot;
  std::stringstream output_no_sysroot;
  (void) mx::Subprocess::Execute(
      cmd_sysroot, &(command.env), nullptr, nullptr, &output_sysroot);

  (void) mx::Subprocess::Execute(
      cmd_no_sysroot, &(command.env), nullptr, nullptr, &output_no_sysroot);

  return {output_sysroot.str(), output_no_sysroot.str()};
}

void BuildCommandAction::RunWithCompiler(pasta::CompileCommand cmd,
                                         pasta::Compiler cc,
                                         CompileJobList &jobs) {
  auto maybe_jobs = cc.CreateJobsForCommand(cmd);
  if (!maybe_jobs.Succeeded()) {
    LOG(ERROR)
        << "Unable to create compile jobs: " << maybe_jobs.TakeError();
    return;
  }

  for (pasta::CompileJob job : maybe_jobs.TakeValue()) {
    std::unique_lock<std::mutex> locker(gCompileJobListLock);
    jobs.emplace_back(cc, job);
  }
}

// Build the compilers for the commands, then build the commands.
void BuildCommandAction::Run(mx::Executor exe, mx::WorkerId) {

  pasta::Result<pasta::CompileCommand, std::string_view> maybe_cmd =
      pasta::CompileCommand::CreateFromArguments(
          command.vec, command.working_dir);
  if (!maybe_cmd.Succeeded()) {
    LOG(ERROR)
        << "Unable to create compile command: " << maybe_cmd.TakeError();
    return;
  }

  auto [cc_version_sysroot, cc_version_no_sysroot] = InitCompilerFromCommand();

  pasta::Result<pasta::Compiler, std::string> maybe_cc =
      pasta::Compiler::Create(fm, command.vec[0], command.working_dir,
                              command.name, command.lang, cc_version_sysroot,
                              cc_version_no_sysroot);

  if (!maybe_cc.Succeeded()) {
    auto error = maybe_cc.TakeError();
    maybe_cc = pasta::Compiler::CreateHostCompiler(fm, command.lang);
    if (maybe_cc.Succeeded()) {
      RunWithCompiler(maybe_cmd.TakeValue(), maybe_cc.TakeValue(),
                      jobs);
    } else {
      LOG(ERROR)
          << "Unable to create compiler: " << error;
    }
  } else {
    RunWithCompiler(maybe_cmd.TakeValue(), maybe_cc.TakeValue(),
                    jobs);
  }
}

//llvm::json::Value v(std::move(o));
//std::string s;
//llvm::raw_string_ostream os(s);
//os << llvm::formatv("{0:2}", v);
//os.flush();
//std::cerr << s << std::endl;
//return true;

}  // namespace

struct Importer::PrivateData {
 public:
  // Commands, grouped by working directory.
  std::unordered_map<std::string, std::vector<Command>> commands;
};

Importer::~Importer(void) {}

Importer::Importer(void)
    : d(std::make_unique<Importer::PrivateData>()) {}

bool Importer::ImportBlightCompileCommand(llvm::json::Object &o) {

  auto wrapped_tool = o.getString("wrapped_tool");
  auto cwd = o.getString("cwd");
  auto args = o.getArray("args");
  auto hash = o.getString("hash");
  auto lang = o.getString("lang");  // `C`, `Cxx`, `Unknown`.
  auto env = o.getObject("env");

  if (!wrapped_tool || !cwd || !args || args->empty() || !hash || !lang ||
      !env) {
    return false;
  }

  std::vector<std::string> args_vec;
  args_vec.emplace_back(wrapped_tool->str());

  for (auto arg : *args) {
    if (auto arg_str = arg.getAsString()) {
      args_vec.emplace_back(arg_str->str());
    } else {
      return false;
    }
  }

  std::unordered_map<std::string, std::string> envp;
  for (const auto &it : *env) {
    const llvm::json::ObjectKey &key = it.first;
    const llvm::json::Value &val = it.second;
    if (auto val_str = val.getAsString()) {
      envp.emplace(key.str(), val_str->str());
    } else {
      return false;
    }
  }

  auto &command = d->commands[cwd->str()].emplace_back(args_vec);
  command.working_dir = cwd->str();
  command.compiler_hash = hash->str();
  command.env = std::move(envp);
  if (lang->equals_insensitive("c++") || lang->equals_insensitive("cxx")) {
    command.lang = pasta::TargetLanguage::kCXX;
  }
  return true;
}


bool Importer::ImportCMakeCompileCommand(llvm::json::Object &o) {
  auto args = o.getString("command");
  auto cwd = o.getString("directory");
  auto file = o.getString("file");
  if (!args || !cwd || !file) {
    return false;
  }

  auto &commands = d->commands[cwd->str()];
  auto args_str = args->str();
  auto &command = commands.emplace_back(args_str);
  if (command.vec.Size()) {
    command.compiler_hash = std::move(args_str);
    command.working_dir = cwd->str();

    // Guess at the language.
    if (args->contains_insensitive("++") || args->contains_insensitive(".cc") ||
        args->contains_insensitive(".cxx") || args->contains_insensitive(".cpp") ||
        args->contains_insensitive(".hxx") || args->contains_insensitive(".hpp")) {
      command.lang = pasta::TargetLanguage::kCXX;
    }

    return true;

  } else {
    commands.pop_back();
    return false;
  }
}

static mx::rpc::CompilerName FromPasta(pasta::CompilerName name) {
  switch (name) {
    case pasta::CompilerName::kUnknown:
      return mx::rpc::CompilerName::UNKNOWN;
    case pasta::CompilerName::kClang:
      return mx::rpc::CompilerName::CLANG;
    case pasta::CompilerName::kAppleClang:
      return mx::rpc::CompilerName::APPLE_CLANG;
    case pasta::CompilerName::kClangCL:
      return mx::rpc::CompilerName::CLANG_CL;
    case pasta::CompilerName::kCL:
      return mx::rpc::CompilerName::CL;
    case pasta::CompilerName::kGNU:
      return mx::rpc::CompilerName::GNU;
  }
}

static mx::rpc::TargetLanguage FromPasta(pasta::TargetLanguage tl) {
  switch (tl) {
    case pasta::TargetLanguage::kC:
      return mx::rpc::TargetLanguage::C;

    case pasta::TargetLanguage::kCXX:
      return mx::rpc::TargetLanguage::CXX;
  }
}

static mx::rpc::IncludePathLocation FromPasta(pasta::IncludePathLocation ipl) {
  switch (ipl) {
    case pasta::IncludePathLocation::kAbsolute:
      return mx::rpc::IncludePathLocation::ABSOLUTE;
    case pasta::IncludePathLocation::kSysrootRelative:
      return mx::rpc::IncludePathLocation::SYSTEM_ROOT_INCLUDE_RELATIVE;
  }
}

kj::Promise<void> Importer::Build(mx::rpc::Multiplier::Client &client) {
  mx::Executor exe;
  auto promises = kj::heapArrayBuilder<kj::Promise<void>>(d->commands.size());

  for (auto &[cwd, commands] : d->commands) {

    // Change the current working directory to match that of the commands.
    // This is a process-wide operation.
    std::error_code ec;
    std::filesystem::current_path(cwd, ec);
    if (ec) {
      LOG(ERROR)
          << "Could not change current working directory to " << cwd
          << ": " << ec.message();
      continue;
    }

    // Now re-build a host file sytem, and let it observe the changed working
    // directory.
    auto host_fs = pasta::FileSystem::CreateNative();
    pasta::FileManager fm(host_fs);
    CompileJobList jobs;

    // Run all commands relevant to just this working directory.
    for (Command &command : commands) {
      exe.EmplaceAction<BuildCommandAction>(fm, command, jobs);
    }
    exe.Start();
    exe.Wait();

    if (jobs.empty()) {
      continue;
    }

    auto request = client.indexCompileCommandsRequest();
    auto commands_builder = request.initCommands(static_cast<unsigned>(jobs.size()));

    // If we've got any messages, then send them out. The granularity is likely
    // to be small because we don't expect many files to operate in the same
    // working directory, though if they do, then at least we still have the
    // benefit of the N-way split from the executor.
    auto i = 0u;
    for (const auto &[cc_, job_] : jobs) {
      const pasta::Compiler &cc = cc_;
      const pasta::CompileJob &job = job_;

      mx::rpc::CompileCommand::Builder cb = commands_builder[i++];
      cb.setSourcePath(job.SourceFile().Path().generic_string());
      cb.setCompilerPath(cc.ExecutablePath());
      cb.setWorkingDirectory(job.WorkingDirectory().generic_string());
      cb.setSystemRootDirectory(job.SystemRootDirectory().generic_string());
      cb.setSystemRootIncludeDirectory(job.SystemRootIncludeDirectory().generic_string());
      cb.setResourceDirectory(job.ResourceDirectory().generic_string());
      cb.setInstallationDirectory(cc.InstallationDirectory().generic_string());

      auto j = 0u;
      cc.ForEachSystemIncludeDirectory(
          [&] (const std::filesystem::path &,
               pasta::IncludePathLocation ) { ++j; });
      auto paths = cb.initSystemIncludePaths(j);

      j = 0u;
      cc.ForEachSystemIncludeDirectory(
          [&] (const std::filesystem::path &path,
               pasta::IncludePathLocation ipl) {
            mx::rpc::IncludePath::Builder p = paths[j++];
            p.setDirectory(path.generic_string());
            p.setLocation(FromPasta(ipl));
          });

      j = 0u;
      cc.ForEachUserIncludeDirectory(
          [&] (const std::filesystem::path &,
               pasta::IncludePathLocation ) { ++j; });
      paths = cb.initUserIncludePaths(j);

      j = 0u;
      cc.ForEachUserIncludeDirectory(
          [&] (const std::filesystem::path &path,
               pasta::IncludePathLocation ipl) {
            mx::rpc::IncludePath::Builder p = paths[j++];
            p.setDirectory(path.generic_string());
            p.setLocation(FromPasta(ipl));
          });

      j = 0u;
      cc.ForEachFrameworkDirectory(
          [&] (const std::filesystem::path &,
               pasta::IncludePathLocation ) { ++j; });
      paths = cb.initFrameworkPaths(j);

      j = 0u;
      cc.ForEachFrameworkDirectory(
          [&] (const std::filesystem::path &path,
               pasta::IncludePathLocation ipl) {
            mx::rpc::IncludePath::Builder p = paths[j++];
            p.setDirectory(path.generic_string());
            p.setLocation(FromPasta(ipl));
          });


      auto &args = job.Arguments();
      auto args_list = cb.initArguments(static_cast<unsigned>(args.Size()));
      j = 0u;
      for (auto arg : args) {
        args_list.set(j++, arg);
      }

      cb.setLanguage(FromPasta(cc.TargetLanguage()));
      cb.setCompiler(FromPasta(cc.Name()));
    }

    promises.add(request.send().ignoreResult());
  }

  return kj::joinPromises(promises.finish());
}

}  // namespace importer
