// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <cstdint>

namespace mx {
enum class BTFTypeTagAttrSpelling : unsigned char {
  GNU_BTF_TYPE_TAG,
  CXX11_CLANG_BTF_TYPE_TAG,
  C2X_CLANG_BTF_TYPE_TAG,
  SPELLING_NOT_CALCULATED,
};

inline static const char *EnumerationName(BTFTypeTagAttrSpelling) {
  return "BTFTypeTagAttrSpelling";
}

inline static constexpr unsigned NumEnumerators(BTFTypeTagAttrSpelling) {
  return 4;
}

const char *EnumeratorName(BTFTypeTagAttrSpelling);

} // namespace mx