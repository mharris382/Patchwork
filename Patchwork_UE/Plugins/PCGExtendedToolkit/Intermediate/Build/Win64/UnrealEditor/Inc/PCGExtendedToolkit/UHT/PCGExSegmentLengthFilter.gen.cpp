// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExSegmentLengthFilter.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSegmentLengthFilter() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSegmentLengthFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSegmentLengthFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterFallback();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExSegmentLengthFilterConfig ***********************************
struct Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExSegmentLengthFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExSegmentLengthFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to read the threshold from an attribute on the point or a constant. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to read the threshold from an attribute on the point or a constant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to fetch threshold from */" },
		{ "DisplayName", "Threshold (Attr)" },
		{ "EditCondition", "ThresholdInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to fetch threshold from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Threshold" },
		{ "EditCondition", "ThresholdInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompareAgainstSquaredDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will compare against the squared distance. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Squared Distance" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, will compare against the squared distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison check */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for approx. comparison modes */" },
		{ "EditCondition", "Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rounding mode for approx. comparison modes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Index mode */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Index mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompareAgainst_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of OperandB */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of OperandB" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Index value to use according to the selected Index Mode -- Will be translated to `int32` under the hood. */" },
		{ "DisplayName", "Index (Attr)" },
		{ "EditCondition", "CompareAgainst != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Index value to use according to the selected Index Mode -- Will be translated to `int32` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Const Index value to use according to the selected Index Mode, If offset mode, 1 would be next point, -1 previous point. */" },
		{ "DisplayName", "Index" },
		{ "EditCondition", "CompareAgainst == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Const Index value to use according to the selected Index Mode, If offset mode, 1 would be next point, -1 previous point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexSafety_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Index safety */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Index safety" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceTileIfClosedLoop_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will force Tile safety on closed loop paths */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Tile on closed loops" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, will force Tile safety on closed loop paths" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidPointFallback_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What should this filter return when the point required for computing length is invalid? (i.e, first or last point) */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "What should this filter return when the point required for computing length is invalid? (i.e, first or last point)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether the result of the filter should be inverted or not. Note that this will also invert fallback results! */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether the result of the filter should be inverted or not. Note that this will also invert fallback results!" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExSegmentLengthFilterConfig constinit property declarations ***
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThresholdInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThresholdInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThresholdAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ThresholdConstant;
	static void NewProp_bCompareAgainstSquaredDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompareAgainstSquaredDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IndexMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IndexMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompareAgainst_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompareAgainst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IndexAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IndexSafety_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IndexSafety;
	static void NewProp_bForceTileIfClosedLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceTileIfClosedLoop;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InvalidPointFallback_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InvalidPointFallback;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExSegmentLengthFilterConfig constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExSegmentLengthFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExSegmentLengthFilterConfig;
class UScriptStruct* FPCGExSegmentLengthFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSegmentLengthFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExSegmentLengthFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSegmentLengthFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExSegmentLengthFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExSegmentLengthFilterConfig Property Definitions **************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_ThresholdInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_ThresholdInput = { "ThresholdInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSegmentLengthFilterConfig, ThresholdInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdInput_MetaData), NewProp_ThresholdInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_ThresholdAttribute = { "ThresholdAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSegmentLengthFilterConfig, ThresholdAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdAttribute_MetaData), NewProp_ThresholdAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_ThresholdConstant = { "ThresholdConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSegmentLengthFilterConfig, ThresholdConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdConstant_MetaData), NewProp_ThresholdConstant_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_bCompareAgainstSquaredDistance_SetBit(void* Obj)
{
	((FPCGExSegmentLengthFilterConfig*)Obj)->bCompareAgainstSquaredDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_bCompareAgainstSquaredDistance = { "bCompareAgainstSquaredDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSegmentLengthFilterConfig), &Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_bCompareAgainstSquaredDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompareAgainstSquaredDistance_MetaData), NewProp_bCompareAgainstSquaredDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSegmentLengthFilterConfig, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 703604353
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSegmentLengthFilterConfig, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_IndexMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_IndexMode = { "IndexMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSegmentLengthFilterConfig, IndexMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexMode_MetaData), NewProp_IndexMode_MetaData) }; // 2236136904
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_CompareAgainst_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_CompareAgainst = { "CompareAgainst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSegmentLengthFilterConfig, CompareAgainst), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompareAgainst_MetaData), NewProp_CompareAgainst_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_IndexAttribute = { "IndexAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSegmentLengthFilterConfig, IndexAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexAttribute_MetaData), NewProp_IndexAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_IndexConstant = { "IndexConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSegmentLengthFilterConfig, IndexConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexConstant_MetaData), NewProp_IndexConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_IndexSafety_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_IndexSafety = { "IndexSafety", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSegmentLengthFilterConfig, IndexSafety), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexSafety_MetaData), NewProp_IndexSafety_MetaData) }; // 122057320
void Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_bForceTileIfClosedLoop_SetBit(void* Obj)
{
	((FPCGExSegmentLengthFilterConfig*)Obj)->bForceTileIfClosedLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_bForceTileIfClosedLoop = { "bForceTileIfClosedLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSegmentLengthFilterConfig), &Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_bForceTileIfClosedLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceTileIfClosedLoop_MetaData), NewProp_bForceTileIfClosedLoop_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_InvalidPointFallback_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_InvalidPointFallback = { "InvalidPointFallback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSegmentLengthFilterConfig, InvalidPointFallback), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterFallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidPointFallback_MetaData), NewProp_InvalidPointFallback_MetaData) }; // 3927627996
void Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExSegmentLengthFilterConfig*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSegmentLengthFilterConfig), &Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_ThresholdInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_ThresholdInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_ThresholdAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_ThresholdConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_bCompareAgainstSquaredDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_IndexMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_IndexMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_CompareAgainst_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_CompareAgainst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_IndexAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_IndexConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_IndexSafety_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_IndexSafety,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_bForceTileIfClosedLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_InvalidPointFallback_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_InvalidPointFallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExSegmentLengthFilterConfig Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExSegmentLengthFilterConfig",
	Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::PropPointers),
	sizeof(FPCGExSegmentLengthFilterConfig),
	alignof(FPCGExSegmentLengthFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSegmentLengthFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExSegmentLengthFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExSegmentLengthFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExSegmentLengthFilterConfig *************************************

// ********** Begin Class UPCGExSegmentLengthFilterFactory *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSegmentLengthFilterFactory;
UClass* UPCGExSegmentLengthFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExSegmentLengthFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExSegmentLengthFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSegmentLengthFilterFactory"),
			Z_Registration_Info_UClass_UPCGExSegmentLengthFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExSegmentLengthFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExSegmentLengthFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSegmentLengthFilterFactory_NoRegister()
{
	return UPCGExSegmentLengthFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSegmentLengthFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/Filters/PCGExSegmentLengthFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSegmentLengthFilterFactory constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSegmentLengthFilterFactory constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSegmentLengthFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSegmentLengthFilterFactory_Statics

// ********** Begin Class UPCGExSegmentLengthFilterFactory Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSegmentLengthFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSegmentLengthFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 406361270
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSegmentLengthFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSegmentLengthFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSegmentLengthFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSegmentLengthFilterFactory Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExSegmentLengthFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSegmentLengthFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSegmentLengthFilterFactory_Statics::ClassParams = {
	&UPCGExSegmentLengthFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSegmentLengthFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSegmentLengthFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSegmentLengthFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSegmentLengthFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExSegmentLengthFilterFactory::StaticRegisterNativesUPCGExSegmentLengthFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExSegmentLengthFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExSegmentLengthFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSegmentLengthFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExSegmentLengthFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSegmentLengthFilterFactory.OuterSingleton;
}
UPCGExSegmentLengthFilterFactory::UPCGExSegmentLengthFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSegmentLengthFilterFactory);
UPCGExSegmentLengthFilterFactory::~UPCGExSegmentLengthFilterFactory() {}
// ********** End Class UPCGExSegmentLengthFilterFactory *******************************************

// ********** Begin Class UPCGExSegmentLengthFilterProviderSettings ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSegmentLengthFilterProviderSettings;
UClass* UPCGExSegmentLengthFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSegmentLengthFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExSegmentLengthFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSegmentLengthFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExSegmentLengthFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSegmentLengthFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExSegmentLengthFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings_NoRegister()
{
	return UPCGExSegmentLengthFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExSegmentLengthFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-points/self-comparisons/numeric-2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExSegmentLengthFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSegmentLengthFilterProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSegmentLengthFilterProviderSettings constinit property declarations **
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSegmentLengthFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings_Statics

// ********** Begin Class UPCGExSegmentLengthFilterProviderSettings Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSegmentLengthFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 406361270
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSegmentLengthFilterProviderSettings Property Definitions *************
UObject* (*const Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings_Statics::ClassParams = {
	&UPCGExSegmentLengthFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExSegmentLengthFilterProviderSettings::StaticRegisterNativesUPCGExSegmentLengthFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSegmentLengthFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSegmentLengthFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSegmentLengthFilterProviderSettings.OuterSingleton;
}
UPCGExSegmentLengthFilterProviderSettings::UPCGExSegmentLengthFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSegmentLengthFilterProviderSettings);
UPCGExSegmentLengthFilterProviderSettings::~UPCGExSegmentLengthFilterProviderSettings() {}
// ********** End Class UPCGExSegmentLengthFilterProviderSettings **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExSegmentLengthFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExSegmentLengthFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExSegmentLengthFilterConfig_Statics::NewStructOps, TEXT("PCGExSegmentLengthFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExSegmentLengthFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExSegmentLengthFilterConfig), 406361270U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSegmentLengthFilterFactory, UPCGExSegmentLengthFilterFactory::StaticClass, TEXT("UPCGExSegmentLengthFilterFactory"), &Z_Registration_Info_UClass_UPCGExSegmentLengthFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSegmentLengthFilterFactory), 717187244U) },
		{ Z_Construct_UClass_UPCGExSegmentLengthFilterProviderSettings, UPCGExSegmentLengthFilterProviderSettings::StaticClass, TEXT("UPCGExSegmentLengthFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExSegmentLengthFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSegmentLengthFilterProviderSettings), 1583395138U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExSegmentLengthFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExSegmentLengthFilter_h__Script_PCGExtendedToolkit_3314644452{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExSegmentLengthFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExSegmentLengthFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExSegmentLengthFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExSegmentLengthFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
