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
class AMDGPUKernelCallAttr;
class Attr;
class InheritableAttr;
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class AMDGPUKernelCallAttr : public InheritableAttr {
 private:
  friend class FragmentImpl;
  friend class InheritableAttr;
  friend class Attr;
 public:
  static gap::generator<AMDGPUKernelCallAttr> in(const Fragment &frag);
  static gap::generator<AMDGPUKernelCallAttr> in(const File &file);
  static gap::generator<AMDGPUKernelCallAttr> in(const Index &index);
  static gap::generator<AMDGPUKernelCallAttr> containing(const Token &tok);
  bool contains(const Token &tok) const;
  static std::optional<AMDGPUKernelCallAttr> by_id(const Index &, EntityId);

  inline static constexpr AttrKind static_kind(void) {
    return AttrKind::AMDGPU_KERNEL_CALL;
  }

  static std::optional<AMDGPUKernelCallAttr> from(const Attr &parent);

  inline static std::optional<AMDGPUKernelCallAttr> from(const std::optional<Attr> &parent) {
    if (parent) {
      return AMDGPUKernelCallAttr::from(parent.value());
    } else {
      return std::nullopt;
    }
  }

  inline static std::optional<AMDGPUKernelCallAttr> from(const Reference &r) {
    return AMDGPUKernelCallAttr::from(r.as_attribute());
  }

  inline static std::optional<AMDGPUKernelCallAttr> from(const TokenContext &t) {
    return AMDGPUKernelCallAttr::from(t.as_attribute());
  }

};

static_assert(sizeof(AMDGPUKernelCallAttr) == sizeof(InheritableAttr));

#endif
} // namespace mx
