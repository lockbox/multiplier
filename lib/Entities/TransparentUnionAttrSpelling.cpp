// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/Entities/TransparentUnionAttrSpelling.h>

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

const char *EnumeratorName(TransparentUnionAttrSpelling e) {
  switch (e) {
    case TransparentUnionAttrSpelling::GNU_TRANSPARENT_UNION: return "GNU_TRANSPARENT_UNION";
    case TransparentUnionAttrSpelling::CXX11_GNU_TRANSPARENT_UNION: return "CXX11_GNU_TRANSPARENT_UNION";
    case TransparentUnionAttrSpelling::C2X_GNU_TRANSPARENT_UNION: return "C2X_GNU_TRANSPARENT_UNION";
    case TransparentUnionAttrSpelling::SPELLING_NOT_CALCULATED: return "SPELLING_NOT_CALCULATED";
    default: return "<invalid>";
  }
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx