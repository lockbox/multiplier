// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <cstdint>
#include <filesystem>
#include <memory>
#include <optional>
#include <span>
#include <vector>

#include <gap/core/generator.hpp>
#include "../Iterator.h"
#include "../Reference.h"
#include "../Types.h"
#include "../Token.h"

#include "AttrKind.h"
#include "InheritableAttr.h"

namespace mx {
class Attr;
class DisableTailCallsAttr;
class InheritableAttr;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class DisableTailCallsAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<DisableTailCallsAttr> in(const Fragment &frag);
  static gap::generator<DisableTailCallsAttr> in(const File &file);
  static gap::generator<DisableTailCallsAttr> in(const Index &index);
  static gap::generator<DisableTailCallsAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<DisableTailCallsAttr> by_id(const Index &, EntityId);

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::DISABLE_TAIL_CALLS;
  }

  static std::optional<DisableTailCallsAttr> from(const Attr &parent);

  inline static std::optional<DisableTailCallsAttr> from(const std::optional<Attr> &parent) {
    if (parent) {
      return DisableTailCallsAttr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  inline static std::optional<DisableTailCallsAttr> from(const Reference &r) {
    return DisableTailCallsAttr::from(r.as_attribute());
  }

  inline static std::optional<DisableTailCallsAttr> from(const TokenContext &t) {
    return DisableTailCallsAttr::from(t.as_attribute());
  }

};

static_assert(sizeof(DisableTailCallsAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
