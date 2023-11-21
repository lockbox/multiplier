// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

#include <compare>
#include <cstdint>
#include <filesystem>
#include <gap/core/generator.hpp>
#include <memory>
#include <optional>
#include <span>
#include <vector>

#include "../Entity.h"
#include "../Iterator.h"

#include "PseudoKind.h"
#include "TemplateArgumentKind.h"

namespace mx {
class EntityProvider;
class Index;
class File;
class Fragment;
class Reference;
class TemplateArgument;
class TemplateArgumentImpl;
class Token;
class Type;
class ValueDecl;
namespace ir {
class Operation;
class Value;
}  // namespace ir

#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
class TemplateArgument {
 public:
  std::optional<Decl> parent_declaration(void) const;
  std::optional<Stmt> parent_statement(void) const;
 protected:
  friend class Attr;
  friend class Decl;
  friend class File;
  friend class Fragment;
  friend class FragmentImpl;
  friend class Index;
  friend class Macro;
  friend class Reference;
  friend class Stmt;
  friend class TokenContext;
  friend class Type;
  friend class TemplateArgumentImpl;
  friend class ir::Operation;
  friend class ir::Value;

  std::shared_ptr<const TemplateArgumentImpl> impl;
  static std::shared_ptr<EntityProvider> entity_provider_of(const Index &);
  static std::shared_ptr<EntityProvider> entity_provider_of(const Fragment &);
  static std::shared_ptr<EntityProvider> entity_provider_of(const File &);
 public:
  TemplateArgument(TemplateArgument &&) noexcept = default;
  TemplateArgument(const TemplateArgument &) = default;
  TemplateArgument &operator=(TemplateArgument &&) noexcept = default;
  TemplateArgument &operator=(const TemplateArgument &) = default;

  inline bool operator==(const TemplateArgument &rhs) const noexcept {
    return id().Pack() == rhs.id().Pack();
  }

  /* implicit */ inline TemplateArgument(std::shared_ptr<const TemplateArgumentImpl> impl_)
      : impl(std::move(impl_)) {}

  constexpr inline static EntityCategory static_category(void) {
    return EntityCategory::TEMPLATE_ARGUMENT;
  }

  PackedTemplateArgumentId id(void) const;

  inline static std::optional<TemplateArgument> from(const TemplateArgument &self) {
    return self;
  }

  inline static std::optional<TemplateArgument> from(const std::optional<TemplateArgument> &self) {
    return self;
  }

  static std::optional<TemplateArgument> from(const Reference &r);
  static std::optional<TemplateArgument> from(const VariantEntity &e);
  static std::optional<TemplateArgument> from(const TokenContext &t);

  TemplateArgumentKind kind(void) const;
  bool is_empty(void) const;
  bool is_dependent(void) const;
  bool is_instantiation_dependent(void) const;
  bool contains_unexpanded_parameter_pack(void) const;
  bool is_pack_expansion(void) const;
  std::optional<ValueDecl> as_declaration(void) const;
  std::optional<Type> as_type(void) const;
  std::optional<Type> parameter_type_for_declaration(void) const;
  std::optional<Type> null_pointer_type(void) const;
  std::optional<std::vector<TemplateArgument>> pack_elements(void) const;
};

#endif
} // namespace mx