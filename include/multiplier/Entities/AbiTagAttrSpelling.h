// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <cstdint>

namespace mx {
enum class AbiTagAttrSpelling : unsigned char {
  GNU_ABI_TAG,
  CXX11_GNU_ABI_TAG,
  SPELLING_NOT_CALCULATED,
};

inline static const char *EnumerationName(AbiTagAttrSpelling) {
  return "AbiTagAttrSpelling";
}

inline static constexpr unsigned NumEnumerators(AbiTagAttrSpelling) {
  return 3;
}

const char *EnumeratorName(AbiTagAttrSpelling);

} // namespace mx
