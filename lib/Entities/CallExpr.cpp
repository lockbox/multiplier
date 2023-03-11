// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/Entities/CallExpr.h>

#include <multiplier/Entities/Attr.h>
#include <multiplier/Entities/CUDAKernelCallExpr.h>
#include <multiplier/Entities/CXXMemberCallExpr.h>
#include <multiplier/Entities/CXXOperatorCallExpr.h>
#include <multiplier/Entities/CastExpr.h>
#include <multiplier/Entities/Decl.h>
#include <multiplier/Entities/Expr.h>
#include <multiplier/Entities/FunctionDecl.h>
#include <multiplier/Entities/Stmt.h>
#include <multiplier/Entities/Token.h>
#include <multiplier/Entities/Type.h>
#include <multiplier/Entities/UserDefinedLiteral.h>
#include <multiplier/Entities/ValueStmt.h>

#include "../API.h"
#include "../Stmt.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

gap::generator<CallExpr> CallExpr::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = CallExpr::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool CallExpr::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : CallExpr::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

gap::generator<CallExpr> CallExpr::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = CallExpr::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<CallExpr> CallExpr::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<CallExpr> CallExpr::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = CallExpr::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<CallExpr> CallExpr::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool CallExpr::contains(const Decl &decl) {
  for (auto &parent : CallExpr::containing(decl)) {
    if (parent == *this) { return true; }
  }
  return false;
}

bool CallExpr::contains(const Stmt &stmt) {
  for (auto &parent : CallExpr::containing(stmt)) {
    if (parent == *this) { return true; }
  }
  return false;
}

std::optional<CallExpr> CallExpr::by_id(const Index &index, EntityId eid) {
  VariantId vid = eid.Unpack();
  if (std::holds_alternative<StmtId>(vid)) {
    return CallExpr::from(index.statement(eid.Pack()));
  } else if (std::holds_alternative<InvalidId>(vid)) {
    assert(eid.Pack() == kInvalidEntityId);
  }
  return std::nullopt;
}

static const StmtKind kCallExprDerivedKinds[] = {
    CallExpr::static_kind(),
    UserDefinedLiteral::static_kind(),
    CUDAKernelCallExpr::static_kind(),
    CXXMemberCallExpr::static_kind(),
    CXXOperatorCallExpr::static_kind(),
};

std::optional<CallExpr> CallExpr::from(const Stmt &parent) {
  switch (parent.kind()) {
    case CallExpr::static_kind():
    case UserDefinedLiteral::static_kind():
    case CUDAKernelCallExpr::static_kind():
    case CXXMemberCallExpr::static_kind():
    case CXXOperatorCallExpr::static_kind():
      return reinterpret_cast<const CallExpr &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<CallExpr> CallExpr::in(const Index &index) {
  const EntityProvider::Ptr ep = entity_provider_of(index);
  for (StmtKind k : kCallExprDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k)) {
      if (std::optional<CallExpr> e = CallExpr::from(Stmt(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<CallExpr> CallExpr::in(const Fragment &frag) {
  const EntityProvider::Ptr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (StmtKind k : kCallExprDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
      if (std::optional<CallExpr> e = CallExpr::from(Stmt(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<CallExpr> CallExpr::in(const File &file) {
  const EntityProvider::Ptr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (StmtKind k : kCallExprDerivedKinds) {
      for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
        if (std::optional<CallExpr> e = CallExpr::from(Stmt(std::move(eptr)))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<CallExpr> CallExpr::from(const Reference &r) {
  return CallExpr::from(r.as_statement());
}

std::optional<CallExpr> CallExpr::from(const TokenContext &t) {
  return CallExpr::from(t.as_statement());
}

unsigned CallExpr::num_arguments(void) const {
  return impl->reader.getVal15().size();
}

std::optional<Expr> CallExpr::nth_argument(unsigned n) const {
  auto list = impl->reader.getVal15();
  if (n >= list.size()) {
    return std::nullopt;
  }
  const EntityProvider::Ptr &ep = impl->ep;
  auto v = list[n];
  auto e = ep->StmtFor(ep, v);
  if (!e) {
    return std::nullopt;
  }
  return Expr::from(Stmt(std::move(e)));
}

gap::generator<Expr> CallExpr::arguments(void) const & {
  auto list = impl->reader.getVal15();
  EntityProvider::Ptr ep = impl->ep;
  for (auto v : list) {
    EntityId id(v);
    if (auto d15 = ep->StmtFor(ep, v)) {
      if (auto e = Expr::from(Stmt(std::move(d15)))) {
        co_yield std::move(*e);
      }
    }
  }
  co_return;
}

CallExprADLCallKind CallExpr::adl_call_kind(void) const {
  return static_cast<CallExprADLCallKind>(impl->reader.getVal93());
}

Type CallExpr::call_return_type(void) const {
  RawEntityId eid = impl->reader.getVal38();
  return Type(impl->ep->TypeFor(impl->ep, eid));
}

Expr CallExpr::callee(void) const {
  RawEntityId eid = impl->reader.getVal39();
  return Expr::from(Stmt(impl->ep->StmtFor(impl->ep, eid))).value();
}

std::optional<Decl> CallExpr::callee_declaration(void) const {
  if (true) {
    RawEntityId eid = impl->reader.getVal40();
    if (eid == kInvalidEntityId) {
      return std::nullopt;
    }
    if (auto eptr = impl->ep->DeclFor(impl->ep, eid)) {
      return Decl(std::move(eptr));
    }
  }
  return std::nullopt;
}

std::optional<FunctionDecl> CallExpr::direct_callee(void) const {
  if (true) {
    RawEntityId eid = impl->reader.getVal41();
    if (eid == kInvalidEntityId) {
      return std::nullopt;
    }
    if (auto eptr = impl->ep->DeclFor(impl->ep, eid)) {
      return FunctionDecl::from(Decl(std::move(eptr)));
    }
  }
  return std::nullopt;
}

Token CallExpr::r_paren_token(void) const {
  return impl->ep->TokenFor(impl->ep, impl->reader.getVal42());
}

std::optional<Attr> CallExpr::unused_result_attribute(void) const {
  if (true) {
    RawEntityId eid = impl->reader.getVal43();
    if (eid == kInvalidEntityId) {
      return std::nullopt;
    }
    if (auto eptr = impl->ep->AttrFor(impl->ep, eid)) {
      return Attr(std::move(eptr));
    }
  }
  return std::nullopt;
}

bool CallExpr::has_stored_fp_features(void) const {
  return impl->reader.getVal88();
}

bool CallExpr::has_unused_result_attribute(void) const {
  return impl->reader.getVal89();
}

bool CallExpr::is_builtin_assume_false(void) const {
  return impl->reader.getVal90();
}

bool CallExpr::is_call_to_std_move(void) const {
  return impl->reader.getVal91();
}

bool CallExpr::is_unevaluated_builtin_call(void) const {
  return impl->reader.getVal92();
}

bool CallExpr::uses_adl(void) const {
  return impl->reader.getVal94();
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx