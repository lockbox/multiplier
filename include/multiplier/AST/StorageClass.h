// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <cstdint>

namespace mx {
enum class StorageClass : unsigned char {
  NONE,
  EXTERN,
  STATIC,
  PRIVATE_EXTERN,
  AUTO,
  REGISTER,
};

inline static const char *EnumerationName(StorageClass) {
  return "StorageClass";
}

inline static constexpr unsigned NumEnumerators(StorageClass) {
  return 6;
}

const char *EnumeratorName(StorageClass);

} // namespace mx