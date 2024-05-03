// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/AST/BuiltinTypeKind.h>
namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

const char *EnumeratorName(BuiltinTypeKind e) {
  switch (e) {
    case BuiltinTypeKind::OCL_IMAGE_1D_RO: return "OCL_IMAGE_1D_RO";
    case BuiltinTypeKind::OCL_IMAGE_1D_ARRAY_RO: return "OCL_IMAGE_1D_ARRAY_RO";
    case BuiltinTypeKind::OCL_IMAGE_1D_BUFFER_RO: return "OCL_IMAGE_1D_BUFFER_RO";
    case BuiltinTypeKind::OCL_IMAGE_2D_RO: return "OCL_IMAGE_2D_RO";
    case BuiltinTypeKind::OCL_IMAGE_2D_ARRAY_RO: return "OCL_IMAGE_2D_ARRAY_RO";
    case BuiltinTypeKind::OCL_IMAGE_2D_DEPTH_RO: return "OCL_IMAGE_2D_DEPTH_RO";
    case BuiltinTypeKind::OCL_IMAGE_2D_ARRAY_DEPTH_RO: return "OCL_IMAGE_2D_ARRAY_DEPTH_RO";
    case BuiltinTypeKind::OCL_IMAGE_2D_MSAARO: return "OCL_IMAGE_2D_MSAARO";
    case BuiltinTypeKind::OCL_IMAGE_2D_ARRAY_MSAARO: return "OCL_IMAGE_2D_ARRAY_MSAARO";
    case BuiltinTypeKind::OCL_IMAGE_2D_MSAA_DEPTH_RO: return "OCL_IMAGE_2D_MSAA_DEPTH_RO";
    case BuiltinTypeKind::OCL_IMAGE_2D_ARRAY_MSAA_DEPTH_RO: return "OCL_IMAGE_2D_ARRAY_MSAA_DEPTH_RO";
    case BuiltinTypeKind::OCL_IMAGE_3D_RO: return "OCL_IMAGE_3D_RO";
    case BuiltinTypeKind::OCL_IMAGE_1D_WO: return "OCL_IMAGE_1D_WO";
    case BuiltinTypeKind::OCL_IMAGE_1D_ARRAY_WO: return "OCL_IMAGE_1D_ARRAY_WO";
    case BuiltinTypeKind::OCL_IMAGE_1D_BUFFER_WO: return "OCL_IMAGE_1D_BUFFER_WO";
    case BuiltinTypeKind::OCL_IMAGE_2D_WO: return "OCL_IMAGE_2D_WO";
    case BuiltinTypeKind::OCL_IMAGE_2D_ARRAY_WO: return "OCL_IMAGE_2D_ARRAY_WO";
    case BuiltinTypeKind::OCL_IMAGE_2D_DEPTH_WO: return "OCL_IMAGE_2D_DEPTH_WO";
    case BuiltinTypeKind::OCL_IMAGE_2D_ARRAY_DEPTH_WO: return "OCL_IMAGE_2D_ARRAY_DEPTH_WO";
    case BuiltinTypeKind::OCL_IMAGE_2D_MSAAWO: return "OCL_IMAGE_2D_MSAAWO";
    case BuiltinTypeKind::OCL_IMAGE_2D_ARRAY_MSAAWO: return "OCL_IMAGE_2D_ARRAY_MSAAWO";
    case BuiltinTypeKind::OCL_IMAGE_2D_MSAA_DEPTH_WO: return "OCL_IMAGE_2D_MSAA_DEPTH_WO";
    case BuiltinTypeKind::OCL_IMAGE_2D_ARRAY_MSAA_DEPTH_WO: return "OCL_IMAGE_2D_ARRAY_MSAA_DEPTH_WO";
    case BuiltinTypeKind::OCL_IMAGE_3D_WO: return "OCL_IMAGE_3D_WO";
    case BuiltinTypeKind::OCL_IMAGE_1D_RW: return "OCL_IMAGE_1D_RW";
    case BuiltinTypeKind::OCL_IMAGE_1D_ARRAY_RW: return "OCL_IMAGE_1D_ARRAY_RW";
    case BuiltinTypeKind::OCL_IMAGE_1D_BUFFER_RW: return "OCL_IMAGE_1D_BUFFER_RW";
    case BuiltinTypeKind::OCL_IMAGE_2D_RW: return "OCL_IMAGE_2D_RW";
    case BuiltinTypeKind::OCL_IMAGE_2D_ARRAY_RW: return "OCL_IMAGE_2D_ARRAY_RW";
    case BuiltinTypeKind::OCL_IMAGE_2D_DEPTH_RW: return "OCL_IMAGE_2D_DEPTH_RW";
    case BuiltinTypeKind::OCL_IMAGE_2D_ARRAY_DEPTH_RW: return "OCL_IMAGE_2D_ARRAY_DEPTH_RW";
    case BuiltinTypeKind::OCL_IMAGE_2D_MSAARW: return "OCL_IMAGE_2D_MSAARW";
    case BuiltinTypeKind::OCL_IMAGE_2D_ARRAY_MSAARW: return "OCL_IMAGE_2D_ARRAY_MSAARW";
    case BuiltinTypeKind::OCL_IMAGE_2D_MSAA_DEPTH_RW: return "OCL_IMAGE_2D_MSAA_DEPTH_RW";
    case BuiltinTypeKind::OCL_IMAGE_2D_ARRAY_MSAA_DEPTH_RW: return "OCL_IMAGE_2D_ARRAY_MSAA_DEPTH_RW";
    case BuiltinTypeKind::OCL_IMAGE_3D_RW: return "OCL_IMAGE_3D_RW";
    case BuiltinTypeKind::OCL_INTEL_SUBGROUP_AVC_MCE_PAYLOAD: return "OCL_INTEL_SUBGROUP_AVC_MCE_PAYLOAD";
    case BuiltinTypeKind::OCL_INTEL_SUBGROUP_AVC_IME_PAYLOAD: return "OCL_INTEL_SUBGROUP_AVC_IME_PAYLOAD";
    case BuiltinTypeKind::OCL_INTEL_SUBGROUP_AVC_REF_PAYLOAD: return "OCL_INTEL_SUBGROUP_AVC_REF_PAYLOAD";
    case BuiltinTypeKind::OCL_INTEL_SUBGROUP_AVC_SIC_PAYLOAD: return "OCL_INTEL_SUBGROUP_AVC_SIC_PAYLOAD";
    case BuiltinTypeKind::OCL_INTEL_SUBGROUP_AVC_MCE_RESULT: return "OCL_INTEL_SUBGROUP_AVC_MCE_RESULT";
    case BuiltinTypeKind::OCL_INTEL_SUBGROUP_AVC_IME_RESULT: return "OCL_INTEL_SUBGROUP_AVC_IME_RESULT";
    case BuiltinTypeKind::OCL_INTEL_SUBGROUP_AVC_REF_RESULT: return "OCL_INTEL_SUBGROUP_AVC_REF_RESULT";
    case BuiltinTypeKind::OCL_INTEL_SUBGROUP_AVC_SIC_RESULT: return "OCL_INTEL_SUBGROUP_AVC_SIC_RESULT";
    case BuiltinTypeKind::OCL_INTEL_SUBGROUP_AVC_IME_RESULT_SINGLE_REFERENCE_STREAMOUT: return "OCL_INTEL_SUBGROUP_AVC_IME_RESULT_SINGLE_REFERENCE_STREAMOUT";
    case BuiltinTypeKind::OCL_INTEL_SUBGROUP_AVC_IME_RESULT_DUAL_REFERENCE_STREAMOUT: return "OCL_INTEL_SUBGROUP_AVC_IME_RESULT_DUAL_REFERENCE_STREAMOUT";
    case BuiltinTypeKind::OCL_INTEL_SUBGROUP_AVC_IME_SINGLE_REFERENCE_STREAMIN: return "OCL_INTEL_SUBGROUP_AVC_IME_SINGLE_REFERENCE_STREAMIN";
    case BuiltinTypeKind::OCL_INTEL_SUBGROUP_AVC_IME_DUAL_REFERENCE_STREAMIN: return "OCL_INTEL_SUBGROUP_AVC_IME_DUAL_REFERENCE_STREAMIN";
    case BuiltinTypeKind::SVE_INT8: return "SVE_INT8";
    case BuiltinTypeKind::SVE_INT16: return "SVE_INT16";
    case BuiltinTypeKind::SVE_INT32: return "SVE_INT32";
    case BuiltinTypeKind::SVE_INT64: return "SVE_INT64";
    case BuiltinTypeKind::SVE_UINT8: return "SVE_UINT8";
    case BuiltinTypeKind::SVE_UINT16: return "SVE_UINT16";
    case BuiltinTypeKind::SVE_UINT32: return "SVE_UINT32";
    case BuiltinTypeKind::SVE_UINT64: return "SVE_UINT64";
    case BuiltinTypeKind::SVE_FLOAT16: return "SVE_FLOAT16";
    case BuiltinTypeKind::SVE_FLOAT32: return "SVE_FLOAT32";
    case BuiltinTypeKind::SVE_FLOAT64: return "SVE_FLOAT64";
    case BuiltinTypeKind::SVE_B_FLOAT16: return "SVE_B_FLOAT16";
    case BuiltinTypeKind::SVE_INT8X2: return "SVE_INT8X2";
    case BuiltinTypeKind::SVE_INT16X2: return "SVE_INT16X2";
    case BuiltinTypeKind::SVE_INT32X2: return "SVE_INT32X2";
    case BuiltinTypeKind::SVE_INT64X2: return "SVE_INT64X2";
    case BuiltinTypeKind::SVE_UINT8X2: return "SVE_UINT8X2";
    case BuiltinTypeKind::SVE_UINT16X2: return "SVE_UINT16X2";
    case BuiltinTypeKind::SVE_UINT32X2: return "SVE_UINT32X2";
    case BuiltinTypeKind::SVE_UINT64X2: return "SVE_UINT64X2";
    case BuiltinTypeKind::SVE_FLOAT16X2: return "SVE_FLOAT16X2";
    case BuiltinTypeKind::SVE_FLOAT32X2: return "SVE_FLOAT32X2";
    case BuiltinTypeKind::SVE_FLOAT64X2: return "SVE_FLOAT64X2";
    case BuiltinTypeKind::SVE_B_FLOAT16X2: return "SVE_B_FLOAT16X2";
    case BuiltinTypeKind::SVE_INT8X3: return "SVE_INT8X3";
    case BuiltinTypeKind::SVE_INT16X3: return "SVE_INT16X3";
    case BuiltinTypeKind::SVE_INT32X3: return "SVE_INT32X3";
    case BuiltinTypeKind::SVE_INT64X3: return "SVE_INT64X3";
    case BuiltinTypeKind::SVE_UINT8X3: return "SVE_UINT8X3";
    case BuiltinTypeKind::SVE_UINT16X3: return "SVE_UINT16X3";
    case BuiltinTypeKind::SVE_UINT32X3: return "SVE_UINT32X3";
    case BuiltinTypeKind::SVE_UINT64X3: return "SVE_UINT64X3";
    case BuiltinTypeKind::SVE_FLOAT16X3: return "SVE_FLOAT16X3";
    case BuiltinTypeKind::SVE_FLOAT32X3: return "SVE_FLOAT32X3";
    case BuiltinTypeKind::SVE_FLOAT64X3: return "SVE_FLOAT64X3";
    case BuiltinTypeKind::SVE_B_FLOAT16X3: return "SVE_B_FLOAT16X3";
    case BuiltinTypeKind::SVE_INT8X4: return "SVE_INT8X4";
    case BuiltinTypeKind::SVE_INT16X4: return "SVE_INT16X4";
    case BuiltinTypeKind::SVE_INT32X4: return "SVE_INT32X4";
    case BuiltinTypeKind::SVE_INT64X4: return "SVE_INT64X4";
    case BuiltinTypeKind::SVE_UINT8X4: return "SVE_UINT8X4";
    case BuiltinTypeKind::SVE_UINT16X4: return "SVE_UINT16X4";
    case BuiltinTypeKind::SVE_UINT32X4: return "SVE_UINT32X4";
    case BuiltinTypeKind::SVE_UINT64X4: return "SVE_UINT64X4";
    case BuiltinTypeKind::SVE_FLOAT16X4: return "SVE_FLOAT16X4";
    case BuiltinTypeKind::SVE_FLOAT32X4: return "SVE_FLOAT32X4";
    case BuiltinTypeKind::SVE_FLOAT64X4: return "SVE_FLOAT64X4";
    case BuiltinTypeKind::SVE_B_FLOAT16X4: return "SVE_B_FLOAT16X4";
    case BuiltinTypeKind::SVE_BOOLEAN: return "SVE_BOOLEAN";
    case BuiltinTypeKind::SVE_BOOLX2: return "SVE_BOOLX2";
    case BuiltinTypeKind::SVE_BOOLX4: return "SVE_BOOLX4";
    case BuiltinTypeKind::SVE_COUNT: return "SVE_COUNT";
    case BuiltinTypeKind::VECTOR_QUAD: return "VECTOR_QUAD";
    case BuiltinTypeKind::VECTOR_PAIR: return "VECTOR_PAIR";
    case BuiltinTypeKind::RVV_INT8MF8: return "RVV_INT8MF8";
    case BuiltinTypeKind::RVV_INT8MF4: return "RVV_INT8MF4";
    case BuiltinTypeKind::RVV_INT8MF2: return "RVV_INT8MF2";
    case BuiltinTypeKind::RVV_INT8M1: return "RVV_INT8M1";
    case BuiltinTypeKind::RVV_INT8M2: return "RVV_INT8M2";
    case BuiltinTypeKind::RVV_INT8M4: return "RVV_INT8M4";
    case BuiltinTypeKind::RVV_INT8M8: return "RVV_INT8M8";
    case BuiltinTypeKind::RVV_UINT8MF8: return "RVV_UINT8MF8";
    case BuiltinTypeKind::RVV_UINT8MF4: return "RVV_UINT8MF4";
    case BuiltinTypeKind::RVV_UINT8MF2: return "RVV_UINT8MF2";
    case BuiltinTypeKind::RVV_UINT8M1: return "RVV_UINT8M1";
    case BuiltinTypeKind::RVV_UINT8M2: return "RVV_UINT8M2";
    case BuiltinTypeKind::RVV_UINT8M4: return "RVV_UINT8M4";
    case BuiltinTypeKind::RVV_UINT8M8: return "RVV_UINT8M8";
    case BuiltinTypeKind::RVV_INT16MF4: return "RVV_INT16MF4";
    case BuiltinTypeKind::RVV_INT16MF2: return "RVV_INT16MF2";
    case BuiltinTypeKind::RVV_INT16M1: return "RVV_INT16M1";
    case BuiltinTypeKind::RVV_INT16M2: return "RVV_INT16M2";
    case BuiltinTypeKind::RVV_INT16M4: return "RVV_INT16M4";
    case BuiltinTypeKind::RVV_INT16M8: return "RVV_INT16M8";
    case BuiltinTypeKind::RVV_UINT16MF4: return "RVV_UINT16MF4";
    case BuiltinTypeKind::RVV_UINT16MF2: return "RVV_UINT16MF2";
    case BuiltinTypeKind::RVV_UINT16M1: return "RVV_UINT16M1";
    case BuiltinTypeKind::RVV_UINT16M2: return "RVV_UINT16M2";
    case BuiltinTypeKind::RVV_UINT16M4: return "RVV_UINT16M4";
    case BuiltinTypeKind::RVV_UINT16M8: return "RVV_UINT16M8";
    case BuiltinTypeKind::RVV_INT32MF2: return "RVV_INT32MF2";
    case BuiltinTypeKind::RVV_INT32M1: return "RVV_INT32M1";
    case BuiltinTypeKind::RVV_INT32M2: return "RVV_INT32M2";
    case BuiltinTypeKind::RVV_INT32M4: return "RVV_INT32M4";
    case BuiltinTypeKind::RVV_INT32M8: return "RVV_INT32M8";
    case BuiltinTypeKind::RVV_UINT32MF2: return "RVV_UINT32MF2";
    case BuiltinTypeKind::RVV_UINT32M1: return "RVV_UINT32M1";
    case BuiltinTypeKind::RVV_UINT32M2: return "RVV_UINT32M2";
    case BuiltinTypeKind::RVV_UINT32M4: return "RVV_UINT32M4";
    case BuiltinTypeKind::RVV_UINT32M8: return "RVV_UINT32M8";
    case BuiltinTypeKind::RVV_INT64M1: return "RVV_INT64M1";
    case BuiltinTypeKind::RVV_INT64M2: return "RVV_INT64M2";
    case BuiltinTypeKind::RVV_INT64M4: return "RVV_INT64M4";
    case BuiltinTypeKind::RVV_INT64M8: return "RVV_INT64M8";
    case BuiltinTypeKind::RVV_UINT64M1: return "RVV_UINT64M1";
    case BuiltinTypeKind::RVV_UINT64M2: return "RVV_UINT64M2";
    case BuiltinTypeKind::RVV_UINT64M4: return "RVV_UINT64M4";
    case BuiltinTypeKind::RVV_UINT64M8: return "RVV_UINT64M8";
    case BuiltinTypeKind::RVV_FLOAT16MF4: return "RVV_FLOAT16MF4";
    case BuiltinTypeKind::RVV_FLOAT16MF2: return "RVV_FLOAT16MF2";
    case BuiltinTypeKind::RVV_FLOAT16M1: return "RVV_FLOAT16M1";
    case BuiltinTypeKind::RVV_FLOAT16M2: return "RVV_FLOAT16M2";
    case BuiltinTypeKind::RVV_FLOAT16M4: return "RVV_FLOAT16M4";
    case BuiltinTypeKind::RVV_FLOAT16M8: return "RVV_FLOAT16M8";
    case BuiltinTypeKind::RVV_B_FLOAT16MF4: return "RVV_B_FLOAT16MF4";
    case BuiltinTypeKind::RVV_B_FLOAT16MF2: return "RVV_B_FLOAT16MF2";
    case BuiltinTypeKind::RVV_B_FLOAT16M1: return "RVV_B_FLOAT16M1";
    case BuiltinTypeKind::RVV_B_FLOAT16M2: return "RVV_B_FLOAT16M2";
    case BuiltinTypeKind::RVV_B_FLOAT16M4: return "RVV_B_FLOAT16M4";
    case BuiltinTypeKind::RVV_B_FLOAT16M8: return "RVV_B_FLOAT16M8";
    case BuiltinTypeKind::RVV_FLOAT32MF2: return "RVV_FLOAT32MF2";
    case BuiltinTypeKind::RVV_FLOAT32M1: return "RVV_FLOAT32M1";
    case BuiltinTypeKind::RVV_FLOAT32M2: return "RVV_FLOAT32M2";
    case BuiltinTypeKind::RVV_FLOAT32M4: return "RVV_FLOAT32M4";
    case BuiltinTypeKind::RVV_FLOAT32M8: return "RVV_FLOAT32M8";
    case BuiltinTypeKind::RVV_FLOAT64M1: return "RVV_FLOAT64M1";
    case BuiltinTypeKind::RVV_FLOAT64M2: return "RVV_FLOAT64M2";
    case BuiltinTypeKind::RVV_FLOAT64M4: return "RVV_FLOAT64M4";
    case BuiltinTypeKind::RVV_FLOAT64M8: return "RVV_FLOAT64M8";
    case BuiltinTypeKind::RVV_BOOL1: return "RVV_BOOL1";
    case BuiltinTypeKind::RVV_BOOL2: return "RVV_BOOL2";
    case BuiltinTypeKind::RVV_BOOL4: return "RVV_BOOL4";
    case BuiltinTypeKind::RVV_BOOL8: return "RVV_BOOL8";
    case BuiltinTypeKind::RVV_BOOL16: return "RVV_BOOL16";
    case BuiltinTypeKind::RVV_BOOL32: return "RVV_BOOL32";
    case BuiltinTypeKind::RVV_BOOL64: return "RVV_BOOL64";
    case BuiltinTypeKind::RVV_INT8MF8X2: return "RVV_INT8MF8X2";
    case BuiltinTypeKind::RVV_INT8MF8X3: return "RVV_INT8MF8X3";
    case BuiltinTypeKind::RVV_INT8MF8X4: return "RVV_INT8MF8X4";
    case BuiltinTypeKind::RVV_INT8MF8X5: return "RVV_INT8MF8X5";
    case BuiltinTypeKind::RVV_INT8MF8X6: return "RVV_INT8MF8X6";
    case BuiltinTypeKind::RVV_INT8MF8X7: return "RVV_INT8MF8X7";
    case BuiltinTypeKind::RVV_INT8MF8X8: return "RVV_INT8MF8X8";
    case BuiltinTypeKind::RVV_INT8MF4X2: return "RVV_INT8MF4X2";
    case BuiltinTypeKind::RVV_INT8MF4X3: return "RVV_INT8MF4X3";
    case BuiltinTypeKind::RVV_INT8MF4X4: return "RVV_INT8MF4X4";
    case BuiltinTypeKind::RVV_INT8MF4X5: return "RVV_INT8MF4X5";
    case BuiltinTypeKind::RVV_INT8MF4X6: return "RVV_INT8MF4X6";
    case BuiltinTypeKind::RVV_INT8MF4X7: return "RVV_INT8MF4X7";
    case BuiltinTypeKind::RVV_INT8MF4X8: return "RVV_INT8MF4X8";
    case BuiltinTypeKind::RVV_INT8MF2X2: return "RVV_INT8MF2X2";
    case BuiltinTypeKind::RVV_INT8MF2X3: return "RVV_INT8MF2X3";
    case BuiltinTypeKind::RVV_INT8MF2X4: return "RVV_INT8MF2X4";
    case BuiltinTypeKind::RVV_INT8MF2X5: return "RVV_INT8MF2X5";
    case BuiltinTypeKind::RVV_INT8MF2X6: return "RVV_INT8MF2X6";
    case BuiltinTypeKind::RVV_INT8MF2X7: return "RVV_INT8MF2X7";
    case BuiltinTypeKind::RVV_INT8MF2X8: return "RVV_INT8MF2X8";
    case BuiltinTypeKind::RVV_INT8M1X2: return "RVV_INT8M1X2";
    case BuiltinTypeKind::RVV_INT8M1X3: return "RVV_INT8M1X3";
    case BuiltinTypeKind::RVV_INT8M1X4: return "RVV_INT8M1X4";
    case BuiltinTypeKind::RVV_INT8M1X5: return "RVV_INT8M1X5";
    case BuiltinTypeKind::RVV_INT8M1X6: return "RVV_INT8M1X6";
    case BuiltinTypeKind::RVV_INT8M1X7: return "RVV_INT8M1X7";
    case BuiltinTypeKind::RVV_INT8M1X8: return "RVV_INT8M1X8";
    case BuiltinTypeKind::RVV_INT8M2X2: return "RVV_INT8M2X2";
    case BuiltinTypeKind::RVV_INT8M2X3: return "RVV_INT8M2X3";
    case BuiltinTypeKind::RVV_INT8M2X4: return "RVV_INT8M2X4";
    case BuiltinTypeKind::RVV_INT8M4X2: return "RVV_INT8M4X2";
    case BuiltinTypeKind::RVV_UINT8MF8X2: return "RVV_UINT8MF8X2";
    case BuiltinTypeKind::RVV_UINT8MF8X3: return "RVV_UINT8MF8X3";
    case BuiltinTypeKind::RVV_UINT8MF8X4: return "RVV_UINT8MF8X4";
    case BuiltinTypeKind::RVV_UINT8MF8X5: return "RVV_UINT8MF8X5";
    case BuiltinTypeKind::RVV_UINT8MF8X6: return "RVV_UINT8MF8X6";
    case BuiltinTypeKind::RVV_UINT8MF8X7: return "RVV_UINT8MF8X7";
    case BuiltinTypeKind::RVV_UINT8MF8X8: return "RVV_UINT8MF8X8";
    case BuiltinTypeKind::RVV_UINT8MF4X2: return "RVV_UINT8MF4X2";
    case BuiltinTypeKind::RVV_UINT8MF4X3: return "RVV_UINT8MF4X3";
    case BuiltinTypeKind::RVV_UINT8MF4X4: return "RVV_UINT8MF4X4";
    case BuiltinTypeKind::RVV_UINT8MF4X5: return "RVV_UINT8MF4X5";
    case BuiltinTypeKind::RVV_UINT8MF4X6: return "RVV_UINT8MF4X6";
    case BuiltinTypeKind::RVV_UINT8MF4X7: return "RVV_UINT8MF4X7";
    case BuiltinTypeKind::RVV_UINT8MF4X8: return "RVV_UINT8MF4X8";
    case BuiltinTypeKind::RVV_UINT8MF2X2: return "RVV_UINT8MF2X2";
    case BuiltinTypeKind::RVV_UINT8MF2X3: return "RVV_UINT8MF2X3";
    case BuiltinTypeKind::RVV_UINT8MF2X4: return "RVV_UINT8MF2X4";
    case BuiltinTypeKind::RVV_UINT8MF2X5: return "RVV_UINT8MF2X5";
    case BuiltinTypeKind::RVV_UINT8MF2X6: return "RVV_UINT8MF2X6";
    case BuiltinTypeKind::RVV_UINT8MF2X7: return "RVV_UINT8MF2X7";
    case BuiltinTypeKind::RVV_UINT8MF2X8: return "RVV_UINT8MF2X8";
    case BuiltinTypeKind::RVV_UINT8M1X2: return "RVV_UINT8M1X2";
    case BuiltinTypeKind::RVV_UINT8M1X3: return "RVV_UINT8M1X3";
    case BuiltinTypeKind::RVV_UINT8M1X4: return "RVV_UINT8M1X4";
    case BuiltinTypeKind::RVV_UINT8M1X5: return "RVV_UINT8M1X5";
    case BuiltinTypeKind::RVV_UINT8M1X6: return "RVV_UINT8M1X6";
    case BuiltinTypeKind::RVV_UINT8M1X7: return "RVV_UINT8M1X7";
    case BuiltinTypeKind::RVV_UINT8M1X8: return "RVV_UINT8M1X8";
    case BuiltinTypeKind::RVV_UINT8M2X2: return "RVV_UINT8M2X2";
    case BuiltinTypeKind::RVV_UINT8M2X3: return "RVV_UINT8M2X3";
    case BuiltinTypeKind::RVV_UINT8M2X4: return "RVV_UINT8M2X4";
    case BuiltinTypeKind::RVV_UINT8M4X2: return "RVV_UINT8M4X2";
    case BuiltinTypeKind::RVV_INT16MF4X2: return "RVV_INT16MF4X2";
    case BuiltinTypeKind::RVV_INT16MF4X3: return "RVV_INT16MF4X3";
    case BuiltinTypeKind::RVV_INT16MF4X4: return "RVV_INT16MF4X4";
    case BuiltinTypeKind::RVV_INT16MF4X5: return "RVV_INT16MF4X5";
    case BuiltinTypeKind::RVV_INT16MF4X6: return "RVV_INT16MF4X6";
    case BuiltinTypeKind::RVV_INT16MF4X7: return "RVV_INT16MF4X7";
    case BuiltinTypeKind::RVV_INT16MF4X8: return "RVV_INT16MF4X8";
    case BuiltinTypeKind::RVV_INT16MF2X2: return "RVV_INT16MF2X2";
    case BuiltinTypeKind::RVV_INT16MF2X3: return "RVV_INT16MF2X3";
    case BuiltinTypeKind::RVV_INT16MF2X4: return "RVV_INT16MF2X4";
    case BuiltinTypeKind::RVV_INT16MF2X5: return "RVV_INT16MF2X5";
    case BuiltinTypeKind::RVV_INT16MF2X6: return "RVV_INT16MF2X6";
    case BuiltinTypeKind::RVV_INT16MF2X7: return "RVV_INT16MF2X7";
    case BuiltinTypeKind::RVV_INT16MF2X8: return "RVV_INT16MF2X8";
    case BuiltinTypeKind::RVV_INT16M1X2: return "RVV_INT16M1X2";
    case BuiltinTypeKind::RVV_INT16M1X3: return "RVV_INT16M1X3";
    case BuiltinTypeKind::RVV_INT16M1X4: return "RVV_INT16M1X4";
    case BuiltinTypeKind::RVV_INT16M1X5: return "RVV_INT16M1X5";
    case BuiltinTypeKind::RVV_INT16M1X6: return "RVV_INT16M1X6";
    case BuiltinTypeKind::RVV_INT16M1X7: return "RVV_INT16M1X7";
    case BuiltinTypeKind::RVV_INT16M1X8: return "RVV_INT16M1X8";
    case BuiltinTypeKind::RVV_INT16M2X2: return "RVV_INT16M2X2";
    case BuiltinTypeKind::RVV_INT16M2X3: return "RVV_INT16M2X3";
    case BuiltinTypeKind::RVV_INT16M2X4: return "RVV_INT16M2X4";
    case BuiltinTypeKind::RVV_INT16M4X2: return "RVV_INT16M4X2";
    case BuiltinTypeKind::RVV_UINT16MF4X2: return "RVV_UINT16MF4X2";
    case BuiltinTypeKind::RVV_UINT16MF4X3: return "RVV_UINT16MF4X3";
    case BuiltinTypeKind::RVV_UINT16MF4X4: return "RVV_UINT16MF4X4";
    case BuiltinTypeKind::RVV_UINT16MF4X5: return "RVV_UINT16MF4X5";
    case BuiltinTypeKind::RVV_UINT16MF4X6: return "RVV_UINT16MF4X6";
    case BuiltinTypeKind::RVV_UINT16MF4X7: return "RVV_UINT16MF4X7";
    case BuiltinTypeKind::RVV_UINT16MF4X8: return "RVV_UINT16MF4X8";
    case BuiltinTypeKind::RVV_UINT16MF2X2: return "RVV_UINT16MF2X2";
    case BuiltinTypeKind::RVV_UINT16MF2X3: return "RVV_UINT16MF2X3";
    case BuiltinTypeKind::RVV_UINT16MF2X4: return "RVV_UINT16MF2X4";
    case BuiltinTypeKind::RVV_UINT16MF2X5: return "RVV_UINT16MF2X5";
    case BuiltinTypeKind::RVV_UINT16MF2X6: return "RVV_UINT16MF2X6";
    case BuiltinTypeKind::RVV_UINT16MF2X7: return "RVV_UINT16MF2X7";
    case BuiltinTypeKind::RVV_UINT16MF2X8: return "RVV_UINT16MF2X8";
    case BuiltinTypeKind::RVV_UINT16M1X2: return "RVV_UINT16M1X2";
    case BuiltinTypeKind::RVV_UINT16M1X3: return "RVV_UINT16M1X3";
    case BuiltinTypeKind::RVV_UINT16M1X4: return "RVV_UINT16M1X4";
    case BuiltinTypeKind::RVV_UINT16M1X5: return "RVV_UINT16M1X5";
    case BuiltinTypeKind::RVV_UINT16M1X6: return "RVV_UINT16M1X6";
    case BuiltinTypeKind::RVV_UINT16M1X7: return "RVV_UINT16M1X7";
    case BuiltinTypeKind::RVV_UINT16M1X8: return "RVV_UINT16M1X8";
    case BuiltinTypeKind::RVV_UINT16M2X2: return "RVV_UINT16M2X2";
    case BuiltinTypeKind::RVV_UINT16M2X3: return "RVV_UINT16M2X3";
    case BuiltinTypeKind::RVV_UINT16M2X4: return "RVV_UINT16M2X4";
    case BuiltinTypeKind::RVV_UINT16M4X2: return "RVV_UINT16M4X2";
    case BuiltinTypeKind::RVV_INT32MF2X2: return "RVV_INT32MF2X2";
    case BuiltinTypeKind::RVV_INT32MF2X3: return "RVV_INT32MF2X3";
    case BuiltinTypeKind::RVV_INT32MF2X4: return "RVV_INT32MF2X4";
    case BuiltinTypeKind::RVV_INT32MF2X5: return "RVV_INT32MF2X5";
    case BuiltinTypeKind::RVV_INT32MF2X6: return "RVV_INT32MF2X6";
    case BuiltinTypeKind::RVV_INT32MF2X7: return "RVV_INT32MF2X7";
    case BuiltinTypeKind::RVV_INT32MF2X8: return "RVV_INT32MF2X8";
    case BuiltinTypeKind::RVV_INT32M1X2: return "RVV_INT32M1X2";
    case BuiltinTypeKind::RVV_INT32M1X3: return "RVV_INT32M1X3";
    case BuiltinTypeKind::RVV_INT32M1X4: return "RVV_INT32M1X4";
    case BuiltinTypeKind::RVV_INT32M1X5: return "RVV_INT32M1X5";
    case BuiltinTypeKind::RVV_INT32M1X6: return "RVV_INT32M1X6";
    case BuiltinTypeKind::RVV_INT32M1X7: return "RVV_INT32M1X7";
    case BuiltinTypeKind::RVV_INT32M1X8: return "RVV_INT32M1X8";
    case BuiltinTypeKind::RVV_INT32M2X2: return "RVV_INT32M2X2";
    case BuiltinTypeKind::RVV_INT32M2X3: return "RVV_INT32M2X3";
    case BuiltinTypeKind::RVV_INT32M2X4: return "RVV_INT32M2X4";
    case BuiltinTypeKind::RVV_INT32M4X2: return "RVV_INT32M4X2";
    case BuiltinTypeKind::RVV_UINT32MF2X2: return "RVV_UINT32MF2X2";
    case BuiltinTypeKind::RVV_UINT32MF2X3: return "RVV_UINT32MF2X3";
    case BuiltinTypeKind::RVV_UINT32MF2X4: return "RVV_UINT32MF2X4";
    case BuiltinTypeKind::RVV_UINT32MF2X5: return "RVV_UINT32MF2X5";
    case BuiltinTypeKind::RVV_UINT32MF2X6: return "RVV_UINT32MF2X6";
    case BuiltinTypeKind::RVV_UINT32MF2X7: return "RVV_UINT32MF2X7";
    case BuiltinTypeKind::RVV_UINT32MF2X8: return "RVV_UINT32MF2X8";
    case BuiltinTypeKind::RVV_UINT32M1X2: return "RVV_UINT32M1X2";
    case BuiltinTypeKind::RVV_UINT32M1X3: return "RVV_UINT32M1X3";
    case BuiltinTypeKind::RVV_UINT32M1X4: return "RVV_UINT32M1X4";
    case BuiltinTypeKind::RVV_UINT32M1X5: return "RVV_UINT32M1X5";
    case BuiltinTypeKind::RVV_UINT32M1X6: return "RVV_UINT32M1X6";
    case BuiltinTypeKind::RVV_UINT32M1X7: return "RVV_UINT32M1X7";
    case BuiltinTypeKind::RVV_UINT32M1X8: return "RVV_UINT32M1X8";
    case BuiltinTypeKind::RVV_UINT32M2X2: return "RVV_UINT32M2X2";
    case BuiltinTypeKind::RVV_UINT32M2X3: return "RVV_UINT32M2X3";
    case BuiltinTypeKind::RVV_UINT32M2X4: return "RVV_UINT32M2X4";
    case BuiltinTypeKind::RVV_UINT32M4X2: return "RVV_UINT32M4X2";
    case BuiltinTypeKind::RVV_INT64M1X2: return "RVV_INT64M1X2";
    case BuiltinTypeKind::RVV_INT64M1X3: return "RVV_INT64M1X3";
    case BuiltinTypeKind::RVV_INT64M1X4: return "RVV_INT64M1X4";
    case BuiltinTypeKind::RVV_INT64M1X5: return "RVV_INT64M1X5";
    case BuiltinTypeKind::RVV_INT64M1X6: return "RVV_INT64M1X6";
    case BuiltinTypeKind::RVV_INT64M1X7: return "RVV_INT64M1X7";
    case BuiltinTypeKind::RVV_INT64M1X8: return "RVV_INT64M1X8";
    case BuiltinTypeKind::RVV_INT64M2X2: return "RVV_INT64M2X2";
    case BuiltinTypeKind::RVV_INT64M2X3: return "RVV_INT64M2X3";
    case BuiltinTypeKind::RVV_INT64M2X4: return "RVV_INT64M2X4";
    case BuiltinTypeKind::RVV_INT64M4X2: return "RVV_INT64M4X2";
    case BuiltinTypeKind::RVV_UINT64M1X2: return "RVV_UINT64M1X2";
    case BuiltinTypeKind::RVV_UINT64M1X3: return "RVV_UINT64M1X3";
    case BuiltinTypeKind::RVV_UINT64M1X4: return "RVV_UINT64M1X4";
    case BuiltinTypeKind::RVV_UINT64M1X5: return "RVV_UINT64M1X5";
    case BuiltinTypeKind::RVV_UINT64M1X6: return "RVV_UINT64M1X6";
    case BuiltinTypeKind::RVV_UINT64M1X7: return "RVV_UINT64M1X7";
    case BuiltinTypeKind::RVV_UINT64M1X8: return "RVV_UINT64M1X8";
    case BuiltinTypeKind::RVV_UINT64M2X2: return "RVV_UINT64M2X2";
    case BuiltinTypeKind::RVV_UINT64M2X3: return "RVV_UINT64M2X3";
    case BuiltinTypeKind::RVV_UINT64M2X4: return "RVV_UINT64M2X4";
    case BuiltinTypeKind::RVV_UINT64M4X2: return "RVV_UINT64M4X2";
    case BuiltinTypeKind::RVV_FLOAT16MF4X2: return "RVV_FLOAT16MF4X2";
    case BuiltinTypeKind::RVV_FLOAT16MF4X3: return "RVV_FLOAT16MF4X3";
    case BuiltinTypeKind::RVV_FLOAT16MF4X4: return "RVV_FLOAT16MF4X4";
    case BuiltinTypeKind::RVV_FLOAT16MF4X5: return "RVV_FLOAT16MF4X5";
    case BuiltinTypeKind::RVV_FLOAT16MF4X6: return "RVV_FLOAT16MF4X6";
    case BuiltinTypeKind::RVV_FLOAT16MF4X7: return "RVV_FLOAT16MF4X7";
    case BuiltinTypeKind::RVV_FLOAT16MF4X8: return "RVV_FLOAT16MF4X8";
    case BuiltinTypeKind::RVV_FLOAT16MF2X2: return "RVV_FLOAT16MF2X2";
    case BuiltinTypeKind::RVV_FLOAT16MF2X3: return "RVV_FLOAT16MF2X3";
    case BuiltinTypeKind::RVV_FLOAT16MF2X4: return "RVV_FLOAT16MF2X4";
    case BuiltinTypeKind::RVV_FLOAT16MF2X5: return "RVV_FLOAT16MF2X5";
    case BuiltinTypeKind::RVV_FLOAT16MF2X6: return "RVV_FLOAT16MF2X6";
    case BuiltinTypeKind::RVV_FLOAT16MF2X7: return "RVV_FLOAT16MF2X7";
    case BuiltinTypeKind::RVV_FLOAT16MF2X8: return "RVV_FLOAT16MF2X8";
    case BuiltinTypeKind::RVV_FLOAT16M1X2: return "RVV_FLOAT16M1X2";
    case BuiltinTypeKind::RVV_FLOAT16M1X3: return "RVV_FLOAT16M1X3";
    case BuiltinTypeKind::RVV_FLOAT16M1X4: return "RVV_FLOAT16M1X4";
    case BuiltinTypeKind::RVV_FLOAT16M1X5: return "RVV_FLOAT16M1X5";
    case BuiltinTypeKind::RVV_FLOAT16M1X6: return "RVV_FLOAT16M1X6";
    case BuiltinTypeKind::RVV_FLOAT16M1X7: return "RVV_FLOAT16M1X7";
    case BuiltinTypeKind::RVV_FLOAT16M1X8: return "RVV_FLOAT16M1X8";
    case BuiltinTypeKind::RVV_FLOAT16M2X2: return "RVV_FLOAT16M2X2";
    case BuiltinTypeKind::RVV_FLOAT16M2X3: return "RVV_FLOAT16M2X3";
    case BuiltinTypeKind::RVV_FLOAT16M2X4: return "RVV_FLOAT16M2X4";
    case BuiltinTypeKind::RVV_FLOAT16M4X2: return "RVV_FLOAT16M4X2";
    case BuiltinTypeKind::RVV_FLOAT32MF2X2: return "RVV_FLOAT32MF2X2";
    case BuiltinTypeKind::RVV_FLOAT32MF2X3: return "RVV_FLOAT32MF2X3";
    case BuiltinTypeKind::RVV_FLOAT32MF2X4: return "RVV_FLOAT32MF2X4";
    case BuiltinTypeKind::RVV_FLOAT32MF2X5: return "RVV_FLOAT32MF2X5";
    case BuiltinTypeKind::RVV_FLOAT32MF2X6: return "RVV_FLOAT32MF2X6";
    case BuiltinTypeKind::RVV_FLOAT32MF2X7: return "RVV_FLOAT32MF2X7";
    case BuiltinTypeKind::RVV_FLOAT32MF2X8: return "RVV_FLOAT32MF2X8";
    case BuiltinTypeKind::RVV_FLOAT32M1X2: return "RVV_FLOAT32M1X2";
    case BuiltinTypeKind::RVV_FLOAT32M1X3: return "RVV_FLOAT32M1X3";
    case BuiltinTypeKind::RVV_FLOAT32M1X4: return "RVV_FLOAT32M1X4";
    case BuiltinTypeKind::RVV_FLOAT32M1X5: return "RVV_FLOAT32M1X5";
    case BuiltinTypeKind::RVV_FLOAT32M1X6: return "RVV_FLOAT32M1X6";
    case BuiltinTypeKind::RVV_FLOAT32M1X7: return "RVV_FLOAT32M1X7";
    case BuiltinTypeKind::RVV_FLOAT32M1X8: return "RVV_FLOAT32M1X8";
    case BuiltinTypeKind::RVV_FLOAT32M2X2: return "RVV_FLOAT32M2X2";
    case BuiltinTypeKind::RVV_FLOAT32M2X3: return "RVV_FLOAT32M2X3";
    case BuiltinTypeKind::RVV_FLOAT32M2X4: return "RVV_FLOAT32M2X4";
    case BuiltinTypeKind::RVV_FLOAT32M4X2: return "RVV_FLOAT32M4X2";
    case BuiltinTypeKind::RVV_FLOAT64M1X2: return "RVV_FLOAT64M1X2";
    case BuiltinTypeKind::RVV_FLOAT64M1X3: return "RVV_FLOAT64M1X3";
    case BuiltinTypeKind::RVV_FLOAT64M1X4: return "RVV_FLOAT64M1X4";
    case BuiltinTypeKind::RVV_FLOAT64M1X5: return "RVV_FLOAT64M1X5";
    case BuiltinTypeKind::RVV_FLOAT64M1X6: return "RVV_FLOAT64M1X6";
    case BuiltinTypeKind::RVV_FLOAT64M1X7: return "RVV_FLOAT64M1X7";
    case BuiltinTypeKind::RVV_FLOAT64M1X8: return "RVV_FLOAT64M1X8";
    case BuiltinTypeKind::RVV_FLOAT64M2X2: return "RVV_FLOAT64M2X2";
    case BuiltinTypeKind::RVV_FLOAT64M2X3: return "RVV_FLOAT64M2X3";
    case BuiltinTypeKind::RVV_FLOAT64M2X4: return "RVV_FLOAT64M2X4";
    case BuiltinTypeKind::RVV_FLOAT64M4X2: return "RVV_FLOAT64M4X2";
    case BuiltinTypeKind::RVV_B_FLOAT16MF4X2: return "RVV_B_FLOAT16MF4X2";
    case BuiltinTypeKind::RVV_B_FLOAT16MF4X3: return "RVV_B_FLOAT16MF4X3";
    case BuiltinTypeKind::RVV_B_FLOAT16MF4X4: return "RVV_B_FLOAT16MF4X4";
    case BuiltinTypeKind::RVV_B_FLOAT16MF4X5: return "RVV_B_FLOAT16MF4X5";
    case BuiltinTypeKind::RVV_B_FLOAT16MF4X6: return "RVV_B_FLOAT16MF4X6";
    case BuiltinTypeKind::RVV_B_FLOAT16MF4X7: return "RVV_B_FLOAT16MF4X7";
    case BuiltinTypeKind::RVV_B_FLOAT16MF4X8: return "RVV_B_FLOAT16MF4X8";
    case BuiltinTypeKind::RVV_B_FLOAT16MF2X2: return "RVV_B_FLOAT16MF2X2";
    case BuiltinTypeKind::RVV_B_FLOAT16MF2X3: return "RVV_B_FLOAT16MF2X3";
    case BuiltinTypeKind::RVV_B_FLOAT16MF2X4: return "RVV_B_FLOAT16MF2X4";
    case BuiltinTypeKind::RVV_B_FLOAT16MF2X5: return "RVV_B_FLOAT16MF2X5";
    case BuiltinTypeKind::RVV_B_FLOAT16MF2X6: return "RVV_B_FLOAT16MF2X6";
    case BuiltinTypeKind::RVV_B_FLOAT16MF2X7: return "RVV_B_FLOAT16MF2X7";
    case BuiltinTypeKind::RVV_B_FLOAT16MF2X8: return "RVV_B_FLOAT16MF2X8";
    case BuiltinTypeKind::RVV_B_FLOAT16M1X2: return "RVV_B_FLOAT16M1X2";
    case BuiltinTypeKind::RVV_B_FLOAT16M1X3: return "RVV_B_FLOAT16M1X3";
    case BuiltinTypeKind::RVV_B_FLOAT16M1X4: return "RVV_B_FLOAT16M1X4";
    case BuiltinTypeKind::RVV_B_FLOAT16M1X5: return "RVV_B_FLOAT16M1X5";
    case BuiltinTypeKind::RVV_B_FLOAT16M1X6: return "RVV_B_FLOAT16M1X6";
    case BuiltinTypeKind::RVV_B_FLOAT16M1X7: return "RVV_B_FLOAT16M1X7";
    case BuiltinTypeKind::RVV_B_FLOAT16M1X8: return "RVV_B_FLOAT16M1X8";
    case BuiltinTypeKind::RVV_B_FLOAT16M2X2: return "RVV_B_FLOAT16M2X2";
    case BuiltinTypeKind::RVV_B_FLOAT16M2X3: return "RVV_B_FLOAT16M2X3";
    case BuiltinTypeKind::RVV_B_FLOAT16M2X4: return "RVV_B_FLOAT16M2X4";
    case BuiltinTypeKind::RVV_B_FLOAT16M4X2: return "RVV_B_FLOAT16M4X2";
    case BuiltinTypeKind::WASM_EXTERN_REFERENCE: return "WASM_EXTERN_REFERENCE";
    case BuiltinTypeKind::VOID: return "VOID";
    case BuiltinTypeKind::BOOLEAN: return "BOOLEAN";
    case BuiltinTypeKind::CHARACTER_U: return "CHARACTER_U";
    case BuiltinTypeKind::U_CHAR: return "U_CHAR";
    case BuiltinTypeKind::W_CHAR_U: return "W_CHAR_U";
    case BuiltinTypeKind::CHAR8: return "CHAR8";
    case BuiltinTypeKind::CHAR16: return "CHAR16";
    case BuiltinTypeKind::CHAR32: return "CHAR32";
    case BuiltinTypeKind::U_SHORT: return "U_SHORT";
    case BuiltinTypeKind::U_INT: return "U_INT";
    case BuiltinTypeKind::U_LONG: return "U_LONG";
    case BuiltinTypeKind::U_LONG_LONG: return "U_LONG_LONG";
    case BuiltinTypeKind::U_INT128: return "U_INT128";
    case BuiltinTypeKind::CHARACTER_S: return "CHARACTER_S";
    case BuiltinTypeKind::S_CHAR: return "S_CHAR";
    case BuiltinTypeKind::W_CHAR_S: return "W_CHAR_S";
    case BuiltinTypeKind::SHORT: return "SHORT";
    case BuiltinTypeKind::INT: return "INT";
    case BuiltinTypeKind::LONG: return "LONG";
    case BuiltinTypeKind::LONG_LONG: return "LONG_LONG";
    case BuiltinTypeKind::INT128: return "INT128";
    case BuiltinTypeKind::SHORT_ACCUM: return "SHORT_ACCUM";
    case BuiltinTypeKind::ACCUM: return "ACCUM";
    case BuiltinTypeKind::LONG_ACCUM: return "LONG_ACCUM";
    case BuiltinTypeKind::U_SHORT_ACCUM: return "U_SHORT_ACCUM";
    case BuiltinTypeKind::U_ACCUM: return "U_ACCUM";
    case BuiltinTypeKind::U_LONG_ACCUM: return "U_LONG_ACCUM";
    case BuiltinTypeKind::SHORT_FRACT: return "SHORT_FRACT";
    case BuiltinTypeKind::FRACT: return "FRACT";
    case BuiltinTypeKind::LONG_FRACT: return "LONG_FRACT";
    case BuiltinTypeKind::U_SHORT_FRACT: return "U_SHORT_FRACT";
    case BuiltinTypeKind::U_FRACT: return "U_FRACT";
    case BuiltinTypeKind::U_LONG_FRACT: return "U_LONG_FRACT";
    case BuiltinTypeKind::SAT_SHORT_ACCUM: return "SAT_SHORT_ACCUM";
    case BuiltinTypeKind::SAT_ACCUM: return "SAT_ACCUM";
    case BuiltinTypeKind::SAT_LONG_ACCUM: return "SAT_LONG_ACCUM";
    case BuiltinTypeKind::SAT_U_SHORT_ACCUM: return "SAT_U_SHORT_ACCUM";
    case BuiltinTypeKind::SAT_U_ACCUM: return "SAT_U_ACCUM";
    case BuiltinTypeKind::SAT_U_LONG_ACCUM: return "SAT_U_LONG_ACCUM";
    case BuiltinTypeKind::SAT_SHORT_FRACT: return "SAT_SHORT_FRACT";
    case BuiltinTypeKind::SAT_FRACT: return "SAT_FRACT";
    case BuiltinTypeKind::SAT_LONG_FRACT: return "SAT_LONG_FRACT";
    case BuiltinTypeKind::SAT_U_SHORT_FRACT: return "SAT_U_SHORT_FRACT";
    case BuiltinTypeKind::SAT_U_FRACT: return "SAT_U_FRACT";
    case BuiltinTypeKind::SAT_U_LONG_FRACT: return "SAT_U_LONG_FRACT";
    case BuiltinTypeKind::HALF: return "HALF";
    case BuiltinTypeKind::FLOAT: return "FLOAT";
    case BuiltinTypeKind::DOUBLE: return "DOUBLE";
    case BuiltinTypeKind::LONG_DOUBLE: return "LONG_DOUBLE";
    case BuiltinTypeKind::FLOAT16: return "FLOAT16";
    case BuiltinTypeKind::B_FLOAT16: return "B_FLOAT16";
    case BuiltinTypeKind::FLOAT128: return "FLOAT128";
    case BuiltinTypeKind::IBM128: return "IBM128";
    case BuiltinTypeKind::NULL_POINTER: return "NULL_POINTER";
    case BuiltinTypeKind::OBJ_C_ID: return "OBJ_C_ID";
    case BuiltinTypeKind::OBJ_C_CLASS: return "OBJ_C_CLASS";
    case BuiltinTypeKind::OBJ_C_SEL: return "OBJ_C_SEL";
    case BuiltinTypeKind::OCL_SAMPLER: return "OCL_SAMPLER";
    case BuiltinTypeKind::OCL_EVENT: return "OCL_EVENT";
    case BuiltinTypeKind::OCL_CLK_EVENT: return "OCL_CLK_EVENT";
    case BuiltinTypeKind::OCL_QUEUE: return "OCL_QUEUE";
    case BuiltinTypeKind::OCL_RESERVE_ID: return "OCL_RESERVE_ID";
    case BuiltinTypeKind::DEPENDENT: return "DEPENDENT";
    case BuiltinTypeKind::OVERLOAD: return "OVERLOAD";
    case BuiltinTypeKind::BOUND_MEMBER: return "BOUND_MEMBER";
    case BuiltinTypeKind::PSEUDO_OBJECT: return "PSEUDO_OBJECT";
    case BuiltinTypeKind::UNKNOWN_ANY: return "UNKNOWN_ANY";
    case BuiltinTypeKind::BUILTIN_FN: return "BUILTIN_FN";
    case BuiltinTypeKind::ARC_UNBRIDGED_CAST: return "ARC_UNBRIDGED_CAST";
    case BuiltinTypeKind::INCOMPLETE_MATRIX_INDEX: return "INCOMPLETE_MATRIX_INDEX";
    case BuiltinTypeKind::OMP_ARRAY_SECTION: return "OMP_ARRAY_SECTION";
    case BuiltinTypeKind::OMP_ARRAY_SHAPING: return "OMP_ARRAY_SHAPING";
    case BuiltinTypeKind::OMP_ITERATOR: return "OMP_ITERATOR";
    case BuiltinTypeKind::UNRESOLVED: return "UNRESOLVED";
    default: return "<invalid>";
  }
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx
