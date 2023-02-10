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

#include "OMPExecutableDirective.h"
#include "StmtKind.h"

namespace mx {
class Expr;
class OMPExecutableDirective;
class OMPParallelMasterDirective;
class Stmt;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class OMPParallelMasterDirective : public OMPExecutableDirective {
 private:
  friend class FragmentImpl;
  friend class OMPExecutableDirective;
  friend class Stmt;
 public:
  static gap::generator<OMPParallelMasterDirective> in(const Fragment &frag);
  static gap::generator<OMPParallelMasterDirective> in(const File &file);
  static gap::generator<OMPParallelMasterDirective> in(const Index &index);
  static gap::generator<OMPParallelMasterDirective> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<OMPParallelMasterDirective> by_id(const Index &, EntityId);

  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::OMP_PARALLEL_MASTER_DIRECTIVE;
  }

  static gap::generator<OMPParallelMasterDirective> containing(const Decl &decl);
  static gap::generator<OMPParallelMasterDirective> containing(const std::optional<Decl> &decl);

  static gap::generator<OMPParallelMasterDirective> containing(const Stmt &stmt);
  static gap::generator<OMPParallelMasterDirective> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<OMPParallelMasterDirective> from(const Stmt &parent);

  inline static std::optional<OMPParallelMasterDirective> from(const std::optional<Stmt> &parent) {
    if (parent) {
      return OMPParallelMasterDirective::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  inline static std::optional<OMPParallelMasterDirective> from(const Reference &r) {
    return OMPParallelMasterDirective::from(r.as_statement());
  }

  inline static std::optional<OMPParallelMasterDirective> from(const TokenContext &t) {
    return OMPParallelMasterDirective::from(t.as_statement());
  }

  Expr task_reduction_reference_expression(void) const;
};

static_assert(sizeof(OMPParallelMasterDirective) == sizeof(OMPExecutableDirective));

#endif
} // namespace mx
