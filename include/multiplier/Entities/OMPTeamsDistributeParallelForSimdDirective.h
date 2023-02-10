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

#include "OMPLoopDirective.h"
#include "StmtKind.h"

namespace mx {
class OMPExecutableDirective;
class OMPLoopBasedDirective;
class OMPLoopDirective;
class OMPTeamsDistributeParallelForSimdDirective;
class Stmt;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class OMPTeamsDistributeParallelForSimdDirective : public OMPLoopDirective {
 private:
  friend class FragmentImpl;
  friend class OMPLoopDirective;
  friend class OMPLoopBasedDirective;
  friend class OMPExecutableDirective;
  friend class Stmt;
 public:
  static gap::generator<OMPTeamsDistributeParallelForSimdDirective> in(const Fragment &frag);
  static gap::generator<OMPTeamsDistributeParallelForSimdDirective> in(const File &file);
  static gap::generator<OMPTeamsDistributeParallelForSimdDirective> in(const Index &index);
  static gap::generator<OMPTeamsDistributeParallelForSimdDirective> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<OMPTeamsDistributeParallelForSimdDirective> by_id(const Index &, EntityId);

  inline static constexpr StmtKind static_kind(void) {
    return StmtKind::OMP_TEAMS_DISTRIBUTE_PARALLEL_FOR_SIMD_DIRECTIVE;
  }

  static gap::generator<OMPTeamsDistributeParallelForSimdDirective> containing(const Decl &decl);
  static gap::generator<OMPTeamsDistributeParallelForSimdDirective> containing(const std::optional<Decl> &decl);

  static gap::generator<OMPTeamsDistributeParallelForSimdDirective> containing(const Stmt &stmt);
  static gap::generator<OMPTeamsDistributeParallelForSimdDirective> containing(const std::optional<Stmt> &stmt);

  bool contains(const Decl &decl);
  bool contains(const Stmt &stmt);

  static std::optional<OMPTeamsDistributeParallelForSimdDirective> from(const Stmt &parent);

  inline static std::optional<OMPTeamsDistributeParallelForSimdDirective> from(const std::optional<Stmt> &parent) {
    if (parent) {
      return OMPTeamsDistributeParallelForSimdDirective::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  inline static std::optional<OMPTeamsDistributeParallelForSimdDirective> from(const Reference &r) {
    return OMPTeamsDistributeParallelForSimdDirective::from(r.as_statement());
  }

  inline static std::optional<OMPTeamsDistributeParallelForSimdDirective> from(const TokenContext &t) {
    return OMPTeamsDistributeParallelForSimdDirective::from(t.as_statement());
  }

};

static_assert(sizeof(OMPTeamsDistributeParallelForSimdDirective) == sizeof(OMPLoopDirective));

#endif
} // namespace mx
