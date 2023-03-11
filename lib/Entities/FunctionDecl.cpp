// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#include <multiplier/Entities/FunctionDecl.h>

#include <multiplier/Entities/CXXConstructorDecl.h>
#include <multiplier/Entities/CXXConversionDecl.h>
#include <multiplier/Entities/CXXDeductionGuideDecl.h>
#include <multiplier/Entities/CXXDestructorDecl.h>
#include <multiplier/Entities/CXXMethodDecl.h>
#include <multiplier/Entities/CallExpr.h>
#include <multiplier/Entities/Decl.h>
#include <multiplier/Entities/DeclaratorDecl.h>
#include <multiplier/Entities/FunctionTemplateDecl.h>
#include <multiplier/Entities/NamedDecl.h>
#include <multiplier/Entities/ParmVarDecl.h>
#include <multiplier/Entities/Stmt.h>
#include <multiplier/Entities/Token.h>
#include <multiplier/Entities/Type.h>
#include <multiplier/Entities/ValueDecl.h>

#include "../API.h"
#include "../Fragment.h"
#include "../Decl.h"

namespace mx {
#if !defined(MX_DISABLE_API) || defined(MX_ENABLE_API)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wuseless-cast"

gap::generator<FunctionDecl> FunctionDecl::containing(const Token &tok) {
  for (auto ctx = tok.context(); ctx.has_value(); ctx = ctx->parent()) {
    if (auto d = FunctionDecl::from(*ctx)) {
      co_yield *d;
    }
  }
}

bool FunctionDecl::contains(const Token &tok) const {
  auto id_ = id();
  for (auto &parent : FunctionDecl::containing(tok)) {
    if (parent.id() == id_) { return true; }
  }
  return false;
}

gap::generator<FunctionDecl> FunctionDecl::containing(const Decl &decl) {
  for (auto ancestor = decl.parent_declaration(); ancestor.has_value();
       ancestor = ancestor->parent_declaration()) {
    if (auto d = FunctionDecl::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<FunctionDecl> FunctionDecl::containing(const std::optional<Decl> &decl) {
  if (decl.has_value()) {
    for (auto res : containing(decl.value())) {
      co_yield res;
    }
  }
}

gap::generator<FunctionDecl> FunctionDecl::containing(const Stmt &stmt) {
  for (auto ancestor = stmt.parent_declaration(); ancestor.has_value();
       ancestor = ancestor->parent_declaration()) {
    if (auto d = FunctionDecl::from(*ancestor)) {
      co_yield *d;
    }
  }
}

gap::generator<FunctionDecl> FunctionDecl::containing(const std::optional<Stmt> &stmt) {
  if (stmt.has_value()) {
    for (auto res : containing(stmt.value())) {
      co_yield res;
    }
  }
}

bool FunctionDecl::contains(const Decl &decl) {
  for (auto &parent : FunctionDecl::containing(decl)) {
    if (parent == *this) { return true; }
  }
  return false;
}

bool FunctionDecl::contains(const Stmt &stmt) {
  for (auto &parent : FunctionDecl::containing(stmt)) {
    if (parent == *this) { return true; }
  }
  return false;
}

gap::generator<FunctionDecl> FunctionDecl::redeclarations(void) const & {
  for (Decl r : Decl::redeclarations()) {
    if (std::optional<FunctionDecl> dr = FunctionDecl::from(r)) {
      co_yield std::move(dr.value());
      continue;
    }
    assert(false);
  // Wrong type?
  }
  co_return;
}

std::optional<FunctionDecl> FunctionDecl::by_id(const Index &index, EntityId eid) {
  VariantId vid = eid.Unpack();
  if (std::holds_alternative<DeclId>(vid)) {
    return FunctionDecl::from(index.declaration(eid.Pack()));
  } else if (std::holds_alternative<InvalidId>(vid)) {
    assert(eid.Pack() == kInvalidEntityId);
  }
  return std::nullopt;
}

static const DeclKind kFunctionDeclDerivedKinds[] = {
    FunctionDecl::static_kind(),
    CXXDeductionGuideDecl::static_kind(),
    CXXMethodDecl::static_kind(),
    CXXConstructorDecl::static_kind(),
    CXXConversionDecl::static_kind(),
    CXXDestructorDecl::static_kind(),
};

std::optional<FunctionDecl> FunctionDecl::from(const Decl &parent) {
  switch (parent.kind()) {
    case FunctionDecl::static_kind():
    case CXXDeductionGuideDecl::static_kind():
    case CXXMethodDecl::static_kind():
    case CXXConstructorDecl::static_kind():
    case CXXConversionDecl::static_kind():
    case CXXDestructorDecl::static_kind():
      return reinterpret_cast<const FunctionDecl &>(parent);
    default:
      return std::nullopt;
  }
}

gap::generator<FunctionDecl> FunctionDecl::in(const Index &index) {
  const EntityProvider::Ptr ep = entity_provider_of(index);
  for (DeclKind k : kFunctionDeclDerivedKinds) {
    for (DeclImplPtr eptr : ep->DeclsFor(ep, k)) {
      if (std::optional<FunctionDecl> e = FunctionDecl::from(Decl(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<FunctionDecl> FunctionDecl::in(const Fragment &frag) {
  const EntityProvider::Ptr ep = entity_provider_of(frag);
  PackedFragmentId frag_id = frag.id();
  for (DeclKind k : kFunctionDeclDerivedKinds) {
    for (DeclImplPtr eptr : ep->DeclsFor(ep, k, frag_id)) {
      if (std::optional<FunctionDecl> e = FunctionDecl::from(Decl(std::move(eptr)))) {
        co_yield std::move(e.value());
      }
    }
  }
}

gap::generator<FunctionDecl> FunctionDecl::in(const File &file) {
  const EntityProvider::Ptr ep = entity_provider_of(file);
  PackedFileId file_id = file.id();
  for (PackedFragmentId frag_id : ep->ListFragmentsInFile(ep, file_id)) {
    for (DeclKind k : kFunctionDeclDerivedKinds) {
      for (DeclImplPtr eptr : ep->DeclsFor(ep, k, frag_id)) {
        if (std::optional<FunctionDecl> e = FunctionDecl::from(Decl(std::move(eptr)))) {
          co_yield std::move(e.value());
        }
      }
    }
  }
}

std::optional<FunctionDecl> FunctionDecl::from(const Reference &r) {
  return FunctionDecl::from(r.as_declaration());
}

std::optional<FunctionDecl> FunctionDecl::from(const TokenContext &t) {
  return FunctionDecl::from(t.as_declaration());
}

bool FunctionDecl::uses_fp_intrin(void) const {
  return impl->reader.getVal71();
}

std::optional<bool> FunctionDecl::does_declaration_force_externally_visible_definition(void) const {
  if (!impl->reader.getVal88()) {
    return std::nullopt;
  } else {
    return static_cast<bool>(impl->reader.getVal72());
  }
  return std::nullopt;
}

bool FunctionDecl::does_this_declaration_have_a_body(void) const {
  return impl->reader.getVal89();
}

Type FunctionDecl::call_result_type(void) const {
  RawEntityId eid = impl->reader.getVal73();
  return Type(impl->ep->TypeFor(impl->ep, eid));
}

ConstexprSpecKind FunctionDecl::constexpr_kind(void) const {
  return static_cast<ConstexprSpecKind>(impl->reader.getVal74());
}

Type FunctionDecl::declared_return_type(void) const {
  RawEntityId eid = impl->reader.getVal75();
  return Type(impl->ep->TypeFor(impl->ep, eid));
}

std::optional<FunctionTemplateDecl> FunctionDecl::described_function_template(void) const {
  if (true) {
    RawEntityId eid = impl->reader.getVal76();
    if (eid == kInvalidEntityId) {
      return std::nullopt;
    }
    if (auto eptr = impl->ep->DeclFor(impl->ep, eid)) {
      return FunctionTemplateDecl::from(Decl(std::move(eptr)));
    }
  }
  return std::nullopt;
}

Token FunctionDecl::ellipsis_token(void) const {
  return impl->ep->TokenFor(impl->ep, impl->reader.getVal77());
}

TokenRange FunctionDecl::exception_spec_source_range(void) const {
  auto &ep = impl->ep;
  auto fragment = ep->FragmentFor(ep, impl->fragment_id);
  return fragment->TokenRangeFor(fragment, impl->reader.getVal78(), impl->reader.getVal80());
}

ExceptionSpecificationType FunctionDecl::exception_spec_type(void) const {
  return static_cast<ExceptionSpecificationType>(impl->reader.getVal79());
}

std::optional<FunctionDecl> FunctionDecl::instantiated_from_declaration(void) const {
  if (true) {
    RawEntityId eid = impl->reader.getVal85();
    if (eid == kInvalidEntityId) {
      return std::nullopt;
    }
    if (auto eptr = impl->ep->DeclFor(impl->ep, eid)) {
      return FunctionDecl::from(Decl(std::move(eptr)));
    }
  }
  return std::nullopt;
}

std::optional<FunctionDecl> FunctionDecl::instantiated_from_member_function(void) const {
  if (true) {
    RawEntityId eid = impl->reader.getVal123();
    if (eid == kInvalidEntityId) {
      return std::nullopt;
    }
    if (auto eptr = impl->ep->DeclFor(impl->ep, eid)) {
      return FunctionDecl::from(Decl(std::move(eptr)));
    }
  }
  return std::nullopt;
}

LanguageLinkage FunctionDecl::language_linkage(void) const {
  return static_cast<LanguageLinkage>(impl->reader.getVal81());
}

MultiVersionKind FunctionDecl::multi_version_kind(void) const {
  return static_cast<MultiVersionKind>(impl->reader.getVal82());
}

std::optional<unsigned> FunctionDecl::odr_hash(void) const {
  if (!impl->reader.getVal90()) {
    return std::nullopt;
  } else {
    return static_cast<unsigned>(impl->reader.getVal137());
  }
  return std::nullopt;
}

OverloadedOperatorKind FunctionDecl::overloaded_operator(void) const {
  return static_cast<OverloadedOperatorKind>(impl->reader.getVal83());
}

TokenRange FunctionDecl::parameters_source_range(void) const {
  auto &ep = impl->ep;
  auto fragment = ep->FragmentFor(ep, impl->fragment_id);
  return fragment->TokenRangeFor(fragment, impl->reader.getVal124(), impl->reader.getVal125());
}

Token FunctionDecl::point_of_instantiation(void) const {
  return impl->ep->TokenFor(impl->ep, impl->reader.getVal127());
}

std::optional<FunctionTemplateDecl> FunctionDecl::primary_template(void) const {
  if (true) {
    RawEntityId eid = impl->reader.getVal128();
    if (eid == kInvalidEntityId) {
      return std::nullopt;
    }
    if (auto eptr = impl->ep->DeclFor(impl->ep, eid)) {
      return FunctionTemplateDecl::from(Decl(std::move(eptr)));
    }
  }
  return std::nullopt;
}

Type FunctionDecl::return_type(void) const {
  RawEntityId eid = impl->reader.getVal136();
  return Type(impl->ep->TypeFor(impl->ep, eid));
}

TokenRange FunctionDecl::return_type_source_range(void) const {
  auto &ep = impl->ep;
  auto fragment = ep->FragmentFor(ep, impl->fragment_id);
  return fragment->TokenRangeFor(fragment, impl->reader.getVal138(), impl->reader.getVal139());
}

StorageClass FunctionDecl::storage_class(void) const {
  return static_cast<StorageClass>(impl->reader.getVal84());
}

std::optional<FunctionDecl> FunctionDecl::template_instantiation_pattern(void) const {
  if (true) {
    RawEntityId eid = impl->reader.getVal140();
    if (eid == kInvalidEntityId) {
      return std::nullopt;
    }
    if (auto eptr = impl->ep->DeclFor(impl->ep, eid)) {
      return FunctionDecl::from(Decl(std::move(eptr)));
    }
  }
  return std::nullopt;
}

TemplateSpecializationKind FunctionDecl::template_specialization_kind(void) const {
  return static_cast<TemplateSpecializationKind>(impl->reader.getVal86());
}

TemplateSpecializationKind FunctionDecl::template_specialization_kind_for_instantiation(void) const {
  return static_cast<TemplateSpecializationKind>(impl->reader.getVal87());
}

FunctionDeclTemplatedKind FunctionDecl::templated_kind(void) const {
  return static_cast<FunctionDeclTemplatedKind>(impl->reader.getVal126());
}

bool FunctionDecl::has_implicit_return_zero(void) const {
  return impl->reader.getVal91();
}

bool FunctionDecl::has_inherited_prototype(void) const {
  return impl->reader.getVal92();
}

bool FunctionDecl::has_one_parameter_or_default_arguments(void) const {
  return impl->reader.getVal93();
}

bool FunctionDecl::has_prototype(void) const {
  return impl->reader.getVal94();
}

bool FunctionDecl::has_skipped_body(void) const {
  return impl->reader.getVal95();
}

bool FunctionDecl::has_trivial_body(void) const {
  return impl->reader.getVal96();
}

bool FunctionDecl::has_written_prototype(void) const {
  return impl->reader.getVal97();
}

bool FunctionDecl::instantiation_is_pending(void) const {
  return impl->reader.getVal98();
}

bool FunctionDecl::is_cpu_dispatch_multi_version(void) const {
  return impl->reader.getVal99();
}

bool FunctionDecl::is_cpu_specific_multi_version(void) const {
  return impl->reader.getVal100();
}

bool FunctionDecl::is_consteval(void) const {
  return impl->reader.getVal101();
}

bool FunctionDecl::is_constexpr(void) const {
  return impl->reader.getVal102();
}

bool FunctionDecl::is_constexpr_specified(void) const {
  return impl->reader.getVal103();
}

bool FunctionDecl::is_defaulted(void) const {
  return impl->reader.getVal104();
}

bool FunctionDecl::is_deleted(void) const {
  return impl->reader.getVal105();
}

bool FunctionDecl::is_deleted_as_written(void) const {
  return impl->reader.getVal106();
}

bool FunctionDecl::is_destroying_operator_delete(void) const {
  return impl->reader.getVal107();
}

bool FunctionDecl::is_explicitly_defaulted(void) const {
  return impl->reader.getVal108();
}

bool FunctionDecl::is_extern_c(void) const {
  return impl->reader.getVal109();
}

bool FunctionDecl::is_function_template_specialization(void) const {
  return impl->reader.getVal110();
}

bool FunctionDecl::is_global(void) const {
  return impl->reader.getVal111();
}

bool FunctionDecl::is_implicitly_instantiable(void) const {
  return impl->reader.getVal112();
}

bool FunctionDecl::is_in_extern_c_context(void) const {
  return impl->reader.getVal113();
}

bool FunctionDecl::is_in_extern_cxx_context(void) const {
  return impl->reader.getVal114();
}

bool FunctionDecl::is_ineligible_or_not_selected(void) const {
  return impl->reader.getVal115();
}

bool FunctionDecl::is_inline_builtin_declaration(void) const {
  return impl->reader.getVal116();
}

std::optional<bool> FunctionDecl::is_inline_definition_externally_visible(void) const {
  if (!impl->reader.getVal118()) {
    return std::nullopt;
  } else {
    return static_cast<bool>(impl->reader.getVal117());
  }
  return std::nullopt;
}

bool FunctionDecl::is_inline_specified(void) const {
  return impl->reader.getVal119();
}

bool FunctionDecl::is_inlined(void) const {
  return impl->reader.getVal120();
}

bool FunctionDecl::is_late_template_parsed(void) const {
  return impl->reader.getVal121();
}

std::optional<bool> FunctionDecl::is_ms_extern_inline(void) const {
  if (!impl->reader.getVal129()) {
    return std::nullopt;
  } else {
    return static_cast<bool>(impl->reader.getVal122());
  }
  return std::nullopt;
}

bool FunctionDecl::is_msvcrt_entry_point(void) const {
  return impl->reader.getVal130();
}

bool FunctionDecl::is_main(void) const {
  return impl->reader.getVal131();
}

bool FunctionDecl::is_multi_version(void) const {
  return impl->reader.getVal132();
}

bool FunctionDecl::is_no_return(void) const {
  return impl->reader.getVal133();
}

bool FunctionDecl::is_overloaded_operator(void) const {
  return impl->reader.getVal134();
}

bool FunctionDecl::is_pure(void) const {
  return impl->reader.getVal135();
}

bool FunctionDecl::is_replaceable_global_allocation_function(void) const {
  return impl->reader.getVal141();
}

std::optional<bool> FunctionDecl::is_reserved_global_placement_operator(void) const {
  if (!impl->reader.getVal143()) {
    return std::nullopt;
  } else {
    return static_cast<bool>(impl->reader.getVal142());
  }
  return std::nullopt;
}

bool FunctionDecl::is_static(void) const {
  return impl->reader.getVal144();
}

bool FunctionDecl::is_target_clones_multi_version(void) const {
  return impl->reader.getVal145();
}

bool FunctionDecl::is_target_multi_version(void) const {
  return impl->reader.getVal146();
}

bool FunctionDecl::is_template_instantiation(void) const {
  return impl->reader.getVal147();
}

bool FunctionDecl::is_this_declaration_a_definition(void) const {
  return impl->reader.getVal148();
}

bool FunctionDecl::is_this_declaration_instantiated_from_a_friend_definition(void) const {
  return impl->reader.getVal149();
}

bool FunctionDecl::is_trivial(void) const {
  return impl->reader.getVal150();
}

bool FunctionDecl::is_trivial_for_call(void) const {
  return impl->reader.getVal151();
}

bool FunctionDecl::is_user_provided(void) const {
  return impl->reader.getVal152();
}

bool FunctionDecl::is_variadic(void) const {
  return impl->reader.getVal153();
}

bool FunctionDecl::is_virtual_as_written(void) const {
  return impl->reader.getVal154();
}

unsigned FunctionDecl::num_parameters(void) const {
  return impl->reader.getVal48().size();
}

std::optional<ParmVarDecl> FunctionDecl::nth_parameter(unsigned n) const {
  auto list = impl->reader.getVal48();
  if (n >= list.size()) {
    return std::nullopt;
  }
  const EntityProvider::Ptr &ep = impl->ep;
  auto v = list[n];
  auto e = ep->DeclFor(ep, v);
  if (!e) {
    return std::nullopt;
  }
  return ParmVarDecl::from(Decl(std::move(e)));
}

gap::generator<ParmVarDecl> FunctionDecl::parameters(void) const & {
  auto list = impl->reader.getVal48();
  EntityProvider::Ptr ep = impl->ep;
  for (auto v : list) {
    EntityId id(v);
    if (auto d48 = ep->DeclFor(ep, v)) {
      if (auto e = ParmVarDecl::from(Decl(std::move(d48)))) {
        co_yield std::move(*e);
      }
    }
  }
  co_return;
}

bool FunctionDecl::uses_seh_try(void) const {
  return impl->reader.getVal155();
}

bool FunctionDecl::will_have_body(void) const {
  return impl->reader.getVal156();
}

std::optional<Stmt> FunctionDecl::body(void) const {
  if (true) {
    RawEntityId eid = impl->reader.getVal157();
    if (eid == kInvalidEntityId) {
      return std::nullopt;
    }
    if (auto eptr = impl->ep->StmtFor(impl->ep, eid)) {
      return Stmt(std::move(eptr));
    }
  }
  return std::nullopt;
}

gap::generator<Decl> FunctionDecl::declarations_in_context(void) const & {
  EntityProvider::Ptr ep = impl->ep;
  auto list = impl->reader.getVal58();
  for (auto v : list) {
    if (auto eptr = ep->DeclFor(ep, v)) {
      co_yield std::move(eptr);
    }
  }
}

#pragma GCC diagnostic pop
#endif
}  // namespace mx