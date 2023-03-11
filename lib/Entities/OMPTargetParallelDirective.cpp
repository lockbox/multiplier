// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/Entities/OMPTargetParallelDirective.h>

#include <multiplier/Entities/Decl.h>
#include <multiplier/Entities/Expr.h>
#include <multiplier/Entities/OMPExecutableDirective.h>
#include <multiplier/Entities/Stmt.h>
#include <multiplier/Entities/Token.h>

#include "../API.h"
#include "../Stmt.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

gap::generator<OMPTargetParallelDirective> OMPTargetParallelDirective::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = OMPTargetParallelDirective::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool OMPTargetParallelDirective::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : OMPTargetParallelDirective::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

gap::generator<OMPTargetParallelDirective> OMPTargetParallelDirective::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = OMPTargetParallelDirective::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<OMPTargetParallelDirective> OMPTargetParallelDirective::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<OMPTargetParallelDirective> OMPTargetParallelDirective::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = OMPTargetParallelDirective::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<OMPTargetParallelDirective> OMPTargetParallelDirective::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool OMPTargetParallelDirective::contains(const Decl &decl) {
  for (auto &parent : OMPTargetParallelDirective::containing(decl)) {
    if (parent == *this) { return true; }
  }
  return false;
}

bool OMPTargetParallelDirective::contains(const Stmt &stmt) {
  for (auto &parent : OMPTargetParallelDirective::containing(stmt)) {
    if (parent == *this) { return true; }
  }
  return false;
}

std::optional<OMPTargetParallelDirective> OMPTargetParallelDirective::by_id(const Index &index, EntityId eid) {
  VariantId vid = eid.Unpack();
  if (std::holds_alternative<StmtId>(vid)) {
    return OMPTargetParallelDirective::from(index.statement(eid.Pack()));
  } else if (std::holds_alternative<InvalidId>(vid)) {
    assert(eid.Pack() == kInvalidEntityId);
  }
  return std::nullopt;
}

static const StmtKind kOMPTargetParallelDirectiveDerivedKinds[] = {
    OMPTargetParallelDirective::static_kind(),
};

std::optional<OMPTargetParallelDirective> OMPTargetParallelDirective::from(const Stmt &parent) {
  switch (parent.kind()) {
    case OMPTargetParallelDirective::static_kind():
      return reinterpret_cast<const OMPTargetParallelDirective &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<OMPTargetParallelDirective> OMPTargetParallelDirective::in(const Index &index) {
  const EntityProvider::Ptr ep = entity_provider_of(index);
  for (StmtKind k : kOMPTargetParallelDirectiveDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k)) {
      if (std::optional<OMPTargetParallelDirective> e = OMPTargetParallelDirective::from(Stmt(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<OMPTargetParallelDirective> OMPTargetParallelDirective::in(const Fragment &frag) {
  const EntityProvider::Ptr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (StmtKind k : kOMPTargetParallelDirectiveDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
      if (std::optional<OMPTargetParallelDirective> e = OMPTargetParallelDirective::from(Stmt(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<OMPTargetParallelDirective> OMPTargetParallelDirective::in(const File &file) {
  const EntityProvider::Ptr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (StmtKind k : kOMPTargetParallelDirectiveDerivedKinds) {
      for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
        if (std::optional<OMPTargetParallelDirective> e = OMPTargetParallelDirective::from(Stmt(std::move(eptr)))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<OMPTargetParallelDirective> OMPTargetParallelDirective::from(const Reference &r) {
  return OMPTargetParallelDirective::from(r.as_statement());
}

std::optional<OMPTargetParallelDirective> OMPTargetParallelDirective::from(const TokenContext &t) {
  return OMPTargetParallelDirective::from(t.as_statement());
}

Expr OMPTargetParallelDirective::task_reduction_reference_expression(void) const {
  RawEntityId eid = impl->reader.getVal14();
  return Expr::from(Stmt(impl->ep->StmtFor(impl->ep, eid))).value();
}

bool OMPTargetParallelDirective::has_cancel(void) const {
  return impl->reader.getVal23();
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx