// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/FloodFill/PCGExFloodFill.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFloodFill() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillControlStepsFlags();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillHeuristicFlags();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPrioritization();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillSettingSource();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExFloodFillSettingSource **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExFloodFillSettingSource;
static UEnum* EPCGExFloodFillSettingSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExFloodFillSettingSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExFloodFillSettingSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillSettingSource, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExFloodFillSettingSource"));
	}
	return Z_Registration_Info_UEnum_EPCGExFloodFillSettingSource.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFloodFillSettingSource>()
{
	return EPCGExFloodFillSettingSource_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillSettingSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFill.h" },
		{ "Seed.DisplayName", "Seed" },
		{ "Seed.Name", "EPCGExFloodFillSettingSource::Seed" },
		{ "Seed.ToolTip", "Read values from seed point." },
		{ "Vtx.DisplayName", "Vtx" },
		{ "Vtx.Name", "EPCGExFloodFillSettingSource::Vtx" },
		{ "Vtx.ToolTip", "Read values from vtx point." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExFloodFillSettingSource::Seed", (int64)EPCGExFloodFillSettingSource::Seed },
		{ "EPCGExFloodFillSettingSource::Vtx", (int64)EPCGExFloodFillSettingSource::Vtx },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillSettingSource_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillSettingSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExFloodFillSettingSource",
	"EPCGExFloodFillSettingSource",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillSettingSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillSettingSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillSettingSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillSettingSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillSettingSource()
{
	if (!Z_Registration_Info_UEnum_EPCGExFloodFillSettingSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExFloodFillSettingSource.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillSettingSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExFloodFillSettingSource.InnerSingleton;
}
// ********** End Enum EPCGExFloodFillSettingSource ************************************************

// ********** Begin Enum EPCGExFloodFillPrioritization *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExFloodFillPrioritization;
static UEnum* EPCGExFloodFillPrioritization_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExFloodFillPrioritization.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExFloodFillPrioritization.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPrioritization, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExFloodFillPrioritization"));
	}
	return Z_Registration_Info_UEnum_EPCGExFloodFillPrioritization.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFloodFillPrioritization>()
{
	return EPCGExFloodFillPrioritization_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPrioritization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Depth.DisplayName", "Depth" },
		{ "Depth.Name", "EPCGExFloodFillPrioritization::Depth" },
		{ "Depth.ToolTip", "Prioritize expansion based on depth, then FillControls." },
		{ "Heuristics.DisplayName", "Heuristics" },
		{ "Heuristics.Name", "EPCGExFloodFillPrioritization::Heuristics" },
		{ "Heuristics.ToolTip", "Prioritize expansion based on heuristics first, then depth." },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFill.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExFloodFillPrioritization::Heuristics", (int64)EPCGExFloodFillPrioritization::Heuristics },
		{ "EPCGExFloodFillPrioritization::Depth", (int64)EPCGExFloodFillPrioritization::Depth },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPrioritization_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPrioritization_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExFloodFillPrioritization",
	"EPCGExFloodFillPrioritization",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPrioritization_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPrioritization_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPrioritization_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPrioritization_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPrioritization()
{
	if (!Z_Registration_Info_UEnum_EPCGExFloodFillPrioritization.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExFloodFillPrioritization.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPrioritization_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExFloodFillPrioritization.InnerSingleton;
}
// ********** End Enum EPCGExFloodFillPrioritization ***********************************************

// ********** Begin Enum EPCGExFloodFillControlStepsFlags ******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExFloodFillControlStepsFlags;
static UEnum* EPCGExFloodFillControlStepsFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExFloodFillControlStepsFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExFloodFillControlStepsFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillControlStepsFlags, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExFloodFillControlStepsFlags"));
	}
	return Z_Registration_Info_UEnum_EPCGExFloodFillControlStepsFlags.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFloodFillControlStepsFlags>()
{
	return EPCGExFloodFillControlStepsFlags_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillControlStepsFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Candidate.DisplayName", "Candidate" },
		{ "Candidate.Name", "EPCGExFloodFillControlStepsFlags::Candidate" },
		{ "Candidate.ToolTip", "When a node is identified as candidate to be flooded (e.g neighbor of a captured node)." },
		{ "Capture.DisplayName", "Capture" },
		{ "Capture.Name", "EPCGExFloodFillControlStepsFlags::Capture" },
		{ "Capture.ToolTip", "When a node is captured by a diffusion." },
		{ "DisplayName", "[PCGEx] Flood Fill Control Step Flags" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFill.h" },
		{ "None.Name", "EPCGExFloodFillControlStepsFlags::None" },
		{ "Probing.DisplayName", "Probing" },
		{ "Probing.Name", "EPCGExFloodFillControlStepsFlags::Probing" },
		{ "Probing.ToolTip", "When captured, a node is then 'probed', iterating through unvisited neighbors and registering them as candidates." },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExFloodFillControlStepsFlags::None", (int64)EPCGExFloodFillControlStepsFlags::None },
		{ "EPCGExFloodFillControlStepsFlags::Capture", (int64)EPCGExFloodFillControlStepsFlags::Capture },
		{ "EPCGExFloodFillControlStepsFlags::Probing", (int64)EPCGExFloodFillControlStepsFlags::Probing },
		{ "EPCGExFloodFillControlStepsFlags::Candidate", (int64)EPCGExFloodFillControlStepsFlags::Candidate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillControlStepsFlags_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillControlStepsFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExFloodFillControlStepsFlags",
	"EPCGExFloodFillControlStepsFlags",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillControlStepsFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillControlStepsFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillControlStepsFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillControlStepsFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillControlStepsFlags()
{
	if (!Z_Registration_Info_UEnum_EPCGExFloodFillControlStepsFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExFloodFillControlStepsFlags.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillControlStepsFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExFloodFillControlStepsFlags.InnerSingleton;
}
// ********** End Enum EPCGExFloodFillControlStepsFlags ********************************************

// ********** Begin Enum EPCGExFloodFillHeuristicFlags *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExFloodFillHeuristicFlags;
static UEnum* EPCGExFloodFillHeuristicFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExFloodFillHeuristicFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExFloodFillHeuristicFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillHeuristicFlags, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExFloodFillHeuristicFlags"));
	}
	return Z_Registration_Info_UEnum_EPCGExFloodFillHeuristicFlags.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFloodFillHeuristicFlags>()
{
	return EPCGExFloodFillHeuristicFlags_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillHeuristicFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "DisplayName", "[PCGEx] Diffusion FillControl Flags" },
		{ "GlobalScore.DisplayName", "Global Score" },
		{ "GlobalScore.Name", "EPCGExFloodFillHeuristicFlags::GlobalScore" },
		{ "GlobalScore.ToolTip", "From seed to candidate" },
		{ "LocalScore.DisplayName", "Local Score" },
		{ "LocalScore.Name", "EPCGExFloodFillHeuristicFlags::LocalScore" },
		{ "LocalScore.ToolTip", "From neighbor to neighbor" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFill.h" },
		{ "None.Name", "EPCGExFloodFillHeuristicFlags::None" },
		{ "PreviousScore.DisplayName", "Previous Score" },
		{ "PreviousScore.Name", "EPCGExFloodFillHeuristicFlags::PreviousScore" },
		{ "PreviousScore.ToolTip", "Previously accumulated local score" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExFloodFillHeuristicFlags::None", (int64)EPCGExFloodFillHeuristicFlags::None },
		{ "EPCGExFloodFillHeuristicFlags::LocalScore", (int64)EPCGExFloodFillHeuristicFlags::LocalScore },
		{ "EPCGExFloodFillHeuristicFlags::GlobalScore", (int64)EPCGExFloodFillHeuristicFlags::GlobalScore },
		{ "EPCGExFloodFillHeuristicFlags::PreviousScore", (int64)EPCGExFloodFillHeuristicFlags::PreviousScore },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillHeuristicFlags_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillHeuristicFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExFloodFillHeuristicFlags",
	"EPCGExFloodFillHeuristicFlags",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillHeuristicFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillHeuristicFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillHeuristicFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillHeuristicFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillHeuristicFlags()
{
	if (!Z_Registration_Info_UEnum_EPCGExFloodFillHeuristicFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExFloodFillHeuristicFlags.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillHeuristicFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExFloodFillHeuristicFlags.InnerSingleton;
}
// ********** End Enum EPCGExFloodFillHeuristicFlags ***********************************************

// ********** Begin ScriptStruct FPCGExFloodFillFlowDetails ****************************************
struct Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExFloodFillFlowDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExFloodFillFlowDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFill.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which data should be prioritized to 'drive' diffusion */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFill.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Which data should be prioritized to 'drive' diffusion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillRateSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Diffusion Rate type.*/" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFill.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Diffusion Rate type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillRateInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Diffusion Rate type.*/" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFill.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Diffusion Rate type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillRateAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fetch the Diffusion Rate from a local attribute. Must be >= 0, but zero wont grow -- it will however \"preserve\" the vtx from being diffused on. */" },
		{ "DisplayName", "Fill Rate (Attr)" },
		{ "EditCondition", "FillRateInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFill.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the Diffusion Rate from a local attribute. Must be >= 0, but zero wont grow -- it will however \"preserve\" the vtx from being diffused on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillRateConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Diffusion rate constant. */" },
		{ "DisplayName", "Fill Rate" },
		{ "EditCondition", "FillRateInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFill.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Diffusion rate constant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scoring_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExFloodFillHeuristicFlags" },
		{ "Category", "Settings" },
		{ "Comment", "/** What components are used for scoring points. */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFill.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "What components are used for scoring points." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExFloodFillFlowDetails constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FillRateSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FillRateSource;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FillRateInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FillRateInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FillRateAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FillRateConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Scoring;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExFloodFillFlowDetails constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExFloodFillFlowDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExFloodFillFlowDetails;
class UScriptStruct* FPCGExFloodFillFlowDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFloodFillFlowDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExFloodFillFlowDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExFloodFillFlowDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExFloodFillFlowDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExFloodFillFlowDetails Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFloodFillFlowDetails, Priority), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPrioritization, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) }; // 1663845058
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewProp_FillRateSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewProp_FillRateSource = { "FillRateSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFloodFillFlowDetails, FillRateSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillSettingSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillRateSource_MetaData), NewProp_FillRateSource_MetaData) }; // 2380965155
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewProp_FillRateInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewProp_FillRateInput = { "FillRateInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFloodFillFlowDetails, FillRateInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillRateInput_MetaData), NewProp_FillRateInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewProp_FillRateAttribute = { "FillRateAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFloodFillFlowDetails, FillRateAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillRateAttribute_MetaData), NewProp_FillRateAttribute_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewProp_FillRateConstant = { "FillRateConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFloodFillFlowDetails, FillRateConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillRateConstant_MetaData), NewProp_FillRateConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewProp_Scoring = { "Scoring", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFloodFillFlowDetails, Scoring), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scoring_MetaData), NewProp_Scoring_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewProp_Priority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewProp_FillRateSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewProp_FillRateSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewProp_FillRateInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewProp_FillRateInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewProp_FillRateAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewProp_FillRateConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewProp_Scoring,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExFloodFillFlowDetails Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExFloodFillFlowDetails",
	Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::PropPointers),
	sizeof(FPCGExFloodFillFlowDetails),
	alignof(FPCGExFloodFillFlowDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFloodFillFlowDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExFloodFillFlowDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExFloodFillFlowDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExFloodFillFlowDetails ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFill_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExFloodFillSettingSource_StaticEnum, TEXT("EPCGExFloodFillSettingSource"), &Z_Registration_Info_UEnum_EPCGExFloodFillSettingSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2380965155U) },
		{ EPCGExFloodFillPrioritization_StaticEnum, TEXT("EPCGExFloodFillPrioritization"), &Z_Registration_Info_UEnum_EPCGExFloodFillPrioritization, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1663845058U) },
		{ EPCGExFloodFillControlStepsFlags_StaticEnum, TEXT("EPCGExFloodFillControlStepsFlags"), &Z_Registration_Info_UEnum_EPCGExFloodFillControlStepsFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3877493148U) },
		{ EPCGExFloodFillHeuristicFlags_StaticEnum, TEXT("EPCGExFloodFillHeuristicFlags"), &Z_Registration_Info_UEnum_EPCGExFloodFillHeuristicFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3769720762U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExFloodFillFlowDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails_Statics::NewStructOps, TEXT("PCGExFloodFillFlowDetails"),&Z_Registration_Info_UScriptStruct_FPCGExFloodFillFlowDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExFloodFillFlowDetails), 665361785U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFill_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFill_h__Script_PCGExtendedToolkit_1777989324{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFill_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFill_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFill_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFill_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
