// Copyright (c) 2022-present, Trail of Bits, Inc.
// All rights reserved.
//
// This source code is licensed in accordance with the terms specified in
// the LICENSE file found in the root directory of this source tree.

// Auto-generated file; do not modify!

#pragma once

namespace pasta {
enum class TokenRole : unsigned short;
enum class DeclKind : unsigned;
enum class AttrKind : unsigned;
enum class AArch64SVEPcsAttrSpelling : unsigned;
enum class AArch64VectorPcsAttrSpelling : unsigned;
enum class AMDGPUFlatWorkGroupSizeAttrSpelling : unsigned;
enum class AMDGPUKernelCallAttrSpelling : unsigned;
enum class AMDGPUNumSGPRAttrSpelling : unsigned;
enum class AMDGPUNumVGPRAttrSpelling : unsigned;
enum class AMDGPUWavesPerEUAttrSpelling : unsigned;
enum class ARMInterruptAttrInterruptType : unsigned;
enum class ARMInterruptAttrSpelling : unsigned;
enum class AVRInterruptAttrSpelling : unsigned;
enum class AVRSignalAttrSpelling : unsigned;
enum class AbiTagAttrSpelling : unsigned;
enum class AcquireCapabilityAttrSpelling : unsigned;
enum class AcquireHandleAttrSpelling : unsigned;
enum class AddressSpaceAttrSpelling : unsigned;
enum class AliasAttrSpelling : unsigned;
enum class AlignedAttrSpelling : unsigned;
enum class AllocAlignAttrSpelling : unsigned;
enum class AllocSizeAttrSpelling : unsigned;
enum class AlwaysDestroyAttrSpelling : unsigned;
enum class AlwaysInlineAttrSpelling : unsigned;
enum class AnnotateAttrSpelling : unsigned;
enum class AnnotateTypeAttrSpelling : unsigned;
enum class AnyX86InterruptAttrSpelling : unsigned;
enum class AnyX86NoCallerSavedRegistersAttrSpelling : unsigned;
enum class AnyX86NoCfCheckAttrSpelling : unsigned;
enum class ArcWeakrefUnavailableAttrSpelling : unsigned;
enum class ArgumentWithTypeTagAttrSpelling : unsigned;
enum class ArmBuiltinAliasAttrSpelling : unsigned;
enum class ArmMveStrictPolymorphismAttrSpelling : unsigned;
enum class ArrayTypeArraySizeModifier : unsigned;
enum class ArtificialAttrSpelling : unsigned;
enum class AsmLabelAttrSpelling : unsigned;
enum class AssertCapabilityAttrSpelling : unsigned;
enum class AssumeAlignedAttrSpelling : unsigned;
enum class AssumptionAttrSpelling : unsigned;
enum class AtomicExprAtomicOp : unsigned;
enum class AvailabilityAttrSpelling : unsigned;
enum class BPFPreserveAccessIndexAttrSpelling : unsigned;
enum class BTFDeclTagAttrSpelling : unsigned;
enum class BTFTypeTagAttrSpelling : unsigned;
enum class BlocksAttrBlockType : unsigned;
enum class BlocksAttrSpelling : unsigned;
enum class BuiltinAliasAttrSpelling : unsigned;
enum class BuiltinTypeKind : unsigned;
enum class CDeclAttrSpelling : unsigned;
enum class CFAuditedTransferAttrSpelling : unsigned;
enum class CFConsumedAttrSpelling : unsigned;
enum class CFGuardAttrGuardArg : unsigned;
enum class CFICanonicalJumpTableAttrSpelling : unsigned;
enum class CFReturnsNotRetainedAttrSpelling : unsigned;
enum class CFReturnsRetainedAttrSpelling : unsigned;
enum class CFUnknownTransferAttrSpelling : unsigned;
enum class CPUDispatchAttrSpelling : unsigned;
enum class CPUSpecificAttrSpelling : unsigned;
enum class CUDAConstantAttrSpelling : unsigned;
enum class CUDADeviceAttrSpelling : unsigned;
enum class CUDADeviceBuiltinSurfaceTypeAttrSpelling : unsigned;
enum class CUDADeviceBuiltinTextureTypeAttrSpelling : unsigned;
enum class CUDAGlobalAttrSpelling : unsigned;
enum class CUDAHostAttrSpelling : unsigned;
enum class CUDALaunchBoundsAttrSpelling : unsigned;
enum class CUDASharedAttrSpelling : unsigned;
enum class CXX11NoReturnAttrSpelling : unsigned;
enum class CXXConstructExprConstructionKind : unsigned;
enum class CXXNewExprInitializationStyle : unsigned;
enum class CXXRecordDeclLambdaDependencyKind : unsigned;
enum class CallExprADLCallKind : bool;
enum class CallableWhenAttrConsumedState : unsigned;
enum class CallableWhenAttrSpelling : unsigned;
enum class CallbackAttrSpelling : unsigned;
enum class CalledOnceAttrSpelling : unsigned;
enum class CapabilityAttrSpelling : unsigned;
enum class CapturedStmtVariableCaptureKind : unsigned;
enum class CarriesDependencyAttrSpelling : unsigned;
enum class CharacterLiteralCharacterKind : unsigned;
enum class CleanupAttrSpelling : unsigned;
enum class ColdAttrSpelling : unsigned;
enum class CommonAttrSpelling : unsigned;
enum class ConstAttrSpelling : unsigned;
enum class ConstInitAttrSpelling : unsigned;
enum class ConstantExprResultStorageKind : unsigned;
enum class ConstructorAttrSpelling : unsigned;
enum class ConsumableAttrConsumedState : unsigned;
enum class ConsumableAttrSpelling : unsigned;
enum class ConsumableAutoCastAttrSpelling : unsigned;
enum class ConsumableSetOnReadAttrSpelling : unsigned;
enum class ConvergentAttrSpelling : unsigned;
enum class DLLExportAttrSpelling : unsigned;
enum class DLLImportAttrSpelling : unsigned;
enum class DeclFriendObjectKind : unsigned;
enum class DeclIdentifierNamespace : unsigned;
enum class DeclModuleOwnershipKind : unsigned;
enum class DeclObjCDeclQualifier : unsigned;
enum class DeprecatedAttrSpelling : unsigned;
enum class DestructorAttrSpelling : unsigned;
enum class DiagnoseAsBuiltinAttrSpelling : unsigned;
enum class DiagnoseIfAttrDiagnosticType : unsigned;
enum class DisableSanitizerInstrumentationAttrSpelling : unsigned;
enum class DisableTailCallsAttrSpelling : unsigned;
enum class EnforceTCBAttrSpelling : unsigned;
enum class EnforceTCBLeafAttrSpelling : unsigned;
enum class EnumExtensibilityAttrKind : unsigned;
enum class EnumExtensibilityAttrSpelling : unsigned;
enum class ErrorAttrSpelling : unsigned;
enum class ExcludeFromExplicitInstantiationAttrSpelling : unsigned;
enum class ExprConstantExprKind : int;
enum class ExprLValueClassification : unsigned;
enum class ExprNullPointerConstantKind : unsigned;
enum class ExprNullPointerConstantValueDependence : unsigned;
enum class ExprSideEffectsKind : unsigned;
enum class ExprisModifiableLvalueResult : unsigned;
enum class ExternalSourceSymbolAttrSpelling : unsigned;
enum class FallThroughAttrSpelling : unsigned;
enum class FastCallAttrSpelling : unsigned;
enum class FinalAttrSpelling : unsigned;
enum class FlagEnumAttrSpelling : unsigned;
enum class FlattenAttrSpelling : unsigned;
enum class FormatArgAttrSpelling : unsigned;
enum class FormatAttrSpelling : unsigned;
enum class FunctionDeclTemplatedKind : unsigned;
enum class FunctionReturnThunksAttrKind : unsigned;
enum class FunctionReturnThunksAttrSpelling : unsigned;
enum class GNUInlineAttrSpelling : unsigned;
enum class GuardedVarAttrSpelling : unsigned;
enum class HIPManagedAttrSpelling : unsigned;
enum class HLSLShaderAttrShaderType : unsigned;
enum class HotAttrSpelling : unsigned;
enum class IBActionAttrSpelling : unsigned;
enum class IBOutletAttrSpelling : unsigned;
enum class IBOutletCollectionAttrSpelling : unsigned;
enum class IFuncAttrSpelling : unsigned;
enum class ImplicitCastExprOnStack : unsigned;
enum class ImplicitParamDeclImplicitParamKind : unsigned;
enum class InitPriorityAttrSpelling : unsigned;
enum class IntelOclBiccAttrSpelling : unsigned;
enum class InternalLinkageAttrSpelling : unsigned;
enum class LTOVisibilityPublicAttrSpelling : unsigned;
enum class LeafAttrSpelling : unsigned;
enum class LifetimeBoundAttrSpelling : unsigned;
enum class LikelyAttrSpelling : unsigned;
enum class LinkageSpecDeclLanguageIDs : unsigned;
enum class LoaderUninitializedAttrSpelling : unsigned;
enum class LoopHintAttrLoopHintState : unsigned;
enum class LoopHintAttrOptionType : unsigned;
enum class LoopHintAttrSpelling : unsigned;
enum class MIGServerRoutineAttrSpelling : unsigned;
enum class MSABIAttrSpelling : unsigned;
enum class MSInheritanceAttrSpelling : unsigned;
enum class MSP430InterruptAttrSpelling : unsigned;
enum class MSStructAttrSpelling : unsigned;
enum class MayAliasAttrSpelling : unsigned;
enum class MicroMipsAttrSpelling : unsigned;
enum class MinSizeAttrSpelling : unsigned;
enum class MinVectorWidthAttrSpelling : unsigned;
enum class Mips16AttrSpelling : unsigned;
enum class MipsInterruptAttrInterruptType : unsigned;
enum class MipsInterruptAttrSpelling : unsigned;
enum class MipsLongCallAttrSpelling : unsigned;
enum class MipsShortCallAttrSpelling : unsigned;
enum class ModeAttrSpelling : unsigned;
enum class MustTailAttrSpelling : unsigned;
enum class NSConsumedAttrSpelling : unsigned;
enum class NSConsumesSelfAttrSpelling : unsigned;
enum class NSReturnsAutoreleasedAttrSpelling : unsigned;
enum class NSReturnsNotRetainedAttrSpelling : unsigned;
enum class NSReturnsRetainedAttrSpelling : unsigned;
enum class NakedAttrSpelling : unsigned;
enum class NamedDeclExplicitVisibilityKind : unsigned;
enum class NoBuiltinAttrSpelling : unsigned;
enum class NoCommonAttrSpelling : unsigned;
enum class NoDebugAttrSpelling : unsigned;
enum class NoDerefAttrSpelling : unsigned;
enum class NoDestroyAttrSpelling : unsigned;
enum class NoDuplicateAttrSpelling : unsigned;
enum class NoEscapeAttrSpelling : unsigned;
enum class NoInlineAttrSpelling : unsigned;
enum class NoInstrumentFunctionAttrSpelling : unsigned;
enum class NoMergeAttrSpelling : unsigned;
enum class NoMicroMipsAttrSpelling : unsigned;
enum class NoMips16AttrSpelling : unsigned;
enum class NoProfileFunctionAttrSpelling : unsigned;
enum class NoRandomizeLayoutAttrSpelling : unsigned;
enum class NoReturnAttrSpelling : unsigned;
enum class NoSanitizeAttrSpelling : unsigned;
enum class NoSpeculativeLoadHardeningAttrSpelling : unsigned;
enum class NoSplitStackAttrSpelling : unsigned;
enum class NoStackProtectorAttrSpelling : unsigned;
enum class NoThreadSafetyAnalysisAttrSpelling : unsigned;
enum class NoThrowAttrSpelling : unsigned;
enum class NonNullAttrSpelling : unsigned;
enum class NotTailCalledAttrSpelling : unsigned;
enum class OMPAllocateDeclAttrAllocatorTypeTy : unsigned;
enum class OMPDeclareReductionDeclInitKind : unsigned;
enum class OMPDeclareSimdDeclAttrBranchStateTy : unsigned;
enum class OMPDeclareTargetDeclAttrDevTypeTy : unsigned;
enum class OMPDeclareTargetDeclAttrMapTypeTy : unsigned;
enum class OMPDeclareVariantAttrInteropType : unsigned;
enum class OSConsumedAttrSpelling : unsigned;
enum class OSConsumesThisAttrSpelling : unsigned;
enum class OSReturnsNotRetainedAttrSpelling : unsigned;
enum class OSReturnsRetainedAttrSpelling : unsigned;
enum class OSReturnsRetainedOnNonZeroAttrSpelling : unsigned;
enum class OSReturnsRetainedOnZeroAttrSpelling : unsigned;
enum class ObjCBoxableAttrSpelling : unsigned;
enum class ObjCBridgeAttrSpelling : unsigned;
enum class ObjCBridgeMutableAttrSpelling : unsigned;
enum class ObjCBridgeRelatedAttrSpelling : unsigned;
enum class ObjCClassStubAttrSpelling : unsigned;
enum class ObjCDesignatedInitializerAttrSpelling : unsigned;
enum class ObjCDirectAttrSpelling : unsigned;
enum class ObjCDirectMembersAttrSpelling : unsigned;
enum class ObjCExceptionAttrSpelling : unsigned;
enum class ObjCExplicitProtocolImplAttrSpelling : unsigned;
enum class ObjCExternallyRetainedAttrSpelling : unsigned;
enum class ObjCGCAttrSpelling : unsigned;
enum class ObjCIndependentClassAttrSpelling : unsigned;
enum class ObjCIvarDeclAccessControl : unsigned;
enum class ObjCMessageExprReceiverKind : unsigned;
enum class ObjCMethodDeclImplementationControl : unsigned;
enum class ObjCMethodFamilyAttrFamilyKind : unsigned;
enum class ObjCMethodFamilyAttrSpelling : unsigned;
enum class ObjCNSObjectAttrSpelling : unsigned;
enum class ObjCNonLazyClassAttrSpelling : unsigned;
enum class ObjCNonRuntimeProtocolAttrSpelling : unsigned;
enum class ObjCOwnershipAttrSpelling : unsigned;
enum class ObjCPreciseLifetimeAttrSpelling : unsigned;
enum class ObjCPropertyDeclPropertyControl : unsigned;
enum class ObjCPropertyDeclSetterKind : unsigned;
enum class ObjCPropertyImplDeclKind : unsigned;
enum class ObjCRequiresPropertyDefsAttrSpelling : unsigned;
enum class ObjCRequiresSuperAttrSpelling : unsigned;
enum class ObjCReturnsInnerPointerAttrSpelling : unsigned;
enum class ObjCRootClassAttrSpelling : unsigned;
enum class ObjCRuntimeNameAttrSpelling : unsigned;
enum class ObjCRuntimeVisibleAttrSpelling : unsigned;
enum class ObjCSubclassingRestrictedAttrSpelling : unsigned;
enum class OpenCLAccessAttrSpelling : unsigned;
enum class OpenCLConstantAddressSpaceAttrSpelling : unsigned;
enum class OpenCLGenericAddressSpaceAttrSpelling : unsigned;
enum class OpenCLGlobalAddressSpaceAttrSpelling : unsigned;
enum class OpenCLGlobalDeviceAddressSpaceAttrSpelling : unsigned;
enum class OpenCLGlobalHostAddressSpaceAttrSpelling : unsigned;
enum class OpenCLKernelAttrSpelling : unsigned;
enum class OpenCLLocalAddressSpaceAttrSpelling : unsigned;
enum class OpenCLPrivateAddressSpaceAttrSpelling : unsigned;
enum class OptimizeNoneAttrSpelling : unsigned;
enum class OverloadableAttrSpelling : unsigned;
enum class OwnershipAttrOwnershipKind : unsigned;
enum class OwnershipAttrSpelling : unsigned;
enum class PackedAttrSpelling : unsigned;
enum class ParamTypestateAttrConsumedState : unsigned;
enum class ParamTypestateAttrSpelling : unsigned;
enum class PascalAttrSpelling : unsigned;
enum class PassObjectSizeAttrSpelling : unsigned;
enum class PatchableFunctionEntryAttrSpelling : unsigned;
enum class PcsAttrPCSType : unsigned;
enum class PcsAttrSpelling : unsigned;
enum class PredefinedExprIdentKind : unsigned;
enum class PreferredNameAttrSpelling : unsigned;
enum class PreserveAllAttrSpelling : unsigned;
enum class PreserveMostAttrSpelling : unsigned;
enum class PtGuardedVarAttrSpelling : unsigned;
enum class PureAttrSpelling : unsigned;
enum class QualTypeDestructionKind : unsigned;
enum class QualTypePrimitiveCopyKind : unsigned;
enum class QualTypePrimitiveDefaultInitializeKind : unsigned;
enum class RISCVInterruptAttrInterruptType : unsigned;
enum class RISCVInterruptAttrSpelling : unsigned;
enum class RandomizeLayoutAttrSpelling : unsigned;
enum class RecordDeclArgPassingKind : unsigned;
enum class RegCallAttrSpelling : unsigned;
enum class ReinitializesAttrSpelling : unsigned;
enum class ReleaseCapabilityAttrSpelling : unsigned;
enum class ReleaseHandleAttrSpelling : unsigned;
enum class RequiresCapabilityAttrSpelling : unsigned;
enum class RestrictAttrSpelling : unsigned;
enum class RetainAttrSpelling : unsigned;
enum class ReturnTypestateAttrConsumedState : unsigned;
enum class ReturnTypestateAttrSpelling : unsigned;
enum class ReturnsNonNullAttrSpelling : unsigned;
enum class ReturnsTwiceAttrSpelling : unsigned;
enum class SYCLKernelAttrSpelling : unsigned;
enum class SYCLSpecialClassAttrSpelling : unsigned;
enum class ScopedLockableAttrSpelling : unsigned;
enum class SectionAttrSpelling : unsigned;
enum class SelectAnyAttrSpelling : unsigned;
enum class SentinelAttrSpelling : unsigned;
enum class SetTypestateAttrConsumedState : unsigned;
enum class SetTypestateAttrSpelling : unsigned;
enum class SourceLocExprIdentKind : unsigned;
enum class SpeculativeLoadHardeningAttrSpelling : unsigned;
enum class StandaloneDebugAttrSpelling : unsigned;
enum class StdCallAttrSpelling : unsigned;
enum class StmtLikelihood : int;
enum class StmtKind : unsigned;
enum class StringLiteralStringKind : unsigned;
enum class SwiftAsyncAttrKind : unsigned;
enum class SwiftAsyncAttrSpelling : unsigned;
enum class SwiftAsyncCallAttrSpelling : unsigned;
enum class SwiftAsyncContextAttrSpelling : unsigned;
enum class SwiftAsyncErrorAttrConventionKind : unsigned;
enum class SwiftAsyncErrorAttrSpelling : unsigned;
enum class SwiftCallAttrSpelling : unsigned;
enum class SwiftContextAttrSpelling : unsigned;
enum class SwiftErrorAttrConventionKind : unsigned;
enum class SwiftErrorResultAttrSpelling : unsigned;
enum class SwiftIndirectResultAttrSpelling : unsigned;
enum class SwiftNewTypeAttrNewtypeKind : unsigned;
enum class SwiftNewTypeAttrSpelling : unsigned;
enum class SysVABIAttrSpelling : unsigned;
enum class TLSModelAttrSpelling : unsigned;
enum class TargetAttrSpelling : unsigned;
enum class TargetClonesAttrSpelling : unsigned;
enum class TemplateArgumentKind : unsigned;
enum class TestTypestateAttrConsumedState : unsigned;
enum class TestTypestateAttrSpelling : unsigned;
enum class ThisCallAttrSpelling : unsigned;
enum class TransparentUnionAttrSpelling : unsigned;
enum class TrivialABIAttrSpelling : unsigned;
enum class TryAcquireCapabilityAttrSpelling : unsigned;
enum class TypeScalarTypeKind : unsigned;
enum class TypeKind : unsigned;
enum class TypeTagForDatatypeAttrSpelling : unsigned;
enum class TypeVisibilityAttrSpelling : unsigned;
enum class TypeVisibilityAttrVisibilityType : unsigned;
enum class UnaryTransformTypeUTTKind : unsigned;
enum class UnavailableAttrImplicitReason : unsigned;
enum class UnavailableAttrSpelling : unsigned;
enum class UninitializedAttrSpelling : unsigned;
enum class UnlikelyAttrSpelling : unsigned;
enum class UnusedAttrSpelling : unsigned;
enum class UseHandleAttrSpelling : unsigned;
enum class UsedAttrSpelling : unsigned;
enum class UserDefinedLiteralLiteralOperatorKind : unsigned;
enum class UsingIfExistsAttrSpelling : unsigned;
enum class UuidAttrSpelling : unsigned;
enum class VarDeclDefinitionKind : unsigned;
enum class VarDeclInitializationStyle : unsigned;
enum class VarDeclTLSKind : unsigned;
enum class VecReturnAttrSpelling : unsigned;
enum class VectorCallAttrSpelling : unsigned;
enum class VectorTypeVectorKind : unsigned;
enum class VisibilityAttrSpelling : unsigned;
enum class VisibilityAttrVisibilityType : unsigned;
enum class WarnUnusedAttrSpelling : unsigned;
enum class WarnUnusedResultAttrSpelling : unsigned;
enum class WeakAttrSpelling : unsigned;
enum class WeakImportAttrSpelling : unsigned;
enum class WeakRefAttrSpelling : unsigned;
enum class WebAssemblyExportNameAttrSpelling : unsigned;
enum class WebAssemblyImportModuleAttrSpelling : unsigned;
enum class WebAssemblyImportNameAttrSpelling : unsigned;
enum class X86ForceAlignArgPointerAttrSpelling : unsigned;
enum class XRayInstrumentAttrSpelling : unsigned;
enum class XRayLogArgsAttrSpelling : unsigned;
enum class ZeroCallUsedRegsAttrSpelling : unsigned;
enum class ZeroCallUsedRegsAttrZeroCallUsedRegsKind : unsigned;
enum class ASTDumpOutputFormat : unsigned;
enum class AccessSpecifier : unsigned;
enum class AddrSpaceMapMangling : unsigned;
enum class AlignRequirementKind : int;
enum class AltivecSrcCompatKind : int;
enum class ArgumentKind : unsigned;
enum class ArrayTypeTrait : unsigned;
enum class AtomicScopeModelKind : int;
enum class AutoTypeKeyword : int;
enum class AvailabilityResult : unsigned;
enum class BinaryOperatorKind : unsigned;
enum class Bits : unsigned char;
enum class CallingConv : unsigned;
enum class CanThrowResult : unsigned;
enum class CapturedRegionKind : unsigned;
enum class CastKind : unsigned;
enum class ClangABI : int;
enum class CommentKind : unsigned;
enum class ComparisonCategoryResult : unsigned char;
enum class ComparisonCategoryType : unsigned char;
enum class CompilingModuleKind : unsigned;
enum class ConstexprSpecKind : int;
enum class CoreFoundationABI : int;
enum class DataPositionTy : unsigned long;
enum class DefaultArgKind : unsigned;
enum class DefaultCallingConvention : unsigned;
enum class DefaultVisiblityExportMapping : int;
enum class DiagnosticLevelMask : unsigned;
enum class ElaboratedTypeKeyword : unsigned;
enum class EmbedBitcodeKind : unsigned;
enum class EscapeChar : int;
enum class ExceptionHandlingKind : int;
enum class ExceptionSpecificationType : unsigned;
enum class ExplicitSpecKind : unsigned;
enum class ExprDependence : unsigned char;
enum class ExprObjectKind : unsigned;
enum class ExprOffsets : int;
enum class ExprValueKind : unsigned;
enum class ExpressionTrait : unsigned;
enum class ExtKind : unsigned;
enum class ExtendArgsKind : int;
enum class FPEvalMethodKind : int;
enum class FPExceptionModeKind : unsigned;
enum class FPModeKind : unsigned;
enum class FiniteLoopsKind : unsigned;
enum class FramePointerKind : int;
enum class GC : unsigned;
enum class GCMode : unsigned;
enum class GPUDefaultStreamKind : int;
enum class GVALinkage : unsigned;
enum class GetBuiltinTypeError : unsigned;
enum class HLSLLangStd : unsigned;
enum class ID : unsigned;
enum class IdentifierInfoFlag : unsigned;
enum class IfStatementKind : unsigned;
enum class ImbueAttribute : int;
enum class InClassInitStyle : unsigned;
enum class InheritedDesignatedInitializersState : unsigned;
enum class InitStorageKind : unsigned;
enum class InlineAsmDialectKind : unsigned;
enum class InlineVariableDefinitionKind : int;
enum class InliningMethod : unsigned;
enum class Kinds : unsigned;
enum class LambdaCaptureDefault : unsigned;
enum class LambdaCaptureKind : unsigned;
enum class LangAS : unsigned;
enum class LangFeatures : unsigned;
enum class Language : unsigned char;
enum class LanguageLinkage : unsigned;
enum class LaxVectorConversionKind : int;
enum class Level : unsigned;
enum class Linkage : unsigned char;
enum class MSInheritanceModel : int;
enum class MSVCMajorVersion : unsigned;
enum class MSVtorDispMode : int;
enum class MethodRefFlags : unsigned;
enum class ModifiableType : unsigned;
enum class MultiVersionKind : int;
enum class NameKind : unsigned;
enum class NeedExtraManglingDecl : unsigned;
enum class NestedNameSpecifierDependence : unsigned char;
enum class NonOdrUseReason : unsigned;
enum class NonceObjCInterface : unsigned;
enum class NullabilityKind : unsigned char;
enum class ObjCBridgeCastKind : unsigned;
enum class ObjCDispatchMethodKind : unsigned;
enum class ObjCInstanceTypeFamily : unsigned;
enum class ObjCKeywordKind : unsigned;
enum class ObjCLifetime : unsigned;
enum class ObjCMethodFamily : unsigned;
enum class ObjCPropertyQueryKind : unsigned char;
enum class ObjCStringFormatFamily : unsigned;
enum class ObjCSubstitutionContext : int;
enum class ObjCTypeParamVariance : unsigned char;
enum class OnOffSwitch : unsigned;
enum class OnStackType : unsigned;
enum class OpenMPAdjustArgsOpKind : unsigned;
enum class OpenMPAtomicDefaultMemOrderClauseKind : unsigned;
enum class OpenMPBindClauseKind : unsigned;
enum class OpenMPDefaultmapClauseKind : unsigned;
enum class OpenMPDefaultmapClauseModifier : unsigned;
enum class OpenMPDependClauseKind : unsigned;
enum class OpenMPDeviceClauseModifier : unsigned;
enum class OpenMPDeviceType : unsigned;
enum class OpenMPDistScheduleClauseKind : unsigned;
enum class OpenMPLastprivateModifier : unsigned;
enum class OpenMPLinearClauseKind : unsigned;
enum class OpenMPMapClauseKind : unsigned;
enum class OpenMPMapModifierKind : unsigned;
enum class OpenMPMotionModifierKind : unsigned;
enum class OpenMPOrderClauseKind : unsigned;
enum class OpenMPReductionClauseModifier : unsigned;
enum class OpenMPScheduleClauseKind : unsigned;
enum class OpenMPScheduleClauseModifier : unsigned;
enum class OverloadedOperatorKind : int;
enum class OverloadsShown : unsigned;
enum class PPKeywordKind : unsigned;
enum class ParameterABI : int;
enum class ParenLocsOffsets : int;
enum class PragmaFloatControlKind : unsigned;
enum class PragmaMSCommentKind : unsigned;
enum class PragmaMSPointersToMembersKind : unsigned;
enum class PragmaMSStructKind : unsigned;
enum class PragmaSectionFlag : unsigned;
enum class ProfileInstrKind : unsigned;
enum class Qualified : int;
enum class RangeExprOffset : int;
enum class RangeLocOffset : int;
enum class RefQualifierKind : unsigned;
enum class RemarkKind : unsigned;
enum class ReservedIdentifierStatus : int;
enum class SFINAEResponse : unsigned;
enum class SYCLMajorVersion : unsigned;
enum class SanitizerOrdinal : unsigned long long;
enum class SelectorLocationsKind : unsigned;
enum class ShaderStage : int;
enum class SignReturnAddressKeyKind : int;
enum class SignReturnAddressScopeKind : int;
enum class SignedOverflowBehaviorTy : unsigned;
enum class SpecialMemberFlags : unsigned;
enum class SpecifierKind : unsigned;
enum class StackProtectorMode : unsigned;
enum class StorageClass : unsigned;
enum class StorageDuration : unsigned;
enum class StoredNameKind : unsigned;
enum class StoredSpecifierKind : unsigned;
enum class StructReturnConventionKind : unsigned;
enum class SubExpr : unsigned;
enum class SubStmt : unsigned;
enum class SwiftAsyncFramePointerKind : int;
enum class SyncScope : int;
enum class Syntax : unsigned;
enum class TLSModel : unsigned;
enum class TQ : unsigned;
enum class TagTypeKind : unsigned;
enum class TailPaddingUseRules : unsigned;
enum class TemplateArgumentDependence : unsigned char;
enum class TemplateNameDependence : unsigned char;
enum class TemplateSpecializationKind : unsigned;
enum class TextDiagnosticFormat : unsigned;
enum class ThreadModelKind : int;
enum class ThreadStorageClassSpecifier : unsigned;
enum class TokenKind : unsigned short;
enum class TrailingAllocKind : unsigned;
enum class TranslationUnitKind : unsigned;
enum class TrivialAutoVarInitKind : int;
enum class TypeDependence : unsigned char;
enum class TypeLocClass : unsigned;
enum class TypeSpecifierSign : int;
enum class TypeSpecifierType : unsigned;
enum class TypeSpecifierWidth : int;
enum class TypeSpecifiersPipe : int;
enum class TypeTrait : unsigned;
enum class UnaryExprOrTypeTrait : unsigned;
enum class UnaryOperatorKind : unsigned;
enum class APValueKind : unsigned;
enum class VectorLibrary : unsigned;
enum class Visibility : unsigned;
enum class AttributeSyntax : unsigned;
enum class DeclCategory : unsigned;
enum class MacroKind : unsigned char;
enum class PathKind : signed char;
enum class FileType : signed char;
enum class CompilerName : unsigned;
enum class IncludePathLocation : unsigned;
enum class TargetLanguage : unsigned;
enum class PseudoKind : unsigned char;
}  // namespace pasta
namespace mx {
enum class DeclKind : unsigned char;
DeclKind FromPasta(pasta::DeclKind pasta_val);

enum class AttrKind : unsigned short;
AttrKind FromPasta(pasta::AttrKind pasta_val);

enum class AArch64SVEPcsAttrSpelling : unsigned char;
AArch64SVEPcsAttrSpelling FromPasta(pasta::AArch64SVEPcsAttrSpelling pasta_val);

enum class AArch64VectorPcsAttrSpelling : unsigned char;
AArch64VectorPcsAttrSpelling FromPasta(pasta::AArch64VectorPcsAttrSpelling pasta_val);

enum class AMDGPUFlatWorkGroupSizeAttrSpelling : unsigned char;
AMDGPUFlatWorkGroupSizeAttrSpelling FromPasta(pasta::AMDGPUFlatWorkGroupSizeAttrSpelling pasta_val);

enum class AMDGPUKernelCallAttrSpelling : unsigned char;
AMDGPUKernelCallAttrSpelling FromPasta(pasta::AMDGPUKernelCallAttrSpelling pasta_val);

enum class AMDGPUNumSGPRAttrSpelling : unsigned char;
AMDGPUNumSGPRAttrSpelling FromPasta(pasta::AMDGPUNumSGPRAttrSpelling pasta_val);

enum class AMDGPUNumVGPRAttrSpelling : unsigned char;
AMDGPUNumVGPRAttrSpelling FromPasta(pasta::AMDGPUNumVGPRAttrSpelling pasta_val);

enum class AMDGPUWavesPerEUAttrSpelling : unsigned char;
AMDGPUWavesPerEUAttrSpelling FromPasta(pasta::AMDGPUWavesPerEUAttrSpelling pasta_val);

enum class ARMInterruptAttrInterruptType : unsigned char;
ARMInterruptAttrInterruptType FromPasta(pasta::ARMInterruptAttrInterruptType pasta_val);

enum class ARMInterruptAttrSpelling : unsigned char;
ARMInterruptAttrSpelling FromPasta(pasta::ARMInterruptAttrSpelling pasta_val);

enum class AVRInterruptAttrSpelling : unsigned char;
AVRInterruptAttrSpelling FromPasta(pasta::AVRInterruptAttrSpelling pasta_val);

enum class AVRSignalAttrSpelling : unsigned char;
AVRSignalAttrSpelling FromPasta(pasta::AVRSignalAttrSpelling pasta_val);

enum class AbiTagAttrSpelling : unsigned char;
AbiTagAttrSpelling FromPasta(pasta::AbiTagAttrSpelling pasta_val);

enum class AcquireCapabilityAttrSpelling : unsigned char;
AcquireCapabilityAttrSpelling FromPasta(pasta::AcquireCapabilityAttrSpelling pasta_val);

enum class AcquireHandleAttrSpelling : unsigned char;
AcquireHandleAttrSpelling FromPasta(pasta::AcquireHandleAttrSpelling pasta_val);

enum class AddressSpaceAttrSpelling : unsigned char;
AddressSpaceAttrSpelling FromPasta(pasta::AddressSpaceAttrSpelling pasta_val);

enum class AliasAttrSpelling : unsigned char;
AliasAttrSpelling FromPasta(pasta::AliasAttrSpelling pasta_val);

enum class AlignedAttrSpelling : unsigned char;
AlignedAttrSpelling FromPasta(pasta::AlignedAttrSpelling pasta_val);

enum class AllocAlignAttrSpelling : unsigned char;
AllocAlignAttrSpelling FromPasta(pasta::AllocAlignAttrSpelling pasta_val);

enum class AllocSizeAttrSpelling : unsigned char;
AllocSizeAttrSpelling FromPasta(pasta::AllocSizeAttrSpelling pasta_val);

enum class AlwaysDestroyAttrSpelling : unsigned char;
AlwaysDestroyAttrSpelling FromPasta(pasta::AlwaysDestroyAttrSpelling pasta_val);

enum class AlwaysInlineAttrSpelling : unsigned char;
AlwaysInlineAttrSpelling FromPasta(pasta::AlwaysInlineAttrSpelling pasta_val);

enum class AnnotateAttrSpelling : unsigned char;
AnnotateAttrSpelling FromPasta(pasta::AnnotateAttrSpelling pasta_val);

enum class AnnotateTypeAttrSpelling : unsigned char;
AnnotateTypeAttrSpelling FromPasta(pasta::AnnotateTypeAttrSpelling pasta_val);

enum class AnyX86InterruptAttrSpelling : unsigned char;
AnyX86InterruptAttrSpelling FromPasta(pasta::AnyX86InterruptAttrSpelling pasta_val);

enum class AnyX86NoCallerSavedRegistersAttrSpelling : unsigned char;
AnyX86NoCallerSavedRegistersAttrSpelling FromPasta(pasta::AnyX86NoCallerSavedRegistersAttrSpelling pasta_val);

enum class AnyX86NoCfCheckAttrSpelling : unsigned char;
AnyX86NoCfCheckAttrSpelling FromPasta(pasta::AnyX86NoCfCheckAttrSpelling pasta_val);

enum class ArcWeakrefUnavailableAttrSpelling : unsigned char;
ArcWeakrefUnavailableAttrSpelling FromPasta(pasta::ArcWeakrefUnavailableAttrSpelling pasta_val);

enum class ArgumentWithTypeTagAttrSpelling : unsigned char;
ArgumentWithTypeTagAttrSpelling FromPasta(pasta::ArgumentWithTypeTagAttrSpelling pasta_val);

enum class ArmBuiltinAliasAttrSpelling : unsigned char;
ArmBuiltinAliasAttrSpelling FromPasta(pasta::ArmBuiltinAliasAttrSpelling pasta_val);

enum class ArmMveStrictPolymorphismAttrSpelling : unsigned char;
ArmMveStrictPolymorphismAttrSpelling FromPasta(pasta::ArmMveStrictPolymorphismAttrSpelling pasta_val);

enum class ArrayTypeArraySizeModifier : unsigned char;
ArrayTypeArraySizeModifier FromPasta(pasta::ArrayTypeArraySizeModifier pasta_val);

enum class ArtificialAttrSpelling : unsigned char;
ArtificialAttrSpelling FromPasta(pasta::ArtificialAttrSpelling pasta_val);

enum class AsmLabelAttrSpelling : unsigned char;
AsmLabelAttrSpelling FromPasta(pasta::AsmLabelAttrSpelling pasta_val);

enum class AssertCapabilityAttrSpelling : unsigned char;
AssertCapabilityAttrSpelling FromPasta(pasta::AssertCapabilityAttrSpelling pasta_val);

enum class AssumeAlignedAttrSpelling : unsigned char;
AssumeAlignedAttrSpelling FromPasta(pasta::AssumeAlignedAttrSpelling pasta_val);

enum class AssumptionAttrSpelling : unsigned char;
AssumptionAttrSpelling FromPasta(pasta::AssumptionAttrSpelling pasta_val);

enum class AtomicExprAtomicOp : unsigned char;
AtomicExprAtomicOp FromPasta(pasta::AtomicExprAtomicOp pasta_val);

enum class AvailabilityAttrSpelling : unsigned char;
AvailabilityAttrSpelling FromPasta(pasta::AvailabilityAttrSpelling pasta_val);

enum class BPFPreserveAccessIndexAttrSpelling : unsigned char;
BPFPreserveAccessIndexAttrSpelling FromPasta(pasta::BPFPreserveAccessIndexAttrSpelling pasta_val);

enum class BTFDeclTagAttrSpelling : unsigned char;
BTFDeclTagAttrSpelling FromPasta(pasta::BTFDeclTagAttrSpelling pasta_val);

enum class BTFTypeTagAttrSpelling : unsigned char;
BTFTypeTagAttrSpelling FromPasta(pasta::BTFTypeTagAttrSpelling pasta_val);

enum class BlocksAttrBlockType : unsigned char;
BlocksAttrBlockType FromPasta(pasta::BlocksAttrBlockType pasta_val);

enum class BlocksAttrSpelling : unsigned char;
BlocksAttrSpelling FromPasta(pasta::BlocksAttrSpelling pasta_val);

enum class BuiltinAliasAttrSpelling : unsigned char;
BuiltinAliasAttrSpelling FromPasta(pasta::BuiltinAliasAttrSpelling pasta_val);

enum class BuiltinTypeKind : unsigned char;
BuiltinTypeKind FromPasta(pasta::BuiltinTypeKind pasta_val);

enum class CDeclAttrSpelling : unsigned char;
CDeclAttrSpelling FromPasta(pasta::CDeclAttrSpelling pasta_val);

enum class CFAuditedTransferAttrSpelling : unsigned char;
CFAuditedTransferAttrSpelling FromPasta(pasta::CFAuditedTransferAttrSpelling pasta_val);

enum class CFConsumedAttrSpelling : unsigned char;
CFConsumedAttrSpelling FromPasta(pasta::CFConsumedAttrSpelling pasta_val);

enum class CFGuardAttrGuardArg : unsigned char;
CFGuardAttrGuardArg FromPasta(pasta::CFGuardAttrGuardArg pasta_val);

enum class CFICanonicalJumpTableAttrSpelling : unsigned char;
CFICanonicalJumpTableAttrSpelling FromPasta(pasta::CFICanonicalJumpTableAttrSpelling pasta_val);

enum class CFReturnsNotRetainedAttrSpelling : unsigned char;
CFReturnsNotRetainedAttrSpelling FromPasta(pasta::CFReturnsNotRetainedAttrSpelling pasta_val);

enum class CFReturnsRetainedAttrSpelling : unsigned char;
CFReturnsRetainedAttrSpelling FromPasta(pasta::CFReturnsRetainedAttrSpelling pasta_val);

enum class CFUnknownTransferAttrSpelling : unsigned char;
CFUnknownTransferAttrSpelling FromPasta(pasta::CFUnknownTransferAttrSpelling pasta_val);

enum class CPUDispatchAttrSpelling : unsigned char;
CPUDispatchAttrSpelling FromPasta(pasta::CPUDispatchAttrSpelling pasta_val);

enum class CPUSpecificAttrSpelling : unsigned char;
CPUSpecificAttrSpelling FromPasta(pasta::CPUSpecificAttrSpelling pasta_val);

enum class CUDAConstantAttrSpelling : unsigned char;
CUDAConstantAttrSpelling FromPasta(pasta::CUDAConstantAttrSpelling pasta_val);

enum class CUDADeviceAttrSpelling : unsigned char;
CUDADeviceAttrSpelling FromPasta(pasta::CUDADeviceAttrSpelling pasta_val);

enum class CUDADeviceBuiltinSurfaceTypeAttrSpelling : unsigned char;
CUDADeviceBuiltinSurfaceTypeAttrSpelling FromPasta(pasta::CUDADeviceBuiltinSurfaceTypeAttrSpelling pasta_val);

enum class CUDADeviceBuiltinTextureTypeAttrSpelling : unsigned char;
CUDADeviceBuiltinTextureTypeAttrSpelling FromPasta(pasta::CUDADeviceBuiltinTextureTypeAttrSpelling pasta_val);

enum class CUDAGlobalAttrSpelling : unsigned char;
CUDAGlobalAttrSpelling FromPasta(pasta::CUDAGlobalAttrSpelling pasta_val);

enum class CUDAHostAttrSpelling : unsigned char;
CUDAHostAttrSpelling FromPasta(pasta::CUDAHostAttrSpelling pasta_val);

enum class CUDALaunchBoundsAttrSpelling : unsigned char;
CUDALaunchBoundsAttrSpelling FromPasta(pasta::CUDALaunchBoundsAttrSpelling pasta_val);

enum class CUDASharedAttrSpelling : unsigned char;
CUDASharedAttrSpelling FromPasta(pasta::CUDASharedAttrSpelling pasta_val);

enum class CXX11NoReturnAttrSpelling : unsigned char;
CXX11NoReturnAttrSpelling FromPasta(pasta::CXX11NoReturnAttrSpelling pasta_val);

enum class CXXConstructExprConstructionKind : unsigned char;
CXXConstructExprConstructionKind FromPasta(pasta::CXXConstructExprConstructionKind pasta_val);

enum class CXXNewExprInitializationStyle : unsigned char;
CXXNewExprInitializationStyle FromPasta(pasta::CXXNewExprInitializationStyle pasta_val);

enum class CXXRecordDeclLambdaDependencyKind : unsigned char;
CXXRecordDeclLambdaDependencyKind FromPasta(pasta::CXXRecordDeclLambdaDependencyKind pasta_val);

enum class CallExprADLCallKind : unsigned char;
CallExprADLCallKind FromPasta(pasta::CallExprADLCallKind pasta_val);

enum class CallableWhenAttrConsumedState : unsigned char;
CallableWhenAttrConsumedState FromPasta(pasta::CallableWhenAttrConsumedState pasta_val);

enum class CallableWhenAttrSpelling : unsigned char;
CallableWhenAttrSpelling FromPasta(pasta::CallableWhenAttrSpelling pasta_val);

enum class CallbackAttrSpelling : unsigned char;
CallbackAttrSpelling FromPasta(pasta::CallbackAttrSpelling pasta_val);

enum class CalledOnceAttrSpelling : unsigned char;
CalledOnceAttrSpelling FromPasta(pasta::CalledOnceAttrSpelling pasta_val);

enum class CapabilityAttrSpelling : unsigned char;
CapabilityAttrSpelling FromPasta(pasta::CapabilityAttrSpelling pasta_val);

enum class CapturedStmtVariableCaptureKind : unsigned char;
CapturedStmtVariableCaptureKind FromPasta(pasta::CapturedStmtVariableCaptureKind pasta_val);

enum class CarriesDependencyAttrSpelling : unsigned char;
CarriesDependencyAttrSpelling FromPasta(pasta::CarriesDependencyAttrSpelling pasta_val);

enum class CharacterLiteralCharacterKind : unsigned char;
CharacterLiteralCharacterKind FromPasta(pasta::CharacterLiteralCharacterKind pasta_val);

enum class CleanupAttrSpelling : unsigned char;
CleanupAttrSpelling FromPasta(pasta::CleanupAttrSpelling pasta_val);

enum class ColdAttrSpelling : unsigned char;
ColdAttrSpelling FromPasta(pasta::ColdAttrSpelling pasta_val);

enum class CommonAttrSpelling : unsigned char;
CommonAttrSpelling FromPasta(pasta::CommonAttrSpelling pasta_val);

enum class ConstAttrSpelling : unsigned char;
ConstAttrSpelling FromPasta(pasta::ConstAttrSpelling pasta_val);

enum class ConstInitAttrSpelling : unsigned char;
ConstInitAttrSpelling FromPasta(pasta::ConstInitAttrSpelling pasta_val);

enum class ConstantExprResultStorageKind : unsigned char;
ConstantExprResultStorageKind FromPasta(pasta::ConstantExprResultStorageKind pasta_val);

enum class ConstructorAttrSpelling : unsigned char;
ConstructorAttrSpelling FromPasta(pasta::ConstructorAttrSpelling pasta_val);

enum class ConsumableAttrConsumedState : unsigned char;
ConsumableAttrConsumedState FromPasta(pasta::ConsumableAttrConsumedState pasta_val);

enum class ConsumableAttrSpelling : unsigned char;
ConsumableAttrSpelling FromPasta(pasta::ConsumableAttrSpelling pasta_val);

enum class ConsumableAutoCastAttrSpelling : unsigned char;
ConsumableAutoCastAttrSpelling FromPasta(pasta::ConsumableAutoCastAttrSpelling pasta_val);

enum class ConsumableSetOnReadAttrSpelling : unsigned char;
ConsumableSetOnReadAttrSpelling FromPasta(pasta::ConsumableSetOnReadAttrSpelling pasta_val);

enum class ConvergentAttrSpelling : unsigned char;
ConvergentAttrSpelling FromPasta(pasta::ConvergentAttrSpelling pasta_val);

enum class DLLExportAttrSpelling : unsigned char;
DLLExportAttrSpelling FromPasta(pasta::DLLExportAttrSpelling pasta_val);

enum class DLLImportAttrSpelling : unsigned char;
DLLImportAttrSpelling FromPasta(pasta::DLLImportAttrSpelling pasta_val);

enum class DeclFriendObjectKind : unsigned char;
DeclFriendObjectKind FromPasta(pasta::DeclFriendObjectKind pasta_val);

enum class DeclIdentifierNamespace : unsigned char;
DeclIdentifierNamespace FromPasta(pasta::DeclIdentifierNamespace pasta_val);

enum class DeclModuleOwnershipKind : unsigned char;
DeclModuleOwnershipKind FromPasta(pasta::DeclModuleOwnershipKind pasta_val);

enum class DeclObjCDeclQualifier : unsigned char;
DeclObjCDeclQualifier FromPasta(pasta::DeclObjCDeclQualifier pasta_val);

enum class DeprecatedAttrSpelling : unsigned char;
DeprecatedAttrSpelling FromPasta(pasta::DeprecatedAttrSpelling pasta_val);

enum class DestructorAttrSpelling : unsigned char;
DestructorAttrSpelling FromPasta(pasta::DestructorAttrSpelling pasta_val);

enum class DiagnoseAsBuiltinAttrSpelling : unsigned char;
DiagnoseAsBuiltinAttrSpelling FromPasta(pasta::DiagnoseAsBuiltinAttrSpelling pasta_val);

enum class DiagnoseIfAttrDiagnosticType : unsigned char;
DiagnoseIfAttrDiagnosticType FromPasta(pasta::DiagnoseIfAttrDiagnosticType pasta_val);

enum class DisableSanitizerInstrumentationAttrSpelling : unsigned char;
DisableSanitizerInstrumentationAttrSpelling FromPasta(pasta::DisableSanitizerInstrumentationAttrSpelling pasta_val);

enum class DisableTailCallsAttrSpelling : unsigned char;
DisableTailCallsAttrSpelling FromPasta(pasta::DisableTailCallsAttrSpelling pasta_val);

enum class EnforceTCBAttrSpelling : unsigned char;
EnforceTCBAttrSpelling FromPasta(pasta::EnforceTCBAttrSpelling pasta_val);

enum class EnforceTCBLeafAttrSpelling : unsigned char;
EnforceTCBLeafAttrSpelling FromPasta(pasta::EnforceTCBLeafAttrSpelling pasta_val);

enum class EnumExtensibilityAttrKind : unsigned char;
EnumExtensibilityAttrKind FromPasta(pasta::EnumExtensibilityAttrKind pasta_val);

enum class EnumExtensibilityAttrSpelling : unsigned char;
EnumExtensibilityAttrSpelling FromPasta(pasta::EnumExtensibilityAttrSpelling pasta_val);

enum class ErrorAttrSpelling : unsigned char;
ErrorAttrSpelling FromPasta(pasta::ErrorAttrSpelling pasta_val);

enum class ExcludeFromExplicitInstantiationAttrSpelling : unsigned char;
ExcludeFromExplicitInstantiationAttrSpelling FromPasta(pasta::ExcludeFromExplicitInstantiationAttrSpelling pasta_val);

enum class ExprConstantExprKind : unsigned char;
ExprConstantExprKind FromPasta(pasta::ExprConstantExprKind pasta_val);

enum class ExprLValueClassification : unsigned char;
ExprLValueClassification FromPasta(pasta::ExprLValueClassification pasta_val);

enum class ExprNullPointerConstantKind : unsigned char;
ExprNullPointerConstantKind FromPasta(pasta::ExprNullPointerConstantKind pasta_val);

enum class ExprNullPointerConstantValueDependence : unsigned char;
ExprNullPointerConstantValueDependence FromPasta(pasta::ExprNullPointerConstantValueDependence pasta_val);

enum class ExprSideEffectsKind : unsigned char;
ExprSideEffectsKind FromPasta(pasta::ExprSideEffectsKind pasta_val);

enum class ExprisModifiableLvalueResult : unsigned char;
ExprisModifiableLvalueResult FromPasta(pasta::ExprisModifiableLvalueResult pasta_val);

enum class ExternalSourceSymbolAttrSpelling : unsigned char;
ExternalSourceSymbolAttrSpelling FromPasta(pasta::ExternalSourceSymbolAttrSpelling pasta_val);

enum class FallThroughAttrSpelling : unsigned char;
FallThroughAttrSpelling FromPasta(pasta::FallThroughAttrSpelling pasta_val);

enum class FastCallAttrSpelling : unsigned char;
FastCallAttrSpelling FromPasta(pasta::FastCallAttrSpelling pasta_val);

enum class FinalAttrSpelling : unsigned char;
FinalAttrSpelling FromPasta(pasta::FinalAttrSpelling pasta_val);

enum class FlagEnumAttrSpelling : unsigned char;
FlagEnumAttrSpelling FromPasta(pasta::FlagEnumAttrSpelling pasta_val);

enum class FlattenAttrSpelling : unsigned char;
FlattenAttrSpelling FromPasta(pasta::FlattenAttrSpelling pasta_val);

enum class FormatArgAttrSpelling : unsigned char;
FormatArgAttrSpelling FromPasta(pasta::FormatArgAttrSpelling pasta_val);

enum class FormatAttrSpelling : unsigned char;
FormatAttrSpelling FromPasta(pasta::FormatAttrSpelling pasta_val);

enum class FunctionDeclTemplatedKind : unsigned char;
FunctionDeclTemplatedKind FromPasta(pasta::FunctionDeclTemplatedKind pasta_val);

enum class FunctionReturnThunksAttrKind : unsigned char;
FunctionReturnThunksAttrKind FromPasta(pasta::FunctionReturnThunksAttrKind pasta_val);

enum class FunctionReturnThunksAttrSpelling : unsigned char;
FunctionReturnThunksAttrSpelling FromPasta(pasta::FunctionReturnThunksAttrSpelling pasta_val);

enum class GNUInlineAttrSpelling : unsigned char;
GNUInlineAttrSpelling FromPasta(pasta::GNUInlineAttrSpelling pasta_val);

enum class GuardedVarAttrSpelling : unsigned char;
GuardedVarAttrSpelling FromPasta(pasta::GuardedVarAttrSpelling pasta_val);

enum class HIPManagedAttrSpelling : unsigned char;
HIPManagedAttrSpelling FromPasta(pasta::HIPManagedAttrSpelling pasta_val);

enum class HLSLShaderAttrShaderType : unsigned char;
HLSLShaderAttrShaderType FromPasta(pasta::HLSLShaderAttrShaderType pasta_val);

enum class HotAttrSpelling : unsigned char;
HotAttrSpelling FromPasta(pasta::HotAttrSpelling pasta_val);

enum class IBActionAttrSpelling : unsigned char;
IBActionAttrSpelling FromPasta(pasta::IBActionAttrSpelling pasta_val);

enum class IBOutletAttrSpelling : unsigned char;
IBOutletAttrSpelling FromPasta(pasta::IBOutletAttrSpelling pasta_val);

enum class IBOutletCollectionAttrSpelling : unsigned char;
IBOutletCollectionAttrSpelling FromPasta(pasta::IBOutletCollectionAttrSpelling pasta_val);

enum class IFuncAttrSpelling : unsigned char;
IFuncAttrSpelling FromPasta(pasta::IFuncAttrSpelling pasta_val);

enum class ImplicitCastExprOnStack : unsigned char;
ImplicitCastExprOnStack FromPasta(pasta::ImplicitCastExprOnStack pasta_val);

enum class ImplicitParamDeclImplicitParamKind : unsigned char;
ImplicitParamDeclImplicitParamKind FromPasta(pasta::ImplicitParamDeclImplicitParamKind pasta_val);

enum class InitPriorityAttrSpelling : unsigned char;
InitPriorityAttrSpelling FromPasta(pasta::InitPriorityAttrSpelling pasta_val);

enum class IntelOclBiccAttrSpelling : unsigned char;
IntelOclBiccAttrSpelling FromPasta(pasta::IntelOclBiccAttrSpelling pasta_val);

enum class InternalLinkageAttrSpelling : unsigned char;
InternalLinkageAttrSpelling FromPasta(pasta::InternalLinkageAttrSpelling pasta_val);

enum class LTOVisibilityPublicAttrSpelling : unsigned char;
LTOVisibilityPublicAttrSpelling FromPasta(pasta::LTOVisibilityPublicAttrSpelling pasta_val);

enum class LeafAttrSpelling : unsigned char;
LeafAttrSpelling FromPasta(pasta::LeafAttrSpelling pasta_val);

enum class LifetimeBoundAttrSpelling : unsigned char;
LifetimeBoundAttrSpelling FromPasta(pasta::LifetimeBoundAttrSpelling pasta_val);

enum class LikelyAttrSpelling : unsigned char;
LikelyAttrSpelling FromPasta(pasta::LikelyAttrSpelling pasta_val);

enum class LinkageSpecDeclLanguageIDs : unsigned char;
LinkageSpecDeclLanguageIDs FromPasta(pasta::LinkageSpecDeclLanguageIDs pasta_val);

enum class LoaderUninitializedAttrSpelling : unsigned char;
LoaderUninitializedAttrSpelling FromPasta(pasta::LoaderUninitializedAttrSpelling pasta_val);

enum class LoopHintAttrLoopHintState : unsigned char;
LoopHintAttrLoopHintState FromPasta(pasta::LoopHintAttrLoopHintState pasta_val);

enum class LoopHintAttrOptionType : unsigned char;
LoopHintAttrOptionType FromPasta(pasta::LoopHintAttrOptionType pasta_val);

enum class LoopHintAttrSpelling : unsigned char;
LoopHintAttrSpelling FromPasta(pasta::LoopHintAttrSpelling pasta_val);

enum class MIGServerRoutineAttrSpelling : unsigned char;
MIGServerRoutineAttrSpelling FromPasta(pasta::MIGServerRoutineAttrSpelling pasta_val);

enum class MSABIAttrSpelling : unsigned char;
MSABIAttrSpelling FromPasta(pasta::MSABIAttrSpelling pasta_val);

enum class MSInheritanceAttrSpelling : unsigned char;
MSInheritanceAttrSpelling FromPasta(pasta::MSInheritanceAttrSpelling pasta_val);

enum class MSP430InterruptAttrSpelling : unsigned char;
MSP430InterruptAttrSpelling FromPasta(pasta::MSP430InterruptAttrSpelling pasta_val);

enum class MSStructAttrSpelling : unsigned char;
MSStructAttrSpelling FromPasta(pasta::MSStructAttrSpelling pasta_val);

enum class MayAliasAttrSpelling : unsigned char;
MayAliasAttrSpelling FromPasta(pasta::MayAliasAttrSpelling pasta_val);

enum class MicroMipsAttrSpelling : unsigned char;
MicroMipsAttrSpelling FromPasta(pasta::MicroMipsAttrSpelling pasta_val);

enum class MinSizeAttrSpelling : unsigned char;
MinSizeAttrSpelling FromPasta(pasta::MinSizeAttrSpelling pasta_val);

enum class MinVectorWidthAttrSpelling : unsigned char;
MinVectorWidthAttrSpelling FromPasta(pasta::MinVectorWidthAttrSpelling pasta_val);

enum class Mips16AttrSpelling : unsigned char;
Mips16AttrSpelling FromPasta(pasta::Mips16AttrSpelling pasta_val);

enum class MipsInterruptAttrInterruptType : unsigned char;
MipsInterruptAttrInterruptType FromPasta(pasta::MipsInterruptAttrInterruptType pasta_val);

enum class MipsInterruptAttrSpelling : unsigned char;
MipsInterruptAttrSpelling FromPasta(pasta::MipsInterruptAttrSpelling pasta_val);

enum class MipsLongCallAttrSpelling : unsigned char;
MipsLongCallAttrSpelling FromPasta(pasta::MipsLongCallAttrSpelling pasta_val);

enum class MipsShortCallAttrSpelling : unsigned char;
MipsShortCallAttrSpelling FromPasta(pasta::MipsShortCallAttrSpelling pasta_val);

enum class ModeAttrSpelling : unsigned char;
ModeAttrSpelling FromPasta(pasta::ModeAttrSpelling pasta_val);

enum class MustTailAttrSpelling : unsigned char;
MustTailAttrSpelling FromPasta(pasta::MustTailAttrSpelling pasta_val);

enum class NSConsumedAttrSpelling : unsigned char;
NSConsumedAttrSpelling FromPasta(pasta::NSConsumedAttrSpelling pasta_val);

enum class NSConsumesSelfAttrSpelling : unsigned char;
NSConsumesSelfAttrSpelling FromPasta(pasta::NSConsumesSelfAttrSpelling pasta_val);

enum class NSReturnsAutoreleasedAttrSpelling : unsigned char;
NSReturnsAutoreleasedAttrSpelling FromPasta(pasta::NSReturnsAutoreleasedAttrSpelling pasta_val);

enum class NSReturnsNotRetainedAttrSpelling : unsigned char;
NSReturnsNotRetainedAttrSpelling FromPasta(pasta::NSReturnsNotRetainedAttrSpelling pasta_val);

enum class NSReturnsRetainedAttrSpelling : unsigned char;
NSReturnsRetainedAttrSpelling FromPasta(pasta::NSReturnsRetainedAttrSpelling pasta_val);

enum class NakedAttrSpelling : unsigned char;
NakedAttrSpelling FromPasta(pasta::NakedAttrSpelling pasta_val);

enum class NamedDeclExplicitVisibilityKind : unsigned char;
NamedDeclExplicitVisibilityKind FromPasta(pasta::NamedDeclExplicitVisibilityKind pasta_val);

enum class NoBuiltinAttrSpelling : unsigned char;
NoBuiltinAttrSpelling FromPasta(pasta::NoBuiltinAttrSpelling pasta_val);

enum class NoCommonAttrSpelling : unsigned char;
NoCommonAttrSpelling FromPasta(pasta::NoCommonAttrSpelling pasta_val);

enum class NoDebugAttrSpelling : unsigned char;
NoDebugAttrSpelling FromPasta(pasta::NoDebugAttrSpelling pasta_val);

enum class NoDerefAttrSpelling : unsigned char;
NoDerefAttrSpelling FromPasta(pasta::NoDerefAttrSpelling pasta_val);

enum class NoDestroyAttrSpelling : unsigned char;
NoDestroyAttrSpelling FromPasta(pasta::NoDestroyAttrSpelling pasta_val);

enum class NoDuplicateAttrSpelling : unsigned char;
NoDuplicateAttrSpelling FromPasta(pasta::NoDuplicateAttrSpelling pasta_val);

enum class NoEscapeAttrSpelling : unsigned char;
NoEscapeAttrSpelling FromPasta(pasta::NoEscapeAttrSpelling pasta_val);

enum class NoInlineAttrSpelling : unsigned char;
NoInlineAttrSpelling FromPasta(pasta::NoInlineAttrSpelling pasta_val);

enum class NoInstrumentFunctionAttrSpelling : unsigned char;
NoInstrumentFunctionAttrSpelling FromPasta(pasta::NoInstrumentFunctionAttrSpelling pasta_val);

enum class NoMergeAttrSpelling : unsigned char;
NoMergeAttrSpelling FromPasta(pasta::NoMergeAttrSpelling pasta_val);

enum class NoMicroMipsAttrSpelling : unsigned char;
NoMicroMipsAttrSpelling FromPasta(pasta::NoMicroMipsAttrSpelling pasta_val);

enum class NoMips16AttrSpelling : unsigned char;
NoMips16AttrSpelling FromPasta(pasta::NoMips16AttrSpelling pasta_val);

enum class NoProfileFunctionAttrSpelling : unsigned char;
NoProfileFunctionAttrSpelling FromPasta(pasta::NoProfileFunctionAttrSpelling pasta_val);

enum class NoRandomizeLayoutAttrSpelling : unsigned char;
NoRandomizeLayoutAttrSpelling FromPasta(pasta::NoRandomizeLayoutAttrSpelling pasta_val);

enum class NoReturnAttrSpelling : unsigned char;
NoReturnAttrSpelling FromPasta(pasta::NoReturnAttrSpelling pasta_val);

enum class NoSanitizeAttrSpelling : unsigned char;
NoSanitizeAttrSpelling FromPasta(pasta::NoSanitizeAttrSpelling pasta_val);

enum class NoSpeculativeLoadHardeningAttrSpelling : unsigned char;
NoSpeculativeLoadHardeningAttrSpelling FromPasta(pasta::NoSpeculativeLoadHardeningAttrSpelling pasta_val);

enum class NoSplitStackAttrSpelling : unsigned char;
NoSplitStackAttrSpelling FromPasta(pasta::NoSplitStackAttrSpelling pasta_val);

enum class NoStackProtectorAttrSpelling : unsigned char;
NoStackProtectorAttrSpelling FromPasta(pasta::NoStackProtectorAttrSpelling pasta_val);

enum class NoThreadSafetyAnalysisAttrSpelling : unsigned char;
NoThreadSafetyAnalysisAttrSpelling FromPasta(pasta::NoThreadSafetyAnalysisAttrSpelling pasta_val);

enum class NoThrowAttrSpelling : unsigned char;
NoThrowAttrSpelling FromPasta(pasta::NoThrowAttrSpelling pasta_val);

enum class NonNullAttrSpelling : unsigned char;
NonNullAttrSpelling FromPasta(pasta::NonNullAttrSpelling pasta_val);

enum class NotTailCalledAttrSpelling : unsigned char;
NotTailCalledAttrSpelling FromPasta(pasta::NotTailCalledAttrSpelling pasta_val);

enum class OMPAllocateDeclAttrAllocatorTypeTy : unsigned char;
OMPAllocateDeclAttrAllocatorTypeTy FromPasta(pasta::OMPAllocateDeclAttrAllocatorTypeTy pasta_val);

enum class OMPDeclareReductionDeclInitKind : unsigned char;
OMPDeclareReductionDeclInitKind FromPasta(pasta::OMPDeclareReductionDeclInitKind pasta_val);

enum class OMPDeclareSimdDeclAttrBranchStateTy : unsigned char;
OMPDeclareSimdDeclAttrBranchStateTy FromPasta(pasta::OMPDeclareSimdDeclAttrBranchStateTy pasta_val);

enum class OMPDeclareTargetDeclAttrDevTypeTy : unsigned char;
OMPDeclareTargetDeclAttrDevTypeTy FromPasta(pasta::OMPDeclareTargetDeclAttrDevTypeTy pasta_val);

enum class OMPDeclareTargetDeclAttrMapTypeTy : unsigned char;
OMPDeclareTargetDeclAttrMapTypeTy FromPasta(pasta::OMPDeclareTargetDeclAttrMapTypeTy pasta_val);

enum class OMPDeclareVariantAttrInteropType : unsigned char;
OMPDeclareVariantAttrInteropType FromPasta(pasta::OMPDeclareVariantAttrInteropType pasta_val);

enum class OSConsumedAttrSpelling : unsigned char;
OSConsumedAttrSpelling FromPasta(pasta::OSConsumedAttrSpelling pasta_val);

enum class OSConsumesThisAttrSpelling : unsigned char;
OSConsumesThisAttrSpelling FromPasta(pasta::OSConsumesThisAttrSpelling pasta_val);

enum class OSReturnsNotRetainedAttrSpelling : unsigned char;
OSReturnsNotRetainedAttrSpelling FromPasta(pasta::OSReturnsNotRetainedAttrSpelling pasta_val);

enum class OSReturnsRetainedAttrSpelling : unsigned char;
OSReturnsRetainedAttrSpelling FromPasta(pasta::OSReturnsRetainedAttrSpelling pasta_val);

enum class OSReturnsRetainedOnNonZeroAttrSpelling : unsigned char;
OSReturnsRetainedOnNonZeroAttrSpelling FromPasta(pasta::OSReturnsRetainedOnNonZeroAttrSpelling pasta_val);

enum class OSReturnsRetainedOnZeroAttrSpelling : unsigned char;
OSReturnsRetainedOnZeroAttrSpelling FromPasta(pasta::OSReturnsRetainedOnZeroAttrSpelling pasta_val);

enum class ObjCBoxableAttrSpelling : unsigned char;
ObjCBoxableAttrSpelling FromPasta(pasta::ObjCBoxableAttrSpelling pasta_val);

enum class ObjCBridgeAttrSpelling : unsigned char;
ObjCBridgeAttrSpelling FromPasta(pasta::ObjCBridgeAttrSpelling pasta_val);

enum class ObjCBridgeMutableAttrSpelling : unsigned char;
ObjCBridgeMutableAttrSpelling FromPasta(pasta::ObjCBridgeMutableAttrSpelling pasta_val);

enum class ObjCBridgeRelatedAttrSpelling : unsigned char;
ObjCBridgeRelatedAttrSpelling FromPasta(pasta::ObjCBridgeRelatedAttrSpelling pasta_val);

enum class ObjCClassStubAttrSpelling : unsigned char;
ObjCClassStubAttrSpelling FromPasta(pasta::ObjCClassStubAttrSpelling pasta_val);

enum class ObjCDesignatedInitializerAttrSpelling : unsigned char;
ObjCDesignatedInitializerAttrSpelling FromPasta(pasta::ObjCDesignatedInitializerAttrSpelling pasta_val);

enum class ObjCDirectAttrSpelling : unsigned char;
ObjCDirectAttrSpelling FromPasta(pasta::ObjCDirectAttrSpelling pasta_val);

enum class ObjCDirectMembersAttrSpelling : unsigned char;
ObjCDirectMembersAttrSpelling FromPasta(pasta::ObjCDirectMembersAttrSpelling pasta_val);

enum class ObjCExceptionAttrSpelling : unsigned char;
ObjCExceptionAttrSpelling FromPasta(pasta::ObjCExceptionAttrSpelling pasta_val);

enum class ObjCExplicitProtocolImplAttrSpelling : unsigned char;
ObjCExplicitProtocolImplAttrSpelling FromPasta(pasta::ObjCExplicitProtocolImplAttrSpelling pasta_val);

enum class ObjCExternallyRetainedAttrSpelling : unsigned char;
ObjCExternallyRetainedAttrSpelling FromPasta(pasta::ObjCExternallyRetainedAttrSpelling pasta_val);

enum class ObjCGCAttrSpelling : unsigned char;
ObjCGCAttrSpelling FromPasta(pasta::ObjCGCAttrSpelling pasta_val);

enum class ObjCIndependentClassAttrSpelling : unsigned char;
ObjCIndependentClassAttrSpelling FromPasta(pasta::ObjCIndependentClassAttrSpelling pasta_val);

enum class ObjCIvarDeclAccessControl : unsigned char;
ObjCIvarDeclAccessControl FromPasta(pasta::ObjCIvarDeclAccessControl pasta_val);

enum class ObjCMessageExprReceiverKind : unsigned char;
ObjCMessageExprReceiverKind FromPasta(pasta::ObjCMessageExprReceiverKind pasta_val);

enum class ObjCMethodDeclImplementationControl : unsigned char;
ObjCMethodDeclImplementationControl FromPasta(pasta::ObjCMethodDeclImplementationControl pasta_val);

enum class ObjCMethodFamilyAttrFamilyKind : unsigned char;
ObjCMethodFamilyAttrFamilyKind FromPasta(pasta::ObjCMethodFamilyAttrFamilyKind pasta_val);

enum class ObjCMethodFamilyAttrSpelling : unsigned char;
ObjCMethodFamilyAttrSpelling FromPasta(pasta::ObjCMethodFamilyAttrSpelling pasta_val);

enum class ObjCNSObjectAttrSpelling : unsigned char;
ObjCNSObjectAttrSpelling FromPasta(pasta::ObjCNSObjectAttrSpelling pasta_val);

enum class ObjCNonLazyClassAttrSpelling : unsigned char;
ObjCNonLazyClassAttrSpelling FromPasta(pasta::ObjCNonLazyClassAttrSpelling pasta_val);

enum class ObjCNonRuntimeProtocolAttrSpelling : unsigned char;
ObjCNonRuntimeProtocolAttrSpelling FromPasta(pasta::ObjCNonRuntimeProtocolAttrSpelling pasta_val);

enum class ObjCOwnershipAttrSpelling : unsigned char;
ObjCOwnershipAttrSpelling FromPasta(pasta::ObjCOwnershipAttrSpelling pasta_val);

enum class ObjCPreciseLifetimeAttrSpelling : unsigned char;
ObjCPreciseLifetimeAttrSpelling FromPasta(pasta::ObjCPreciseLifetimeAttrSpelling pasta_val);

enum class ObjCPropertyDeclPropertyControl : unsigned char;
ObjCPropertyDeclPropertyControl FromPasta(pasta::ObjCPropertyDeclPropertyControl pasta_val);

enum class ObjCPropertyDeclSetterKind : unsigned char;
ObjCPropertyDeclSetterKind FromPasta(pasta::ObjCPropertyDeclSetterKind pasta_val);

enum class ObjCPropertyImplDeclKind : unsigned char;
ObjCPropertyImplDeclKind FromPasta(pasta::ObjCPropertyImplDeclKind pasta_val);

enum class ObjCRequiresPropertyDefsAttrSpelling : unsigned char;
ObjCRequiresPropertyDefsAttrSpelling FromPasta(pasta::ObjCRequiresPropertyDefsAttrSpelling pasta_val);

enum class ObjCRequiresSuperAttrSpelling : unsigned char;
ObjCRequiresSuperAttrSpelling FromPasta(pasta::ObjCRequiresSuperAttrSpelling pasta_val);

enum class ObjCReturnsInnerPointerAttrSpelling : unsigned char;
ObjCReturnsInnerPointerAttrSpelling FromPasta(pasta::ObjCReturnsInnerPointerAttrSpelling pasta_val);

enum class ObjCRootClassAttrSpelling : unsigned char;
ObjCRootClassAttrSpelling FromPasta(pasta::ObjCRootClassAttrSpelling pasta_val);

enum class ObjCRuntimeNameAttrSpelling : unsigned char;
ObjCRuntimeNameAttrSpelling FromPasta(pasta::ObjCRuntimeNameAttrSpelling pasta_val);

enum class ObjCRuntimeVisibleAttrSpelling : unsigned char;
ObjCRuntimeVisibleAttrSpelling FromPasta(pasta::ObjCRuntimeVisibleAttrSpelling pasta_val);

enum class ObjCSubclassingRestrictedAttrSpelling : unsigned char;
ObjCSubclassingRestrictedAttrSpelling FromPasta(pasta::ObjCSubclassingRestrictedAttrSpelling pasta_val);

enum class OpenCLAccessAttrSpelling : unsigned char;
OpenCLAccessAttrSpelling FromPasta(pasta::OpenCLAccessAttrSpelling pasta_val);

enum class OpenCLConstantAddressSpaceAttrSpelling : unsigned char;
OpenCLConstantAddressSpaceAttrSpelling FromPasta(pasta::OpenCLConstantAddressSpaceAttrSpelling pasta_val);

enum class OpenCLGenericAddressSpaceAttrSpelling : unsigned char;
OpenCLGenericAddressSpaceAttrSpelling FromPasta(pasta::OpenCLGenericAddressSpaceAttrSpelling pasta_val);

enum class OpenCLGlobalAddressSpaceAttrSpelling : unsigned char;
OpenCLGlobalAddressSpaceAttrSpelling FromPasta(pasta::OpenCLGlobalAddressSpaceAttrSpelling pasta_val);

enum class OpenCLGlobalDeviceAddressSpaceAttrSpelling : unsigned char;
OpenCLGlobalDeviceAddressSpaceAttrSpelling FromPasta(pasta::OpenCLGlobalDeviceAddressSpaceAttrSpelling pasta_val);

enum class OpenCLGlobalHostAddressSpaceAttrSpelling : unsigned char;
OpenCLGlobalHostAddressSpaceAttrSpelling FromPasta(pasta::OpenCLGlobalHostAddressSpaceAttrSpelling pasta_val);

enum class OpenCLKernelAttrSpelling : unsigned char;
OpenCLKernelAttrSpelling FromPasta(pasta::OpenCLKernelAttrSpelling pasta_val);

enum class OpenCLLocalAddressSpaceAttrSpelling : unsigned char;
OpenCLLocalAddressSpaceAttrSpelling FromPasta(pasta::OpenCLLocalAddressSpaceAttrSpelling pasta_val);

enum class OpenCLPrivateAddressSpaceAttrSpelling : unsigned char;
OpenCLPrivateAddressSpaceAttrSpelling FromPasta(pasta::OpenCLPrivateAddressSpaceAttrSpelling pasta_val);

enum class OptimizeNoneAttrSpelling : unsigned char;
OptimizeNoneAttrSpelling FromPasta(pasta::OptimizeNoneAttrSpelling pasta_val);

enum class OverloadableAttrSpelling : unsigned char;
OverloadableAttrSpelling FromPasta(pasta::OverloadableAttrSpelling pasta_val);

enum class OwnershipAttrOwnershipKind : unsigned char;
OwnershipAttrOwnershipKind FromPasta(pasta::OwnershipAttrOwnershipKind pasta_val);

enum class OwnershipAttrSpelling : unsigned char;
OwnershipAttrSpelling FromPasta(pasta::OwnershipAttrSpelling pasta_val);

enum class PackedAttrSpelling : unsigned char;
PackedAttrSpelling FromPasta(pasta::PackedAttrSpelling pasta_val);

enum class ParamTypestateAttrConsumedState : unsigned char;
ParamTypestateAttrConsumedState FromPasta(pasta::ParamTypestateAttrConsumedState pasta_val);

enum class ParamTypestateAttrSpelling : unsigned char;
ParamTypestateAttrSpelling FromPasta(pasta::ParamTypestateAttrSpelling pasta_val);

enum class PascalAttrSpelling : unsigned char;
PascalAttrSpelling FromPasta(pasta::PascalAttrSpelling pasta_val);

enum class PassObjectSizeAttrSpelling : unsigned char;
PassObjectSizeAttrSpelling FromPasta(pasta::PassObjectSizeAttrSpelling pasta_val);

enum class PatchableFunctionEntryAttrSpelling : unsigned char;
PatchableFunctionEntryAttrSpelling FromPasta(pasta::PatchableFunctionEntryAttrSpelling pasta_val);

enum class PcsAttrPCSType : unsigned char;
PcsAttrPCSType FromPasta(pasta::PcsAttrPCSType pasta_val);

enum class PcsAttrSpelling : unsigned char;
PcsAttrSpelling FromPasta(pasta::PcsAttrSpelling pasta_val);

enum class PredefinedExprIdentKind : unsigned char;
PredefinedExprIdentKind FromPasta(pasta::PredefinedExprIdentKind pasta_val);

enum class PreferredNameAttrSpelling : unsigned char;
PreferredNameAttrSpelling FromPasta(pasta::PreferredNameAttrSpelling pasta_val);

enum class PreserveAllAttrSpelling : unsigned char;
PreserveAllAttrSpelling FromPasta(pasta::PreserveAllAttrSpelling pasta_val);

enum class PreserveMostAttrSpelling : unsigned char;
PreserveMostAttrSpelling FromPasta(pasta::PreserveMostAttrSpelling pasta_val);

enum class PtGuardedVarAttrSpelling : unsigned char;
PtGuardedVarAttrSpelling FromPasta(pasta::PtGuardedVarAttrSpelling pasta_val);

enum class PureAttrSpelling : unsigned char;
PureAttrSpelling FromPasta(pasta::PureAttrSpelling pasta_val);

enum class QualTypeDestructionKind : unsigned char;
QualTypeDestructionKind FromPasta(pasta::QualTypeDestructionKind pasta_val);

enum class QualTypePrimitiveCopyKind : unsigned char;
QualTypePrimitiveCopyKind FromPasta(pasta::QualTypePrimitiveCopyKind pasta_val);

enum class QualTypePrimitiveDefaultInitializeKind : unsigned char;
QualTypePrimitiveDefaultInitializeKind FromPasta(pasta::QualTypePrimitiveDefaultInitializeKind pasta_val);

enum class RISCVInterruptAttrInterruptType : unsigned char;
RISCVInterruptAttrInterruptType FromPasta(pasta::RISCVInterruptAttrInterruptType pasta_val);

enum class RISCVInterruptAttrSpelling : unsigned char;
RISCVInterruptAttrSpelling FromPasta(pasta::RISCVInterruptAttrSpelling pasta_val);

enum class RandomizeLayoutAttrSpelling : unsigned char;
RandomizeLayoutAttrSpelling FromPasta(pasta::RandomizeLayoutAttrSpelling pasta_val);

enum class RecordDeclArgPassingKind : unsigned char;
RecordDeclArgPassingKind FromPasta(pasta::RecordDeclArgPassingKind pasta_val);

enum class RegCallAttrSpelling : unsigned char;
RegCallAttrSpelling FromPasta(pasta::RegCallAttrSpelling pasta_val);

enum class ReinitializesAttrSpelling : unsigned char;
ReinitializesAttrSpelling FromPasta(pasta::ReinitializesAttrSpelling pasta_val);

enum class ReleaseCapabilityAttrSpelling : unsigned char;
ReleaseCapabilityAttrSpelling FromPasta(pasta::ReleaseCapabilityAttrSpelling pasta_val);

enum class ReleaseHandleAttrSpelling : unsigned char;
ReleaseHandleAttrSpelling FromPasta(pasta::ReleaseHandleAttrSpelling pasta_val);

enum class RequiresCapabilityAttrSpelling : unsigned char;
RequiresCapabilityAttrSpelling FromPasta(pasta::RequiresCapabilityAttrSpelling pasta_val);

enum class RestrictAttrSpelling : unsigned char;
RestrictAttrSpelling FromPasta(pasta::RestrictAttrSpelling pasta_val);

enum class RetainAttrSpelling : unsigned char;
RetainAttrSpelling FromPasta(pasta::RetainAttrSpelling pasta_val);

enum class ReturnTypestateAttrConsumedState : unsigned char;
ReturnTypestateAttrConsumedState FromPasta(pasta::ReturnTypestateAttrConsumedState pasta_val);

enum class ReturnTypestateAttrSpelling : unsigned char;
ReturnTypestateAttrSpelling FromPasta(pasta::ReturnTypestateAttrSpelling pasta_val);

enum class ReturnsNonNullAttrSpelling : unsigned char;
ReturnsNonNullAttrSpelling FromPasta(pasta::ReturnsNonNullAttrSpelling pasta_val);

enum class ReturnsTwiceAttrSpelling : unsigned char;
ReturnsTwiceAttrSpelling FromPasta(pasta::ReturnsTwiceAttrSpelling pasta_val);

enum class SYCLKernelAttrSpelling : unsigned char;
SYCLKernelAttrSpelling FromPasta(pasta::SYCLKernelAttrSpelling pasta_val);

enum class SYCLSpecialClassAttrSpelling : unsigned char;
SYCLSpecialClassAttrSpelling FromPasta(pasta::SYCLSpecialClassAttrSpelling pasta_val);

enum class ScopedLockableAttrSpelling : unsigned char;
ScopedLockableAttrSpelling FromPasta(pasta::ScopedLockableAttrSpelling pasta_val);

enum class SectionAttrSpelling : unsigned char;
SectionAttrSpelling FromPasta(pasta::SectionAttrSpelling pasta_val);

enum class SelectAnyAttrSpelling : unsigned char;
SelectAnyAttrSpelling FromPasta(pasta::SelectAnyAttrSpelling pasta_val);

enum class SentinelAttrSpelling : unsigned char;
SentinelAttrSpelling FromPasta(pasta::SentinelAttrSpelling pasta_val);

enum class SetTypestateAttrConsumedState : unsigned char;
SetTypestateAttrConsumedState FromPasta(pasta::SetTypestateAttrConsumedState pasta_val);

enum class SetTypestateAttrSpelling : unsigned char;
SetTypestateAttrSpelling FromPasta(pasta::SetTypestateAttrSpelling pasta_val);

enum class SourceLocExprIdentKind : unsigned char;
SourceLocExprIdentKind FromPasta(pasta::SourceLocExprIdentKind pasta_val);

enum class SpeculativeLoadHardeningAttrSpelling : unsigned char;
SpeculativeLoadHardeningAttrSpelling FromPasta(pasta::SpeculativeLoadHardeningAttrSpelling pasta_val);

enum class StandaloneDebugAttrSpelling : unsigned char;
StandaloneDebugAttrSpelling FromPasta(pasta::StandaloneDebugAttrSpelling pasta_val);

enum class StdCallAttrSpelling : unsigned char;
StdCallAttrSpelling FromPasta(pasta::StdCallAttrSpelling pasta_val);

enum class StmtLikelihood : unsigned char;
StmtLikelihood FromPasta(pasta::StmtLikelihood pasta_val);

enum class StmtKind : unsigned char;
StmtKind FromPasta(pasta::StmtKind pasta_val);

enum class StringLiteralStringKind : unsigned char;
StringLiteralStringKind FromPasta(pasta::StringLiteralStringKind pasta_val);

enum class SwiftAsyncAttrKind : unsigned char;
SwiftAsyncAttrKind FromPasta(pasta::SwiftAsyncAttrKind pasta_val);

enum class SwiftAsyncAttrSpelling : unsigned char;
SwiftAsyncAttrSpelling FromPasta(pasta::SwiftAsyncAttrSpelling pasta_val);

enum class SwiftAsyncCallAttrSpelling : unsigned char;
SwiftAsyncCallAttrSpelling FromPasta(pasta::SwiftAsyncCallAttrSpelling pasta_val);

enum class SwiftAsyncContextAttrSpelling : unsigned char;
SwiftAsyncContextAttrSpelling FromPasta(pasta::SwiftAsyncContextAttrSpelling pasta_val);

enum class SwiftAsyncErrorAttrConventionKind : unsigned char;
SwiftAsyncErrorAttrConventionKind FromPasta(pasta::SwiftAsyncErrorAttrConventionKind pasta_val);

enum class SwiftAsyncErrorAttrSpelling : unsigned char;
SwiftAsyncErrorAttrSpelling FromPasta(pasta::SwiftAsyncErrorAttrSpelling pasta_val);

enum class SwiftCallAttrSpelling : unsigned char;
SwiftCallAttrSpelling FromPasta(pasta::SwiftCallAttrSpelling pasta_val);

enum class SwiftContextAttrSpelling : unsigned char;
SwiftContextAttrSpelling FromPasta(pasta::SwiftContextAttrSpelling pasta_val);

enum class SwiftErrorAttrConventionKind : unsigned char;
SwiftErrorAttrConventionKind FromPasta(pasta::SwiftErrorAttrConventionKind pasta_val);

enum class SwiftErrorResultAttrSpelling : unsigned char;
SwiftErrorResultAttrSpelling FromPasta(pasta::SwiftErrorResultAttrSpelling pasta_val);

enum class SwiftIndirectResultAttrSpelling : unsigned char;
SwiftIndirectResultAttrSpelling FromPasta(pasta::SwiftIndirectResultAttrSpelling pasta_val);

enum class SwiftNewTypeAttrNewtypeKind : unsigned char;
SwiftNewTypeAttrNewtypeKind FromPasta(pasta::SwiftNewTypeAttrNewtypeKind pasta_val);

enum class SwiftNewTypeAttrSpelling : unsigned char;
SwiftNewTypeAttrSpelling FromPasta(pasta::SwiftNewTypeAttrSpelling pasta_val);

enum class SysVABIAttrSpelling : unsigned char;
SysVABIAttrSpelling FromPasta(pasta::SysVABIAttrSpelling pasta_val);

enum class TLSModelAttrSpelling : unsigned char;
TLSModelAttrSpelling FromPasta(pasta::TLSModelAttrSpelling pasta_val);

enum class TargetAttrSpelling : unsigned char;
TargetAttrSpelling FromPasta(pasta::TargetAttrSpelling pasta_val);

enum class TargetClonesAttrSpelling : unsigned char;
TargetClonesAttrSpelling FromPasta(pasta::TargetClonesAttrSpelling pasta_val);

enum class TemplateArgumentKind : unsigned char;
TemplateArgumentKind FromPasta(pasta::TemplateArgumentKind pasta_val);

enum class TestTypestateAttrConsumedState : unsigned char;
TestTypestateAttrConsumedState FromPasta(pasta::TestTypestateAttrConsumedState pasta_val);

enum class TestTypestateAttrSpelling : unsigned char;
TestTypestateAttrSpelling FromPasta(pasta::TestTypestateAttrSpelling pasta_val);

enum class ThisCallAttrSpelling : unsigned char;
ThisCallAttrSpelling FromPasta(pasta::ThisCallAttrSpelling pasta_val);

enum class TransparentUnionAttrSpelling : unsigned char;
TransparentUnionAttrSpelling FromPasta(pasta::TransparentUnionAttrSpelling pasta_val);

enum class TrivialABIAttrSpelling : unsigned char;
TrivialABIAttrSpelling FromPasta(pasta::TrivialABIAttrSpelling pasta_val);

enum class TryAcquireCapabilityAttrSpelling : unsigned char;
TryAcquireCapabilityAttrSpelling FromPasta(pasta::TryAcquireCapabilityAttrSpelling pasta_val);

enum class TypeScalarTypeKind : unsigned char;
TypeScalarTypeKind FromPasta(pasta::TypeScalarTypeKind pasta_val);

enum class TypeKind : unsigned char;
TypeKind FromPasta(pasta::TypeKind pasta_val);

enum class TypeTagForDatatypeAttrSpelling : unsigned char;
TypeTagForDatatypeAttrSpelling FromPasta(pasta::TypeTagForDatatypeAttrSpelling pasta_val);

enum class TypeVisibilityAttrSpelling : unsigned char;
TypeVisibilityAttrSpelling FromPasta(pasta::TypeVisibilityAttrSpelling pasta_val);

enum class TypeVisibilityAttrVisibilityType : unsigned char;
TypeVisibilityAttrVisibilityType FromPasta(pasta::TypeVisibilityAttrVisibilityType pasta_val);

enum class UnaryTransformTypeUTTKind : unsigned char;
UnaryTransformTypeUTTKind FromPasta(pasta::UnaryTransformTypeUTTKind pasta_val);

enum class UnavailableAttrImplicitReason : unsigned char;
UnavailableAttrImplicitReason FromPasta(pasta::UnavailableAttrImplicitReason pasta_val);

enum class UnavailableAttrSpelling : unsigned char;
UnavailableAttrSpelling FromPasta(pasta::UnavailableAttrSpelling pasta_val);

enum class UninitializedAttrSpelling : unsigned char;
UninitializedAttrSpelling FromPasta(pasta::UninitializedAttrSpelling pasta_val);

enum class UnlikelyAttrSpelling : unsigned char;
UnlikelyAttrSpelling FromPasta(pasta::UnlikelyAttrSpelling pasta_val);

enum class UnusedAttrSpelling : unsigned char;
UnusedAttrSpelling FromPasta(pasta::UnusedAttrSpelling pasta_val);

enum class UseHandleAttrSpelling : unsigned char;
UseHandleAttrSpelling FromPasta(pasta::UseHandleAttrSpelling pasta_val);

enum class UsedAttrSpelling : unsigned char;
UsedAttrSpelling FromPasta(pasta::UsedAttrSpelling pasta_val);

enum class UserDefinedLiteralLiteralOperatorKind : unsigned char;
UserDefinedLiteralLiteralOperatorKind FromPasta(pasta::UserDefinedLiteralLiteralOperatorKind pasta_val);

enum class UsingIfExistsAttrSpelling : unsigned char;
UsingIfExistsAttrSpelling FromPasta(pasta::UsingIfExistsAttrSpelling pasta_val);

enum class UuidAttrSpelling : unsigned char;
UuidAttrSpelling FromPasta(pasta::UuidAttrSpelling pasta_val);

enum class VarDeclDefinitionKind : unsigned char;
VarDeclDefinitionKind FromPasta(pasta::VarDeclDefinitionKind pasta_val);

enum class VarDeclInitializationStyle : unsigned char;
VarDeclInitializationStyle FromPasta(pasta::VarDeclInitializationStyle pasta_val);

enum class VarDeclTLSKind : unsigned char;
VarDeclTLSKind FromPasta(pasta::VarDeclTLSKind pasta_val);

enum class VecReturnAttrSpelling : unsigned char;
VecReturnAttrSpelling FromPasta(pasta::VecReturnAttrSpelling pasta_val);

enum class VectorCallAttrSpelling : unsigned char;
VectorCallAttrSpelling FromPasta(pasta::VectorCallAttrSpelling pasta_val);

enum class VectorTypeVectorKind : unsigned char;
VectorTypeVectorKind FromPasta(pasta::VectorTypeVectorKind pasta_val);

enum class VisibilityAttrSpelling : unsigned char;
VisibilityAttrSpelling FromPasta(pasta::VisibilityAttrSpelling pasta_val);

enum class VisibilityAttrVisibilityType : unsigned char;
VisibilityAttrVisibilityType FromPasta(pasta::VisibilityAttrVisibilityType pasta_val);

enum class WarnUnusedAttrSpelling : unsigned char;
WarnUnusedAttrSpelling FromPasta(pasta::WarnUnusedAttrSpelling pasta_val);

enum class WarnUnusedResultAttrSpelling : unsigned char;
WarnUnusedResultAttrSpelling FromPasta(pasta::WarnUnusedResultAttrSpelling pasta_val);

enum class WeakAttrSpelling : unsigned char;
WeakAttrSpelling FromPasta(pasta::WeakAttrSpelling pasta_val);

enum class WeakImportAttrSpelling : unsigned char;
WeakImportAttrSpelling FromPasta(pasta::WeakImportAttrSpelling pasta_val);

enum class WeakRefAttrSpelling : unsigned char;
WeakRefAttrSpelling FromPasta(pasta::WeakRefAttrSpelling pasta_val);

enum class WebAssemblyExportNameAttrSpelling : unsigned char;
WebAssemblyExportNameAttrSpelling FromPasta(pasta::WebAssemblyExportNameAttrSpelling pasta_val);

enum class WebAssemblyImportModuleAttrSpelling : unsigned char;
WebAssemblyImportModuleAttrSpelling FromPasta(pasta::WebAssemblyImportModuleAttrSpelling pasta_val);

enum class WebAssemblyImportNameAttrSpelling : unsigned char;
WebAssemblyImportNameAttrSpelling FromPasta(pasta::WebAssemblyImportNameAttrSpelling pasta_val);

enum class X86ForceAlignArgPointerAttrSpelling : unsigned char;
X86ForceAlignArgPointerAttrSpelling FromPasta(pasta::X86ForceAlignArgPointerAttrSpelling pasta_val);

enum class XRayInstrumentAttrSpelling : unsigned char;
XRayInstrumentAttrSpelling FromPasta(pasta::XRayInstrumentAttrSpelling pasta_val);

enum class XRayLogArgsAttrSpelling : unsigned char;
XRayLogArgsAttrSpelling FromPasta(pasta::XRayLogArgsAttrSpelling pasta_val);

enum class ZeroCallUsedRegsAttrSpelling : unsigned char;
ZeroCallUsedRegsAttrSpelling FromPasta(pasta::ZeroCallUsedRegsAttrSpelling pasta_val);

enum class ZeroCallUsedRegsAttrZeroCallUsedRegsKind : unsigned char;
ZeroCallUsedRegsAttrZeroCallUsedRegsKind FromPasta(pasta::ZeroCallUsedRegsAttrZeroCallUsedRegsKind pasta_val);

enum class ASTDumpOutputFormat : unsigned char;
ASTDumpOutputFormat FromPasta(pasta::ASTDumpOutputFormat pasta_val);

enum class AccessSpecifier : unsigned char;
AccessSpecifier FromPasta(pasta::AccessSpecifier pasta_val);

enum class AddrSpaceMapMangling : unsigned char;
AddrSpaceMapMangling FromPasta(pasta::AddrSpaceMapMangling pasta_val);

enum class AlignRequirementKind : unsigned char;
AlignRequirementKind FromPasta(pasta::AlignRequirementKind pasta_val);

enum class AltivecSrcCompatKind : unsigned char;
AltivecSrcCompatKind FromPasta(pasta::AltivecSrcCompatKind pasta_val);

enum class ArgumentKind : unsigned char;
ArgumentKind FromPasta(pasta::ArgumentKind pasta_val);

enum class ArrayTypeTrait : unsigned char;
ArrayTypeTrait FromPasta(pasta::ArrayTypeTrait pasta_val);

enum class AtomicScopeModelKind : unsigned char;
AtomicScopeModelKind FromPasta(pasta::AtomicScopeModelKind pasta_val);

enum class AutoTypeKeyword : unsigned char;
AutoTypeKeyword FromPasta(pasta::AutoTypeKeyword pasta_val);

enum class AvailabilityResult : unsigned char;
AvailabilityResult FromPasta(pasta::AvailabilityResult pasta_val);

enum class BinaryOperatorKind : unsigned char;
BinaryOperatorKind FromPasta(pasta::BinaryOperatorKind pasta_val);

enum class Bits : unsigned char;
Bits FromPasta(pasta::Bits pasta_val);

enum class CallingConv : unsigned char;
CallingConv FromPasta(pasta::CallingConv pasta_val);

enum class CanThrowResult : unsigned char;
CanThrowResult FromPasta(pasta::CanThrowResult pasta_val);

enum class CapturedRegionKind : unsigned char;
CapturedRegionKind FromPasta(pasta::CapturedRegionKind pasta_val);

enum class CastKind : unsigned char;
CastKind FromPasta(pasta::CastKind pasta_val);

enum class ClangABI : unsigned char;
ClangABI FromPasta(pasta::ClangABI pasta_val);

enum class CommentKind : unsigned char;
CommentKind FromPasta(pasta::CommentKind pasta_val);

enum class ComparisonCategoryResult : unsigned char;
ComparisonCategoryResult FromPasta(pasta::ComparisonCategoryResult pasta_val);

enum class ComparisonCategoryType : unsigned char;
ComparisonCategoryType FromPasta(pasta::ComparisonCategoryType pasta_val);

enum class CompilingModuleKind : unsigned char;
CompilingModuleKind FromPasta(pasta::CompilingModuleKind pasta_val);

enum class ConstexprSpecKind : unsigned char;
ConstexprSpecKind FromPasta(pasta::ConstexprSpecKind pasta_val);

enum class CoreFoundationABI : unsigned char;
CoreFoundationABI FromPasta(pasta::CoreFoundationABI pasta_val);

enum class DataPositionTy : unsigned char;
DataPositionTy FromPasta(pasta::DataPositionTy pasta_val);

enum class DefaultArgKind : unsigned char;
DefaultArgKind FromPasta(pasta::DefaultArgKind pasta_val);

enum class DefaultCallingConvention : unsigned char;
DefaultCallingConvention FromPasta(pasta::DefaultCallingConvention pasta_val);

enum class DefaultVisiblityExportMapping : unsigned char;
DefaultVisiblityExportMapping FromPasta(pasta::DefaultVisiblityExportMapping pasta_val);

enum class DiagnosticLevelMask : unsigned char;
DiagnosticLevelMask FromPasta(pasta::DiagnosticLevelMask pasta_val);

enum class ElaboratedTypeKeyword : unsigned char;
ElaboratedTypeKeyword FromPasta(pasta::ElaboratedTypeKeyword pasta_val);

enum class EmbedBitcodeKind : unsigned char;
EmbedBitcodeKind FromPasta(pasta::EmbedBitcodeKind pasta_val);

enum class EscapeChar : unsigned char;
EscapeChar FromPasta(pasta::EscapeChar pasta_val);

enum class ExceptionHandlingKind : unsigned char;
ExceptionHandlingKind FromPasta(pasta::ExceptionHandlingKind pasta_val);

enum class ExceptionSpecificationType : unsigned char;
ExceptionSpecificationType FromPasta(pasta::ExceptionSpecificationType pasta_val);

enum class ExplicitSpecKind : unsigned char;
ExplicitSpecKind FromPasta(pasta::ExplicitSpecKind pasta_val);

enum class ExprDependence : unsigned char;
ExprDependence FromPasta(pasta::ExprDependence pasta_val);

enum class ExprObjectKind : unsigned char;
ExprObjectKind FromPasta(pasta::ExprObjectKind pasta_val);

enum class ExprOffsets : unsigned char;
ExprOffsets FromPasta(pasta::ExprOffsets pasta_val);

enum class ExprValueKind : unsigned char;
ExprValueKind FromPasta(pasta::ExprValueKind pasta_val);

enum class ExpressionTrait : unsigned char;
ExpressionTrait FromPasta(pasta::ExpressionTrait pasta_val);

enum class ExtKind : unsigned char;
ExtKind FromPasta(pasta::ExtKind pasta_val);

enum class ExtendArgsKind : unsigned char;
ExtendArgsKind FromPasta(pasta::ExtendArgsKind pasta_val);

enum class FPEvalMethodKind : unsigned char;
FPEvalMethodKind FromPasta(pasta::FPEvalMethodKind pasta_val);

enum class FPExceptionModeKind : unsigned char;
FPExceptionModeKind FromPasta(pasta::FPExceptionModeKind pasta_val);

enum class FPModeKind : unsigned char;
FPModeKind FromPasta(pasta::FPModeKind pasta_val);

enum class FiniteLoopsKind : unsigned char;
FiniteLoopsKind FromPasta(pasta::FiniteLoopsKind pasta_val);

enum class FramePointerKind : unsigned char;
FramePointerKind FromPasta(pasta::FramePointerKind pasta_val);

enum class GC : unsigned char;
GC FromPasta(pasta::GC pasta_val);

enum class GCMode : unsigned char;
GCMode FromPasta(pasta::GCMode pasta_val);

enum class GPUDefaultStreamKind : unsigned char;
GPUDefaultStreamKind FromPasta(pasta::GPUDefaultStreamKind pasta_val);

enum class GVALinkage : unsigned char;
GVALinkage FromPasta(pasta::GVALinkage pasta_val);

enum class GetBuiltinTypeError : unsigned char;
GetBuiltinTypeError FromPasta(pasta::GetBuiltinTypeError pasta_val);

enum class HLSLLangStd : unsigned char;
HLSLLangStd FromPasta(pasta::HLSLLangStd pasta_val);

enum class ID : unsigned char;
ID FromPasta(pasta::ID pasta_val);

enum class IdentifierInfoFlag : unsigned char;
IdentifierInfoFlag FromPasta(pasta::IdentifierInfoFlag pasta_val);

enum class IfStatementKind : unsigned char;
IfStatementKind FromPasta(pasta::IfStatementKind pasta_val);

enum class ImbueAttribute : unsigned char;
ImbueAttribute FromPasta(pasta::ImbueAttribute pasta_val);

enum class InClassInitStyle : unsigned char;
InClassInitStyle FromPasta(pasta::InClassInitStyle pasta_val);

enum class InheritedDesignatedInitializersState : unsigned char;
InheritedDesignatedInitializersState FromPasta(pasta::InheritedDesignatedInitializersState pasta_val);

enum class InitStorageKind : unsigned char;
InitStorageKind FromPasta(pasta::InitStorageKind pasta_val);

enum class InlineAsmDialectKind : unsigned char;
InlineAsmDialectKind FromPasta(pasta::InlineAsmDialectKind pasta_val);

enum class InlineVariableDefinitionKind : unsigned char;
InlineVariableDefinitionKind FromPasta(pasta::InlineVariableDefinitionKind pasta_val);

enum class InliningMethod : unsigned char;
InliningMethod FromPasta(pasta::InliningMethod pasta_val);

enum class Kinds : unsigned char;
Kinds FromPasta(pasta::Kinds pasta_val);

enum class LambdaCaptureDefault : unsigned char;
LambdaCaptureDefault FromPasta(pasta::LambdaCaptureDefault pasta_val);

enum class LambdaCaptureKind : unsigned char;
LambdaCaptureKind FromPasta(pasta::LambdaCaptureKind pasta_val);

enum class LangAS : unsigned char;
LangAS FromPasta(pasta::LangAS pasta_val);

enum class LangFeatures : unsigned char;
LangFeatures FromPasta(pasta::LangFeatures pasta_val);

enum class Language : unsigned char;
Language FromPasta(pasta::Language pasta_val);

enum class LanguageLinkage : unsigned char;
LanguageLinkage FromPasta(pasta::LanguageLinkage pasta_val);

enum class LaxVectorConversionKind : unsigned char;
LaxVectorConversionKind FromPasta(pasta::LaxVectorConversionKind pasta_val);

enum class Level : unsigned char;
Level FromPasta(pasta::Level pasta_val);

enum class Linkage : unsigned char;
Linkage FromPasta(pasta::Linkage pasta_val);

enum class MSInheritanceModel : unsigned char;
MSInheritanceModel FromPasta(pasta::MSInheritanceModel pasta_val);

enum class MSVCMajorVersion : unsigned char;
MSVCMajorVersion FromPasta(pasta::MSVCMajorVersion pasta_val);

enum class MSVtorDispMode : unsigned char;
MSVtorDispMode FromPasta(pasta::MSVtorDispMode pasta_val);

enum class MethodRefFlags : unsigned char;
MethodRefFlags FromPasta(pasta::MethodRefFlags pasta_val);

enum class ModifiableType : unsigned char;
ModifiableType FromPasta(pasta::ModifiableType pasta_val);

enum class MultiVersionKind : unsigned char;
MultiVersionKind FromPasta(pasta::MultiVersionKind pasta_val);

enum class NameKind : unsigned char;
NameKind FromPasta(pasta::NameKind pasta_val);

enum class NeedExtraManglingDecl : unsigned char;
NeedExtraManglingDecl FromPasta(pasta::NeedExtraManglingDecl pasta_val);

enum class NestedNameSpecifierDependence : unsigned char;
NestedNameSpecifierDependence FromPasta(pasta::NestedNameSpecifierDependence pasta_val);

enum class NonOdrUseReason : unsigned char;
NonOdrUseReason FromPasta(pasta::NonOdrUseReason pasta_val);

enum class NonceObjCInterface : unsigned char;
NonceObjCInterface FromPasta(pasta::NonceObjCInterface pasta_val);

enum class NullabilityKind : unsigned char;
NullabilityKind FromPasta(pasta::NullabilityKind pasta_val);

enum class ObjCBridgeCastKind : unsigned char;
ObjCBridgeCastKind FromPasta(pasta::ObjCBridgeCastKind pasta_val);

enum class ObjCDispatchMethodKind : unsigned char;
ObjCDispatchMethodKind FromPasta(pasta::ObjCDispatchMethodKind pasta_val);

enum class ObjCInstanceTypeFamily : unsigned char;
ObjCInstanceTypeFamily FromPasta(pasta::ObjCInstanceTypeFamily pasta_val);

enum class ObjCLifetime : unsigned char;
ObjCLifetime FromPasta(pasta::ObjCLifetime pasta_val);

enum class ObjCMethodFamily : unsigned char;
ObjCMethodFamily FromPasta(pasta::ObjCMethodFamily pasta_val);

enum class ObjCPropertyQueryKind : unsigned char;
ObjCPropertyQueryKind FromPasta(pasta::ObjCPropertyQueryKind pasta_val);

enum class ObjCStringFormatFamily : unsigned char;
ObjCStringFormatFamily FromPasta(pasta::ObjCStringFormatFamily pasta_val);

enum class ObjCSubstitutionContext : unsigned char;
ObjCSubstitutionContext FromPasta(pasta::ObjCSubstitutionContext pasta_val);

enum class ObjCTypeParamVariance : unsigned char;
ObjCTypeParamVariance FromPasta(pasta::ObjCTypeParamVariance pasta_val);

enum class OnOffSwitch : unsigned char;
OnOffSwitch FromPasta(pasta::OnOffSwitch pasta_val);

enum class OnStackType : unsigned char;
OnStackType FromPasta(pasta::OnStackType pasta_val);

enum class OpenMPAdjustArgsOpKind : unsigned char;
OpenMPAdjustArgsOpKind FromPasta(pasta::OpenMPAdjustArgsOpKind pasta_val);

enum class OpenMPAtomicDefaultMemOrderClauseKind : unsigned char;
OpenMPAtomicDefaultMemOrderClauseKind FromPasta(pasta::OpenMPAtomicDefaultMemOrderClauseKind pasta_val);

enum class OpenMPBindClauseKind : unsigned char;
OpenMPBindClauseKind FromPasta(pasta::OpenMPBindClauseKind pasta_val);

enum class OpenMPDefaultmapClauseKind : unsigned char;
OpenMPDefaultmapClauseKind FromPasta(pasta::OpenMPDefaultmapClauseKind pasta_val);

enum class OpenMPDefaultmapClauseModifier : unsigned char;
OpenMPDefaultmapClauseModifier FromPasta(pasta::OpenMPDefaultmapClauseModifier pasta_val);

enum class OpenMPDependClauseKind : unsigned char;
OpenMPDependClauseKind FromPasta(pasta::OpenMPDependClauseKind pasta_val);

enum class OpenMPDeviceClauseModifier : unsigned char;
OpenMPDeviceClauseModifier FromPasta(pasta::OpenMPDeviceClauseModifier pasta_val);

enum class OpenMPDeviceType : unsigned char;
OpenMPDeviceType FromPasta(pasta::OpenMPDeviceType pasta_val);

enum class OpenMPDistScheduleClauseKind : unsigned char;
OpenMPDistScheduleClauseKind FromPasta(pasta::OpenMPDistScheduleClauseKind pasta_val);

enum class OpenMPLastprivateModifier : unsigned char;
OpenMPLastprivateModifier FromPasta(pasta::OpenMPLastprivateModifier pasta_val);

enum class OpenMPLinearClauseKind : unsigned char;
OpenMPLinearClauseKind FromPasta(pasta::OpenMPLinearClauseKind pasta_val);

enum class OpenMPMapClauseKind : unsigned char;
OpenMPMapClauseKind FromPasta(pasta::OpenMPMapClauseKind pasta_val);

enum class OpenMPMapModifierKind : unsigned char;
OpenMPMapModifierKind FromPasta(pasta::OpenMPMapModifierKind pasta_val);

enum class OpenMPMotionModifierKind : unsigned char;
OpenMPMotionModifierKind FromPasta(pasta::OpenMPMotionModifierKind pasta_val);

enum class OpenMPOrderClauseKind : unsigned char;
OpenMPOrderClauseKind FromPasta(pasta::OpenMPOrderClauseKind pasta_val);

enum class OpenMPReductionClauseModifier : unsigned char;
OpenMPReductionClauseModifier FromPasta(pasta::OpenMPReductionClauseModifier pasta_val);

enum class OpenMPScheduleClauseKind : unsigned char;
OpenMPScheduleClauseKind FromPasta(pasta::OpenMPScheduleClauseKind pasta_val);

enum class OpenMPScheduleClauseModifier : unsigned char;
OpenMPScheduleClauseModifier FromPasta(pasta::OpenMPScheduleClauseModifier pasta_val);

enum class OverloadedOperatorKind : unsigned char;
OverloadedOperatorKind FromPasta(pasta::OverloadedOperatorKind pasta_val);

enum class OverloadsShown : unsigned char;
OverloadsShown FromPasta(pasta::OverloadsShown pasta_val);

enum class ParameterABI : unsigned char;
ParameterABI FromPasta(pasta::ParameterABI pasta_val);

enum class ParenLocsOffsets : unsigned char;
ParenLocsOffsets FromPasta(pasta::ParenLocsOffsets pasta_val);

enum class PragmaFloatControlKind : unsigned char;
PragmaFloatControlKind FromPasta(pasta::PragmaFloatControlKind pasta_val);

enum class PragmaMSCommentKind : unsigned char;
PragmaMSCommentKind FromPasta(pasta::PragmaMSCommentKind pasta_val);

enum class PragmaMSPointersToMembersKind : unsigned char;
PragmaMSPointersToMembersKind FromPasta(pasta::PragmaMSPointersToMembersKind pasta_val);

enum class PragmaMSStructKind : unsigned char;
PragmaMSStructKind FromPasta(pasta::PragmaMSStructKind pasta_val);

enum class PragmaSectionFlag : unsigned char;
PragmaSectionFlag FromPasta(pasta::PragmaSectionFlag pasta_val);

enum class ProfileInstrKind : unsigned char;
ProfileInstrKind FromPasta(pasta::ProfileInstrKind pasta_val);

enum class Qualified : unsigned char;
Qualified FromPasta(pasta::Qualified pasta_val);

enum class RangeExprOffset : unsigned char;
RangeExprOffset FromPasta(pasta::RangeExprOffset pasta_val);

enum class RangeLocOffset : unsigned char;
RangeLocOffset FromPasta(pasta::RangeLocOffset pasta_val);

enum class RefQualifierKind : unsigned char;
RefQualifierKind FromPasta(pasta::RefQualifierKind pasta_val);

enum class RemarkKind : unsigned char;
RemarkKind FromPasta(pasta::RemarkKind pasta_val);

enum class ReservedIdentifierStatus : unsigned char;
ReservedIdentifierStatus FromPasta(pasta::ReservedIdentifierStatus pasta_val);

enum class SFINAEResponse : unsigned char;
SFINAEResponse FromPasta(pasta::SFINAEResponse pasta_val);

enum class SYCLMajorVersion : unsigned char;
SYCLMajorVersion FromPasta(pasta::SYCLMajorVersion pasta_val);

enum class SanitizerOrdinal : unsigned char;
SanitizerOrdinal FromPasta(pasta::SanitizerOrdinal pasta_val);

enum class SelectorLocationsKind : unsigned char;
SelectorLocationsKind FromPasta(pasta::SelectorLocationsKind pasta_val);

enum class ShaderStage : unsigned char;
ShaderStage FromPasta(pasta::ShaderStage pasta_val);

enum class SignReturnAddressKeyKind : unsigned char;
SignReturnAddressKeyKind FromPasta(pasta::SignReturnAddressKeyKind pasta_val);

enum class SignReturnAddressScopeKind : unsigned char;
SignReturnAddressScopeKind FromPasta(pasta::SignReturnAddressScopeKind pasta_val);

enum class SignedOverflowBehaviorTy : unsigned char;
SignedOverflowBehaviorTy FromPasta(pasta::SignedOverflowBehaviorTy pasta_val);

enum class SpecialMemberFlags : unsigned char;
SpecialMemberFlags FromPasta(pasta::SpecialMemberFlags pasta_val);

enum class SpecifierKind : unsigned char;
SpecifierKind FromPasta(pasta::SpecifierKind pasta_val);

enum class StackProtectorMode : unsigned char;
StackProtectorMode FromPasta(pasta::StackProtectorMode pasta_val);

enum class StorageClass : unsigned char;
StorageClass FromPasta(pasta::StorageClass pasta_val);

enum class StorageDuration : unsigned char;
StorageDuration FromPasta(pasta::StorageDuration pasta_val);

enum class StoredNameKind : unsigned char;
StoredNameKind FromPasta(pasta::StoredNameKind pasta_val);

enum class StoredSpecifierKind : unsigned char;
StoredSpecifierKind FromPasta(pasta::StoredSpecifierKind pasta_val);

enum class StructReturnConventionKind : unsigned char;
StructReturnConventionKind FromPasta(pasta::StructReturnConventionKind pasta_val);

enum class SubExpr : unsigned char;
SubExpr FromPasta(pasta::SubExpr pasta_val);

enum class SubStmt : unsigned char;
SubStmt FromPasta(pasta::SubStmt pasta_val);

enum class SwiftAsyncFramePointerKind : unsigned char;
SwiftAsyncFramePointerKind FromPasta(pasta::SwiftAsyncFramePointerKind pasta_val);

enum class SyncScope : unsigned char;
SyncScope FromPasta(pasta::SyncScope pasta_val);

enum class Syntax : unsigned char;
Syntax FromPasta(pasta::Syntax pasta_val);

enum class TLSModel : unsigned char;
TLSModel FromPasta(pasta::TLSModel pasta_val);

enum class TQ : unsigned char;
TQ FromPasta(pasta::TQ pasta_val);

enum class TagTypeKind : unsigned char;
TagTypeKind FromPasta(pasta::TagTypeKind pasta_val);

enum class TailPaddingUseRules : unsigned char;
TailPaddingUseRules FromPasta(pasta::TailPaddingUseRules pasta_val);

enum class TemplateArgumentDependence : unsigned char;
TemplateArgumentDependence FromPasta(pasta::TemplateArgumentDependence pasta_val);

enum class TemplateNameDependence : unsigned char;
TemplateNameDependence FromPasta(pasta::TemplateNameDependence pasta_val);

enum class TemplateSpecializationKind : unsigned char;
TemplateSpecializationKind FromPasta(pasta::TemplateSpecializationKind pasta_val);

enum class TextDiagnosticFormat : unsigned char;
TextDiagnosticFormat FromPasta(pasta::TextDiagnosticFormat pasta_val);

enum class ThreadModelKind : unsigned char;
ThreadModelKind FromPasta(pasta::ThreadModelKind pasta_val);

enum class ThreadStorageClassSpecifier : unsigned char;
ThreadStorageClassSpecifier FromPasta(pasta::ThreadStorageClassSpecifier pasta_val);

enum class TokenKind : unsigned short;
TokenKind FromPasta(pasta::TokenKind pasta_val);

enum class TrailingAllocKind : unsigned char;
TrailingAllocKind FromPasta(pasta::TrailingAllocKind pasta_val);

enum class TranslationUnitKind : unsigned char;
TranslationUnitKind FromPasta(pasta::TranslationUnitKind pasta_val);

enum class TrivialAutoVarInitKind : unsigned char;
TrivialAutoVarInitKind FromPasta(pasta::TrivialAutoVarInitKind pasta_val);

enum class TypeDependence : unsigned char;
TypeDependence FromPasta(pasta::TypeDependence pasta_val);

enum class TypeLocClass : unsigned char;
TypeLocClass FromPasta(pasta::TypeLocClass pasta_val);

enum class TypeSpecifierSign : unsigned char;
TypeSpecifierSign FromPasta(pasta::TypeSpecifierSign pasta_val);

enum class TypeSpecifierType : unsigned char;
TypeSpecifierType FromPasta(pasta::TypeSpecifierType pasta_val);

enum class TypeSpecifierWidth : unsigned char;
TypeSpecifierWidth FromPasta(pasta::TypeSpecifierWidth pasta_val);

enum class TypeSpecifiersPipe : unsigned char;
TypeSpecifiersPipe FromPasta(pasta::TypeSpecifiersPipe pasta_val);

enum class TypeTrait : unsigned char;
TypeTrait FromPasta(pasta::TypeTrait pasta_val);

enum class UnaryExprOrTypeTrait : unsigned char;
UnaryExprOrTypeTrait FromPasta(pasta::UnaryExprOrTypeTrait pasta_val);

enum class UnaryOperatorKind : unsigned char;
UnaryOperatorKind FromPasta(pasta::UnaryOperatorKind pasta_val);

enum class APValueKind : unsigned char;
APValueKind FromPasta(pasta::APValueKind pasta_val);

enum class VectorLibrary : unsigned char;
VectorLibrary FromPasta(pasta::VectorLibrary pasta_val);

enum class Visibility : unsigned char;
Visibility FromPasta(pasta::Visibility pasta_val);

enum class AttributeSyntax : unsigned char;
AttributeSyntax FromPasta(pasta::AttributeSyntax pasta_val);

enum class DeclCategory : unsigned char;
DeclCategory FromPasta(pasta::DeclCategory pasta_val);

enum class MacroKind : unsigned char;
MacroKind FromPasta(pasta::MacroKind pasta_val);

enum class PathKind : unsigned char;
PathKind FromPasta(pasta::PathKind pasta_val);

enum class FileType : unsigned char;
FileType FromPasta(pasta::FileType pasta_val);

enum class CompilerName : unsigned char;
CompilerName FromPasta(pasta::CompilerName pasta_val);

enum class IncludePathLocation : unsigned char;
IncludePathLocation FromPasta(pasta::IncludePathLocation pasta_val);

enum class TargetLanguage : unsigned char;
TargetLanguage FromPasta(pasta::TargetLanguage pasta_val);

enum class PseudoKind : unsigned char;
PseudoKind FromPasta(pasta::PseudoKind pasta_val);

enum class DeclUseSelector : unsigned short;
enum class StmtUseSelector : unsigned short;
enum class TypeUseSelector : unsigned short;
enum class TokenUseSelector : unsigned short;
enum class FileUseSelector : unsigned short;
enum class AttrUseSelector : unsigned short;
enum class MacroUseSelector : unsigned short;
}  // namespace mx