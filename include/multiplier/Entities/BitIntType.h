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

#include "Type.h"
#include "TypeKind.h"

namespace mx {
class BitIntType;
class Type;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class BitIntType : public Type {
 private:
  friend class FragmentImpl;
  friend class Type;
 public:
  static gap::generator<BitIntType> in(const Fragment &frag);
  static gap::generator<BitIntType> in(const File &file);
  static gap::generator<BitIntType> in(const Index &index);
  static gap::generator<BitIntType> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<BitIntType> by_id(const Index &, EntityId);

  inline static constexpr TypeKind static_kind(void) {
    return TypeKind::BIT_INT;
  }

  static std::optional<BitIntType> from(const Type &parent);

  inline static std::optional<BitIntType> from(const std::optional<Type> &parent) {
    if (parent) {
      return BitIntType::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  inline static std::optional<BitIntType> from(const Reference &r) {
    return BitIntType::from(r.as_type());
  }

  inline static std::optional<BitIntType> from(const TokenContext &t) {
    return BitIntType::from(t.as_type());
  }

  Type desugar(void) const;
  bool is_signed(void) const;
  bool is_sugared(void) const;
  bool is_unsigned(void) const;
};

static_assert(sizeof(BitIntType) == sizeof(Type));

#endif
} // namespace mx
