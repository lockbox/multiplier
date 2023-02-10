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
class InheritableAttr;
class SwiftAsyncCallAttr;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class SwiftAsyncCallAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<SwiftAsyncCallAttr> in(const Fragment &frag);
  static gap::generator<SwiftAsyncCallAttr> in(const File &file);
  static gap::generator<SwiftAsyncCallAttr> in(const Index &index);
  static gap::generator<SwiftAsyncCallAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<SwiftAsyncCallAttr> by_id(const Index &, EntityId);

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::SWIFT_ASYNC_CALL;
  }

  static std::optional<SwiftAsyncCallAttr> from(const Attr &parent);

  inline static std::optional<SwiftAsyncCallAttr> from(const std::optional<Attr> &parent) {
    if (parent) {
      return SwiftAsyncCallAttr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  inline static std::optional<SwiftAsyncCallAttr> from(const Reference &r) {
    return SwiftAsyncCallAttr::from(r.as_attribute());
  }

  inline static std::optional<SwiftAsyncCallAttr> from(const TokenContext &t) {
    return SwiftAsyncCallAttr::from(t.as_attribute());
  }

};

static_assert(sizeof(SwiftAsyncCallAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
