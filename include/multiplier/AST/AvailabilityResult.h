// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <cstdint>

namespace mx {
enum class AvailabilityResult : unsigned char {
  AVAILABLE,
  NOT_YET_INTRODUCED,
  DEPRECATED,
  UNAVAILABLE,
};

inline static const char *EnumerationName(AvailabilityResult) {
  return "AvailabilityResult";
}

inline static constexpr unsigned NumEnumerators(AvailabilityResult) {
  return 4;
}

const char *EnumeratorName(AvailabilityResult);

} // namespace mx