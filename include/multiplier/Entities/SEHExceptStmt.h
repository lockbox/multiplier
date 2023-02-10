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

#include "Stmt.h"
#include "StmtKind.h"

namespace mx {
class CompoundStmt;
class Expr;
class SEHExceptStmt;
class Stmt;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class SEHExceptStmt : public Stmt {
 private:
  friend class FragmentImpl;
  friend class Stmt;
 public:
  static gap::generator<SEHExceptStmt> in(const Fragment &frag);
  static gap::generator<SEHExceptStmt> in(const File &file);
  static gap::generator<SEHExceptStmt> in(const Index &index);
  static gap::generator<SEHExceptStmt> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<SEHExceptStmt> by_id(const Index &, EntityId);

  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::SEH_EXCEPT_STMT;
  }

  static gap::generator<SEHExceptStmt> containing(const Decl &decl);
  static gap::generator<SEHExceptStmt> containing(const std::optional<Decl> &decl);

  static gap::generator<SEHExceptStmt> containing(const Stmt &stmt);
  static gap::generator<SEHExceptStmt> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<SEHExceptStmt> from(const Stmt &parent);

  inline static std::optional<SEHExceptStmt> from(const std::optional<Stmt> &parent) {
    if (parent) {
      return SEHExceptStmt::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  inline static std::optional<SEHExceptStmt> from(const Reference &r) {
    return SEHExceptStmt::from(r.as_statement());
  }

  inline static std::optional<SEHExceptStmt> from(const TokenContext &t) {
    return SEHExceptStmt::from(t.as_statement());
  }

  CompoundStmt block(void) const;
  Token except_token(void) const;
  Expr filter_expression(void) const;
};

static_assert(sizeof(SEHExceptStmt) == sizeof(Stmt));

#endif
} // namespace mx
