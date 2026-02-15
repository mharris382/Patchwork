// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/PCGExPathfindingPlotEdges.h"
#include "Graph/Pathfinding/PCGExPathfinding.h"
#include "Graph/PCGExCluster.h"
#include "Paths/PCGExPaths.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPathfindingPlotEdges() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSearchInstancedFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathComposition();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathOutputDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathStatistics();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExPathfindingPlotEdgesSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPathfindingPlotEdgesSettings;
UClass* UPCGExPathfindingPlotEdgesSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPathfindingPlotEdgesSettings;
	if (!Z_Registration_Info_UClass_UPCGExPathfindingPlotEdgesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPathfindingPlotEdgesSettings"),
			Z_Registration_Info_UClass_UPCGExPathfindingPlotEdgesSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPathfindingPlotEdgesSettings,
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
	return Z_Registration_Info_UClass_UPCGExPathfindingPlotEdgesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_NoRegister()
{
	return UPCGExPathfindingPlotEdgesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Use PCGExTransform to manipulate the outgoing attributes instead of handling everything here.\n * This way we can multi-thread the various calculations instead of mixing everything along with async/game thread collision\n */" },
		{ "IncludePath", "Graph/Pathfinding/PCGExPathfindingPlotEdges.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotEdges.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/pathfinding-plot-edges" },
		{ "ToolTip", "Use PCGExTransform to manipulate the outgoing attributes instead of handling everything here.\nThis way we can multi-thread the various calculations instead of mixing everything along with async/game thread collision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddSeedToPath_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Add seed point at the beginning of the path */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotEdges.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Add seed point at the beginning of the path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddGoalToPath_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Add goal point at the beginning of the path */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotEdges.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Add goal point at the beginning of the path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddPlotPointsToPath_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Insert plot points inside the path */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotEdges.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Insert plot points inside the path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClosedLoop_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotEdges.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathComposition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What are the paths made of. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotEdges.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "What are the paths made of." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedPicking_MetaData[] = {
		{ "Category", "Settings|Node Picking" },
		{ "Comment", "/** Drive how a seed selects a node. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotEdges.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Drive how a seed selects a node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalPicking_MetaData[] = {
		{ "Category", "Settings|Node Picking" },
		{ "Comment", "/** Drive how a goal selects a node. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotEdges.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Drive how a goal selects a node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchAlgorithm_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Search algorithm. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotEdges.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Search algorithm." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statistics_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Output various statistics. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotEdges.h" },
		{ "ToolTip", "Output various statistics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOctreeSearch_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Performance" },
		{ "Comment", "/** Whether or not to search for closest node using an octree. Depending on your dataset, enabling this may be either much faster, or much slower. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotEdges.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether or not to search for closest node using an octree. Depending on your dataset, enabling this may be either much faster, or much slower." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitCompletePathOnFailedPlot_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotEdges.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathOutputDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** ... */" },
		{ "DisplayName", "Paths Output Settings" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotEdges.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietInvalidPlotWarning_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotEdges.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGreedyQueries_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Performance" },
		{ "Comment", "/** If disabled, will share memory allocations between queries, forcing them to execute one after another. Much slower, but very conservative for memory. Using global feedback forces this behavior under the hood. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotEdges.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If disabled, will share memory allocations between queries, forcing them to execute one after another. Much slower, but very conservative for memory. Using global feedback forces this behavior under the hood." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPathfindingPlotEdgesSettings constinit property declarations *******
	static void NewProp_bAddSeedToPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddSeedToPath;
	static void NewProp_bAddGoalToPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddGoalToPath;
	static void NewProp_bAddPlotPointsToPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddPlotPointsToPath;
	static void NewProp_bClosedLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosedLoop;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PathComposition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PathComposition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeedPicking;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GoalPicking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SearchAlgorithm;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Statistics;
	static void NewProp_bUseOctreeSearch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOctreeSearch;
	static void NewProp_bOmitCompletePathOnFailedPlot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitCompletePathOnFailedPlot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathOutputDetails;
	static void NewProp_bQuietInvalidPlotWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietInvalidPlotWarning;
	static void NewProp_bGreedyQueries_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGreedyQueries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPathfindingPlotEdgesSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPathfindingPlotEdgesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics

// ********** Begin Class UPCGExPathfindingPlotEdgesSettings Property Definitions ******************
void Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bAddSeedToPath_SetBit(void* Obj)
{
	((UPCGExPathfindingPlotEdgesSettings*)Obj)->bAddSeedToPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bAddSeedToPath = { "bAddSeedToPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingPlotEdgesSettings), &Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bAddSeedToPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddSeedToPath_MetaData), NewProp_bAddSeedToPath_MetaData) };
void Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bAddGoalToPath_SetBit(void* Obj)
{
	((UPCGExPathfindingPlotEdgesSettings*)Obj)->bAddGoalToPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bAddGoalToPath = { "bAddGoalToPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingPlotEdgesSettings), &Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bAddGoalToPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddGoalToPath_MetaData), NewProp_bAddGoalToPath_MetaData) };
void Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bAddPlotPointsToPath_SetBit(void* Obj)
{
	((UPCGExPathfindingPlotEdgesSettings*)Obj)->bAddPlotPointsToPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bAddPlotPointsToPath = { "bAddPlotPointsToPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingPlotEdgesSettings), &Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bAddPlotPointsToPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddPlotPointsToPath_MetaData), NewProp_bAddPlotPointsToPath_MetaData) };
void Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bClosedLoop_SetBit(void* Obj)
{
	((UPCGExPathfindingPlotEdgesSettings*)Obj)->bClosedLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bClosedLoop = { "bClosedLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingPlotEdgesSettings), &Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bClosedLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClosedLoop_MetaData), NewProp_bClosedLoop_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_PathComposition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_PathComposition = { "PathComposition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingPlotEdgesSettings, PathComposition), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathComposition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathComposition_MetaData), NewProp_PathComposition_MetaData) }; // 1962836700
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_SeedPicking = { "SeedPicking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingPlotEdgesSettings, SeedPicking), Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedPicking_MetaData), NewProp_SeedPicking_MetaData) }; // 3434531453
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_GoalPicking = { "GoalPicking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingPlotEdgesSettings, GoalPicking), Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalPicking_MetaData), NewProp_GoalPicking_MetaData) }; // 3434531453
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_SearchAlgorithm = { "SearchAlgorithm", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingPlotEdgesSettings, SearchAlgorithm), Z_Construct_UClass_UPCGExSearchInstancedFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchAlgorithm_MetaData), NewProp_SearchAlgorithm_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_Statistics = { "Statistics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingPlotEdgesSettings, Statistics), Z_Construct_UScriptStruct_FPCGExPathStatistics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statistics_MetaData), NewProp_Statistics_MetaData) }; // 1744817090
void Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bUseOctreeSearch_SetBit(void* Obj)
{
	((UPCGExPathfindingPlotEdgesSettings*)Obj)->bUseOctreeSearch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bUseOctreeSearch = { "bUseOctreeSearch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingPlotEdgesSettings), &Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bUseOctreeSearch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOctreeSearch_MetaData), NewProp_bUseOctreeSearch_MetaData) };
void Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bOmitCompletePathOnFailedPlot_SetBit(void* Obj)
{
	((UPCGExPathfindingPlotEdgesSettings*)Obj)->bOmitCompletePathOnFailedPlot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bOmitCompletePathOnFailedPlot = { "bOmitCompletePathOnFailedPlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingPlotEdgesSettings), &Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bOmitCompletePathOnFailedPlot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitCompletePathOnFailedPlot_MetaData), NewProp_bOmitCompletePathOnFailedPlot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_PathOutputDetails = { "PathOutputDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingPlotEdgesSettings, PathOutputDetails), Z_Construct_UScriptStruct_FPCGExPathOutputDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathOutputDetails_MetaData), NewProp_PathOutputDetails_MetaData) }; // 131082863
void Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bQuietInvalidPlotWarning_SetBit(void* Obj)
{
	((UPCGExPathfindingPlotEdgesSettings*)Obj)->bQuietInvalidPlotWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bQuietInvalidPlotWarning = { "bQuietInvalidPlotWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingPlotEdgesSettings), &Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bQuietInvalidPlotWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietInvalidPlotWarning_MetaData), NewProp_bQuietInvalidPlotWarning_MetaData) };
void Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bGreedyQueries_SetBit(void* Obj)
{
	((UPCGExPathfindingPlotEdgesSettings*)Obj)->bGreedyQueries = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bGreedyQueries = { "bGreedyQueries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingPlotEdgesSettings), &Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bGreedyQueries_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGreedyQueries_MetaData), NewProp_bGreedyQueries_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bAddSeedToPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bAddGoalToPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bAddPlotPointsToPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bClosedLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_PathComposition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_PathComposition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_SeedPicking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_GoalPicking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_SearchAlgorithm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_Statistics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bUseOctreeSearch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bOmitCompletePathOnFailedPlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_PathOutputDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bQuietInvalidPlotWarning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::NewProp_bGreedyQueries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPathfindingPlotEdgesSettings Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::ClassParams = {
	&UPCGExPathfindingPlotEdgesSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::Class_MetaDataParams)
};
void UPCGExPathfindingPlotEdgesSettings::StaticRegisterNativesUPCGExPathfindingPlotEdgesSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPathfindingPlotEdgesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPathfindingPlotEdgesSettings.OuterSingleton, Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPathfindingPlotEdgesSettings.OuterSingleton;
}
UPCGExPathfindingPlotEdgesSettings::UPCGExPathfindingPlotEdgesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPathfindingPlotEdgesSettings);
UPCGExPathfindingPlotEdgesSettings::~UPCGExPathfindingPlotEdgesSettings() {}
// ********** End Class UPCGExPathfindingPlotEdgesSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingPlotEdges_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPathfindingPlotEdgesSettings, UPCGExPathfindingPlotEdgesSettings::StaticClass, TEXT("UPCGExPathfindingPlotEdgesSettings"), &Z_Registration_Info_UClass_UPCGExPathfindingPlotEdgesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPathfindingPlotEdgesSettings), 1283012343U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingPlotEdges_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingPlotEdges_h__Script_PCGExtendedToolkit_3563307775{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingPlotEdges_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingPlotEdges_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
