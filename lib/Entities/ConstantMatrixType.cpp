// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/Entities/ConstantMatrixType.h>

#include <multiplier/Entities/MatrixType.h>
#include <multiplier/Entities/Token.h>
#include <multiplier/Entities/Type.h>

#include "../API.h"
#include "../Type.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

gap::generator<ConstantMatrixType> ConstantMatrixType::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = ConstantMatrixType::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool ConstantMatrixType::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : ConstantMatrixType::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

std::optional<ConstantMatrixType> ConstantMatrixType::by_id(const Index &index, EntityId eid) {
  VariantId vid = eid.Unpack();
  if (std::holds_alternative<TypeId>(vid)) {
    return ConstantMatrixType::from(index.type(eid.Pack()));
  } else if (std::holds_alternative<InvalidId>(vid)) {
    assert(eid.Pack() == kInvalidEntityId);
  }
  return std::nullopt;
}

static const TypeKind kConstantMatrixTypeDerivedKinds[] = {
    ConstantMatrixType::static_kind(),
};

std::optional<ConstantMatrixType> ConstantMatrixType::from(const Type &parent) {
  switch (parent.kind()) {
    case ConstantMatrixType::static_kind():
      return reinterpret_cast<const ConstantMatrixType &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<ConstantMatrixType> ConstantMatrixType::in(const Index &index) {
  const EntityProvider::Ptr ep = entity_provider_of(index);
  for (TypeKind k : kConstantMatrixTypeDerivedKinds) {
    for (TypeImplPtr eptr : ep->TypesFor(ep, k)) {
      if (std::optional<ConstantMatrixType> e = ConstantMatrixType::from(Type(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<ConstantMatrixType> ConstantMatrixType::in(const Fragment &frag) {
  const EntityProvider::Ptr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (TypeKind k : kConstantMatrixTypeDerivedKinds) {
    for (TypeImplPtr eptr : ep->TypesFor(ep, k, frag_id)) {
      if (std::optional<ConstantMatrixType> e = ConstantMatrixType::from(Type(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<ConstantMatrixType> ConstantMatrixType::in(const File &file) {
  const EntityProvider::Ptr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (TypeKind k : kConstantMatrixTypeDerivedKinds) {
      for (TypeImplPtr eptr : ep->TypesFor(ep, k, frag_id)) {
        if (std::optional<ConstantMatrixType> e = ConstantMatrixType::from(Type(std::move(eptr)))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<ConstantMatrixType> ConstantMatrixType::from(const Reference &r) {
  return ConstantMatrixType::from(r.as_type());
}

std::optional<ConstantMatrixType> ConstantMatrixType::from(const TokenContext &t) {
  return ConstantMatrixType::from(t.as_type());
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx