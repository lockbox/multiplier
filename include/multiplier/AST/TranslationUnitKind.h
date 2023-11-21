// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <cstdint>

namespace mx {
enum class TranslationUnitKind : unsigned char {
  COMPLETE,
  PREFIX,
  MODULE,
  INCREMENTAL,
};

inline static const char *EnumerationName(TranslationUnitKind) {
  return "TranslationUnitKind";
}

inline static constexpr unsigned NumEnumerators(TranslationUnitKind) {
  return 4;
}

const char *EnumeratorName(TranslationUnitKind);

} // namespace mx