// Copyright (c) 2023-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

#include <gap/core/generator.hpp>
#include <memory>
#include <optional>

namespace mlir {
class Region;
}  // namespace mlir
namespace mx::ir {

class Block;
class Argument;
class Operation;
class SourceIRImpl;

enum BasicBlockOrder {
  PRE_ORDER,
  POST_ORDER
};

// A region is owned by an operation (not all operations own regions)
// and contain one or more blocks.
class Region final {
 private:
  friend class Operation;
  friend class Block;
  friend class Argument;

  std::shared_ptr<const SourceIRImpl> module_;
  mlir::Region *region_;

 public:

  inline Region(std::shared_ptr<const SourceIRImpl> module,
                mlir::Region *region)
      : module_(std::move(module)),
        region_(region) {}

  inline Region(std::shared_ptr<const SourceIRImpl> module,
                mlir::Region &region)
      : Region(std::move(module), &region) {}

  static Region containing(const Block &);

  // In general, all operations are contained inside a region, except the
  // module operation.
  static std::optional<Region> containing(const Operation &);

  // Regions have one or more basic blocks.
  unsigned num_blocks(void) const noexcept;
  std::optional<Block> nth_block(unsigned) const noexcept;
  gap::generator<Block> blocks(void) const & noexcept;
  gap::generator<Block> reverse_blocks(void) const & noexcept;

  // All regions have a designated entry block. The arguments to that entry
  // block are also the arguments to the region.
  Block entry_block(void) const noexcept;
  unsigned num_entry_block_arguments(void) const noexcept;
  std::optional<Argument> nth_entry_block_argument(unsigned) const noexcept;
  gap::generator<Argument> entry_block_arguments(void) const & noexcept;
};

}  // namespace mx::ir