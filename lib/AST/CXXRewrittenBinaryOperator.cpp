// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/CXXRewrittenBinaryOperator.h>

#include <multiplier/AST/Decl.h>
#include <multiplier/AST/Expr.h>
#include <multiplier/AST/Stmt.h>
#include <multiplier/AST/Token.h>
#include <multiplier/AST/ValueStmt.h>

#include "../EntityProvider.h"
#include "../Stmt.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

gap::generator<CXXRewrittenBinaryOperator> CXXRewrittenBinaryOperator::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = CXXRewrittenBinaryOperator::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool CXXRewrittenBinaryOperator::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : CXXRewrittenBinaryOperator::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

gap::generator<CXXRewrittenBinaryOperator> CXXRewrittenBinaryOperator::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = CXXRewrittenBinaryOperator::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<CXXRewrittenBinaryOperator> CXXRewrittenBinaryOperator::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<CXXRewrittenBinaryOperator> CXXRewrittenBinaryOperator::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = CXXRewrittenBinaryOperator::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<CXXRewrittenBinaryOperator> CXXRewrittenBinaryOperator::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool CXXRewrittenBinaryOperator::contains(const Decl &decl) {
  for (auto &parent : CXXRewrittenBinaryOperator::containing(decl)) {
    if (*this == parent) { return true; }
  }
  return false;
}

bool CXXRewrittenBinaryOperator::contains(const Stmt &stmt) {
  for (auto &parent : CXXRewrittenBinaryOperator::containing(stmt)) {
    if (*this == parent) { return true; }
  }
  return false;
}

std::optional<CXXRewrittenBinaryOperator> CXXRewrittenBinaryOperator::by_id(const Index &index, EntityId eid) {
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

std::optional<CXXRewrittenBinaryOperator> CXXRewrittenBinaryOperator::from(const std::optional<Stmt> &parent) {
  if (parent) {
    return from_base(parent.value());
  }
  return std::nullopt;
}

namespace {
static const StmtKind kCXXRewrittenBinaryOperatorDerivedKinds[] = {
    CXXRewrittenBinaryOperator::static_kind(),
};

}  // namespace

std::optional<CXXRewrittenBinaryOperator> CXXRewrittenBinaryOperator::from_base(const Stmt &parent) {
  switch (parent.kind()) {
    case CXXRewrittenBinaryOperator::static_kind():
      return reinterpret_cast<const CXXRewrittenBinaryOperator &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<CXXRewrittenBinaryOperator> CXXRewrittenBinaryOperator::in(const Index &index) {
  const EntityProviderPtr ep = entity_provider_of(index);
  for (StmtKind k : kCXXRewrittenBinaryOperatorDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k)) {
      if (std::optional<CXXRewrittenBinaryOperator> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<CXXRewrittenBinaryOperator> CXXRewrittenBinaryOperator::in(const Fragment &frag) {
  const EntityProviderPtr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (StmtKind k : kCXXRewrittenBinaryOperatorDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
      if (std::optional<CXXRewrittenBinaryOperator> e = from_base(std::move(eptr))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<CXXRewrittenBinaryOperator> CXXRewrittenBinaryOperator::in(const File &file) {
  const EntityProviderPtr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (StmtKind k : kCXXRewrittenBinaryOperatorDerivedKinds) {
      for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
        if (std::optional<CXXRewrittenBinaryOperator> e = from_base(std::move(eptr))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<CXXRewrittenBinaryOperator> CXXRewrittenBinaryOperator::from(const Reference &r) {
  return CXXRewrittenBinaryOperator::from(r.as_statement());
}

std::optional<CXXRewrittenBinaryOperator> CXXRewrittenBinaryOperator::from(const VariantEntity &e) {
  if (!std::holds_alternative<Stmt>(e)) {
    return std::nullopt;
  }
  return from_base(std::get<Stmt>(e));
}

std::optional<CXXRewrittenBinaryOperator> CXXRewrittenBinaryOperator::from(const TokenContext &t) {
  if (auto base = t.as_statement()) {
    return from_base(base.value());
  }
  return std::nullopt;
}

Expr CXXRewrittenBinaryOperator::lhs(void) const {
  RawEntityId eid = impl->reader.getVal37();
  return Expr::from_base(impl->ep->StmtFor(impl->ep, eid)).value();
}

BinaryOperatorKind CXXRewrittenBinaryOperator::opcode(void) const {
  return static_cast<BinaryOperatorKind>(impl->reader.getVal95());
}

std::string_view CXXRewrittenBinaryOperator::opcode_string(void) const {
  capnp::Text::Reader data = impl->reader.getVal60();
  return std::string_view(data.cStr(), data.size());
}

BinaryOperatorKind CXXRewrittenBinaryOperator::operator_(void) const {
  return static_cast<BinaryOperatorKind>(impl->reader.getVal97());
}

Token CXXRewrittenBinaryOperator::operator_token(void) const {
  return impl->ep->TokenFor(impl->ep, impl->reader.getVal38());
}

Expr CXXRewrittenBinaryOperator::rhs(void) const {
  RawEntityId eid = impl->reader.getVal39();
  return Expr::from_base(impl->ep->StmtFor(impl->ep, eid)).value();
}

Expr CXXRewrittenBinaryOperator::semantic_form(void) const {
  RawEntityId eid = impl->reader.getVal40();
  return Expr::from_base(impl->ep->StmtFor(impl->ep, eid)).value();
}

bool CXXRewrittenBinaryOperator::is_assignment_operation(void) const {
  return impl->reader.getVal89();
}

bool CXXRewrittenBinaryOperator::is_comparison_operation(void) const {
  return impl->reader.getVal90();
}

bool CXXRewrittenBinaryOperator::is_reversed(void) const {
  return impl->reader.getVal91();
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx