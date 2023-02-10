// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <cstdint>
#include <filesystem>
#include <memory>
#include <optional>
#include <span>
#include <vector>

#include <gap/core/generator.hpp>
#include "../Iterator.h"
#include "../Reference.h"
#include "../Types.h"
#include "../Token.h"

#include "Decl.h"
#include "DeclKind.h"

namespace mx {
class Decl;
class ExportDecl;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class ExportDecl : public Decl {
 private:
  friend class FragmentImpl;
  friend class Decl;
 public:
  static gap::generator<ExportDecl> in(const Fragment &frag);
  static gap::generator<ExportDecl> in(const File &file);
  static gap::generator<ExportDecl> in(const Index &index);
  static gap::generator<ExportDecl> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<ExportDecl> by_id(const Index &, EntityId);

  inline static constexpr DeclKind static_kind(void) {
    return DeclKind::EXPORT;
  }

  static gap::generator<ExportDecl> containing(const Decl &decl);
  static gap::generator<ExportDecl> containing(const std::optional<Decl> &decl);

  static gap::generator<ExportDecl> containing(const Stmt &stmt);
  static gap::generator<ExportDecl> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  gap::generator<ExportDecl> redeclarations(void) const;
  static std::optional<ExportDecl> from(const Decl &parent);

  inline static std::optional<ExportDecl> from(const std::optional<Decl> &parent) {
    if (parent) {
      return ExportDecl::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  inline static std::optional<ExportDecl> from(const Reference &r) {
    return ExportDecl::from(r.as_declaration());
  }

  inline static std::optional<ExportDecl> from(const TokenContext &t) {
    return ExportDecl::from(t.as_declaration());
  }

  Token export_token(void) const;
  Token r_brace_token(void) const;
  bool has_braces(void) const;
  gap::generator<Decl> declarations_in_context(void) const;
};

static_assert(sizeof(ExportDecl) == sizeof(Decl));

#endif
} // namespace mx
