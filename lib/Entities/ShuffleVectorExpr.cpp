// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/Entities/ShuffleVectorExpr.h>

#include <multiplier/Entities/Decl.h>
#include <multiplier/Entities/Expr.h>
#include <multiplier/Entities/Stmt.h>
#include <multiplier/Entities/Token.h>
#include <multiplier/Entities/ValueStmt.h>

#include "../API.h"
#include "../Stmt.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

gap::generator<ShuffleVectorExpr> ShuffleVectorExpr::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = ShuffleVectorExpr::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool ShuffleVectorExpr::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : ShuffleVectorExpr::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

gap::generator<ShuffleVectorExpr> ShuffleVectorExpr::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = ShuffleVectorExpr::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<ShuffleVectorExpr> ShuffleVectorExpr::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<ShuffleVectorExpr> ShuffleVectorExpr::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = ShuffleVectorExpr::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<ShuffleVectorExpr> ShuffleVectorExpr::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool ShuffleVectorExpr::contains(const Decl &decl) {
  for (auto &parent : ShuffleVectorExpr::containing(decl)) {
    if (parent == *this) { return true; }
  }
  return false;
}

bool ShuffleVectorExpr::contains(const Stmt &stmt) {
  for (auto &parent : ShuffleVectorExpr::containing(stmt)) {
    if (parent == *this) { return true; }
  }
  return false;
}

std::optional<ShuffleVectorExpr> ShuffleVectorExpr::by_id(const Index &index, EntityId eid) {
  VariantId vid = eid.Unpack();
  if (std::holds_alternative<StmtId>(vid)) {
    return ShuffleVectorExpr::from(index.statement(eid.Pack()));
  } else if (std::holds_alternative<InvalidId>(vid)) {
    assert(eid.Pack() == kInvalidEntityId);
  }
  return std::nullopt;
}

static const StmtKind kShuffleVectorExprDerivedKinds[] = {
    ShuffleVectorExpr::static_kind(),
};

std::optional<ShuffleVectorExpr> ShuffleVectorExpr::from(const Stmt &parent) {
  switch (parent.kind()) {
    case ShuffleVectorExpr::static_kind():
      return reinterpret_cast<const ShuffleVectorExpr &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<ShuffleVectorExpr> ShuffleVectorExpr::in(const Index &index) {
  const EntityProvider::Ptr ep = entity_provider_of(index);
  for (StmtKind k : kShuffleVectorExprDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k)) {
      if (std::optional<ShuffleVectorExpr> e = ShuffleVectorExpr::from(Stmt(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<ShuffleVectorExpr> ShuffleVectorExpr::in(const Fragment &frag) {
  const EntityProvider::Ptr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (StmtKind k : kShuffleVectorExprDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
      if (std::optional<ShuffleVectorExpr> e = ShuffleVectorExpr::from(Stmt(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<ShuffleVectorExpr> ShuffleVectorExpr::in(const File &file) {
  const EntityProvider::Ptr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (StmtKind k : kShuffleVectorExprDerivedKinds) {
      for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
        if (std::optional<ShuffleVectorExpr> e = ShuffleVectorExpr::from(Stmt(std::move(eptr)))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<ShuffleVectorExpr> ShuffleVectorExpr::from(const Reference &r) {
  return ShuffleVectorExpr::from(r.as_statement());
}

std::optional<ShuffleVectorExpr> ShuffleVectorExpr::from(const TokenContext &t) {
  return ShuffleVectorExpr::from(t.as_statement());
}

Token ShuffleVectorExpr::builtin_token(void) const {
  return impl->ep->TokenFor(impl->ep, impl->reader.getVal38());
}

Token ShuffleVectorExpr::r_paren_token(void) const {
  return impl->ep->TokenFor(impl->ep, impl->reader.getVal39());
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx