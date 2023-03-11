// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/Entities/PragmaClangTextSectionAttr.h>

#include <multiplier/Entities/Attr.h>
#include <multiplier/Entities/InheritableAttr.h>
#include <multiplier/Entities/Token.h>

#include "../API.h"
#include "../Attr.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

gap::generator<PragmaClangTextSectionAttr> PragmaClangTextSectionAttr::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = PragmaClangTextSectionAttr::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool PragmaClangTextSectionAttr::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : PragmaClangTextSectionAttr::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

std::optional<PragmaClangTextSectionAttr> PragmaClangTextSectionAttr::by_id(const Index &index, EntityId eid) {
  VariantId vid = eid.Unpack();
  if (std::holds_alternative<AttrId>(vid)) {
    return PragmaClangTextSectionAttr::from(index.attribute(eid.Pack()));
  } else if (std::holds_alternative<InvalidId>(vid)) {
    assert(eid.Pack() == kInvalidEntityId);
  }
  return std::nullopt;
}

static const AttrKind kPragmaClangTextSectionAttrDerivedKinds[] = {
    PragmaClangTextSectionAttr::static_kind(),
};

std::optional<PragmaClangTextSectionAttr> PragmaClangTextSectionAttr::from(const Attr &parent) {
  switch (parent.kind()) {
    case PragmaClangTextSectionAttr::static_kind():
      return reinterpret_cast<const PragmaClangTextSectionAttr &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<PragmaClangTextSectionAttr> PragmaClangTextSectionAttr::in(const Index &index) {
  const EntityProvider::Ptr ep = entity_provider_of(index);
  for (AttrKind k : kPragmaClangTextSectionAttrDerivedKinds) {
    for (AttrImplPtr eptr : ep->AttrsFor(ep, k)) {
      if (std::optional<PragmaClangTextSectionAttr> e = PragmaClangTextSectionAttr::from(Attr(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<PragmaClangTextSectionAttr> PragmaClangTextSectionAttr::in(const Fragment &frag) {
  const EntityProvider::Ptr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (AttrKind k : kPragmaClangTextSectionAttrDerivedKinds) {
    for (AttrImplPtr eptr : ep->AttrsFor(ep, k, frag_id)) {
      if (std::optional<PragmaClangTextSectionAttr> e = PragmaClangTextSectionAttr::from(Attr(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<PragmaClangTextSectionAttr> PragmaClangTextSectionAttr::in(const File &file) {
  const EntityProvider::Ptr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (AttrKind k : kPragmaClangTextSectionAttrDerivedKinds) {
      for (AttrImplPtr eptr : ep->AttrsFor(ep, k, frag_id)) {
        if (std::optional<PragmaClangTextSectionAttr> e = PragmaClangTextSectionAttr::from(Attr(std::move(eptr)))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<PragmaClangTextSectionAttr> PragmaClangTextSectionAttr::from(const Reference &r) {
  return PragmaClangTextSectionAttr::from(r.as_attribute());
}

std::optional<PragmaClangTextSectionAttr> PragmaClangTextSectionAttr::from(const TokenContext &t) {
  return PragmaClangTextSectionAttr::from(t.as_attribute());
}

std::string_view PragmaClangTextSectionAttr::name(void) const {
  capnp::Text::Reader data = impl->reader.getVal9();
  return std::string_view(data.cStr(), data.size());
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx