// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/PCGExNavmesh.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExNavmesh() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathfindingNavmeshMode();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExPathfindingNavmeshMode **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPathfindingNavmeshMode;
static UEnum* EPCGExPathfindingNavmeshMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathfindingNavmeshMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPathfindingNavmeshMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathfindingNavmeshMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPathfindingNavmeshMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExPathfindingNavmeshMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathfindingNavmeshMode>()
{
	return EPCGExPathfindingNavmeshMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathfindingNavmeshMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Hierarchical.DisplayName", "HIerarchical" },
		{ "Hierarchical.Name", "EPCGExPathfindingNavmeshMode::Hierarchical" },
		{ "Hierarchical.ToolTip", "Cell-based pathfinding" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExNavmesh.h" },
		{ "Regular.DisplayName", "Regular" },
		{ "Regular.Name", "EPCGExPathfindingNavmeshMode::Regular" },
		{ "Regular.ToolTip", "Regular pathfinding" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPathfindingNavmeshMode::Regular", (int64)EPCGExPathfindingNavmeshMode::Regular },
		{ "EPCGExPathfindingNavmeshMode::Hierarchical", (int64)EPCGExPathfindingNavmeshMode::Hierarchical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathfindingNavmeshMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathfindingNavmeshMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPathfindingNavmeshMode",
	"EPCGExPathfindingNavmeshMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathfindingNavmeshMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathfindingNavmeshMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathfindingNavmeshMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathfindingNavmeshMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathfindingNavmeshMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExPathfindingNavmeshMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPathfindingNavmeshMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathfindingNavmeshMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPathfindingNavmeshMode.InnerSingleton;
}
// ********** End Enum EPCGExPathfindingNavmeshMode ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExNavmesh_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExPathfindingNavmeshMode_StaticEnum, TEXT("EPCGExPathfindingNavmeshMode"), &Z_Registration_Info_UEnum_EPCGExPathfindingNavmeshMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2615368300U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExNavmesh_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExNavmesh_h__Script_PCGExtendedToolkit_1744838562{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExNavmesh_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExNavmesh_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
