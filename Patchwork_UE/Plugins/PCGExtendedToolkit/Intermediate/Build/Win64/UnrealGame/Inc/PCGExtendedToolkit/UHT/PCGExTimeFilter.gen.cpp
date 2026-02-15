// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExTimeFilter.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTimeFilter() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPolyPathFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTimeFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTimeFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTimeFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTimeFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineFilterPick();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSamplingIncludeMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineTimeConsolidation();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWindingMutation();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTimeFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExSplineTimeConsolidation *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSplineTimeConsolidation;
static UEnum* EPCGExSplineTimeConsolidation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSplineTimeConsolidation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSplineTimeConsolidation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineTimeConsolidation, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSplineTimeConsolidation"));
	}
	return Z_Registration_Info_UEnum_EPCGExSplineTimeConsolidation.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSplineTimeConsolidation>()
{
	return EPCGExSplineTimeConsolidation_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineTimeConsolidation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Average.DisplayName", "Average" },
		{ "Average.Name", "EPCGExSplineTimeConsolidation::Average" },
		{ "Average.Tooltip", "..." },
		{ "Max.DisplayName", "Max" },
		{ "Max.Name", "EPCGExSplineTimeConsolidation::Max" },
		{ "Max.Tooltip", "..." },
		{ "Min.DisplayName", "Min" },
		{ "Min.Name", "EPCGExSplineTimeConsolidation::Min" },
		{ "Min.Tooltip", "..." },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSplineTimeConsolidation::Min", (int64)EPCGExSplineTimeConsolidation::Min },
		{ "EPCGExSplineTimeConsolidation::Max", (int64)EPCGExSplineTimeConsolidation::Max },
		{ "EPCGExSplineTimeConsolidation::Average", (int64)EPCGExSplineTimeConsolidation::Average },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineTimeConsolidation_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineTimeConsolidation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSplineTimeConsolidation",
	"EPCGExSplineTimeConsolidation",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineTimeConsolidation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineTimeConsolidation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineTimeConsolidation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineTimeConsolidation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineTimeConsolidation()
{
	if (!Z_Registration_Info_UEnum_EPCGExSplineTimeConsolidation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSplineTimeConsolidation.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineTimeConsolidation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSplineTimeConsolidation.InnerSingleton;
}
// ********** End Enum EPCGExSplineTimeConsolidation ***********************************************

// ********** Begin ScriptStruct FPCGExTimeFilterConfig ********************************************
struct Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTimeFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTimeFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleInputs_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sample inputs.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sample inputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pick_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If a point is both inside and outside a spline (if there are multiple ones), decide what value to favor. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If a point is both inside and outside a spline (if there are multiple ones), decide what value to favor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeConsolidation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "Pick != EPCGExSplineFilterPick::Closest" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompareAgainst_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of OperandB */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of OperandB" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandB_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for testing -- Will be translated to `double` under the hood. */" },
		{ "DisplayName", "Operand B (Attr)" },
		{ "EditCondition", "CompareAgainst != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for testing -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandBConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for testing */" },
		{ "DisplayName", "Operand B" },
		{ "EditCondition", "CompareAgainst == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for testing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for relative measures */" },
		{ "EditCondition", "Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rounding mode for relative measures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, invert the result of the test */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, invert the result of the test" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindingMutation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Lets you enforce a path winding for testing */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Lets you enforce a path winding for testing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fidelity_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** When projecting, defines the resolution of the polygon created from the spline. Lower values means higher fidelity, but slower execution. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "When projecting, defines the resolution of the polygon created from the spline. Lower values means higher fidelity, but slower execution." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckAgainstDataBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, when used with a collection filter, will use collection bounds as a proxy point instead of per-point testing */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, when used with a collection filter, will use collection bounds as a proxy point instead of per-point testing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelf_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, a collection will never be tested against itself */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, a collection will never be tested against itself" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTimeFilterConfig constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_SampleInputs_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleInputs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Pick_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Pick;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeConsolidation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeConsolidation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompareAgainst_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompareAgainst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OperandBConstant;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WindingMutation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WindingMutation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Fidelity;
	static void NewProp_bCheckAgainstDataBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckAgainstDataBounds;
	static void NewProp_bIgnoreSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTimeFilterConfig constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTimeFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTimeFilterConfig;
class UScriptStruct* FPCGExTimeFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTimeFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTimeFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTimeFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTimeFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTimeFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTimeFilterConfig Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_SampleInputs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_SampleInputs = { "SampleInputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTimeFilterConfig, SampleInputs), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineSamplingIncludeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleInputs_MetaData), NewProp_SampleInputs_MetaData) }; // 3557312926
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_Pick_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_Pick = { "Pick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTimeFilterConfig, Pick), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineFilterPick, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pick_MetaData), NewProp_Pick_MetaData) }; // 63009028
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_TimeConsolidation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_TimeConsolidation = { "TimeConsolidation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTimeFilterConfig, TimeConsolidation), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSplineTimeConsolidation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeConsolidation_MetaData), NewProp_TimeConsolidation_MetaData) }; // 179657943
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTimeFilterConfig, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 703604353
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_CompareAgainst_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_CompareAgainst = { "CompareAgainst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTimeFilterConfig, CompareAgainst), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompareAgainst_MetaData), NewProp_CompareAgainst_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_OperandB = { "OperandB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTimeFilterConfig, OperandB), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandB_MetaData), NewProp_OperandB_MetaData) }; // 3844583698
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_OperandBConstant = { "OperandBConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTimeFilterConfig, OperandBConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandBConstant_MetaData), NewProp_OperandBConstant_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTimeFilterConfig, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
void Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExTimeFilterConfig*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTimeFilterConfig), &Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_WindingMutation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_WindingMutation = { "WindingMutation", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTimeFilterConfig, WindingMutation), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWindingMutation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindingMutation_MetaData), NewProp_WindingMutation_MetaData) }; // 4046642856
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_Fidelity = { "Fidelity", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTimeFilterConfig, Fidelity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fidelity_MetaData), NewProp_Fidelity_MetaData) };
void Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_bCheckAgainstDataBounds_SetBit(void* Obj)
{
	((FPCGExTimeFilterConfig*)Obj)->bCheckAgainstDataBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_bCheckAgainstDataBounds = { "bCheckAgainstDataBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTimeFilterConfig), &Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_bCheckAgainstDataBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckAgainstDataBounds_MetaData), NewProp_bCheckAgainstDataBounds_MetaData) };
void Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
{
	((FPCGExTimeFilterConfig*)Obj)->bIgnoreSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTimeFilterConfig), &Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSelf_MetaData), NewProp_bIgnoreSelf_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_SampleInputs_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_SampleInputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_Pick_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_Pick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_TimeConsolidation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_TimeConsolidation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_CompareAgainst_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_CompareAgainst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_OperandB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_OperandBConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_bInvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_WindingMutation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_WindingMutation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_Fidelity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_bCheckAgainstDataBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewProp_bIgnoreSelf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTimeFilterConfig Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExTimeFilterConfig",
	Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::PropPointers),
	sizeof(FPCGExTimeFilterConfig),
	alignof(FPCGExTimeFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTimeFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTimeFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTimeFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTimeFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTimeFilterConfig **********************************************

// ********** Begin Class UPCGExTimeFilterFactory **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTimeFilterFactory;
UClass* UPCGExTimeFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExTimeFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExTimeFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTimeFilterFactory"),
			Z_Registration_Info_UClass_UPCGExTimeFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExTimeFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExTimeFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTimeFilterFactory_NoRegister()
{
	return UPCGExTimeFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTimeFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/Filters/PCGExTimeFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTimeFilterFactory constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTimeFilterFactory constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTimeFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTimeFilterFactory_Statics

// ********** Begin Class UPCGExTimeFilterFactory Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTimeFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTimeFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExTimeFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2133389744
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTimeFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTimeFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTimeFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTimeFilterFactory Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExTimeFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPolyPathFilterFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTimeFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTimeFilterFactory_Statics::ClassParams = {
	&UPCGExTimeFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTimeFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTimeFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTimeFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTimeFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExTimeFilterFactory::StaticRegisterNativesUPCGExTimeFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExTimeFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExTimeFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTimeFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExTimeFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTimeFilterFactory.OuterSingleton;
}
UPCGExTimeFilterFactory::UPCGExTimeFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTimeFilterFactory);
UPCGExTimeFilterFactory::~UPCGExTimeFilterFactory() {}
// ********** End Class UPCGExTimeFilterFactory ****************************************************

// ********** Begin Class UPCGExTimeFilterProviderSettings *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTimeFilterProviderSettings;
UClass* UPCGExTimeFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExTimeFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExTimeFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTimeFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExTimeFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExTimeFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExTimeFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTimeFilterProviderSettings_NoRegister()
{
	return UPCGExTimeFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTimeFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExTimeFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-points/spatial/time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExTimeFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTimeFilterProviderSettings constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTimeFilterProviderSettings constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTimeFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTimeFilterProviderSettings_Statics

// ********** Begin Class UPCGExTimeFilterProviderSettings Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTimeFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTimeFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExTimeFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2133389744
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTimeFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTimeFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTimeFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTimeFilterProviderSettings Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExTimeFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTimeFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTimeFilterProviderSettings_Statics::ClassParams = {
	&UPCGExTimeFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTimeFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTimeFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTimeFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTimeFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExTimeFilterProviderSettings::StaticRegisterNativesUPCGExTimeFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExTimeFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExTimeFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTimeFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExTimeFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTimeFilterProviderSettings.OuterSingleton;
}
UPCGExTimeFilterProviderSettings::UPCGExTimeFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTimeFilterProviderSettings);
UPCGExTimeFilterProviderSettings::~UPCGExTimeFilterProviderSettings() {}
// ********** End Class UPCGExTimeFilterProviderSettings *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExTimeFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExSplineTimeConsolidation_StaticEnum, TEXT("EPCGExSplineTimeConsolidation"), &Z_Registration_Info_UEnum_EPCGExSplineTimeConsolidation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 179657943U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTimeFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExTimeFilterConfig_Statics::NewStructOps, TEXT("PCGExTimeFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExTimeFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTimeFilterConfig), 2133389744U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTimeFilterFactory, UPCGExTimeFilterFactory::StaticClass, TEXT("UPCGExTimeFilterFactory"), &Z_Registration_Info_UClass_UPCGExTimeFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTimeFilterFactory), 1098212976U) },
		{ Z_Construct_UClass_UPCGExTimeFilterProviderSettings, UPCGExTimeFilterProviderSettings::StaticClass, TEXT("UPCGExTimeFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExTimeFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTimeFilterProviderSettings), 1684883005U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExTimeFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExTimeFilter_h__Script_PCGExtendedToolkit_2727395889{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExTimeFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExTimeFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExTimeFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExTimeFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExTimeFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExTimeFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
