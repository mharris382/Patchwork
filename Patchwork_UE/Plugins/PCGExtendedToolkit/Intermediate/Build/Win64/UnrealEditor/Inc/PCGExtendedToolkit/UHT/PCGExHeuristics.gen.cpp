// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/Heuristics/PCGExHeuristics.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExHeuristics() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicScoreMode();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExHeuristicScoreMode **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExHeuristicScoreMode;
static UEnum* EPCGExHeuristicScoreMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExHeuristicScoreMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExHeuristicScoreMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicScoreMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExHeuristicScoreMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExHeuristicScoreMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExHeuristicScoreMode>()
{
	return EPCGExHeuristicScoreMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicScoreMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "HigherIsBetter.DisplayName", "Higher is Better" },
		{ "HigherIsBetter.Name", "EPCGExHeuristicScoreMode::HigherIsBetter" },
		{ "HigherIsBetter.Tooltip", "Higher values are considered more desirable." },
		{ "LowerIsBetter.DisplayName", "Lower is Better" },
		{ "LowerIsBetter.Name", "EPCGExHeuristicScoreMode::LowerIsBetter" },
		{ "LowerIsBetter.Tooltip", "Lower values are considered more desirable." },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristics.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExHeuristicScoreMode::LowerIsBetter", (int64)EPCGExHeuristicScoreMode::LowerIsBetter },
		{ "EPCGExHeuristicScoreMode::HigherIsBetter", (int64)EPCGExHeuristicScoreMode::HigherIsBetter },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicScoreMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicScoreMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExHeuristicScoreMode",
	"EPCGExHeuristicScoreMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicScoreMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicScoreMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicScoreMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicScoreMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicScoreMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExHeuristicScoreMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExHeuristicScoreMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExHeuristicScoreMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExHeuristicScoreMode.InnerSingleton;
}
// ********** End Enum EPCGExHeuristicScoreMode ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristics_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExHeuristicScoreMode_StaticEnum, TEXT("EPCGExHeuristicScoreMode"), &Z_Registration_Info_UEnum_EPCGExHeuristicScoreMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3849794938U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristics_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristics_h__Script_PCGExtendedToolkit_3557971309{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristics_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristics_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
