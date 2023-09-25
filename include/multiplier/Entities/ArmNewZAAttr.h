// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include "InheritableAttr.h"

namespace mx {
class EntityProvider;
class Index;
class ArmNewZAAttr;
class Attr;
class InheritableAttr;
class Token;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class ArmNewZAAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<ArmNewZAAttr> in(const Index &index);
  static gap::generator<ArmNewZAAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<ArmNewZAAttr> by_id(const Index &, EntityId);
  static gap::generator<ArmNewZAAttr> in(const Fragment &frag);
  static gap::generator<ArmNewZAAttr> in(const File &file);

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::ARM_NEW_ZA;
  }

  static std::optional<ArmNewZAAttr> from(const Attr &parent);

  inline static std::optional<ArmNewZAAttr> from(const std::optional<Attr> &parent) {
    if (parent) {
      return ArmNewZAAttr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  static std::optional<ArmNewZAAttr> from(const Reference &r);
  static std::optional<ArmNewZAAttr> from(const TokenContext &t);

};

static_assert(sizeof(ArmNewZAAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx