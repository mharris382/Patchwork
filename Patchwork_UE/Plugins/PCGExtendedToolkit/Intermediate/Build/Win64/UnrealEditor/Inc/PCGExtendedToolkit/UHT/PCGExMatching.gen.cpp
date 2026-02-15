// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Matching/PCGExMatching.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMatching() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterComponentTagMatchMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMapMatchMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchingDetailsUsage();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchStrictness();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchingDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExMapMatchMode ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExMapMatchMode;
static UEnum* EPCGExMapMatchMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExMapMatchMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExMapMatchMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMapMatchMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExMapMatchMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExMapMatchMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMapMatchMode>()
{
	return EPCGExMapMatchMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMapMatchMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All" },
		{ "All.Name", "EPCGExMapMatchMode::All" },
		{ "All.ToolTip", "All tests must pass to consider a match successful" },
		{ "Any.DisplayName", "Any" },
		{ "Any.Name", "EPCGExMapMatchMode::Any" },
		{ "Any.ToolTip", "Any single test must pass must to consider a match successful" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EPCGExMapMatchMode::Disabled" },
		{ "Disabled.ToolTip", "Disabled" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatching.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExMapMatchMode::Disabled", (int64)EPCGExMapMatchMode::Disabled },
		{ "EPCGExMapMatchMode::All", (int64)EPCGExMapMatchMode::All },
		{ "EPCGExMapMatchMode::Any", (int64)EPCGExMapMatchMode::Any },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMapMatchMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMapMatchMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExMapMatchMode",
	"EPCGExMapMatchMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMapMatchMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMapMatchMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMapMatchMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMapMatchMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMapMatchMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExMapMatchMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExMapMatchMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMapMatchMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExMapMatchMode.InnerSingleton;
}
// ********** End Enum EPCGExMapMatchMode **********************************************************

// ********** Begin Enum EPCGExMatchStrictness *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExMatchStrictness;
static UEnum* EPCGExMatchStrictness_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExMatchStrictness.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExMatchStrictness.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchStrictness, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExMatchStrictness"));
	}
	return Z_Registration_Info_UEnum_EPCGExMatchStrictness.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMatchStrictness>()
{
	return EPCGExMatchStrictness_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchStrictness_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Any.DisplayName", "Optional" },
		{ "Any.Name", "EPCGExMatchStrictness::Any" },
		{ "Any.ToolTip", "Optional check. If it fails but other pass, it's still a success." },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatching.h" },
		{ "Required.DisplayName", "Required" },
		{ "Required.Name", "EPCGExMatchStrictness::Required" },
		{ "Required.ToolTip", "Required check. If it fails, the match will be a fail." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExMatchStrictness::Required", (int64)EPCGExMatchStrictness::Required },
		{ "EPCGExMatchStrictness::Any", (int64)EPCGExMatchStrictness::Any },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchStrictness_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchStrictness_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExMatchStrictness",
	"EPCGExMatchStrictness",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchStrictness_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchStrictness_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchStrictness_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchStrictness_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchStrictness()
{
	if (!Z_Registration_Info_UEnum_EPCGExMatchStrictness.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExMatchStrictness.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchStrictness_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExMatchStrictness.InnerSingleton;
}
// ********** End Enum EPCGExMatchStrictness *******************************************************

// ********** Begin Enum EPCGExClusterComponentTagMatchMode ****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExClusterComponentTagMatchMode;
static UEnum* EPCGExClusterComponentTagMatchMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExClusterComponentTagMatchMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExClusterComponentTagMatchMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterComponentTagMatchMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExClusterComponentTagMatchMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExClusterComponentTagMatchMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExClusterComponentTagMatchMode>()
{
	return EPCGExClusterComponentTagMatchMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterComponentTagMatchMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Any.DisplayName", "Any" },
		{ "Any.Name", "EPCGExClusterComponentTagMatchMode::Any" },
		{ "Any.ToolTip", "Match either vtx or edges" },
		{ "Both.DisplayName", "Vtx and Edges" },
		{ "Both.Name", "EPCGExClusterComponentTagMatchMode::Both" },
		{ "Both.ToolTip", "Match no vtx and edges" },
		{ "Edges.DisplayName", "Edges" },
		{ "Edges.Name", "EPCGExClusterComponentTagMatchMode::Edges" },
		{ "Edges.ToolTip", "Only match edges" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatching.h" },
		{ "Separated.DisplayName", "Separate" },
		{ "Separated.Name", "EPCGExClusterComponentTagMatchMode::Separated" },
		{ "Separated.ToolTip", "Uses two separate set of match handlers -- the default pin will be used on Vtx, the extra one for Edges." },
		{ "Vtx.DisplayName", "Vtx" },
		{ "Vtx.Name", "EPCGExClusterComponentTagMatchMode::Vtx" },
		{ "Vtx.ToolTip", "Only match vtx (most efficient check)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExClusterComponentTagMatchMode::Vtx", (int64)EPCGExClusterComponentTagMatchMode::Vtx },
		{ "EPCGExClusterComponentTagMatchMode::Edges", (int64)EPCGExClusterComponentTagMatchMode::Edges },
		{ "EPCGExClusterComponentTagMatchMode::Any", (int64)EPCGExClusterComponentTagMatchMode::Any },
		{ "EPCGExClusterComponentTagMatchMode::Both", (int64)EPCGExClusterComponentTagMatchMode::Both },
		{ "EPCGExClusterComponentTagMatchMode::Separated", (int64)EPCGExClusterComponentTagMatchMode::Separated },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterComponentTagMatchMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterComponentTagMatchMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExClusterComponentTagMatchMode",
	"EPCGExClusterComponentTagMatchMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterComponentTagMatchMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterComponentTagMatchMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterComponentTagMatchMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterComponentTagMatchMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterComponentTagMatchMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExClusterComponentTagMatchMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExClusterComponentTagMatchMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterComponentTagMatchMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExClusterComponentTagMatchMode.InnerSingleton;
}
// ********** End Enum EPCGExClusterComponentTagMatchMode ******************************************

// ********** Begin Enum EPCGExMatchingDetailsUsage ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExMatchingDetailsUsage;
static UEnum* EPCGExMatchingDetailsUsage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExMatchingDetailsUsage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExMatchingDetailsUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchingDetailsUsage, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExMatchingDetailsUsage"));
	}
	return Z_Registration_Info_UEnum_EPCGExMatchingDetailsUsage.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMatchingDetailsUsage>()
{
	return EPCGExMatchingDetailsUsage_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchingDetailsUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Cluster.Name", "EPCGExMatchingDetailsUsage::Cluster" },
		{ "Default.Name", "EPCGExMatchingDetailsUsage::Default" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatching.h" },
		{ "Sampling.Name", "EPCGExMatchingDetailsUsage::Sampling" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExMatchingDetailsUsage::Default", (int64)EPCGExMatchingDetailsUsage::Default },
		{ "EPCGExMatchingDetailsUsage::Cluster", (int64)EPCGExMatchingDetailsUsage::Cluster },
		{ "EPCGExMatchingDetailsUsage::Sampling", (int64)EPCGExMatchingDetailsUsage::Sampling },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchingDetailsUsage_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchingDetailsUsage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExMatchingDetailsUsage",
	"EPCGExMatchingDetailsUsage",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchingDetailsUsage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchingDetailsUsage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchingDetailsUsage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchingDetailsUsage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchingDetailsUsage()
{
	if (!Z_Registration_Info_UEnum_EPCGExMatchingDetailsUsage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExMatchingDetailsUsage.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchingDetailsUsage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExMatchingDetailsUsage.InnerSingleton;
}
// ********** End Enum EPCGExMatchingDetailsUsage **************************************************

// ********** Begin ScriptStruct FPCGExMatchingDetails *********************************************
struct Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExMatchingDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExMatchingDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Used when data from different pins needs to be paired together\n * by using either tags or @Data attribute but no access to points.\n */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatching.h" },
		{ "ToolTip", "Used when data from different pins needs to be paired together\nby using either tags or @Data attribute but no access to points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Usage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether matching is enabled or not. */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatching.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether matching is enabled or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterMatchMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which cluster component must match the tags */" },
		{ "EditCondition", "Usage == EPCGExMatchingDetailsUsage::Cluster" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatching.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Which cluster component must match the tags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplitUnmatched_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to output unmatched data in a separate pin */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatching.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to output unmatched data in a separate pin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitMatches_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to limit the number of matches or not */" },
		{ "EditCondition", "Mode != EPCGExMapMatchMode::Disabled && Usage != EPCGExMatchingDetailsUsage::Sampling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatching.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to limit the number of matches or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Match limit */" },
		{ "EditCondition", "bLimitMatches && Mode != EPCGExMapMatchMode::Disabled && Usage != EPCGExMatchingDetailsUsage::Sampling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatching.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Match limit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimitAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to read Limit value from. */" },
		{ "DisplayName", "Limit (Attr)" },
		{ "EditCondition", "bLimitMatches && LimitInput != EPCGExInputValueType::Constant && Mode != EPCGExMapMatchMode::Disabled && Usage != EPCGExMatchingDetailsUsage::Sampling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatching.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to read Limit value from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant Limit value. */" },
		{ "DisplayName", "Limit" },
		{ "EditCondition", "bLimitMatches && LimitInput == EPCGExInputValueType::Constant && Mode != EPCGExMapMatchMode::Disabled && Usage != EPCGExMatchingDetailsUsage::Sampling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatching.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant Limit value." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExMatchingDetails constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Usage_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Usage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClusterMatchMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClusterMatchMode;
	static void NewProp_bSplitUnmatched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitUnmatched;
	static void NewProp_bLimitMatches_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitMatches;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LimitInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LimitInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LimitAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExMatchingDetails constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExMatchingDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExMatchingDetails;
class UScriptStruct* FPCGExMatchingDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMatchingDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExMatchingDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExMatchingDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExMatchingDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExMatchingDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExMatchingDetails Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_Usage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_Usage = { "Usage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchingDetails, Usage), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchingDetailsUsage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Usage_MetaData), NewProp_Usage_MetaData) }; // 904394955
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchingDetails, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMapMatchMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3571158511
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_ClusterMatchMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_ClusterMatchMode = { "ClusterMatchMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchingDetails, ClusterMatchMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterComponentTagMatchMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterMatchMode_MetaData), NewProp_ClusterMatchMode_MetaData) }; // 41683186
void Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_bSplitUnmatched_SetBit(void* Obj)
{
	((FPCGExMatchingDetails*)Obj)->bSplitUnmatched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_bSplitUnmatched = { "bSplitUnmatched", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExMatchingDetails), &Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_bSplitUnmatched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplitUnmatched_MetaData), NewProp_bSplitUnmatched_MetaData) };
void Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_bLimitMatches_SetBit(void* Obj)
{
	((FPCGExMatchingDetails*)Obj)->bLimitMatches = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_bLimitMatches = { "bLimitMatches", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExMatchingDetails), &Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_bLimitMatches_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitMatches_MetaData), NewProp_bLimitMatches_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_LimitInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_LimitInput = { "LimitInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchingDetails, LimitInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitInput_MetaData), NewProp_LimitInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_LimitAttribute = { "LimitAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchingDetails, LimitAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimitAttribute_MetaData), NewProp_LimitAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchingDetails, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_Usage_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_Usage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_ClusterMatchMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_ClusterMatchMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_bSplitUnmatched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_bLimitMatches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_LimitInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_LimitInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_LimitAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExMatchingDetails Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExMatchingDetails",
	Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::PropPointers),
	sizeof(FPCGExMatchingDetails),
	alignof(FPCGExMatchingDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchingDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMatchingDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExMatchingDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExMatchingDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExMatchingDetails ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatching_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExMapMatchMode_StaticEnum, TEXT("EPCGExMapMatchMode"), &Z_Registration_Info_UEnum_EPCGExMapMatchMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3571158511U) },
		{ EPCGExMatchStrictness_StaticEnum, TEXT("EPCGExMatchStrictness"), &Z_Registration_Info_UEnum_EPCGExMatchStrictness, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 618734305U) },
		{ EPCGExClusterComponentTagMatchMode_StaticEnum, TEXT("EPCGExClusterComponentTagMatchMode"), &Z_Registration_Info_UEnum_EPCGExClusterComponentTagMatchMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 41683186U) },
		{ EPCGExMatchingDetailsUsage_StaticEnum, TEXT("EPCGExMatchingDetailsUsage"), &Z_Registration_Info_UEnum_EPCGExMatchingDetailsUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 904394955U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExMatchingDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExMatchingDetails_Statics::NewStructOps, TEXT("PCGExMatchingDetails"),&Z_Registration_Info_UScriptStruct_FPCGExMatchingDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExMatchingDetails), 1786308959U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatching_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatching_h__Script_PCGExtendedToolkit_1828172046{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatching_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatching_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatching_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatching_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
