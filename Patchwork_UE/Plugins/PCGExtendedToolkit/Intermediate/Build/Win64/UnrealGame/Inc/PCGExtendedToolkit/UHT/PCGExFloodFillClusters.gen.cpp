// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/FloodFill/PCGExFloodFillClusters.h"
#include "Data/PCGExDataForward.h"
#include "Graph/FloodFill/PCGExFloodFill.h"
#include "Graph/PCGExCluster.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFloodFillClusters() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterDiffusionSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterDiffusionSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillOrder();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathOutput();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathPartitions();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillProcessing();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExForwardDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExFloodFillOrder ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExFloodFillOrder;
static UEnum* EPCGExFloodFillOrder_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExFloodFillOrder.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExFloodFillOrder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillOrder, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExFloodFillOrder"));
	}
	return Z_Registration_Info_UEnum_EPCGExFloodFillOrder.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFloodFillOrder>()
{
	return EPCGExFloodFillOrder_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Index.DisplayName", "Index" },
		{ "Index.Name", "EPCGExFloodFillOrder::Index" },
		{ "Index.ToolTip", "Uses point index to drive diffusion order." },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "Sorting.DisplayName", "Sorting" },
		{ "Sorting.Name", "EPCGExFloodFillOrder::Sorting" },
		{ "Sorting.ToolTip", "Use sorting rules to drive diffusion order." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExFloodFillOrder::Index", (int64)EPCGExFloodFillOrder::Index },
		{ "EPCGExFloodFillOrder::Sorting", (int64)EPCGExFloodFillOrder::Sorting },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillOrder_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillOrder_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExFloodFillOrder",
	"EPCGExFloodFillOrder",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillOrder_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillOrder_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillOrder_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillOrder_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillOrder()
{
	if (!Z_Registration_Info_UEnum_EPCGExFloodFillOrder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExFloodFillOrder.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillOrder_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExFloodFillOrder.InnerSingleton;
}
// ********** End Enum EPCGExFloodFillOrder ********************************************************

// ********** Begin Enum EPCGExFloodFillProcessing *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExFloodFillProcessing;
static UEnum* EPCGExFloodFillProcessing_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExFloodFillProcessing.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExFloodFillProcessing.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillProcessing, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExFloodFillProcessing"));
	}
	return Z_Registration_Info_UEnum_EPCGExFloodFillProcessing.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFloodFillProcessing>()
{
	return EPCGExFloodFillProcessing_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillProcessing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "Parallel.DisplayName", "Parallel" },
		{ "Parallel.Name", "EPCGExFloodFillProcessing::Parallel" },
		{ "Parallel.ToolTip", "Diffuse each vtx once before moving to the next iteration." },
		{ "Sequence.DisplayName", "Sequential" },
		{ "Sequence.Name", "EPCGExFloodFillProcessing::Sequence" },
		{ "Sequence.ToolTip", "Diffuse each vtx until it stops before moving to the next one, and so on." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExFloodFillProcessing::Parallel", (int64)EPCGExFloodFillProcessing::Parallel },
		{ "EPCGExFloodFillProcessing::Sequence", (int64)EPCGExFloodFillProcessing::Sequence },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillProcessing_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillProcessing_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExFloodFillProcessing",
	"EPCGExFloodFillProcessing",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillProcessing_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillProcessing_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillProcessing_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillProcessing_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillProcessing()
{
	if (!Z_Registration_Info_UEnum_EPCGExFloodFillProcessing.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExFloodFillProcessing.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillProcessing_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExFloodFillProcessing.InnerSingleton;
}
// ********** End Enum EPCGExFloodFillProcessing ***************************************************

// ********** Begin Enum EPCGExFloodFillPathOutput *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExFloodFillPathOutput;
static UEnum* EPCGExFloodFillPathOutput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExFloodFillPathOutput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExFloodFillPathOutput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathOutput, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExFloodFillPathOutput"));
	}
	return Z_Registration_Info_UEnum_EPCGExFloodFillPathOutput.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFloodFillPathOutput>()
{
	return EPCGExFloodFillPathOutput_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Full.DisplayName", "Full" },
		{ "Full.Name", "EPCGExFloodFillPathOutput::Full" },
		{ "Full.ToolTip", "Output full paths, from seed to end point -- generate a lot of overlap." },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExFloodFillPathOutput::None" },
		{ "None.ToolTip", "Don't output any paths." },
		{ "Partitions.DisplayName", "Partitions" },
		{ "Partitions.Name", "EPCGExFloodFillPathOutput::Partitions" },
		{ "Partitions.ToolTip", "Output partial paths, only endpoints will overlap. " },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExFloodFillPathOutput::None", (int64)EPCGExFloodFillPathOutput::None },
		{ "EPCGExFloodFillPathOutput::Full", (int64)EPCGExFloodFillPathOutput::Full },
		{ "EPCGExFloodFillPathOutput::Partitions", (int64)EPCGExFloodFillPathOutput::Partitions },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathOutput_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathOutput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExFloodFillPathOutput",
	"EPCGExFloodFillPathOutput",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathOutput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathOutput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathOutput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathOutput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathOutput()
{
	if (!Z_Registration_Info_UEnum_EPCGExFloodFillPathOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExFloodFillPathOutput.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathOutput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExFloodFillPathOutput.InnerSingleton;
}
// ********** End Enum EPCGExFloodFillPathOutput ***************************************************

// ********** Begin Enum EPCGExFloodFillPathPartitions *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExFloodFillPathPartitions;
static UEnum* EPCGExFloodFillPathPartitions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExFloodFillPathPartitions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExFloodFillPathPartitions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathPartitions, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExFloodFillPathPartitions"));
	}
	return Z_Registration_Info_UEnum_EPCGExFloodFillPathPartitions.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFloodFillPathPartitions>()
{
	return EPCGExFloodFillPathPartitions_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathPartitions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Depth.DisplayName", "Depth" },
		{ "Depth.Name", "EPCGExFloodFillPathPartitions::Depth" },
		{ "Depth.ToolTip", "TBD" },
		{ "Length.DisplayName", "Length" },
		{ "Length.Name", "EPCGExFloodFillPathPartitions::Length" },
		{ "Length.ToolTip", "TBD" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "Score.DisplayName", "Score" },
		{ "Score.Name", "EPCGExFloodFillPathPartitions::Score" },
		{ "Score.ToolTip", "TBD" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExFloodFillPathPartitions::Length", (int64)EPCGExFloodFillPathPartitions::Length },
		{ "EPCGExFloodFillPathPartitions::Score", (int64)EPCGExFloodFillPathPartitions::Score },
		{ "EPCGExFloodFillPathPartitions::Depth", (int64)EPCGExFloodFillPathPartitions::Depth },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathPartitions_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathPartitions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExFloodFillPathPartitions",
	"EPCGExFloodFillPathPartitions",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathPartitions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathPartitions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathPartitions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathPartitions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathPartitions()
{
	if (!Z_Registration_Info_UEnum_EPCGExFloodFillPathPartitions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExFloodFillPathPartitions.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathPartitions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExFloodFillPathPartitions.InnerSingleton;
}
// ********** End Enum EPCGExFloodFillPathPartitions ***********************************************

// ********** Begin ScriptStruct FPCGExFloodFillSeedPickingDetails *********************************
struct Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExFloodFillSeedPickingDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExFloodFillSeedPickingDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedPicking_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Drive how a seed point selects a node. */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Drive how a seed point selects a node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ordering_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Defines the sorting used for the vtx */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Defines the sorting used for the vtx" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sort direction */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Sort direction" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExFloodFillSeedPickingDetails constinit property declarations *
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeedPicking;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Ordering_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Ordering;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExFloodFillSeedPickingDetails constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExFloodFillSeedPickingDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExFloodFillSeedPickingDetails;
class UScriptStruct* FPCGExFloodFillSeedPickingDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFloodFillSeedPickingDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExFloodFillSeedPickingDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExFloodFillSeedPickingDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExFloodFillSeedPickingDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExFloodFillSeedPickingDetails Property Definitions ************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::NewProp_SeedPicking = { "SeedPicking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFloodFillSeedPickingDetails, SeedPicking), Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedPicking_MetaData), NewProp_SeedPicking_MetaData) }; // 3434531453
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::NewProp_Ordering_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::NewProp_Ordering = { "Ordering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFloodFillSeedPickingDetails, Ordering), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ordering_MetaData), NewProp_Ordering_MetaData) }; // 3686052085
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::NewProp_SortDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::NewProp_SortDirection = { "SortDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFloodFillSeedPickingDetails, SortDirection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortDirection_MetaData), NewProp_SortDirection_MetaData) }; // 477201674
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::NewProp_SeedPicking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::NewProp_Ordering_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::NewProp_Ordering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::NewProp_SortDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::NewProp_SortDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExFloodFillSeedPickingDetails Property Definitions **************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExFloodFillSeedPickingDetails",
	Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::PropPointers),
	sizeof(FPCGExFloodFillSeedPickingDetails),
	alignof(FPCGExFloodFillSeedPickingDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFloodFillSeedPickingDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExFloodFillSeedPickingDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExFloodFillSeedPickingDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExFloodFillSeedPickingDetails ***********************************

// ********** Begin Class UPCGExClusterDiffusionSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExClusterDiffusionSettings;
UClass* UPCGExClusterDiffusionSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExClusterDiffusionSettings;
	if (!Z_Registration_Info_UClass_UPCGExClusterDiffusionSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExClusterDiffusionSettings"),
			Z_Registration_Info_UClass_UPCGExClusterDiffusionSettings.InnerSingleton,
			StaticRegisterNativesUPCGExClusterDiffusionSettings,
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
	return Z_Registration_Info_UClass_UPCGExClusterDiffusionSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExClusterDiffusionSettings_NoRegister()
{
	return UPCGExClusterDiffusionSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "clusters/flood-fill" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Seeds settings */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Seeds settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Processing_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Defines how each vtx is diffused */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Defines how each vtx is diffused" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Diffusion_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Diffusion settings */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Diffusion settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDiffusionDepth_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the diffusion depth the vtx was subjected to. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the diffusion depth the vtx was subjected to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiffusionDepthAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'int32' attribute to write diffusion depth to.*/" },
		{ "DisplayName", "Diffusion Depth" },
		{ "EditCondition", "bWriteDiffusionDepth" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write diffusion depth to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDiffusionOrder_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the final diffusion order. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the final diffusion order." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiffusionOrderAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'int32' attribute to write order to.*/" },
		{ "DisplayName", "Diffusion Order" },
		{ "EditCondition", "bWriteDiffusionOrder" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'int32' attribute to write order to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDiffusionDistance_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write the final diffusion distance. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write the final diffusion distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiffusionDistanceAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'double' attribute to write diffusion distance to.*/" },
		{ "DisplayName", "Diffusion Distance" },
		{ "EditCondition", "bWriteDiffusionDistance" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'double' attribute to write diffusion distance to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteDiffusionEnding_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Write on the vtx whether it's a diffusion \"endpoint\". */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write on the vtx whether it's a diffusion \"endpoint\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiffusionEndingAttributeName_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Name of the 'bool' attribute to write diffusion ending to.*/" },
		{ "DisplayName", "Diffusion Ending" },
		{ "EditCondition", "bWriteDiffusionEnding" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the 'bool' attribute to write diffusion ending to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedForwarding_MetaData[] = {
		{ "Category", "Settings|Outputs" },
		{ "Comment", "/** Which Seed attributes to forward on the vtx they diffused to. */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which Seed attributes to forward on the vtx they diffused to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathOutput_MetaData[] = {
		{ "Category", "Settings|Outputs - Paths" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathPartitions_MetaData[] = {
		{ "Category", "Settings|Outputs - Paths" },
		{ "Comment", "/** TBD */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Partition over" },
		{ "EditCondition", "PathOutput == EPCGExFloodFillPathOutput::Partitions" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartitionSorting_MetaData[] = {
		{ "Category", "Settings|Outputs - Paths" },
		{ "Comment", "/** TBD */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Sorting" },
		{ "EditCondition", "PathOutput == EPCGExFloodFillPathOutput::Partitions" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedAttributesToPathTags_MetaData[] = {
		{ "Category", "Settings|Outputs - Paths" },
		{ "Comment", "/** TBD */" },
		{ "EditCondition", "PathOutput != EPCGExFloodFillPathOutput::None" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOctreeSearch_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Performance" },
		{ "Comment", "/** Whether or not to search for closest node using an octree. Depending on your dataset, enabling this may be either much faster, or much slower. */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/PCGExFloodFillClusters.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether or not to search for closest node using an octree. Depending on your dataset, enabling this may be either much faster, or much slower." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExClusterDiffusionSettings constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Seeds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Processing_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Processing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Diffusion;
	static void NewProp_bWriteDiffusionDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDiffusionDepth;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DiffusionDepthAttributeName;
	static void NewProp_bWriteDiffusionOrder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDiffusionOrder;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DiffusionOrderAttributeName;
	static void NewProp_bWriteDiffusionDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDiffusionDistance;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DiffusionDistanceAttributeName;
	static void NewProp_bWriteDiffusionEnding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteDiffusionEnding;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DiffusionEndingAttributeName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeedForwarding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PathOutput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PathOutput;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PathPartitions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PathPartitions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PartitionSorting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PartitionSorting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeedAttributesToPathTags;
	static void NewProp_bUseOctreeSearch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOctreeSearch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExClusterDiffusionSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExClusterDiffusionSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics

// ********** Begin Class UPCGExClusterDiffusionSettings Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterDiffusionSettings, Seeds), Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seeds_MetaData), NewProp_Seeds_MetaData) }; // 3473997000
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_Processing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_Processing = { "Processing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterDiffusionSettings, Processing), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillProcessing, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Processing_MetaData), NewProp_Processing_MetaData) }; // 1640906685
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_Diffusion = { "Diffusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterDiffusionSettings, Diffusion), Z_Construct_UScriptStruct_FPCGExFloodFillFlowDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Diffusion_MetaData), NewProp_Diffusion_MetaData) }; // 665361785
void Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bWriteDiffusionDepth_SetBit(void* Obj)
{
	((UPCGExClusterDiffusionSettings*)Obj)->bWriteDiffusionDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bWriteDiffusionDepth = { "bWriteDiffusionDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExClusterDiffusionSettings), &Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bWriteDiffusionDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDiffusionDepth_MetaData), NewProp_bWriteDiffusionDepth_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_DiffusionDepthAttributeName = { "DiffusionDepthAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterDiffusionSettings, DiffusionDepthAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiffusionDepthAttributeName_MetaData), NewProp_DiffusionDepthAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bWriteDiffusionOrder_SetBit(void* Obj)
{
	((UPCGExClusterDiffusionSettings*)Obj)->bWriteDiffusionOrder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bWriteDiffusionOrder = { "bWriteDiffusionOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExClusterDiffusionSettings), &Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bWriteDiffusionOrder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDiffusionOrder_MetaData), NewProp_bWriteDiffusionOrder_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_DiffusionOrderAttributeName = { "DiffusionOrderAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterDiffusionSettings, DiffusionOrderAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiffusionOrderAttributeName_MetaData), NewProp_DiffusionOrderAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bWriteDiffusionDistance_SetBit(void* Obj)
{
	((UPCGExClusterDiffusionSettings*)Obj)->bWriteDiffusionDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bWriteDiffusionDistance = { "bWriteDiffusionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExClusterDiffusionSettings), &Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bWriteDiffusionDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDiffusionDistance_MetaData), NewProp_bWriteDiffusionDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_DiffusionDistanceAttributeName = { "DiffusionDistanceAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterDiffusionSettings, DiffusionDistanceAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiffusionDistanceAttributeName_MetaData), NewProp_DiffusionDistanceAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bWriteDiffusionEnding_SetBit(void* Obj)
{
	((UPCGExClusterDiffusionSettings*)Obj)->bWriteDiffusionEnding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bWriteDiffusionEnding = { "bWriteDiffusionEnding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExClusterDiffusionSettings), &Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bWriteDiffusionEnding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteDiffusionEnding_MetaData), NewProp_bWriteDiffusionEnding_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_DiffusionEndingAttributeName = { "DiffusionEndingAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterDiffusionSettings, DiffusionEndingAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiffusionEndingAttributeName_MetaData), NewProp_DiffusionEndingAttributeName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_SeedForwarding = { "SeedForwarding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterDiffusionSettings, SeedForwarding), Z_Construct_UScriptStruct_FPCGExForwardDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedForwarding_MetaData), NewProp_SeedForwarding_MetaData) }; // 925115943
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_PathOutput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_PathOutput = { "PathOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterDiffusionSettings, PathOutput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathOutput_MetaData), NewProp_PathOutput_MetaData) }; // 2325506842
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_PathPartitions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_PathPartitions = { "PathPartitions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterDiffusionSettings, PathPartitions), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillPathPartitions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathPartitions_MetaData), NewProp_PathPartitions_MetaData) }; // 1914982934
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_PartitionSorting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_PartitionSorting = { "PartitionSorting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterDiffusionSettings, PartitionSorting), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartitionSorting_MetaData), NewProp_PartitionSorting_MetaData) }; // 477201674
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_SeedAttributesToPathTags = { "SeedAttributesToPathTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExClusterDiffusionSettings, SeedAttributesToPathTags), Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedAttributesToPathTags_MetaData), NewProp_SeedAttributesToPathTags_MetaData) }; // 1295694073
void Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bUseOctreeSearch_SetBit(void* Obj)
{
	((UPCGExClusterDiffusionSettings*)Obj)->bUseOctreeSearch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bUseOctreeSearch = { "bUseOctreeSearch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExClusterDiffusionSettings), &Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bUseOctreeSearch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOctreeSearch_MetaData), NewProp_bUseOctreeSearch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_Seeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_Processing_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_Processing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_Diffusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bWriteDiffusionDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_DiffusionDepthAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bWriteDiffusionOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_DiffusionOrderAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bWriteDiffusionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_DiffusionDistanceAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bWriteDiffusionEnding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_DiffusionEndingAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_SeedForwarding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_PathOutput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_PathOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_PathPartitions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_PathPartitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_PartitionSorting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_PartitionSorting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_SeedAttributesToPathTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::NewProp_bUseOctreeSearch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExClusterDiffusionSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::ClassParams = {
	&UPCGExClusterDiffusionSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::Class_MetaDataParams)
};
void UPCGExClusterDiffusionSettings::StaticRegisterNativesUPCGExClusterDiffusionSettings()
{
}
UClass* Z_Construct_UClass_UPCGExClusterDiffusionSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExClusterDiffusionSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExClusterDiffusionSettings.OuterSingleton, Z_Construct_UClass_UPCGExClusterDiffusionSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExClusterDiffusionSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExClusterDiffusionSettings);
UPCGExClusterDiffusionSettings::~UPCGExClusterDiffusionSettings() {}
// ********** End Class UPCGExClusterDiffusionSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFillClusters_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExFloodFillOrder_StaticEnum, TEXT("EPCGExFloodFillOrder"), &Z_Registration_Info_UEnum_EPCGExFloodFillOrder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3686052085U) },
		{ EPCGExFloodFillProcessing_StaticEnum, TEXT("EPCGExFloodFillProcessing"), &Z_Registration_Info_UEnum_EPCGExFloodFillProcessing, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1640906685U) },
		{ EPCGExFloodFillPathOutput_StaticEnum, TEXT("EPCGExFloodFillPathOutput"), &Z_Registration_Info_UEnum_EPCGExFloodFillPathOutput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2325506842U) },
		{ EPCGExFloodFillPathPartitions_StaticEnum, TEXT("EPCGExFloodFillPathPartitions"), &Z_Registration_Info_UEnum_EPCGExFloodFillPathPartitions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1914982934U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExFloodFillSeedPickingDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExFloodFillSeedPickingDetails_Statics::NewStructOps, TEXT("PCGExFloodFillSeedPickingDetails"),&Z_Registration_Info_UScriptStruct_FPCGExFloodFillSeedPickingDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExFloodFillSeedPickingDetails), 3473997000U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExClusterDiffusionSettings, UPCGExClusterDiffusionSettings::StaticClass, TEXT("UPCGExClusterDiffusionSettings"), &Z_Registration_Info_UClass_UPCGExClusterDiffusionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExClusterDiffusionSettings), 332996948U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFillClusters_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFillClusters_h__Script_PCGExtendedToolkit_315662{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFillClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFillClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFillClusters_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFillClusters_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFillClusters_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_PCGExFloodFillClusters_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
