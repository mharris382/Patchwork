// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExInclusionFilter.h"
#include "Geometry/PCGExGeo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExInclusionFilter() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExInclusionFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExInclusionFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExInclusionFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExInclusionFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPolyPathFilterFactory();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineCheckType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineFilterPick();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSamplingIncludeMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWindingMutation();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExInclusionFilterConfig ***************************************
struct Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExInclusionFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExInclusionFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Projection settings (used for inclusion checks). */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Projection settings (used for inclusion checks)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleInputs_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sample inputs.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sample inputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pick_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If a point is both inside and outside a spline (if there are multiple ones), decide what value to favor. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If a point is both inside and outside a spline (if there are multiple ones), decide what value to favor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Tolerance value used to determine whether a point is considered on the spline or not */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tolerance value used to determine whether a point is considered on the spline or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplineScalesTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Scale the tolerance with spline' \"thickness\" (Scale' length)  */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale the tolerance with spline' \"thickness\" (Scale' length)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InclusionOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If non-zero, will apply an offset (inset) to the data used for inclusion testing. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If non-zero, will apply an offset (inset) to the data used for inclusion testing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMinInclusionCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinInclusionCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "bUseMinInclusionCount" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxInclusionCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxInclusionCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "bUseMaxInclusionCount" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, invert the result of the test */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, invert the result of the test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpandZAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindingMutation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Lets you enforce a path winding for testing */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Lets you enforce a path winding for testing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fidelity_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** When projecting, defines the resolution of the polygon created from the spline. Lower values means higher fidelity, but slower execution. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "When projecting, defines the resolution of the polygon created from the spline. Lower values means higher fidelity, but slower execution." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckAgainstDataBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, when used with a collection filter, will use collection bounds as a proxy point instead of per-point testing */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, when used with a collection filter, will use collection bounds as a proxy point instead of per-point testing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelf_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, a collection will never be tested against itself */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, a collection will never be tested against itself" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExInclusionFilterConfig constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionDetails;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleInputs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleInputs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CheckType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CheckType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Pick_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Pick;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static void NewProp_bSplineScalesTolerance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplineScalesTolerance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InclusionOffset;
	static void NewProp_bUseMinInclusionCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMinInclusionCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinInclusionCount;
	static void NewProp_bUseMaxInclusionCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxInclusionCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxInclusionCount;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ExpandZAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WindingMutation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WindingMutation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Fidelity;
	static void NewProp_bCheckAgainstDataBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckAgainstDataBounds;
	static void NewProp_bIgnoreSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExInclusionFilterConfig constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExInclusionFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExInclusionFilterConfig;
