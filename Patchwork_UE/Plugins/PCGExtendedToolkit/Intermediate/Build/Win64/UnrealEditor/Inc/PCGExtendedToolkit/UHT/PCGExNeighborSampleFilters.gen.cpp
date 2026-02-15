// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/Neighbors/PCGExNeighborSampleFilters.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExNeighborSampleFilters() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSampleProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryFilters();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryFilters_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExSamplerFilterConfig *****************************************
struct Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExSamplerFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExSamplerFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///\n" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteInsideNum_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsideNumAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to write the number of tests that passed (inside filters) */" },
		{ "DisplayName", "Inside Num" },
		{ "EditCondition", "bWriteInsideNum" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to write the number of tests that passed (inside filters)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeInsideNum_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, outputs the value divided by the total number of samples */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Normalize" },
		{ "EditCondition", "bWriteInsideNum" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, outputs the value divided by the total number of samples" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteOutsideNum_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutsideNumAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to write the number of tests that failed (outside filters) */" },
		{ "DisplayName", "Outside Num" },
		{ "EditCondition", "bWriteOutsideNum" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to write the number of tests that failed (outside filters)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeOutsideNum_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, outputs the value divided by the total number of samples */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Normalize" },
		{ "EditCondition", "bWriteOutsideNum" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, outputs the value divided by the total number of samples" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteTotalNum_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalNumAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to write the total number of points tested */" },
		{ "DisplayName", "Total Num" },
		{ "EditCondition", "bWriteTotalNum" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to write the total number of points tested" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteInsideWeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsideWeightAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to write the number of tests weight that passed (inside filters) */" },
		{ "DisplayName", "Inside Weight" },
		{ "EditCondition", "bWriteInsideWeight" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to write the number of tests weight that passed (inside filters)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeInsideWeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, outputs the value divided by the total weight of samples */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Normalize" },
		{ "EditCondition", "bWriteInsideWeight" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, outputs the value divided by the total weight of samples" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteOutsideWeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutsideWeightAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to write the number of tested weight that passed (inside filters) */" },
		{ "DisplayName", "Outside Weight" },
		{ "EditCondition", "bWriteOutsideWeight" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to write the number of tested weight that passed (inside filters)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeOutsideWeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, outputs the value divided by the total weight of samples */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Normalize" },
		{ "EditCondition", "bWriteOutsideWeight" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, outputs the value divided by the total weight of samples" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteTotalWeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalWeightAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to write the total weight tested */" },
		{ "DisplayName", "Total Weight" },
		{ "EditCondition", "bWriteTotalWeight" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to write the total weight tested" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExSamplerFilterConfig constinit property declarations *********
	static void NewProp_bWriteInsideNum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteInsideNum;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InsideNumAttributeName;
	static void NewProp_bNormalizeInsideNum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeInsideNum;
	static void NewProp_bWriteOutsideNum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteOutsideNum;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutsideNumAttributeName;
	static void NewProp_bNormalizeOutsideNum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeOutsideNum;
	static void NewProp_bWriteTotalNum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteTotalNum;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TotalNumAttributeName;
	static void NewProp_bWriteInsideWeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteInsideWeight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InsideWeightAttributeName;
	static void NewProp_bNormalizeInsideWeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeInsideWeight;
	static void NewProp_bWriteOutsideWeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteOutsideWeight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutsideWeightAttributeName;
	static void NewProp_bNormalizeOutsideWeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeOutsideWeight;
	static void NewProp_bWriteTotalWeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteTotalWeight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TotalWeightAttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExSamplerFilterConfig constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExSamplerFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExSamplerFilterConfig;
class UScriptStruct* FPCGExSamplerFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSamplerFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExSamplerFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSamplerFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExSamplerFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExSamplerFilterConfig Property Definitions ********************
void Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteInsideNum_SetBit(void* Obj)
{
	((FPCGExSamplerFilterConfig*)Obj)->bWriteInsideNum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteInsideNum = { "bWriteInsideNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSamplerFilterConfig), &Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteInsideNum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteInsideNum_MetaData), NewProp_bWriteInsideNum_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_InsideNumAttributeName = { "InsideNumAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSamplerFilterConfig, InsideNumAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsideNumAttributeName_MetaData), NewProp_InsideNumAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bNormalizeInsideNum_SetBit(void* Obj)
{
	((FPCGExSamplerFilterConfig*)Obj)->bNormalizeInsideNum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bNormalizeInsideNum = { "bNormalizeInsideNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSamplerFilterConfig), &Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bNormalizeInsideNum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalizeInsideNum_MetaData), NewProp_bNormalizeInsideNum_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteOutsideNum_SetBit(void* Obj)
{
	((FPCGExSamplerFilterConfig*)Obj)->bWriteOutsideNum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteOutsideNum = { "bWriteOutsideNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSamplerFilterConfig), &Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteOutsideNum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteOutsideNum_MetaData), NewProp_bWriteOutsideNum_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_OutsideNumAttributeName = { "OutsideNumAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSamplerFilterConfig, OutsideNumAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutsideNumAttributeName_MetaData), NewProp_OutsideNumAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bNormalizeOutsideNum_SetBit(void* Obj)
{
	((FPCGExSamplerFilterConfig*)Obj)->bNormalizeOutsideNum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bNormalizeOutsideNum = { "bNormalizeOutsideNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSamplerFilterConfig), &Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bNormalizeOutsideNum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalizeOutsideNum_MetaData), NewProp_bNormalizeOutsideNum_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteTotalNum_SetBit(void* Obj)
{
	((FPCGExSamplerFilterConfig*)Obj)->bWriteTotalNum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteTotalNum = { "bWriteTotalNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSamplerFilterConfig), &Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteTotalNum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteTotalNum_MetaData), NewProp_bWriteTotalNum_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_TotalNumAttributeName = { "TotalNumAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSamplerFilterConfig, TotalNumAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalNumAttributeName_MetaData), NewProp_TotalNumAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteInsideWeight_SetBit(void* Obj)
{
	((FPCGExSamplerFilterConfig*)Obj)->bWriteInsideWeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteInsideWeight = { "bWriteInsideWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSamplerFilterConfig), &Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteInsideWeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteInsideWeight_MetaData), NewProp_bWriteInsideWeight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_InsideWeightAttributeName = { "InsideWeightAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSamplerFilterConfig, InsideWeightAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsideWeightAttributeName_MetaData), NewProp_InsideWeightAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bNormalizeInsideWeight_SetBit(void* Obj)
{
	((FPCGExSamplerFilterConfig*)Obj)->bNormalizeInsideWeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bNormalizeInsideWeight = { "bNormalizeInsideWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSamplerFilterConfig), &Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bNormalizeInsideWeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalizeInsideWeight_MetaData), NewProp_bNormalizeInsideWeight_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteOutsideWeight_SetBit(void* Obj)
{
	((FPCGExSamplerFilterConfig*)Obj)->bWriteOutsideWeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteOutsideWeight = { "bWriteOutsideWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSamplerFilterConfig), &Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteOutsideWeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteOutsideWeight_MetaData), NewProp_bWriteOutsideWeight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_OutsideWeightAttributeName = { "OutsideWeightAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSamplerFilterConfig, OutsideWeightAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutsideWeightAttributeName_MetaData), NewProp_OutsideWeightAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bNormalizeOutsideWeight_SetBit(void* Obj)
{
	((FPCGExSamplerFilterConfig*)Obj)->bNormalizeOutsideWeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bNormalizeOutsideWeight = { "bNormalizeOutsideWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSamplerFilterConfig), &Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bNormalizeOutsideWeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalizeOutsideWeight_MetaData), NewProp_bNormalizeOutsideWeight_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteTotalWeight_SetBit(void* Obj)
{
	((FPCGExSamplerFilterConfig*)Obj)->bWriteTotalWeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteTotalWeight = { "bWriteTotalWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSamplerFilterConfig), &Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteTotalWeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteTotalWeight_MetaData), NewProp_bWriteTotalWeight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_TotalWeightAttributeName = { "TotalWeightAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSamplerFilterConfig, TotalWeightAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalWeightAttributeName_MetaData), NewProp_TotalWeightAttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteInsideNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_InsideNumAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bNormalizeInsideNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteOutsideNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_OutsideNumAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bNormalizeOutsideNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteTotalNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_TotalNumAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteInsideWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_InsideWeightAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bNormalizeInsideWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteOutsideWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_OutsideWeightAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bNormalizeOutsideWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_bWriteTotalWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewProp_TotalWeightAttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExSamplerFilterConfig Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExSamplerFilterConfig",
	Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::PropPointers),
	sizeof(FPCGExSamplerFilterConfig),
	alignof(FPCGExSamplerFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSamplerFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExSamplerFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExSamplerFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExSamplerFilterConfig *******************************************

// ********** Begin Class UPCGExNeighborSamplerFactoryFilters **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryFilters;
UClass* UPCGExNeighborSamplerFactoryFilters::GetPrivateStaticClass()
{
	using TClass = UPCGExNeighborSamplerFactoryFilters;
	if (!Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryFilters.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNeighborSamplerFactoryFilters"),
			Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryFilters.InnerSingleton,
			StaticRegisterNativesUPCGExNeighborSamplerFactoryFilters,
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
	return Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryFilters.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryFilters_NoRegister()
{
	return UPCGExNeighborSamplerFactoryFilters::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNeighborSamplerFactoryFilters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNeighborSamplerFactoryFilters constinit property declarations ******
// ********** End Class UPCGExNeighborSamplerFactoryFilters constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNeighborSamplerFactoryFilters>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNeighborSamplerFactoryFilters_Statics
UObject* (*const Z_Construct_UClass_UPCGExNeighborSamplerFactoryFilters_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExNeighborSamplerFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSamplerFactoryFilters_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNeighborSamplerFactoryFilters_Statics::ClassParams = {
	&UPCGExNeighborSamplerFactoryFilters::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSamplerFactoryFilters_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNeighborSamplerFactoryFilters_Statics::Class_MetaDataParams)
};
void UPCGExNeighborSamplerFactoryFilters::StaticRegisterNativesUPCGExNeighborSamplerFactoryFilters()
{
}
UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryFilters()
{
	if (!Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryFilters.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryFilters.OuterSingleton, Z_Construct_UClass_UPCGExNeighborSamplerFactoryFilters_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryFilters.OuterSingleton;
}
UPCGExNeighborSamplerFactoryFilters::UPCGExNeighborSamplerFactoryFilters(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNeighborSamplerFactoryFilters);
UPCGExNeighborSamplerFactoryFilters::~UPCGExNeighborSamplerFactoryFilters() {}
// ********** End Class UPCGExNeighborSamplerFactoryFilters ****************************************

// ********** Begin Class UPCGExNeighborSampleFiltersSettings **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNeighborSampleFiltersSettings;
UClass* UPCGExNeighborSampleFiltersSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExNeighborSampleFiltersSettings;
	if (!Z_Registration_Info_UClass_UPCGExNeighborSampleFiltersSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNeighborSampleFiltersSettings"),
			Z_Registration_Info_UClass_UPCGExNeighborSampleFiltersSettings.InnerSingleton,
			StaticRegisterNativesUPCGExNeighborSampleFiltersSettings,
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
	return Z_Registration_Info_UClass_UPCGExNeighborSampleFiltersSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings_NoRegister()
{
	return UPCGExNeighborSampleFiltersSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|NeighborSample" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "sampling/sample-neighbors/sampler-test-neighbors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sampler Settings. */" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleFilters.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Sampler Settings." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNeighborSampleFiltersSettings constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNeighborSampleFiltersSettings constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNeighborSampleFiltersSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings_Statics

// ********** Begin Class UPCGExNeighborSampleFiltersSettings Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNeighborSampleFiltersSettings, Config), Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 512837982
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNeighborSampleFiltersSettings Property Definitions *******************
UObject* (*const Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExNeighborSampleProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings_Statics::ClassParams = {
	&UPCGExNeighborSampleFiltersSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings_Statics::Class_MetaDataParams)
};
void UPCGExNeighborSampleFiltersSettings::StaticRegisterNativesUPCGExNeighborSampleFiltersSettings()
{
}
UClass* Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExNeighborSampleFiltersSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNeighborSampleFiltersSettings.OuterSingleton, Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNeighborSampleFiltersSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNeighborSampleFiltersSettings);
UPCGExNeighborSampleFiltersSettings::~UPCGExNeighborSampleFiltersSettings() {}
// ********** End Class UPCGExNeighborSampleFiltersSettings ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFilters_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExSamplerFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExSamplerFilterConfig_Statics::NewStructOps, TEXT("PCGExSamplerFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExSamplerFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExSamplerFilterConfig), 512837982U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExNeighborSamplerFactoryFilters, UPCGExNeighborSamplerFactoryFilters::StaticClass, TEXT("UPCGExNeighborSamplerFactoryFilters"), &Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryFilters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNeighborSamplerFactoryFilters), 999039534U) },
		{ Z_Construct_UClass_UPCGExNeighborSampleFiltersSettings, UPCGExNeighborSampleFiltersSettings::StaticClass, TEXT("UPCGExNeighborSampleFiltersSettings"), &Z_Registration_Info_UClass_UPCGExNeighborSampleFiltersSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNeighborSampleFiltersSettings), 2193572077U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFilters_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFilters_h__Script_PCGExtendedToolkit_2670558270{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFilters_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFilters_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFilters_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFilters_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
