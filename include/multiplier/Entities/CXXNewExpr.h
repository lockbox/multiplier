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
#include <vector>

#include "../Iterator.h"
#include "../Types.h"
#include "../Token.h"
#include "../Use.h"

#include "CXXNewExprInitializationStyle.h"
#include "Expr.h"
#include "StmtKind.h"
#include "StmtUseSelector.h"

namespace mx {
class CXXConstructExpr;
class CXXNewExpr;
class Expr;
class FunctionDecl;
class Stmt;
class Type;
class ValueStmt;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
using CXXNewExprRange = DerivedEntityRange<StmtIterator, CXXNewExpr>;
using CXXNewExprContainingTokenRange = DerivedEntityRange<TokenContextIterator, CXXNewExpr>;
using CXXNewExprContainingStmtRange = DerivedEntityRange<ParentStmtIteratorImpl<Stmt>, CXXNewExpr>;

class CXXNewExpr : public Expr {
 private:
  friend class FragmentImpl;
  friend class Expr;
  friend class ValueStmt;
  friend class Stmt;
 public:
  inline static CXXNewExprRange in(const Fragment &frag) {
    return in_internal(frag);
  }

  inline static CXXNewExprContainingTokenRange containing(const Token &tok) {
    return TokenContextIterator(TokenContext::of(tok));
  }

  inline bool contains(const Token &tok) {
    for(auto &parent : CXXNewExpr::containing(tok)) {
      if(parent.id() == id()) { return true; }
    }
    return false;
  }

  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::CXX_NEW_EXPR;
  }

  static CXXNewExprContainingStmtRange containing(const Decl &decl);
  static CXXNewExprContainingStmtRange containing(const Stmt &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<CXXNewExpr> from(const TokenContext &c);
  static std::optional<CXXNewExpr> from(const Expr &parent);

  inline static std::optional<CXXNewExpr> from(const std::optional<Expr> &parent) {
    if (parent) {
      return CXXNewExpr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  static std::optional<CXXNewExpr> from(const ValueStmt &parent);

  inline static std::optional<CXXNewExpr> from(const std::optional<ValueStmt> &parent) {
    if (parent) {
      return CXXNewExpr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  static std::optional<CXXNewExpr> from(const Stmt &parent);

  inline static std::optional<CXXNewExpr> from(const std::optional<Stmt> &parent) {
    if (parent) {
      return CXXNewExpr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  bool does_usual_array_delete_want_size(void) const;
  Type allocated_type(void) const;
  std::optional<Expr> array_size(void) const;
  std::optional<CXXConstructExpr> construct_expression(void) const;
  TokenRange direct_initializer_range(void) const;
  CXXNewExprInitializationStyle initialization_style(void) const;
  std::optional<Expr> initializer(void) const;
  FunctionDecl operator_delete(void) const;
  FunctionDecl operator_new(void) const;
  TokenRange type_id_parentheses(void) const;
  bool has_initializer(void) const;
  bool is_array(void) const;
  bool is_global_new(void) const;
  bool is_parenthesis_type_id(void) const;
  bool pass_alignment(void) const;
  std::vector<Expr> placement_arguments(void) const;
  bool should_null_check_allocation(void) const;
};

static_assert(sizeof(CXXNewExpr) == sizeof(Expr));

#endif
} // namespace mx