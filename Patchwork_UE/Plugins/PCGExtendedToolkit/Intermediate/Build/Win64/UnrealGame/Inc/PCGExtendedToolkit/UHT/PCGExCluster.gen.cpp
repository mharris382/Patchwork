// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExCluster.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExCluster() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestSearchMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExClusterClosestSearchMode ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExClusterClosestSearchMode;
static UEnum* EPCGExClusterClosestSearchMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExClusterClosestSearchMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExClusterClosestSearchMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestSearchMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExClusterClosestSearchMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExClusterClosestSearchMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExClusterClosestSearchMode>()
{
	return EPCGExClusterClosestSearchMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestSearchMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Edge.DisplayName", "Closest edge" },
		{ "Edge.Name", "EPCGExClusterClosestSearchMode::Edge" },
		{ "Edge.ToolTip", "Proximity to edge, then endpoint" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCluster.h" },
		{ "Vtx.DisplayName", "Closest vtx" },
		{ "Vtx.Name", "EPCGExClusterClosestSearchMode::Vtx" },
		{ "Vtx.ToolTip", "Proximity to node position" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExClusterClosestSearchMode::Vtx", (int64)EPCGExClusterClosestSearchMode::Vtx },
		{ "EPCGExClusterClosestSearchMode::Edge", (int64)EPCGExClusterClosestSearchMode::Edge },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestSearchMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestSearchMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExClusterClosestSearchMode",
	"EPCGExClusterClosestSearchMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestSearchMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestSearchMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestSearchMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestSearchMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestSearchMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExClusterClosestSearchMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExClusterClosestSearchMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestSearchMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExClusterClosestSearchMode.InnerSingleton;
}
// ********** End Enum EPCGExClusterClosestSearchMode **********************************************

// ********** Begin ScriptStruct FPCGExNodeSelectionDetails ****************************************
struct Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExNodeSelectionDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExNodeSelectionDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCluster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickingMethod_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Drives how the seed & goal points are selected within each cluster. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCluster.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Drives how the seed & goal points are selected within each cluster." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Max distance at which a node can be selected. Use <= 0 to ignore distance check. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCluster.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max distance at which a node can be selected. Use <= 0 to ignore distance check." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExNodeSelectionDetails constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_PickingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PickingMethod;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExNodeSelectionDetails constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExNodeSelectionDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExNodeSelectionDetails;
class UScriptStruct* FPCGExNodeSelectionDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExNodeSelectionDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExNodeSelectionDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExNodeSelectionDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExNodeSelectionDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExNodeSelectionDetails Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics::NewProp_PickingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics::NewProp_PickingMethod = { "PickingMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeSelectionDetails, PickingMethod), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterClosestSearchMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickingMethod_MetaData), NewProp_PickingMethod_MetaData) }; // 1075485612
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeSelectionDetails, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics::NewProp_PickingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics::NewProp_PickingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics::NewProp_MaxDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExNodeSelectionDetails Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExNodeSelectionDetails",
	Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics::PropPointers),
	sizeof(FPCGExNodeSelectionDetails),
	alignof(FPCGExNodeSelectionDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExNodeSelectionDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExNodeSelectionDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExNodeSelectionDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExNodeSelectionDetails ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCluster_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExClusterClosestSearchMode_StaticEnum, TEXT("EPCGExClusterClosestSearchMode"), &Z_Registration_Info_UEnum_EPCGExClusterClosestSearchMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1075485612U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExNodeSelectionDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails_Statics::NewStructOps, TEXT("PCGExNodeSelectionDetails"),&Z_Registration_Info_UScriptStruct_FPCGExNodeSelectionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExNodeSelectionDetails), 3434531453U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCluster_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCluster_h__Script_PCGExtendedToolkit_4187814424{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCluster_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCluster_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCluster_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCluster_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
