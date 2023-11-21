// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include "Type.h"

namespace mx {
class EntityProvider;
class Index;
class Token;
class Type;
class TypedefNameDecl;
class TypedefType;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class TypedefType : public Type {
 private:
  friend class FragmentImpl;
  friend class Type;
 public:
  static gap::generator<TypedefType> in(const Index &index);
  static gap::generator<TypedefType> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<TypedefType> by_id(const Index &, EntityId);

  inline static constexpr TypeKind static_kind(void) {
    return TypeKind::TYPEDEF;
  }

  static std::optional<TypedefType> from_base(const Type &parent);
  inline static std::optional<TypedefType> from(const Type &parent) {
    return from_base(parent);
  }
  static std::optional<TypedefType> from(const std::optional<Type> &parent);
  static std::optional<TypedefType> from(const Reference &r);
  static std::optional<TypedefType> from(const VariantEntity &e);
  static std::optional<TypedefType> from(const TokenContext &t);

  Type desugar(void) const;
  TypedefNameDecl declaration(void) const;
  bool is_sugared(void) const;
  bool type_matches_declaration(void) const;
};

static_assert(sizeof(TypedefType) == sizeof(Type));

#endif
} // namespace mx