class UScriptStruct* FPCGExInclusionFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExInclusionFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExInclusionFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExInclusionFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExInclusionFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExInclusionFilterConfig Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_ProjectionDetails = { "ProjectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExInclusionFilterConfig, ProjectionDetails), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDetails_MetaData), NewProp_ProjectionDetails_MetaData) }; // 1019281773
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_SampleInputs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_SampleInputs = { "SampleInputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExInclusionFilterConfig, SampleInputs), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSamplingIncludeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleInputs_MetaData), NewProp_SampleInputs_MetaData) }; // 3557312926
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_CheckType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_CheckType = { "CheckType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExInclusionFilterConfig, CheckType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineCheckType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckType_MetaData), NewProp_CheckType_MetaData) }; // 408226744
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_Pick_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_Pick = { "Pick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExInclusionFilterConfig, Pick), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineFilterPick, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pick_MetaData), NewProp_Pick_MetaData) }; // 63009028
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExInclusionFilterConfig, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
void Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bSplineScalesTolerance_SetBit(void* Obj)
{
	((FPCGExInclusionFilterConfig*)Obj)->bSplineScalesTolerance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bSplineScalesTolerance = { "bSplineScalesTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExInclusionFilterConfig), &Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bSplineScalesTolerance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplineScalesTolerance_MetaData), NewProp_bSplineScalesTolerance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_InclusionOffset = { "InclusionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExInclusionFilterConfig, InclusionOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InclusionOffset_MetaData), NewProp_InclusionOffset_MetaData) };
void Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bUseMinInclusionCount_SetBit(void* Obj)
{
	((FPCGExInclusionFilterConfig*)Obj)->bUseMinInclusionCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bUseMinInclusionCount = { "bUseMinInclusionCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExInclusionFilterConfig), &Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bUseMinInclusionCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMinInclusionCount_MetaData), NewProp_bUseMinInclusionCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_MinInclusionCount = { "MinInclusionCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExInclusionFilterConfig, MinInclusionCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinInclusionCount_MetaData), NewProp_MinInclusionCount_MetaData) };
void Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bUseMaxInclusionCount_SetBit(void* Obj)
{
	((FPCGExInclusionFilterConfig*)Obj)->bUseMaxInclusionCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bUseMaxInclusionCount = { "bUseMaxInclusionCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExInclusionFilterConfig), &Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bUseMaxInclusionCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaxInclusionCount_MetaData), NewProp_bUseMaxInclusionCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_MaxInclusionCount = { "MaxInclusionCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExInclusionFilterConfig, MaxInclusionCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxInclusionCount_MetaData), NewProp_MaxInclusionCount_MetaData) };
void Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExInclusionFilterConfig*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExInclusionFilterConfig), &Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_ExpandZAxis = { "ExpandZAxis", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExInclusionFilterConfig, ExpandZAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpandZAxis_MetaData), NewProp_ExpandZAxis_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_WindingMutation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_WindingMutation = { "WindingMutation", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExInclusionFilterConfig, WindingMutation), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWindingMutation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindingMutation_MetaData), NewProp_WindingMutation_MetaData) }; // 4046642856
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_Fidelity = { "Fidelity", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExInclusionFilterConfig, Fidelity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fidelity_MetaData), NewProp_Fidelity_MetaData) };
void Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bCheckAgainstDataBounds_SetBit(void* Obj)
{
	((FPCGExInclusionFilterConfig*)Obj)->bCheckAgainstDataBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bCheckAgainstDataBounds = { "bCheckAgainstDataBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExInclusionFilterConfig), &Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bCheckAgainstDataBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckAgainstDataBounds_MetaData), NewProp_bCheckAgainstDataBounds_MetaData) };
void Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((FPCGExInclusionFilterConfig*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExInclusionFilterConfig), &Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSelf_MetaData), NewProp_bIgnoreSelf_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_ProjectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_SampleInputs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_SampleInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_CheckType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_CheckType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_Pick_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_Pick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bSplineScalesTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_InclusionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bUseMinInclusionCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_MinInclusionCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bUseMaxInclusionCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_MaxInclusionCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bInvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_ExpandZAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_WindingMutation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_WindingMutation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_Fidelity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bCheckAgainstDataBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewProp_bIgnoreSelf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExInclusionFilterConfig Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExInclusionFilterConfig",
	Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::PropPointers),
	sizeof(FPCGExInclusionFilterConfig),
	alignof(FPCGExInclusionFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExInclusionFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExInclusionFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExInclusionFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExInclusionFilterConfig *****************************************

// ********** Begin Class UPCGExInclusionFilterFactory *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExInclusionFilterFactory;
UClass* UPCGExInclusionFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExInclusionFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExInclusionFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExInclusionFilterFactory"),
			Z_Registration_Info_UClass_UPCGExInclusionFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExInclusionFilterFactory,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPCGExInclusionFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExInclusionFilterFactory_NoRegister()
{
	return UPCGExInclusionFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExInclusionFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/Filters/PCGExInclusionFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExInclusionFilterFactory constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExInclusionFilterFactory constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExInclusionFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExInclusionFilterFactory_Statics

// ********** Begin Class UPCGExInclusionFilterFactory Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExInclusionFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExInclusionFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 975057018
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExInclusionFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExInclusionFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExInclusionFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExInclusionFilterFactory Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExInclusionFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPolyPathFilterFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExInclusionFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExInclusionFilterFactory_Statics::ClassParams = {
	&UPCGExInclusionFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExInclusionFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExInclusionFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExInclusionFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExInclusionFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExInclusionFilterFactory::StaticRegisterNativesUPCGExInclusionFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExInclusionFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExInclusionFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExInclusionFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExInclusionFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExInclusionFilterFactory.OuterSingleton;
}
UPCGExInclusionFilterFactory::UPCGExInclusionFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExInclusionFilterFactory);
UPCGExInclusionFilterFactory::~UPCGExInclusionFilterFactory() {}
// ********** End Class UPCGExInclusionFilterFactory ***********************************************

// ********** Begin Class UPCGExInclusionFilterProviderSettings ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExInclusionFilterProviderSettings;
UClass* UPCGExInclusionFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExInclusionFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExInclusionFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExInclusionFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExInclusionFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExInclusionFilterProviderSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPCGExInclusionFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExInclusionFilterProviderSettings_NoRegister()
{
	return UPCGExInclusionFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExInclusionFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExInclusionFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-points/spatial/inclusion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExInclusionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExInclusionFilterProviderSettings constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExInclusionFilterProviderSettings constinit property declarations ******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExInclusionFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExInclusionFilterProviderSettings_Statics

// ********** Begin Class UPCGExInclusionFilterProviderSettings Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExInclusionFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExInclusionFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 975057018
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExInclusionFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExInclusionFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExInclusionFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExInclusionFilterProviderSettings Property Definitions *****************
UObject* (*const Z_Construct_UClass_UPCGExInclusionFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExInclusionFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExInclusionFilterProviderSettings_Statics::ClassParams = {
	&UPCGExInclusionFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExInclusionFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExInclusionFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExInclusionFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExInclusionFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExInclusionFilterProviderSettings::StaticRegisterNativesUPCGExInclusionFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExInclusionFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExInclusionFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExInclusionFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExInclusionFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExInclusionFilterProviderSettings.OuterSingleton;
}
UPCGExInclusionFilterProviderSettings::UPCGExInclusionFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExInclusionFilterProviderSettings);
UPCGExInclusionFilterProviderSettings::~UPCGExInclusionFilterProviderSettings() {}
// ********** End Class UPCGExInclusionFilterProviderSettings **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExInclusionFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExInclusionFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExInclusionFilterConfig_Statics::NewStructOps, TEXT("PCGExInclusionFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExInclusionFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExInclusionFilterConfig), 975057018U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExInclusionFilterFactory, UPCGExInclusionFilterFactory::StaticClass, TEXT("UPCGExInclusionFilterFactory"), &Z_Registration_Info_UClass_UPCGExInclusionFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExInclusionFilterFactory), 311341079U) },
		{ Z_Construct_UClass_UPCGExInclusionFilterProviderSettings, UPCGExInclusionFilterProviderSettings::StaticClass, TEXT("UPCGExInclusionFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExInclusionFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExInclusionFilterProviderSettings), 2434715738U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExInclusionFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExInclusionFilter_h__Script_PCGExtendedToolkit_2537749490{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExInclusionFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExInclusionFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExInclusionFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExInclusionFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
