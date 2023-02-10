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

#include "Expr.h"
#include "StmtKind.h"

namespace mx {
class DependentScopeDeclRefExpr;
class Expr;
class Stmt;
class ValueStmt;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class DependentScopeDeclRefExpr : public Expr {
 private:
  friend class FragmentImpl;
  friend class Expr;
  friend class ValueStmt;
  friend class Stmt;
 public:
  static gap::generator<DependentScopeDeclRefExpr> in(const Fragment &frag);
  static gap::generator<DependentScopeDeclRefExpr> in(const File &file);
  static gap::generator<DependentScopeDeclRefExpr> in(const Index &index);
  static gap::generator<DependentScopeDeclRefExpr> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<DependentScopeDeclRefExpr> by_id(const Index &, EntityId);

  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::DEPENDENT_SCOPE_DECL_REF_EXPR;
  }

  static gap::generator<DependentScopeDeclRefExpr> containing(const Decl &decl);
  static gap::generator<DependentScopeDeclRefExpr> containing(const std::optional<Decl> &decl);

  static gap::generator<DependentScopeDeclRefExpr> containing(const Stmt &stmt);
  static gap::generator<DependentScopeDeclRefExpr> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<DependentScopeDeclRefExpr> from(const Stmt &parent);

  inline static std::optional<DependentScopeDeclRefExpr> from(const std::optional<Stmt> &parent) {
    if (parent) {
      return DependentScopeDeclRefExpr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  inline static std::optional<DependentScopeDeclRefExpr> from(const Reference &r) {
    return DependentScopeDeclRefExpr::from(r.as_statement());
  }

  inline static std::optional<DependentScopeDeclRefExpr> from(const TokenContext &t) {
    return DependentScopeDeclRefExpr::from(t.as_statement());
  }

  Token l_angle_token(void) const;
  Token r_angle_token(void) const;
  Token template_keyword_token(void) const;
  bool has_explicit_template_arguments(void) const;
  bool has_template_keyword(void) const;
};

static_assert(sizeof(DependentScopeDeclRefExpr) == sizeof(Expr));

#endif
} // namespace mx
