// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include "AlignedAttrSpelling.h"
#include "InheritableAttr.h"

namespace mx {
class EntityProvider;
class Index;
class AlignedAttr;
class Attr;
class Expr;
class InheritableAttr;
class Token;
class Type;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class AlignedAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<AlignedAttr> in(const Index &index);
  static gap::generator<AlignedAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<AlignedAttr> by_id(const Index &, EntityId);
  static gap::generator<AlignedAttr> in(const Fragment &frag);
  static gap::generator<AlignedAttr> in(const File &file);

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::ALIGNED;
  }

  static std::optional<AlignedAttr> from_base(const Attr &parent);
  inline static std::optional<AlignedAttr> from(const Attr &parent) {
    return from_base(parent);
  }
  static std::optional<AlignedAttr> from(const std::optional<Attr> &parent);
  static std::optional<AlignedAttr> from(const Reference &r);
  static std::optional<AlignedAttr> from(const VariantEntity &e);
  static std::optional<AlignedAttr> from(const TokenContext &t);

  std::optional<Expr> alignment_expression(void) const;
  std::optional<Type> alignment_type(void) const;
  std::optional<uint32_t> cached_alignment_value(void) const;
  AlignedAttrSpelling semantic_spelling(void) const;
  bool is_alignas(void) const;
  bool is_alignment_dependent(void) const;
  bool is_alignment_error_dependent(void) const;
  bool is_alignment_expression(void) const;
  bool is_c11(void) const;
  bool is_declspec(void) const;
  bool is_gnu(void) const;
};

static_assert(sizeof(AlignedAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx