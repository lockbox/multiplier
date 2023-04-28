// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include "Decl.h"

namespace mx {
class EntityProvider;
class Index;
class Decl;
class Stmt;
class Token;
class TopLevelStmtDecl;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class TopLevelStmtDecl : public Decl {
 private:
  friend class FragmentImpl;
  friend class Decl;
 public:
  static gap::generator<TopLevelStmtDecl> in(const Fragment &frag);
  static gap::generator<TopLevelStmtDecl> in(const File &file);
  static gap::generator<TopLevelStmtDecl> in(const Index &index);
  static gap::generator<TopLevelStmtDecl> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<TopLevelStmtDecl> by_id(const Index &, EntityId);

  inline static constexpr DeclKind static_kind(void) {
    return DeclKind::TOP_LEVEL_STMT;
  }

  static gap::generator<TopLevelStmtDecl> containing(const Decl &decl);
  static gap::generator<TopLevelStmtDecl> containing(const std::optional<Decl> &decl);

  static gap::generator<TopLevelStmtDecl> containing(const Stmt &stmt);
  static gap::generator<TopLevelStmtDecl> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  TopLevelStmtDecl canonical_declaration(void) const;
  std::optional<TopLevelStmtDecl> definition(void) const;
  gap::generator<TopLevelStmtDecl> redeclarations(void) const &;
  static std::optional<TopLevelStmtDecl> from(const Decl &parent);

  inline static std::optional<TopLevelStmtDecl> from(const std::optional<Decl> &parent) {
    if (parent) {
      return TopLevelStmtDecl::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  static std::optional<TopLevelStmtDecl> from(const Reference &r);
  static std::optional<TopLevelStmtDecl> from(const TokenContext &t);

  Stmt statement(void) const;
};

static_assert(sizeof(TopLevelStmtDecl) == sizeof(Decl));

#endif
} // namespace mx