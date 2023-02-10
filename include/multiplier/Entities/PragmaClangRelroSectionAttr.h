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
class PragmaClangRelroSectionAttr;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class PragmaClangRelroSectionAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<PragmaClangRelroSectionAttr> in(const Fragment &frag);
  static gap::generator<PragmaClangRelroSectionAttr> in(const File &file);
  static gap::generator<PragmaClangRelroSectionAttr> in(const Index &index);
  static gap::generator<PragmaClangRelroSectionAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<PragmaClangRelroSectionAttr> by_id(const Index &, EntityId);

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::PRAGMA_CLANG_RELRO_SECTION;
  }

  static std::optional<PragmaClangRelroSectionAttr> from(const Attr &parent);

  inline static std::optional<PragmaClangRelroSectionAttr> from(const std::optional<Attr> &parent) {
    if (parent) {
      return PragmaClangRelroSectionAttr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  inline static std::optional<PragmaClangRelroSectionAttr> from(const Reference &r) {
    return PragmaClangRelroSectionAttr::from(r.as_attribute());
  }

  inline static std::optional<PragmaClangRelroSectionAttr> from(const TokenContext &t) {
    return PragmaClangRelroSectionAttr::from(t.as_attribute());
  }

  std::string_view name(void) const;
};

static_assert(sizeof(PragmaClangRelroSectionAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
