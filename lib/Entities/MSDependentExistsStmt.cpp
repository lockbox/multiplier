// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/Entities/MSDependentExistsStmt.h>

#include <multiplier/Entities/CompoundStmt.h>
#include <multiplier/Entities/Decl.h>
#include <multiplier/Entities/Stmt.h>
#include <multiplier/Entities/Token.h>

#include "../API.h"
#include "../Stmt.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

gap::generator<MSDependentExistsStmt> MSDependentExistsStmt::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = MSDependentExistsStmt::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool MSDependentExistsStmt::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : MSDependentExistsStmt::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

gap::generator<MSDependentExistsStmt> MSDependentExistsStmt::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = MSDependentExistsStmt::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<MSDependentExistsStmt> MSDependentExistsStmt::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<MSDependentExistsStmt> MSDependentExistsStmt::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_statement(); ancestor.has_value();
       ancestor = ancestor->parent_statement()) {
    if (auto d = MSDependentExistsStmt::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<MSDependentExistsStmt> MSDependentExistsStmt::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool MSDependentExistsStmt::contains(const Decl &decl) {
  for (auto &parent : MSDependentExistsStmt::containing(decl)) {
    if (parent == *this) { return true; }
  }
  return false;
}

bool MSDependentExistsStmt::contains(const Stmt &stmt) {
  for (auto &parent : MSDependentExistsStmt::containing(stmt)) {
    if (parent == *this) { return true; }
  }
  return false;
}

std::optional<MSDependentExistsStmt> MSDependentExistsStmt::by_id(const Index &index, EntityId eid) {
  VariantId vid = eid.Unpack();
  if (std::holds_alternative<StmtId>(vid)) {
    return MSDependentExistsStmt::from(index.statement(eid.Pack()));
  } else if (std::holds_alternative<InvalidId>(vid)) {
    assert(eid.Pack() == kInvalidEntityId);
  }
  return std::nullopt;
}

static const StmtKind kMSDependentExistsStmtDerivedKinds[] = {
    MSDependentExistsStmt::static_kind(),
};

std::optional<MSDependentExistsStmt> MSDependentExistsStmt::from(const Stmt &parent) {
  switch (parent.kind()) {
    case MSDependentExistsStmt::static_kind():
      return reinterpret_cast<const MSDependentExistsStmt &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<MSDependentExistsStmt> MSDependentExistsStmt::in(const Index &index) {
  const EntityProvider::Ptr ep = entity_provider_of(index);
  for (StmtKind k : kMSDependentExistsStmtDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k)) {
      if (std::optional<MSDependentExistsStmt> e = MSDependentExistsStmt::from(Stmt(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<MSDependentExistsStmt> MSDependentExistsStmt::in(const Fragment &frag) {
  const EntityProvider::Ptr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (StmtKind k : kMSDependentExistsStmtDerivedKinds) {
    for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
      if (std::optional<MSDependentExistsStmt> e = MSDependentExistsStmt::from(Stmt(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<MSDependentExistsStmt> MSDependentExistsStmt::in(const File &file) {
  const EntityProvider::Ptr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (StmtKind k : kMSDependentExistsStmtDerivedKinds) {
      for (StmtImplPtr eptr : ep->StmtsFor(ep, k, frag_id)) {
        if (std::optional<MSDependentExistsStmt> e = MSDependentExistsStmt::from(Stmt(std::move(eptr)))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<MSDependentExistsStmt> MSDependentExistsStmt::from(const Reference &r) {
  return MSDependentExistsStmt::from(r.as_statement());
}

std::optional<MSDependentExistsStmt> MSDependentExistsStmt::from(const TokenContext &t) {
  return MSDependentExistsStmt::from(t.as_statement());
}

Token MSDependentExistsStmt::keyword_token(void) const {
  return impl->ep->TokenFor(impl->ep, impl->reader.getVal9());
}

CompoundStmt MSDependentExistsStmt::sub_statement(void) const {
  RawEntityId eid = impl->reader.getVal10();
  return CompoundStmt::from(Stmt(impl->ep->StmtFor(impl->ep, eid))).value();
}

bool MSDependentExistsStmt::is_if_exists(void) const {
  return impl->reader.getVal12();
}

bool MSDependentExistsStmt::is_if_not_exists(void) const {
  return impl->reader.getVal16();
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx