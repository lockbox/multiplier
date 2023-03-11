// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/Entities/IBOutletCollectionAttr.h>

#include <multiplier/Entities/Attr.h>
#include <multiplier/Entities/InheritableAttr.h>
#include <multiplier/Entities/Token.h>
#include <multiplier/Entities/Type.h>

#include "../API.h"
#include "../Attr.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

gap::generator<IBOutletCollectionAttr> IBOutletCollectionAttr::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = IBOutletCollectionAttr::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool IBOutletCollectionAttr::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : IBOutletCollectionAttr::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

std::optional<IBOutletCollectionAttr> IBOutletCollectionAttr::by_id(const Index &index, EntityId eid) {
  VariantId vid = eid.Unpack();
  if (std::holds_alternative<AttrId>(vid)) {
    return IBOutletCollectionAttr::from(index.attribute(eid.Pack()));
  } else if (std::holds_alternative<InvalidId>(vid)) {
    assert(eid.Pack() == kInvalidEntityId);
  }
  return std::nullopt;
}

static const AttrKind kIBOutletCollectionAttrDerivedKinds[] = {
    IBOutletCollectionAttr::static_kind(),
};

std::optional<IBOutletCollectionAttr> IBOutletCollectionAttr::from(const Attr &parent) {
  switch (parent.kind()) {
    case IBOutletCollectionAttr::static_kind():
      return reinterpret_cast<const IBOutletCollectionAttr &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<IBOutletCollectionAttr> IBOutletCollectionAttr::in(const Index &index) {
  const EntityProvider::Ptr ep = entity_provider_of(index);
  for (AttrKind k : kIBOutletCollectionAttrDerivedKinds) {
    for (AttrImplPtr eptr : ep->AttrsFor(ep, k)) {
      if (std::optional<IBOutletCollectionAttr> e = IBOutletCollectionAttr::from(Attr(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<IBOutletCollectionAttr> IBOutletCollectionAttr::in(const Fragment &frag) {
  const EntityProvider::Ptr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (AttrKind k : kIBOutletCollectionAttrDerivedKinds) {
    for (AttrImplPtr eptr : ep->AttrsFor(ep, k, frag_id)) {
      if (std::optional<IBOutletCollectionAttr> e = IBOutletCollectionAttr::from(Attr(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<IBOutletCollectionAttr> IBOutletCollectionAttr::in(const File &file) {
  const EntityProvider::Ptr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (AttrKind k : kIBOutletCollectionAttrDerivedKinds) {
      for (AttrImplPtr eptr : ep->AttrsFor(ep, k, frag_id)) {
        if (std::optional<IBOutletCollectionAttr> e = IBOutletCollectionAttr::from(Attr(std::move(eptr)))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<IBOutletCollectionAttr> IBOutletCollectionAttr::from(const Reference &r) {
  return IBOutletCollectionAttr::from(r.as_attribute());
}

std::optional<IBOutletCollectionAttr> IBOutletCollectionAttr::from(const TokenContext &t) {
  return IBOutletCollectionAttr::from(t.as_attribute());
}

Type IBOutletCollectionAttr::interface(void) const {
  RawEntityId eid = impl->reader.getVal8();
  return Type(impl->ep->TypeFor(impl->ep, eid));
}

Type IBOutletCollectionAttr::interface_token(void) const {
  RawEntityId eid = impl->reader.getVal16();
  return Type(impl->ep->TypeFor(impl->ep, eid));
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx