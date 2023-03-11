// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/Entities/FiniteLoopsKind.h>

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

const char *EnumeratorName(FiniteLoopsKind e) {
  switch (e) {
    case FiniteLoopsKind::LANGUAGE: return "LANGUAGE";
    case FiniteLoopsKind::ALWAYS: return "ALWAYS";
    case FiniteLoopsKind::NEVER: return "NEVER";
    default: return "<invalid>";
  }
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx