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
class CUDALaunchBoundsAttr;
class Expr;
class InheritableAttr;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class CUDALaunchBoundsAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<CUDALaunchBoundsAttr> in(const Fragment &frag);
  static gap::generator<CUDALaunchBoundsAttr> in(const File &file);
  static gap::generator<CUDALaunchBoundsAttr> in(const Index &index);
  static gap::generator<CUDALaunchBoundsAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<CUDALaunchBoundsAttr> by_id(const Index &, EntityId);

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::CUDA_LAUNCH_BOUNDS;
  }

  static std::optional<CUDALaunchBoundsAttr> from(const Attr &parent);

  inline static std::optional<CUDALaunchBoundsAttr> from(const std::optional<Attr> &parent) {
    if (parent) {
      return CUDALaunchBoundsAttr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  inline static std::optional<CUDALaunchBoundsAttr> from(const Reference &r) {
    return CUDALaunchBoundsAttr::from(r.as_attribute());
  }

  inline static std::optional<CUDALaunchBoundsAttr> from(const TokenContext &t) {
    return CUDALaunchBoundsAttr::from(t.as_attribute());
  }

  Expr max_threads(void) const;
  Expr min_blocks(void) const;
};

static_assert(sizeof(CUDALaunchBoundsAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
