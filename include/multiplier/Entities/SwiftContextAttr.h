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
#include "ParameterABIAttr.h"

namespace mx {
class Attr;
class InheritableAttr;
class InheritableParamAttr;
class ParameterABIAttr;
class SwiftContextAttr;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class SwiftContextAttr : public ParameterABIAttr {
 private:
  friend class FragmentImpl;
  friend class ParameterABIAttr;
  friend class InheritableParamAttr;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<SwiftContextAttr> in(const Fragment &frag);
  static gap::generator<SwiftContextAttr> in(const File &file);
  static gap::generator<SwiftContextAttr> in(const Index &index);
  static gap::generator<SwiftContextAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<SwiftContextAttr> by_id(const Index &, EntityId);

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::SWIFT_CONTEXT;
  }

  static std::optional<SwiftContextAttr> from(const Attr &parent);

  inline static std::optional<SwiftContextAttr> from(const std::optional<Attr> &parent) {
    if (parent) {
      return SwiftContextAttr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  inline static std::optional<SwiftContextAttr> from(const Reference &r) {
    return SwiftContextAttr::from(r.as_attribute());
  }

  inline static std::optional<SwiftContextAttr> from(const TokenContext &t) {
    return SwiftContextAttr::from(t.as_attribute());
  }

};

static_assert(sizeof(SwiftContextAttr) == sizeof(ParameterABIAttr));

#endif
} // namespace mx
