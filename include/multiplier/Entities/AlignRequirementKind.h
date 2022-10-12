// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <cstdint>

namespace mx {
enum class AlignRequirementKind : unsigned char {
  NONE,
  REQUIRED_BY_TYPEDEF,
  REQUIRED_BY_RECORD,
  REQUIRED_BY_ENUM,
};

inline static const char *EnumerationName(AlignRequirementKind) {
  return "AlignRequirementKind";
}

inline static constexpr unsigned NumEnumerators(AlignRequirementKind) {
  return 4;
}

const char *EnumeratorName(AlignRequirementKind);

} // namespace mx
