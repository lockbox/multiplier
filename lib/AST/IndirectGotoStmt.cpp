// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/IndirectGotoStmt.h>

#include <multiplier/AST/Decl.h>
#include <multiplier/AST/Expr.h>
#include <multiplier/AST/LabelDecl.h>
#include <multiplier/AST/Stmt.h>
#include <multiplier/AST/Token.h>

#include "../EntityProvider.h"
#include "../Stmt.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

gap::generator<IndirectGotoStmt> IndirectGotoStmt::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = IndirectGotoStmt::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool IndirectGotoStmt::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : IndirectGotoStmt::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

gap::generator<IndirectGotoStmt> IndirectGotoStmt::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = IndirectGotoStmt::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<IndirectGotoStmt> IndirectGotoStmt::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<IndirectGotoStmt> IndirectGotoStmt::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = IndirectGotoStmt::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<IndirectGotoStmt> IndirectGotoStmt::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool IndirectGotoStmt::contains(const Decl &decl) {
  for (auto &parent : IndirectGotoStmt::containing(decl)) {
    if (*this == parent) { return true; }
  }
  return false;
}

bool IndirectGotoStmt::contains(const Stmt &stmt) {
  for (auto &parent : IndirectGotoStmt::containing(stmt)) {
    if (*this == parent) { return true; }
  }
  return false;
}

std::optional<IndirectGotoStmt> IndirectGotoStmt::by_id(const Index &index, EntityId eid) {
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

std::optional<IndirectGotoStmt> IndirectGotoStmt::from(const std::optional<Stmt> &parent) {
  if (parent) {
    return from_base(parent.value());
  }
  return std::nullopt;
}

namespace {
static const StmtKind kIndirectGotoStmtDerivedKinds[] = {
    IndirectGotoStmt::static_kind(),
};

}  // namespace

std::optional<IndirectGotoStmt> IndirectGotoStmt::from_base(const Stmt &parent) {
  switch (parent.kind()) {
    case IndirectGotoStmt::static_kind():
      return reinterpret_cast<const IndirectGotoStmt &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<IndirectGotoStmt> IndirectGotoStmt::in(const Index &index) {
  const EntityProviderPtr ep = entity_provider_of(index);
  for (StmtKind k : kIndirectGotoStmtDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k)) {
      if (std::optional<IndirectGotoStmt> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<IndirectGotoStmt> IndirectGotoStmt::in(const Fragment &frag) {
  const EntityProviderPtr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (StmtKind k : kIndirectGotoStmtDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
      if (std::optional<IndirectGotoStmt> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<IndirectGotoStmt> IndirectGotoStmt::in(const File &file) {
  const EntityProviderPtr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (StmtKind k : kIndirectGotoStmtDerivedKinds) {
      for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
        if (std::optional<IndirectGotoStmt> e = from_base(std::move(eptr))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<IndirectGotoStmt> IndirectGotoStmt::from(const Reference &r) {
  return IndirectGotoStmt::from(r.as_statement());
}

std::optional<IndirectGotoStmt> IndirectGotoStmt::from(const VariantEntity &e) {
  if (!std::holds_alternative<Stmt>(e)) {
    return std::nullopt;
  }
  return from_base(std::get<Stmt>(e));
}

std::optional<IndirectGotoStmt> IndirectGotoStmt::from(const TokenContext &t) {
  if (auto base = t.as_statement()) {
    return from_base(base.value());
  }
  return std::nullopt;
}

std::optional<LabelDecl> IndirectGotoStmt::constant_target(void) const {
  if (true) {
    RawEntityId eid = impl->reader.getVal9();
    if (eid == kInvalidEntityId) {
      return std::nullopt;
    }
    if (auto eptr = impl->ep->DeclFor(impl->ep, eid)) {
      return LabelDecl::from_base(std::move(eptr));
    }
  }
  return std::nullopt;
}

Token IndirectGotoStmt::goto_token(void) const {
  return impl->ep->TokenFor(impl->ep, impl->reader.getVal10());
}

Token IndirectGotoStmt::star_token(void) const {
  return impl->ep->TokenFor(impl->ep, impl->reader.getVal11());
}

Expr IndirectGotoStmt::target(void) const {
  RawEntityId eid = impl->reader.getVal13();
  return Expr::from_base(impl->ep->StmtFor(impl->ep, eid)).value();
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx