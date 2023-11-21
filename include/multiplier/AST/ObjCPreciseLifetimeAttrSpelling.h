// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <cstdint>

namespace mx {
enum class ObjCPreciseLifetimeAttrSpelling : unsigned char {
  GNU_OBJC_PRECISE_LIFETIME,
  CXX11_CLANG_OBJC_PRECISE_LIFETIME,
  C2X_CLANG_OBJC_PRECISE_LIFETIME,
  SPELLING_NOT_CALCULATED,
};

inline static const char *EnumerationName(ObjCPreciseLifetimeAttrSpelling) {
  return "ObjCPreciseLifetimeAttrSpelling";
}

inline static constexpr unsigned NumEnumerators(ObjCPreciseLifetimeAttrSpelling) {
  return 4;
}

const char *EnumeratorName(ObjCPreciseLifetimeAttrSpelling);

} // namespace mx