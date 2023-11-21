// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/FallThroughAttrSpelling.h>

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

const char *EnumeratorName(FallThroughAttrSpelling e) {
  switch (e) {
    case FallThroughAttrSpelling::CXX11_FALLTHROUGH: return "CXX11_FALLTHROUGH";
    case FallThroughAttrSpelling::C2X_FALLTHROUGH: return "C2X_FALLTHROUGH";
    case FallThroughAttrSpelling::CXX11_CLANG_FALLTHROUGH: return "CXX11_CLANG_FALLTHROUGH";
    case FallThroughAttrSpelling::GNU_FALLTHROUGH: return "GNU_FALLTHROUGH";
    case FallThroughAttrSpelling::CXX11_GNU_FALLTHROUGH: return "CXX11_GNU_FALLTHROUGH";
    case FallThroughAttrSpelling::C2X_GNU_FALLTHROUGH: return "C2X_GNU_FALLTHROUGH";
    case FallThroughAttrSpelling::SPELLING_NOT_CALCULATED: return "SPELLING_NOT_CALCULATED";
    default: return "<invalid>";
  }
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx