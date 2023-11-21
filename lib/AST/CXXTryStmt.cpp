// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/CXXTryStmt.h>

#include <multiplier/AST/CXXCatchStmt.h>
#include <multiplier/AST/CompoundStmt.h>
#include <multiplier/AST/Decl.h>
#include <multiplier/AST/Stmt.h>
#include <multiplier/AST/Token.h>

#include "../EntityProvider.h"
#include "../Stmt.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

gap::generator<CXXTryStmt> CXXTryStmt::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = CXXTryStmt::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool CXXTryStmt::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : CXXTryStmt::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

gap::generator<CXXTryStmt> CXXTryStmt::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = CXXTryStmt::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<CXXTryStmt> CXXTryStmt::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<CXXTryStmt> CXXTryStmt::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = CXXTryStmt::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<CXXTryStmt> CXXTryStmt::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool CXXTryStmt::contains(const Decl &decl) {
  for (auto &parent : CXXTryStmt::containing(decl)) {
    if (*this == parent) { return true; }
  }
  return false;
}

bool CXXTryStmt::contains(const Stmt &stmt) {
  for (auto &parent : CXXTryStmt::containing(stmt)) {
    if (*this == parent) { return true; }
  }
  return false;
}

std::optional<CXXTryStmt> CXXTryStmt::by_id(const Index &index, EntityId eid) {
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

std::optional<CXXTryStmt> CXXTryStmt::from(const std::optional<Stmt> &parent) {
  if (parent) {
    return from_base(parent.value());
  }
  return std::nullopt;
}

namespace {
static const StmtKind kCXXTryStmtDerivedKinds[] = {
    CXXTryStmt::static_kind(),
};

}  // namespace

std::optional<CXXTryStmt> CXXTryStmt::from_base(const Stmt &parent) {
  switch (parent.kind()) {
    case CXXTryStmt::static_kind():
      return reinterpret_cast<const CXXTryStmt &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<CXXTryStmt> CXXTryStmt::in(const Index &index) {
  const EntityProviderPtr ep = entity_provider_of(index);
  for (StmtKind k : kCXXTryStmtDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k)) {
      if (std::optional<CXXTryStmt> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<CXXTryStmt> CXXTryStmt::in(const Fragment &frag) {
  const EntityProviderPtr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (StmtKind k : kCXXTryStmtDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
      if (std::optional<CXXTryStmt> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<CXXTryStmt> CXXTryStmt::in(const File &file) {
  const EntityProviderPtr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (StmtKind k : kCXXTryStmtDerivedKinds) {
      for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
        if (std::optional<CXXTryStmt> e = from_base(std::move(eptr))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<CXXTryStmt> CXXTryStmt::from(const Reference &r) {
  return CXXTryStmt::from(r.as_statement());
}

std::optional<CXXTryStmt> CXXTryStmt::from(const VariantEntity &e) {
  if (!std::holds_alternative<Stmt>(e)) {
    return std::nullopt;
  }
  return from_base(std::get<Stmt>(e));
}

std::optional<CXXTryStmt> CXXTryStmt::from(const TokenContext &t) {
  if (auto base = t.as_statement()) {
    return from_base(base.value());
  }
  return std::nullopt;
}

CompoundStmt CXXTryStmt::try_block(void) const {
  RawEntityId eid = impl->reader.getVal9();
  return CompoundStmt::from_base(impl->ep->StmtFor(impl->ep, eid)).value();
}

Token CXXTryStmt::try_token(void) const {
  return impl->ep->TokenFor(impl->ep, impl->reader.getVal10());
}

unsigned CXXTryStmt::num_handlers(void) const {
  return impl->reader.getVal15().size();
}

std::optional<CXXCatchStmt> CXXTryStmt::nth_handler(unsigned n) const {
  auto list = impl->reader.getVal15();
  if (n >= list.size()) {
    return std::nullopt;
  }
  const EntityProviderPtr &ep = impl->ep;
  auto v = list[n];
  auto e = ep->StmtFor(ep, v);
  if (!e) {
    return std::nullopt;
  }
  return CXXCatchStmt::from_base(std::move(e));
}

gap::generator<CXXCatchStmt> CXXTryStmt::handlers(void) const & {
  auto list = impl->reader.getVal15();
  EntityProviderPtr ep = impl->ep;
  for (auto v : list) {
    EntityId id(v);
    if (auto d15 = ep->StmtFor(ep, v)) {
      if (auto e = CXXCatchStmt::from_base(std::move(d15))) {
        co_yield std::move(*e);
      }
    }
  }
  co_return;
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx