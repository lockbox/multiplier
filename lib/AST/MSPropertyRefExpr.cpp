// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/MSPropertyRefExpr.h>

#include <multiplier/AST/Decl.h>
#include <multiplier/AST/Expr.h>
#include <multiplier/AST/MSPropertyDecl.h>
#include <multiplier/AST/Stmt.h>
#include <multiplier/AST/Token.h>
#include <multiplier/AST/ValueStmt.h>

#include "../EntityProvider.h"
#include "../Stmt.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

gap::generator<MSPropertyRefExpr> MSPropertyRefExpr::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = MSPropertyRefExpr::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool MSPropertyRefExpr::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : MSPropertyRefExpr::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

gap::generator<MSPropertyRefExpr> MSPropertyRefExpr::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = MSPropertyRefExpr::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<MSPropertyRefExpr> MSPropertyRefExpr::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<MSPropertyRefExpr> MSPropertyRefExpr::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = MSPropertyRefExpr::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<MSPropertyRefExpr> MSPropertyRefExpr::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool MSPropertyRefExpr::contains(const Decl &decl) {
  for (auto &parent : MSPropertyRefExpr::containing(decl)) {
    if (*this == parent) { return true; }
  }
  return false;
}

bool MSPropertyRefExpr::contains(const Stmt &stmt) {
  for (auto &parent : MSPropertyRefExpr::containing(stmt)) {
    if (*this == parent) { return true; }
  }
  return false;
}

std::optional<MSPropertyRefExpr> MSPropertyRefExpr::by_id(const Index &index, EntityId eid) {
  VariantId vid = eid.Unpack();
  if (std::holds_alternative<StmtId>(vid)) {
    if (auto base = index.statement(eid.Pack())) {
      return from_base(base.value());
    }
  } else if (std::holds_alternative<InvalidId>(vid)) {
    assert(eid.Pack() == kInvalidEntityId);
  }
  return std::nullopt;
}

std::optional<MSPropertyRefExpr> MSPropertyRefExpr::from(const std::optional<Stmt> &parent) {
  if (parent) {
    return from_base(parent.value());
  }
  return std::nullopt;
}

namespace {
static const StmtKind kMSPropertyRefExprDerivedKinds[] = {
    MSPropertyRefExpr::static_kind(),
};

}  // namespace

std::optional<MSPropertyRefExpr> MSPropertyRefExpr::from_base(const Stmt &parent) {
  switch (parent.kind()) {
    case MSPropertyRefExpr::static_kind():
      return reinterpret_cast<const MSPropertyRefExpr &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<MSPropertyRefExpr> MSPropertyRefExpr::in(const Index &index) {
  const EntityProviderPtr ep = entity_provider_of(index);
  for (StmtKind k : kMSPropertyRefExprDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k)) {
      if (std::optional<MSPropertyRefExpr> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<MSPropertyRefExpr> MSPropertyRefExpr::in(const Fragment &frag) {
  const EntityProviderPtr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (StmtKind k : kMSPropertyRefExprDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
      if (std::optional<MSPropertyRefExpr> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<MSPropertyRefExpr> MSPropertyRefExpr::in(const File &file) {
  const EntityProviderPtr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (StmtKind k : kMSPropertyRefExprDerivedKinds) {
      for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
        if (std::optional<MSPropertyRefExpr> e = from_base(std::move(eptr))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<MSPropertyRefExpr> MSPropertyRefExpr::from(const Reference &r) {
  return MSPropertyRefExpr::from(r.as_statement());
}

std::optional<MSPropertyRefExpr> MSPropertyRefExpr::from(const VariantEntity &e) {
  if (!std::holds_alternative<Stmt>(e)) {
    return std::nullopt;
  }
  return from_base(std::get<Stmt>(e));
}

std::optional<MSPropertyRefExpr> MSPropertyRefExpr::from(const TokenContext &t) {
  if (auto base = t.as_statement()) {
    return from_base(base.value());
  }
  return std::nullopt;
}

Expr MSPropertyRefExpr::base_expression(void) const {
  RawEntityId eid = impl->reader.getVal37();
  return Expr::from_base(impl->ep->StmtFor(impl->ep, eid)).value();
}

Token MSPropertyRefExpr::member_token(void) const {
  return impl->ep->TokenFor(impl->ep, impl->reader.getVal38());
}

MSPropertyDecl MSPropertyRefExpr::property_declaration(void) const {
  RawEntityId eid = impl->reader.getVal39();
  return MSPropertyDecl::from_base(impl->ep->DeclFor(impl->ep, eid)).value();
}

bool MSPropertyRefExpr::is_arrow(void) const {
  return impl->reader.getVal89();
}

bool MSPropertyRefExpr::is_implicit_access(void) const {
  return impl->reader.getVal90();
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx