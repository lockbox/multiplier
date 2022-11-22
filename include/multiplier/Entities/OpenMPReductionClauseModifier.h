// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <cstdint>

namespace mx {
enum class OpenMPReductionClauseModifier : unsigned char {
  DEFAULT,
  INSCAN,
  TASK,
  UNKNOWN,
};

inline static const char *EnumerationName(OpenMPReductionClauseModifier) {
  return "OpenMPReductionClauseModifier";
}

inline static constexpr unsigned NumEnumerators(OpenMPReductionClauseModifier) {
  return 4;
}

const char *EnumeratorName(OpenMPReductionClauseModifier);

} // namespace mx