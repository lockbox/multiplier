// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

#include <cstdlib>
#include <gflags/gflags.h>
#include <glog/logging.h>
#include <iostream>
#include <multiplier/Index.h>
#include <sstream>

DECLARE_bool(help);
DEFINE_string(host, "localhost", "Hostname of mx-server. Use 'unix' for a UNIX domain socket.");
DEFINE_string(port, "50051", "Port of mx-server. Use a path and 'unix' for the host for a UNIX domain socket.");
DEFINE_uint64(fragment_id, 0, "ID of the fragment from which to print structures");
DEFINE_uint64(file_id, 0, "ID of the file from which to print structures");
DEFINE_bool(show_locations, false, "Show the file locations of the structures");

std::unordered_map<mx::FileId, std::filesystem::path> file_paths;
mx::FileLocationCache location_cache;

static void PrintStructures(mx::Fragment fragment) {
  for (mx::RecordDecl record : mx::RecordDecl::in(fragment)) {
    if (!record.is_definition()) {
      continue;
    }

    auto file = mx::File::containing(fragment);

    std::cout
        << file.id() << '\t'
        << fragment.id() << '\t' << record.id() << '\t'
        << record.name();

    if (FLAGS_show_locations) {
      std::cout << '\t' << file_paths[file.id()].generic_string();
      if (auto tok = record.token()) {
        if (auto line_col = tok.location(location_cache)) {
          std::cout << '\t' << line_col->first << '\t' << line_col->second;
        }
      }
    }

    std::cout << '\n';

    for (const mx::FieldDecl &field : record.fields()) {
      std::cout << "\t\t" << field.id() << '\t' << field.name();
      if (FLAGS_show_locations) {
        std::cout << '\t' << file_paths[file.id()].generic_string();
        if (auto tok = field.token()) {
          if (auto line_col = tok.location(location_cache)) {
            std::cout << '\t' << line_col->first << '\t' << line_col->second;
          }
        }
      }
      std::cout << '\n';
    }
  }
}

extern "C" int main(int argc, char *argv[]) {
  std::stringstream ss;
  ss
    << "Usage: " << argv[0]
    << " [--host HOST] [--port PORT] [--fragment_id ID | --file_id ID]\n";

  google::SetUsageMessage(ss.str());
  google::ParseCommandLineFlags(&argc, &argv, false);
  google::InitGoogleLogging(argv[0]);

  if (FLAGS_help) {
    std::cerr << google::ProgramUsage() << std::endl;
    return EXIT_FAILURE;
  }

  mx::Index index(mx::EntityProvider::from_remote(
      FLAGS_host, FLAGS_port));

  if (FLAGS_show_locations) {
    for (auto [path, id] : index.file_paths()) {
      file_paths.emplace(id, std::move(path));
    }
  }

  if (FLAGS_fragment_id) {
    auto fragment = index.fragment(FLAGS_fragment_id);
    if (!fragment) {
      std::cerr << "Invalid fragment id " << FLAGS_fragment_id << std::endl;
      return EXIT_FAILURE;
    }
    PrintStructures(std::move(*fragment));

  } else if (FLAGS_file_id) {
    auto file = index.file(FLAGS_file_id);
    if (!file) {
      std::cerr << "Invalid file id " << FLAGS_file_id << std::endl;
      return EXIT_FAILURE;
    }
    for (mx::Fragment fragment : mx::Fragment::in(*file)) {
      PrintStructures(std::move(fragment));
    }

  } else {
    for (mx::File file : mx::File::in(index)) {
      for (mx::Fragment fragment : mx::Fragment::in(file)) {
        PrintStructures(std::move(fragment));
      }
    }
  }

  return EXIT_SUCCESS;
}
