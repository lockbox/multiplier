// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

#pragma once

#include "PendingFragment.h"

namespace pasta {
class File;
}  // namespace pasta
namespace indexer {

// Provides entity IDs and offsets to the serialization code.
class EntityMapper final {
 public:
  EntityIdMap &entity_ids;

  FileIdMap &file_ids;

  const PendingFragment &fragment;

  inline explicit EntityMapper(
      EntityIdMap &entity_ids_, FileIdMap &file_ids_,
      const PendingFragment &fragment_)
      : entity_ids(entity_ids_),
        file_ids(file_ids_),
        fragment(fragment_) {}

  mx::FileId FileId(const pasta::File &file);
  mx::RawEntityId ParentDeclId(const pasta::Decl &entity);
  mx::RawEntityId ParentDeclId(const pasta::Stmt &entity);
  mx::RawEntityId ParentStmtId(const pasta::Decl &entity);
  mx::RawEntityId ParentStmtId(const pasta::Stmt &entity);
  mx::RawEntityId EntityId(const pasta::Decl &entity);
  mx::RawEntityId EntityId(const pasta::Stmt &entity);
  mx::RawEntityId EntityId(const pasta::Token &entity);
  mx::RawEntityId EntityId(const pasta::FileToken &entity);
  mx::RawEntityId EntityId(const pasta::Type &entity);

  uint32_t PseudoId(const pasta::TemplateArgument &pseudo);
  uint32_t PseudoId(const pasta::TemplateParameterList &pseudo);
  uint32_t PseudoId(const pasta::CXXBaseSpecifier &pseudo);
};

}  // namespace indexer