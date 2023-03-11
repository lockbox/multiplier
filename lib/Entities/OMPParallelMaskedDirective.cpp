// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/Entities/OMPParallelMaskedDirective.h>

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

gap::generator<OMPParallelMaskedDirective> OMPParallelMaskedDirective::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = OMPParallelMaskedDirective::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool OMPParallelMaskedDirective::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : OMPParallelMaskedDirective::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

gap::generator<OMPParallelMaskedDirective> OMPParallelMaskedDirective::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = OMPParallelMaskedDirective::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<OMPParallelMaskedDirective> OMPParallelMaskedDirective::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<OMPParallelMaskedDirective> OMPParallelMaskedDirective::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = OMPParallelMaskedDirective::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<OMPParallelMaskedDirective> OMPParallelMaskedDirective::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool OMPParallelMaskedDirective::contains(const Decl &decl) {
  for (auto &parent : OMPParallelMaskedDirective::containing(decl)) {
    if (parent == *this) { return true; }
  }
  return false;
}

bool OMPParallelMaskedDirective::contains(const Stmt &stmt) {
  for (auto &parent : OMPParallelMaskedDirective::containing(stmt)) {
    if (parent == *this) { return true; }
  }
  return false;
}

std::optional<OMPParallelMaskedDirective> OMPParallelMaskedDirective::by_id(const Index &index, EntityId eid) {
  VariantId vid = eid.Unpack();
  if (std::holds_alternative<StmtId>(vid)) {
    return OMPParallelMaskedDirective::from(index.statement(eid.Pack()));
  } else if (std::holds_alternative<InvalidId>(vid)) {
    assert(eid.Pack() == kInvalidEntityId);
  }
  return std::nullopt;
}

static const StmtKind kOMPParallelMaskedDirectiveDerivedKinds[] = {
    OMPParallelMaskedDirective::static_kind(),
};

std::optional<OMPParallelMaskedDirective> OMPParallelMaskedDirective::from(const Stmt &parent) {
  switch (parent.kind()) {
    case OMPParallelMaskedDirective::static_kind():
      return reinterpret_cast<const OMPParallelMaskedDirective &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<OMPParallelMaskedDirective> OMPParallelMaskedDirective::in(const Index &index) {
  const EntityProvider::Ptr ep = entity_provider_of(index);
  for (StmtKind k : kOMPParallelMaskedDirectiveDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k)) {
      if (std::optional<OMPParallelMaskedDirective> e = OMPParallelMaskedDirective::from(Stmt(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<OMPParallelMaskedDirective> OMPParallelMaskedDirective::in(const Fragment &frag) {
  const EntityProvider::Ptr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (StmtKind k : kOMPParallelMaskedDirectiveDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
      if (std::optional<OMPParallelMaskedDirective> e = OMPParallelMaskedDirective::from(Stmt(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<OMPParallelMaskedDirective> OMPParallelMaskedDirective::in(const File &file) {
  const EntityProvider::Ptr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (StmtKind k : kOMPParallelMaskedDirectiveDerivedKinds) {
      for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
        if (std::optional<OMPParallelMaskedDirective> e = OMPParallelMaskedDirective::from(Stmt(std::move(eptr)))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<OMPParallelMaskedDirective> OMPParallelMaskedDirective::from(const Reference &r) {
  return OMPParallelMaskedDirective::from(r.as_statement());
}

std::optional<OMPParallelMaskedDirective> OMPParallelMaskedDirective::from(const TokenContext &t) {
  return OMPParallelMaskedDirective::from(t.as_statement());
}

Expr OMPParallelMaskedDirective::task_reduction_reference_expression(void) const {
  RawEntityId eid = impl->reader.getVal14();
  return Expr::from(Stmt(impl->ep->StmtFor(impl->ep, eid))).value();
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx