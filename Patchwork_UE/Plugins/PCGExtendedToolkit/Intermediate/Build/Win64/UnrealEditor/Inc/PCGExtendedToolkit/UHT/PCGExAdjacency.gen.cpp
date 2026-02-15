// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Filters/PCGExAdjacency.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExAdjacency() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyGatherMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyTestMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyThreshold();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelativeThresholdRoundingMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAdjacencySettings();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExAdjacencyTestMode ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAdjacencyTestMode;
static UEnum* EPCGExAdjacencyTestMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAdjacencyTestMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAdjacencyTestMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyTestMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAdjacencyTestMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExAdjacencyTestMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAdjacencyTestMode>()
{
	return EPCGExAdjacencyTestMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyTestMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All" },
		{ "All.Name", "EPCGExAdjacencyTestMode::All" },
		{ "All.Tooltip", "Test a condition using all adjacent nodes." },
		{ "ModuleRelativePath", "Public/Graph/Filters/PCGExAdjacency.h" },
		{ "Some.DisplayName", "Some" },
		{ "Some.Name", "EPCGExAdjacencyTestMode::Some" },
		{ "Some.Tooltip", "Test a condition using some adjacent nodes only." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAdjacencyTestMode::All", (int64)EPCGExAdjacencyTestMode::All },
		{ "EPCGExAdjacencyTestMode::Some", (int64)EPCGExAdjacencyTestMode::Some },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyTestMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyTestMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAdjacencyTestMode",
	"EPCGExAdjacencyTestMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyTestMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyTestMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyTestMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyTestMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyTestMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExAdjacencyTestMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAdjacencyTestMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyTestMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAdjacencyTestMode.InnerSingleton;
}
// ********** End Enum EPCGExAdjacencyTestMode *****************************************************

// ********** Begin Enum EPCGExAdjacencyGatherMode *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAdjacencyGatherMode;
static UEnum* EPCGExAdjacencyGatherMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAdjacencyGatherMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAdjacencyGatherMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyGatherMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAdjacencyGatherMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExAdjacencyGatherMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAdjacencyGatherMode>()
{
	return EPCGExAdjacencyGatherMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyGatherMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Average.DisplayName", "Average" },
		{ "Average.Name", "EPCGExAdjacencyGatherMode::Average" },
		{ "Average.Tooltip", "Test against averaged value of all neighbors" },
		{ "Individual.DisplayName", "Individual" },
		{ "Individual.Name", "EPCGExAdjacencyGatherMode::Individual" },
		{ "Individual.Tooltip", "Test individual neighbors one by one" },
		{ "Max.DisplayName", "Max" },
		{ "Max.Name", "EPCGExAdjacencyGatherMode::Max" },
		{ "Max.Tooltip", "Test against Max value of all neighbors" },
		{ "Min.DisplayName", "Min" },
		{ "Min.Name", "EPCGExAdjacencyGatherMode::Min" },
		{ "Min.Tooltip", "Test against Min value of all neighbors" },
		{ "ModuleRelativePath", "Public/Graph/Filters/PCGExAdjacency.h" },
		{ "Sum.DisplayName", "Sum" },
		{ "Sum.Name", "EPCGExAdjacencyGatherMode::Sum" },
		{ "Sum.Tooltip", "Test against Sum value of all neighbors" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAdjacencyGatherMode::Individual", (int64)EPCGExAdjacencyGatherMode::Individual },
		{ "EPCGExAdjacencyGatherMode::Average", (int64)EPCGExAdjacencyGatherMode::Average },
		{ "EPCGExAdjacencyGatherMode::Min", (int64)EPCGExAdjacencyGatherMode::Min },
		{ "EPCGExAdjacencyGatherMode::Max", (int64)EPCGExAdjacencyGatherMode::Max },
		{ "EPCGExAdjacencyGatherMode::Sum", (int64)EPCGExAdjacencyGatherMode::Sum },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyGatherMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyGatherMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAdjacencyGatherMode",
	"EPCGExAdjacencyGatherMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyGatherMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyGatherMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyGatherMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyGatherMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyGatherMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExAdjacencyGatherMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAdjacencyGatherMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyGatherMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAdjacencyGatherMode.InnerSingleton;
}
// ********** End Enum EPCGExAdjacencyGatherMode ***************************************************

// ********** Begin Enum EPCGExAdjacencyThreshold **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAdjacencyThreshold;
static UEnum* EPCGExAdjacencyThreshold_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAdjacencyThreshold.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAdjacencyThreshold.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyThreshold, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAdjacencyThreshold"));
	}
	return Z_Registration_Info_UEnum_EPCGExAdjacencyThreshold.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAdjacencyThreshold>()
{
	return EPCGExAdjacencyThreshold_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyThreshold_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AtLeast.DisplayName", "At Least" },
		{ "AtLeast.Name", "EPCGExAdjacencyThreshold::AtLeast" },
		{ "AtLeast.Tooltip", "Requirements must be met by at least N adjacent nodes.  (Where N is the Threshold)" },
		{ "AtMost.DisplayName", "At Most" },
		{ "AtMost.Name", "EPCGExAdjacencyThreshold::AtMost" },
		{ "AtMost.Tooltip", "Requirements must be met by at most N adjacent nodes.  (Where N is the Threshold)" },
		{ "Exactly.DisplayName", "Exactly" },
		{ "Exactly.Name", "EPCGExAdjacencyThreshold::Exactly" },
		{ "Exactly.Tooltip", "Requirements must be met by exactly N adjacent nodes, no more, no less.  (Where N is the Threshold)" },
		{ "ModuleRelativePath", "Public/Graph/Filters/PCGExAdjacency.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAdjacencyThreshold::AtLeast", (int64)EPCGExAdjacencyThreshold::AtLeast },
		{ "EPCGExAdjacencyThreshold::AtMost", (int64)EPCGExAdjacencyThreshold::AtMost },
		{ "EPCGExAdjacencyThreshold::Exactly", (int64)EPCGExAdjacencyThreshold::Exactly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyThreshold_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyThreshold_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAdjacencyThreshold",
	"EPCGExAdjacencyThreshold",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyThreshold_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyThreshold_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyThreshold_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyThreshold_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyThreshold()
{
	if (!Z_Registration_Info_UEnum_EPCGExAdjacencyThreshold.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAdjacencyThreshold.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyThreshold_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAdjacencyThreshold.InnerSingleton;
}
// ********** End Enum EPCGExAdjacencyThreshold ****************************************************

// ********** Begin Enum EPCGExRelativeThresholdRoundingMode ***************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExRelativeThresholdRoundingMode;
static UEnum* EPCGExRelativeThresholdRoundingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExRelativeThresholdRoundingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExRelativeThresholdRoundingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelativeThresholdRoundingMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExRelativeThresholdRoundingMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExRelativeThresholdRoundingMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRelativeThresholdRoundingMode>()
{
	return EPCGExRelativeThresholdRoundingMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelativeThresholdRoundingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ceil.DisplayName", "Ceil" },
		{ "Ceil.Name", "EPCGExRelativeThresholdRoundingMode::Ceil" },
		{ "Ceil.Tooltip", "Rounds value to closest highest integer (0.1 = 1, 0.9 = 1)" },
		{ "Floor.DisplayName", "Floor" },
		{ "Floor.Name", "EPCGExRelativeThresholdRoundingMode::Floor" },
		{ "Floor.Tooltip", "Rounds value to closest smaller integer (0.1 = 0, 0.9 = 0)" },
		{ "ModuleRelativePath", "Public/Graph/Filters/PCGExAdjacency.h" },
		{ "Round.DisplayName", "Round" },
		{ "Round.Name", "EPCGExRelativeThresholdRoundingMode::Round" },
		{ "Round.Tooltip", "Rounds value to closest integer (0.1 = 0, 0.9 = 1)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExRelativeThresholdRoundingMode::Round", (int64)EPCGExRelativeThresholdRoundingMode::Round },
		{ "EPCGExRelativeThresholdRoundingMode::Floor", (int64)EPCGExRelativeThresholdRoundingMode::Floor },
		{ "EPCGExRelativeThresholdRoundingMode::Ceil", (int64)EPCGExRelativeThresholdRoundingMode::Ceil },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelativeThresholdRoundingMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelativeThresholdRoundingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExRelativeThresholdRoundingMode",
	"EPCGExRelativeThresholdRoundingMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelativeThresholdRoundingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelativeThresholdRoundingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelativeThresholdRoundingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelativeThresholdRoundingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelativeThresholdRoundingMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExRelativeThresholdRoundingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExRelativeThresholdRoundingMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelativeThresholdRoundingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExRelativeThresholdRoundingMode.InnerSingleton;
}
// ********** End Enum EPCGExRelativeThresholdRoundingMode *****************************************

// ********** Begin ScriptStruct FPCGExAdjacencySettings *******************************************
struct Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAdjacencySettings); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAdjacencySettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Filters/PCGExAdjacency.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How many adjacent items should be tested. */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/PCGExAdjacency.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "How many adjacent items should be tested." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Consolidation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How to consolidate value for testing. */" },
		{ "EditCondition", "Mode == EPCGExAdjacencyTestMode::All" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/PCGExAdjacency.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "How to consolidate value for testing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdComparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How to handle threshold comparison. */" },
		{ "EditCondition", "Mode == EPCGExAdjacencyTestMode::Some" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/PCGExAdjacency.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "How to handle threshold comparison." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Define the nodes subset' size that must meet requirements. */" },
		{ "EditCondition", "Mode == EPCGExAdjacencyTestMode::Some" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/PCGExAdjacency.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Define the nodes subset' size that must meet requirements." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Define the nodes subset' size that must meet requirements. */" },
		{ "EditCondition", "Mode == EPCGExAdjacencyTestMode::Some" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/PCGExAdjacency.h" },
		{ "PCG_NotOverridable", "" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Define the nodes subset' size that must meet requirements." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiscreteThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Discrete threshold value */" },
		{ "DisplayName", "Threshold (Discrete)" },
		{ "EditCondition", "Mode == EPCGExAdjacencyTestMode::Some && ThresholdInput == EPCGExInputValueType::Constant && ThresholdType == EPCGExMeanMeasure::Discrete" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/PCGExAdjacency.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Discrete threshold value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Relative threshold value */" },
		{ "DisplayName", "Threshold (Relative)" },
		{ "EditCondition", "Mode == EPCGExAdjacencyTestMode::Some && ThresholdInput == EPCGExInputValueType::Constant && ThresholdType == EPCGExMeanMeasure::Relative" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/PCGExAdjacency.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Relative threshold value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Local measure attribute */" },
		{ "DisplayName", "Threshold (Attr)" },
		{ "EditCondition", "Mode == EPCGExAdjacencyTestMode::Some && ThresholdInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/PCGExAdjacency.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Local measure attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rounding_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using relative threshold mode, choose how to round it to a discrete value. */" },
		{ "EditCondition", "Mode == EPCGExAdjacencyTestMode::Some && ThresholdType == EPCGExMeanMeasure::Relative" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/PCGExAdjacency.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "When using relative threshold mode, choose how to round it to a discrete value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Comparison threshold */" },
		{ "EditCondition", "Mode == EPCGExAdjacencyTestMode::Some && (ThresholdComparison == EPCGExComparison::NearlyEqual || ThresholdComparison == EPCGExComparison::NearlyNotEqual)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/PCGExAdjacency.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison threshold" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAdjacencySettings constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Consolidation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Consolidation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThresholdComparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThresholdComparison;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThresholdType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThresholdType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThresholdInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThresholdInput;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DiscreteThreshold;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RelativeThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThresholdAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rounding_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rounding;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ThresholdTolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAdjacencySettings constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAdjacencySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAdjacencySettings;
class UScriptStruct* FPCGExAdjacencySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAdjacencySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAdjacencySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAdjacencySettings, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAdjacencySettings"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAdjacencySettings.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAdjacencySettings Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAdjacencySettings, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyTestMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3998373472
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_Consolidation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_Consolidation = { "Consolidation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAdjacencySettings, Consolidation), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyGatherMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Consolidation_MetaData), NewProp_Consolidation_MetaData) }; // 393905424
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_ThresholdComparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_ThresholdComparison = { "ThresholdComparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAdjacencySettings, ThresholdComparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdComparison_MetaData), NewProp_ThresholdComparison_MetaData) }; // 703604353
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_ThresholdType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_ThresholdType = { "ThresholdType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAdjacencySettings, ThresholdType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdType_MetaData), NewProp_ThresholdType_MetaData) }; // 356721050
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_ThresholdInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_ThresholdInput = { "ThresholdInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAdjacencySettings, ThresholdInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdInput_MetaData), NewProp_ThresholdInput_MetaData) }; // 504493006
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_DiscreteThreshold = { "DiscreteThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAdjacencySettings, DiscreteThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiscreteThreshold_MetaData), NewProp_DiscreteThreshold_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_RelativeThreshold = { "RelativeThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAdjacencySettings, RelativeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeThreshold_MetaData), NewProp_RelativeThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_ThresholdAttribute = { "ThresholdAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAdjacencySettings, ThresholdAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdAttribute_MetaData), NewProp_ThresholdAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_Rounding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_Rounding = { "Rounding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAdjacencySettings, Rounding), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelativeThresholdRoundingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rounding_MetaData), NewProp_Rounding_MetaData) }; // 2951192749
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_ThresholdTolerance = { "ThresholdTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAdjacencySettings, ThresholdTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdTolerance_MetaData), NewProp_ThresholdTolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_Consolidation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_Consolidation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_ThresholdComparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_ThresholdComparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_ThresholdType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_ThresholdType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_ThresholdInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_ThresholdInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_DiscreteThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_RelativeThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_ThresholdAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_Rounding_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_Rounding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewProp_ThresholdTolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAdjacencySettings Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAdjacencySettings",
	Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::PropPointers),
	sizeof(FPCGExAdjacencySettings),
	alignof(FPCGExAdjacencySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAdjacencySettings()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAdjacencySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAdjacencySettings.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAdjacencySettings.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAdjacencySettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExAdjacency_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExAdjacencyTestMode_StaticEnum, TEXT("EPCGExAdjacencyTestMode"), &Z_Registration_Info_UEnum_EPCGExAdjacencyTestMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3998373472U) },
		{ EPCGExAdjacencyGatherMode_StaticEnum, TEXT("EPCGExAdjacencyGatherMode"), &Z_Registration_Info_UEnum_EPCGExAdjacencyGatherMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 393905424U) },
		{ EPCGExAdjacencyThreshold_StaticEnum, TEXT("EPCGExAdjacencyThreshold"), &Z_Registration_Info_UEnum_EPCGExAdjacencyThreshold, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 779050269U) },
		{ EPCGExRelativeThresholdRoundingMode_StaticEnum, TEXT("EPCGExRelativeThresholdRoundingMode"), &Z_Registration_Info_UEnum_EPCGExRelativeThresholdRoundingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2951192749U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExAdjacencySettings::StaticStruct, Z_Construct_UScriptStruct_FPCGExAdjacencySettings_Statics::NewStructOps, TEXT("PCGExAdjacencySettings"),&Z_Registration_Info_UScriptStruct_FPCGExAdjacencySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAdjacencySettings), 3816161896U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExAdjacency_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExAdjacency_h__Script_PCGExtendedToolkit_3847025074{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExAdjacency_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExAdjacency_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExAdjacency_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExAdjacency_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
