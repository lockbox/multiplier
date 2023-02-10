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
class NullStmt;
class Stmt;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class NullStmt : public Stmt {
 private:
  friend class FragmentImpl;
  friend class Stmt;
 public:
  static gap::generator<NullStmt> in(const Fragment &frag);
  static gap::generator<NullStmt> in(const File &file);
  static gap::generator<NullStmt> in(const Index &index);
  static gap::generator<NullStmt> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<NullStmt> by_id(const Index &, EntityId);

  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::NULL_STMT;
  }

  static gap::generator<NullStmt> containing(const Decl &decl);
  static gap::generator<NullStmt> containing(const std::optional<Decl> &decl);

  static gap::generator<NullStmt> containing(const Stmt &stmt);
  static gap::generator<NullStmt> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<NullStmt> from(const Stmt &parent);

  inline static std::optional<NullStmt> from(const std::optional<Stmt> &parent) {
    if (parent) {
      return NullStmt::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  inline static std::optional<NullStmt> from(const Reference &r) {
    return NullStmt::from(r.as_statement());
  }

  inline static std::optional<NullStmt> from(const TokenContext &t) {
    return NullStmt::from(t.as_statement());
  }

  Token semi_token(void) const;
  bool has_leading_empty_macro(void) const;
};

static_assert(sizeof(NullStmt) == sizeof(Stmt));

#endif
} // namespace mx
