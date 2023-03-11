// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/Entities/Mips16Attr.h>

#include <multiplier/Entities/Attr.h>
#include <multiplier/Entities/InheritableAttr.h>
#include <multiplier/Entities/Token.h>

#include "../API.h"
#include "../Attr.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

gap::generator<Mips16Attr> Mips16Attr::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = Mips16Attr::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool Mips16Attr::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : Mips16Attr::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

std::optional<Mips16Attr> Mips16Attr::by_id(const Index &index, EntityId eid) {
  VariantId vid = eid.Unpack();
  if (std::holds_alternative<AttrId>(vid)) {
    return Mips16Attr::from(index.attribute(eid.Pack()));
  } else if (std::holds_alternative<InvalidId>(vid)) {
    assert(eid.Pack() == kInvalidEntityId);
  }
  return std::nullopt;
}

static const AttrKind kMips16AttrDerivedKinds[] = {
    Mips16Attr::static_kind(),
};

std::optional<Mips16Attr> Mips16Attr::from(const Attr &parent) {
  switch (parent.kind()) {
    case Mips16Attr::static_kind():
      return reinterpret_cast<const Mips16Attr &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<Mips16Attr> Mips16Attr::in(const Index &index) {
  const EntityProvider::Ptr ep = entity_provider_of(index);
  for (AttrKind k : kMips16AttrDerivedKinds) {
    for (AttrImplPtr eptr : ep->AttrsFor(ep, k)) {
      if (std::optional<Mips16Attr> e = Mips16Attr::from(Attr(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<Mips16Attr> Mips16Attr::in(const Fragment &frag) {
  const EntityProvider::Ptr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (AttrKind k : kMips16AttrDerivedKinds) {
    for (AttrImplPtr eptr : ep->AttrsFor(ep, k, frag_id)) {
      if (std::optional<Mips16Attr> e = Mips16Attr::from(Attr(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<Mips16Attr> Mips16Attr::in(const File &file) {
  const EntityProvider::Ptr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (AttrKind k : kMips16AttrDerivedKinds) {
      for (AttrImplPtr eptr : ep->AttrsFor(ep, k, frag_id)) {
        if (std::optional<Mips16Attr> e = Mips16Attr::from(Attr(std::move(eptr)))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<Mips16Attr> Mips16Attr::from(const Reference &r) {
  return Mips16Attr::from(r.as_attribute());
}

std::optional<Mips16Attr> Mips16Attr::from(const TokenContext &t) {
  return Mips16Attr::from(t.as_attribute());
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx