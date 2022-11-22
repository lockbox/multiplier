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
#include <vector>

#include "../Iterator.h"
#include "../Types.h"
#include "../Token.h"
#include "../Use.h"

#include "AttrKind.h"
#include "InheritableAttr.h"
#include "TestTypestateAttrConsumedState.h"

namespace mx {
class Attr;
class InheritableAttr;
class TestTypestateAttr;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
using TestTypestateAttrRange = DerivedEntityRange<AttrIterator, TestTypestateAttr>;
using TestTypestateAttrContainingTokenRange = DerivedEntityRange<TokenContextIterator, TestTypestateAttr>;
class TestTypestateAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  inline static TestTypestateAttrRange in(const Fragment &frag) {
    return in_internal(frag);
  }

  inline static TestTypestateAttrContainingTokenRange containing(const Token &tok) {
    return TokenContextIterator(TokenContext::of(tok));
  }

  inline bool contains(const Token &tok) {
    for(auto &parent : TestTypestateAttr::containing(tok)) {
      if(parent.id() == id()) { return true; }
    }
    return false;
  }

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::TEST_TYPESTATE;
  }

  static std::optional<TestTypestateAttr> from(const TokenContext &c);
  static std::optional<TestTypestateAttr> from(const InheritableAttr &parent);

  inline static std::optional<TestTypestateAttr> from(const std::optional<InheritableAttr> &parent) {
    if (parent) {
      return TestTypestateAttr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  static std::optional<TestTypestateAttr> from(const Attr &parent);

  inline static std::optional<TestTypestateAttr> from(const std::optional<Attr> &parent) {
    if (parent) {
      return TestTypestateAttr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  std::string_view spelling(void) const;
  TestTypestateAttrConsumedState test_state(void) const;
};

static_assert(sizeof(TestTypestateAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx