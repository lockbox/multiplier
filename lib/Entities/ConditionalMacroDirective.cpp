// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/Entities/ConditionalMacroDirective.h>

#include <multiplier/Entities/ElseIfDefinedMacroDirective.h>
#include <multiplier/Entities/ElseIfMacroDirective.h>
#include <multiplier/Entities/ElseIfNotDefinedMacroDirective.h>
#include <multiplier/Entities/ElseMacroDirective.h>
#include <multiplier/Entities/EndIfMacroDirective.h>
#include <multiplier/Entities/IfDefinedMacroDirective.h>
#include <multiplier/Entities/IfMacroDirective.h>
#include <multiplier/Entities/IfNotDefinedMacroDirective.h>
#include <multiplier/Entities/Macro.h>
#include <multiplier/Entities/MacroDirective.h>

#include "../API.h"
#include "../Macro.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

gap::generator<ConditionalMacroDirective> ConditionalMacroDirective::containing(const Macro &macro) {
  for (auto impl = macro.parent(); impl; impl = impl->parent()) {
    if (auto d = ConditionalMacroDirective::from(*impl)) {
      co_yield *d;
    }
  }
}

bool ConditionalMacroDirective::contains(const Macro &macro) {
  auto id_ = id();
  for (auto &parent : ConditionalMacroDirective::containing(macro)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

bool ConditionalMacroDirective::contains(const Token &token) {
  auto id_ = id();
  for (auto &parent : ConditionalMacroDirective::containing(token)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

gap::generator<ConditionalMacroDirective> ConditionalMacroDirective::containing(const Token &token) {
  for (auto m : Macro::containing_internal(token)) {
    if (auto d = ConditionalMacroDirective::from(m)) {
      co_yield *d;
    }
  }
}

std::optional<ConditionalMacroDirective> ConditionalMacroDirective::by_id(const Index &index, EntityId eid) {
  VariantId vid = eid.Unpack();
  if (std::holds_alternative<MacroId>(vid)) {
    return ConditionalMacroDirective::from(index.macro(eid.Pack()));
  } else if (std::holds_alternative<InvalidId>(vid)) {
    assert(eid.Pack() == kInvalidEntityId);
  }
  return std::nullopt;
}

static const MacroKind kConditionalMacroDirectiveDerivedKinds[] = {
    IfMacroDirective::static_kind(),
    IfDefinedMacroDirective::static_kind(),
    IfNotDefinedMacroDirective::static_kind(),
    ElseIfMacroDirective::static_kind(),
    ElseIfDefinedMacroDirective::static_kind(),
    ElseIfNotDefinedMacroDirective::static_kind(),
    ElseMacroDirective::static_kind(),
    EndIfMacroDirective::static_kind(),
};

std::optional<ConditionalMacroDirective> ConditionalMacroDirective::from(const Macro &parent) {
  switch (parent.kind()) {
    case IfMacroDirective::static_kind():
    case IfDefinedMacroDirective::static_kind():
    case IfNotDefinedMacroDirective::static_kind():
    case ElseIfMacroDirective::static_kind():
    case ElseIfDefinedMacroDirective::static_kind():
    case ElseIfNotDefinedMacroDirective::static_kind():
    case ElseMacroDirective::static_kind():
    case EndIfMacroDirective::static_kind():
      return reinterpret_cast<const ConditionalMacroDirective &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<ConditionalMacroDirective> ConditionalMacroDirective::in(const Index &index) {
  const EntityProvider::Ptr ep = entity_provider_of(index);
  for (MacroKind k : kConditionalMacroDirectiveDerivedKinds) {
    for (MacroImplPtr eptr : ep->MacrosFor(ep, k)) {
      if (std::optional<ConditionalMacroDirective> e = ConditionalMacroDirective::from(Macro(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<ConditionalMacroDirective> ConditionalMacroDirective::in(const Fragment &frag) {
  const EntityProvider::Ptr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (MacroKind k : kConditionalMacroDirectiveDerivedKinds) {
    for (MacroImplPtr eptr : ep->MacrosFor(ep, k, frag_id)) {
      if (std::optional<ConditionalMacroDirective> e = ConditionalMacroDirective::from(Macro(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<ConditionalMacroDirective> ConditionalMacroDirective::in(const File &file) {
  const EntityProvider::Ptr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (MacroKind k : kConditionalMacroDirectiveDerivedKinds) {
      for (MacroImplPtr eptr : ep->MacrosFor(ep, k, frag_id)) {
        if (std::optional<ConditionalMacroDirective> e = ConditionalMacroDirective::from(Macro(std::move(eptr)))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<ConditionalMacroDirective> ConditionalMacroDirective::from(const Reference &r) {
  return ConditionalMacroDirective::from(r.as_macro());
}

std::optional<ConditionalMacroDirective> ConditionalMacroDirective::from(const TokenContext &t) {
  return ConditionalMacroDirective::from(t.as_macro());
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx