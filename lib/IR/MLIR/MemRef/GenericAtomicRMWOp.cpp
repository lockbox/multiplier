// Copyright (c) 2023-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/IR/MLIR/MemRef/GenericAtomicRMWOp.h>
#include <multiplier/IR/Attribute.h>
#include <multiplier/IR/Block.h>
#include <multiplier/IR/Region.h>
#include <multiplier/IR/Type.h>

#include <mlir/Dialect/SCF/IR/SCF.h>
#include <mlir/Dialect/LLVMIR/LLVMDialect.h>
#include <mlir/Dialect/MemRef/IR/MemRef.h>

namespace mx::ir::memref {
std::optional<GenericAtomicRMWOp> GenericAtomicRMWOp::from(const ::mx::ir::Operation &that) {
  if (that.kind() == OperationKind::MEMREF_GENERIC_ATOMIC_RMW) {
    return reinterpret_cast<const GenericAtomicRMWOp &>(that);
  }
  return std::nullopt;
}

std::optional<GenericAtomicRMWOp> GenericAtomicRMWOp::producing(const ::mx::ir::Value &that) {
  if (auto op = ::mx::ir::Operation::producing(that)) {
    return from(op.value());
  }
  return std::nullopt;
}

::mlir::memref::GenericAtomicRMWOp GenericAtomicRMWOp::underlying_op(void) const noexcept {
  return ::mlir::memref::GenericAtomicRMWOp(this->Operation::op_);
}

gap::generator<::mx::ir::Operand> GenericAtomicRMWOp::indices(void) const {
  auto range = underlying_op().getIndices();
  for (auto val : range) {
    co_yield ::mx::ir::Operand(module_, val.getAsOpaquePointer());
  }
}

::mx::ir::Value GenericAtomicRMWOp::result(void) const {
  auto val = underlying_op().getResult();
  return ::mx::ir::Value(module_, val.getAsOpaquePointer());
}

::mx::ir::Region GenericAtomicRMWOp::atomic_body(void) const {
  auto &val = underlying_op().getAtomicBody();
  return ::mx::ir::Region(module_, val);
}

}  // namespace mx::ir::memref