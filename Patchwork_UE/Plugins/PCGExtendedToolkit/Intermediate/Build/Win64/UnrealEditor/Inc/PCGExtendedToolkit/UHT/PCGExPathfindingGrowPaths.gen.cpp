// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/PCGExPathfindingGrowPaths.h"
#include "Data/PCGExDataForward.h"
#include "Graph/Pathfinding/PCGExPathfinding.h"
#include "Graph/PCGExCluster.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPathfindingGrowPaths() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthIterationMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthUpdateMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthValueSource();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExForwardDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathStatistics();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExGrowthIterationMode *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExGrowthIterationMode;
static UEnum* EPCGExGrowthIterationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExGrowthIterationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExGrowthIterationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthIterationMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExGrowthIterationMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExGrowthIterationMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGrowthIterationMode>()
{
	return EPCGExGrowthIterationMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthIterationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "Parallel.DisplayName", "Parallel" },
		{ "Parallel.Name", "EPCGExGrowthIterationMode::Parallel" },
		{ "Parallel.ToolTip", "Does one growth iteration on each seed until none remain" },
		{ "Sequence.DisplayName", "Sequence" },
		{ "Sequence.Name", "EPCGExGrowthIterationMode::Sequence" },
		{ "Sequence.ToolTip", "Grow a seed to its end, then move to the next seed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExGrowthIterationMode::Parallel", (int64)EPCGExGrowthIterationMode::Parallel },
		{ "EPCGExGrowthIterationMode::Sequence", (int64)EPCGExGrowthIterationMode::Sequence },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthIterationMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthIterationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExGrowthIterationMode",
	"EPCGExGrowthIterationMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthIterationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthIterationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthIterationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthIterationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthIterationMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExGrowthIterationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExGrowthIterationMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthIterationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExGrowthIterationMode.InnerSingleton;
}
// ********** End Enum EPCGExGrowthIterationMode ***************************************************

// ********** Begin Enum EPCGExGrowthValueSource ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExGrowthValueSource;
static UEnum* EPCGExGrowthValueSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExGrowthValueSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExGrowthValueSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthValueSource, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExGrowthValueSource"));
	}
	return Z_Registration_Info_UEnum_EPCGExGrowthValueSource.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGrowthValueSource>()
{
	return EPCGExGrowthValueSource_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthValueSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Constant.DisplayName", "Constant" },
		{ "Constant.Name", "EPCGExGrowthValueSource::Constant" },
		{ "Constant.ToolTip", "Use a single constant for all seeds" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "SeedAttribute.DisplayName", "Seed Attribute" },
		{ "SeedAttribute.Name", "EPCGExGrowthValueSource::SeedAttribute" },
		{ "SeedAttribute.ToolTip", "Attribute read on the seed." },
		{ "VtxAttribute.DisplayName", "Vtx Attribute" },
		{ "VtxAttribute.Name", "EPCGExGrowthValueSource::VtxAttribute" },
		{ "VtxAttribute.ToolTip", "Attribute read on the vtx." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExGrowthValueSource::Constant", (int64)EPCGExGrowthValueSource::Constant },
		{ "EPCGExGrowthValueSource::SeedAttribute", (int64)EPCGExGrowthValueSource::SeedAttribute },
		{ "EPCGExGrowthValueSource::VtxAttribute", (int64)EPCGExGrowthValueSource::VtxAttribute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthValueSource_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthValueSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExGrowthValueSource",
	"EPCGExGrowthValueSource",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthValueSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthValueSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthValueSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthValueSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthValueSource()
{
	if (!Z_Registration_Info_UEnum_EPCGExGrowthValueSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExGrowthValueSource.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthValueSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExGrowthValueSource.InnerSingleton;
}
// ********** End Enum EPCGExGrowthValueSource *****************************************************

// ********** Begin Enum EPCGExGrowthUpdateMode ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExGrowthUpdateMode;
static UEnum* EPCGExGrowthUpdateMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExGrowthUpdateMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExGrowthUpdateMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthUpdateMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExGrowthUpdateMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExGrowthUpdateMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGrowthUpdateMode>()
{
	return EPCGExGrowthUpdateMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthUpdateMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AddEachIteration.DisplayName", "Add Each Iteration" },
		{ "AddEachIteration.Name", "EPCGExGrowthUpdateMode::AddEachIteration" },
		{ "AddEachIteration.ToolTip", "Add to the remaning number of iterations after each iteration." },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "Once.DisplayName", "Once" },
		{ "Once.Name", "EPCGExGrowthUpdateMode::Once" },
		{ "Once.ToolTip", "Read once at the beginning of the computation." },
		{ "SetEachIteration.DisplayName", "Set Each Iteration" },
		{ "SetEachIteration.Name", "EPCGExGrowthUpdateMode::SetEachIteration" },
		{ "SetEachIteration.ToolTip", "Set the remaining number of iteration after each iteration." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExGrowthUpdateMode::Once", (int64)EPCGExGrowthUpdateMode::Once },
		{ "EPCGExGrowthUpdateMode::SetEachIteration", (int64)EPCGExGrowthUpdateMode::SetEachIteration },
		{ "EPCGExGrowthUpdateMode::AddEachIteration", (int64)EPCGExGrowthUpdateMode::AddEachIteration },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthUpdateMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthUpdateMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExGrowthUpdateMode",
	"EPCGExGrowthUpdateMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthUpdateMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthUpdateMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthUpdateMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthUpdateMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthUpdateMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExGrowthUpdateMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExGrowthUpdateMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthUpdateMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExGrowthUpdateMode.InnerSingleton;
}
// ********** End Enum EPCGExGrowthUpdateMode ******************************************************

// ********** Begin Class UPCGExPathfindingGrowPathsSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPathfindingGrowPathsSettings;
UClass* UPCGExPathfindingGrowPathsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPathfindingGrowPathsSettings;
	if (!Z_Registration_Info_UClass_UPCGExPathfindingGrowPathsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPathfindingGrowPathsSettings"),
			Z_Registration_Info_UClass_UPCGExPathfindingGrowPathsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPathfindingGrowPathsSettings,
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
	return Z_Registration_Info_UClass_UPCGExPathfindingGrowPathsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_NoRegister()
{
	return UPCGExPathfindingGrowPathsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Use PCGExTransform to manipulate the outgoing attributes instead of handling everything here.\n * This way we can multi-thread the various calculations instead of mixing everything along with async/game thread collision\n */" },
		{ "IncludePath", "Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/pathfinding-grow-paths" },
		{ "ToolTip", "Use PCGExTransform to manipulate the outgoing attributes instead of handling everything here.\nThis way we can multi-thread the various calculations instead of mixing everything along with async/game thread collision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedPicking_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Drive how a seed selects a node. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Drive how a seed selects a node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowthMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Controls how iterative growth is managed. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "ToolTip", "Controls how iterative growth is managed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumIterations_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The maximum number of growth iterations for a given seed. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "ToolTip", "The maximum number of growth iterations for a given seed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumIterationsAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Num iteration attribute name. (will be translated to int32) */" },
		{ "EditCondition", "NumIterations != EPCGExGrowthValueSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Num iteration attribute name. (will be translated to int32)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumIterationsConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Num iteration constant */" },
		{ "EditCondition", "NumIterations == EPCGExGrowthValueSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Num iteration constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumIterationsUpdateMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How to update the number of iteration for each seed.  Note: No matter what is selected, will never exceed the Max iteration. */" },
		{ "EditCondition", "NumIterations != EPCGExGrowthValueSource::Constant && NumIterations == EPCGExGrowthValueSource::VtxAttribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How to update the number of iteration for each seed.  Note: No matter what is selected, will never exceed the Max iteration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedNumBranches_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The maximum number of growth started by a given seed. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "ToolTip", "The maximum number of growth started by a given seed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedNumBranchesMean_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How the NumBranches value is to be interpreted against the actual number of neighbors. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "ToolTip", "How the NumBranches value is to be interpreted against the actual number of neighbors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBranchesConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Num branches constant */" },
		{ "EditCondition", "SeedNumBranches == EPCGExGrowthValueSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Num branches constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBranchesAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Num branches attribute name. (will be translated to int32) */" },
		{ "EditCondition", "SeedNumBranches != EPCGExGrowthValueSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Num branches attribute name. (will be translated to int32)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowthDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The maximum number of growth iterations for a given seed. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "ToolTip", "The maximum number of growth iterations for a given seed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowthDirectionAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Growth direction attribute name. (will be translated to a FVector) */" },
		{ "EditCondition", "GrowthDirection != EPCGExGrowthValueSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Growth direction attribute name. (will be translated to a FVector)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowthDirectionConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Growth direction constant */" },
		{ "EditCondition", "GrowthDirection == EPCGExGrowthValueSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Growth direction constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowthDirectionUpdateMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How to update the number of iteration for each seed.  Note: No matter what is selected, will never exceed the Max iteration. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "ToolTip", "How to update the number of iteration for each seed.  Note: No matter what is selected, will never exceed the Max iteration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowthMaxDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The maximum growth distance for a given seed. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "ToolTip", "The maximum growth distance for a given seed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowthMaxDistanceAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Max growth distance attribute name. (will be translated to a FVector) */" },
		{ "EditCondition", "GrowthMaxDistance != EPCGExGrowthValueSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max growth distance attribute name. (will be translated to a FVector)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowthMaxDistanceConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Max growth distance constant */" },
		{ "EditCondition", "GrowthMaxDistance == EPCGExGrowthValueSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max growth distance constant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGrowthStop_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowthStopAttribute_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "Comment", "/** An attribute read on the Vtx as a boolean. If true and this node is used in a path, the path stops there. */" },
		{ "EditCondition", "bUseGrowthStop" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "An attribute read on the Vtx as a boolean. If true and this node is used in a path, the path stops there." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertGrowthStop_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "Comment", "/** Inverse Growth Stop behavior */" },
		{ "EditCondition", "bUseGrowthStop" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Inverse Growth Stop behavior" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseNoGrowth_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoGrowthAttribute_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "Comment", "/** An attribute read on the Vtx as a boolean. If true, this point will never be grown on, but may be still used as seed. */" },
		{ "EditCondition", "bUseNoGrowth" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "An attribute read on the Vtx as a boolean. If true, this point will never be grown on, but may be still used as seed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertNoGrowth_MetaData[] = {
		{ "Category", "Settings|Limits" },
		{ "Comment", "/** Inverse No Growth behavior */" },
		{ "EditCondition", "bUseNoGrowth" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Inverse No Growth behavior" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedAttributesToPathTags_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedForwarding_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** Which Seed attributes to forward on paths. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "ToolTip", "Which Seed attributes to forward on paths." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statistics_MetaData[] = {
		{ "Category", "Settings|Advanced" },
		{ "Comment", "/** Output various statistics. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "ToolTip", "Output various statistics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOctreeSearch_MetaData[] = {
		{ "Category", "Settings|Advanced" },
		{ "Comment", "/** Whether or not to search for closest node using an octree. Depending on your dataset, enabling this may be either much faster, or slightly slower. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingGrowPaths.h" },
		{ "ToolTip", "Whether or not to search for closest node using an octree. Depending on your dataset, enabling this may be either much faster, or slightly slower." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPathfindingGrowPathsSettings constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeedPicking;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GrowthMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GrowthMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NumIterations_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NumIterations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NumIterationsAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterationsConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NumIterationsUpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NumIterationsUpdateMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SeedNumBranches_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SeedNumBranches;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SeedNumBranchesMean_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SeedNumBranchesMean;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBranchesConstant;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NumBranchesAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GrowthDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GrowthDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrowthDirectionAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrowthDirectionConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GrowthDirectionUpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GrowthDirectionUpdateMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GrowthMaxDistance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GrowthMaxDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrowthMaxDistanceAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_GrowthMaxDistanceConstant;
	static void NewProp_bUseGrowthStop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGrowthStop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrowthStopAttribute;
	static void NewProp_bInvertGrowthStop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertGrowthStop;
	static void NewProp_bUseNoGrowth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNoGrowth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NoGrowthAttribute;
	static void NewProp_bInvertNoGrowth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertNoGrowth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeedAttributesToPathTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeedForwarding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Statistics;
	static void NewProp_bUseOctreeSearch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOctreeSearch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPathfindingGrowPathsSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPathfindingGrowPathsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics

// ********** Begin Class UPCGExPathfindingGrowPathsSettings Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_SeedPicking = { "SeedPicking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, SeedPicking), Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedPicking_MetaData), NewProp_SeedPicking_MetaData) }; // 3434531453
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthMode = { "GrowthMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, GrowthMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthIterationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowthMode_MetaData), NewProp_GrowthMode_MetaData) }; // 2659008398
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_NumIterations_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, NumIterations), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthValueSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumIterations_MetaData), NewProp_NumIterations_MetaData) }; // 3339660473
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_NumIterationsAttribute = { "NumIterationsAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, NumIterationsAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumIterationsAttribute_MetaData), NewProp_NumIterationsAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_NumIterationsConstant = { "NumIterationsConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, NumIterationsConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumIterationsConstant_MetaData), NewProp_NumIterationsConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_NumIterationsUpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_NumIterationsUpdateMode = { "NumIterationsUpdateMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, NumIterationsUpdateMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthUpdateMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumIterationsUpdateMode_MetaData), NewProp_NumIterationsUpdateMode_MetaData) }; // 3983030297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_SeedNumBranches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_SeedNumBranches = { "SeedNumBranches", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, SeedNumBranches), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthValueSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedNumBranches_MetaData), NewProp_SeedNumBranches_MetaData) }; // 3339660473
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_SeedNumBranchesMean_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_SeedNumBranchesMean = { "SeedNumBranchesMean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, SeedNumBranchesMean), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedNumBranchesMean_MetaData), NewProp_SeedNumBranchesMean_MetaData) }; // 356721050
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_NumBranchesConstant = { "NumBranchesConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, NumBranchesConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBranchesConstant_MetaData), NewProp_NumBranchesConstant_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_NumBranchesAttribute = { "NumBranchesAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, NumBranchesAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBranchesAttribute_MetaData), NewProp_NumBranchesAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthDirection = { "GrowthDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, GrowthDirection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthValueSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowthDirection_MetaData), NewProp_GrowthDirection_MetaData) }; // 3339660473
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthDirectionAttribute = { "GrowthDirectionAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, GrowthDirectionAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowthDirectionAttribute_MetaData), NewProp_GrowthDirectionAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthDirectionConstant = { "GrowthDirectionConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, GrowthDirectionConstant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowthDirectionConstant_MetaData), NewProp_GrowthDirectionConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthDirectionUpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthDirectionUpdateMode = { "GrowthDirectionUpdateMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, GrowthDirectionUpdateMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthUpdateMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowthDirectionUpdateMode_MetaData), NewProp_GrowthDirectionUpdateMode_MetaData) }; // 3983030297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthMaxDistance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthMaxDistance = { "GrowthMaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, GrowthMaxDistance), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGrowthValueSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowthMaxDistance_MetaData), NewProp_GrowthMaxDistance_MetaData) }; // 3339660473
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthMaxDistanceAttribute = { "GrowthMaxDistanceAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, GrowthMaxDistanceAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowthMaxDistanceAttribute_MetaData), NewProp_GrowthMaxDistanceAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthMaxDistanceConstant = { "GrowthMaxDistanceConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, GrowthMaxDistanceConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowthMaxDistanceConstant_MetaData), NewProp_GrowthMaxDistanceConstant_MetaData) };
void Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bUseGrowthStop_SetBit(void* Obj)
{
	((UPCGExPathfindingGrowPathsSettings*)Obj)->bUseGrowthStop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bUseGrowthStop = { "bUseGrowthStop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingGrowPathsSettings), &Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bUseGrowthStop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGrowthStop_MetaData), NewProp_bUseGrowthStop_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthStopAttribute = { "GrowthStopAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, GrowthStopAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowthStopAttribute_MetaData), NewProp_GrowthStopAttribute_MetaData) }; // 3844583698
void Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bInvertGrowthStop_SetBit(void* Obj)
{
	((UPCGExPathfindingGrowPathsSettings*)Obj)->bInvertGrowthStop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bInvertGrowthStop = { "bInvertGrowthStop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingGrowPathsSettings), &Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bInvertGrowthStop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertGrowthStop_MetaData), NewProp_bInvertGrowthStop_MetaData) };
void Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bUseNoGrowth_SetBit(void* Obj)
{
	((UPCGExPathfindingGrowPathsSettings*)Obj)->bUseNoGrowth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bUseNoGrowth = { "bUseNoGrowth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingGrowPathsSettings), &Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bUseNoGrowth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseNoGrowth_MetaData), NewProp_bUseNoGrowth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_NoGrowthAttribute = { "NoGrowthAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, NoGrowthAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoGrowthAttribute_MetaData), NewProp_NoGrowthAttribute_MetaData) }; // 3844583698
void Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bInvertNoGrowth_SetBit(void* Obj)
{
	((UPCGExPathfindingGrowPathsSettings*)Obj)->bInvertNoGrowth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bInvertNoGrowth = { "bInvertNoGrowth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingGrowPathsSettings), &Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bInvertNoGrowth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertNoGrowth_MetaData), NewProp_bInvertNoGrowth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_SeedAttributesToPathTags = { "SeedAttributesToPathTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, SeedAttributesToPathTags), Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedAttributesToPathTags_MetaData), NewProp_SeedAttributesToPathTags_MetaData) }; // 1295694073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_SeedForwarding = { "SeedForwarding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, SeedForwarding), Z_Construct_UScriptStruct_FPCGExForwardDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedForwarding_MetaData), NewProp_SeedForwarding_MetaData) }; // 925115943
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_Statistics = { "Statistics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingGrowPathsSettings, Statistics), Z_Construct_UScriptStruct_FPCGExPathStatistics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statistics_MetaData), NewProp_Statistics_MetaData) }; // 1744817090
void Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bUseOctreeSearch_SetBit(void* Obj)
{
	((UPCGExPathfindingGrowPathsSettings*)Obj)->bUseOctreeSearch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bUseOctreeSearch = { "bUseOctreeSearch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingGrowPathsSettings), &Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bUseOctreeSearch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOctreeSearch_MetaData), NewProp_bUseOctreeSearch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_SeedPicking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_NumIterations_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_NumIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_NumIterationsAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_NumIterationsConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_NumIterationsUpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_NumIterationsUpdateMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_SeedNumBranches_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_SeedNumBranches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_SeedNumBranchesMean_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_SeedNumBranchesMean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_NumBranchesConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_NumBranchesAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthDirectionAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthDirectionConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthDirectionUpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthDirectionUpdateMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthMaxDistance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthMaxDistanceAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthMaxDistanceConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bUseGrowthStop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_GrowthStopAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bInvertGrowthStop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bUseNoGrowth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_NoGrowthAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bInvertNoGrowth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_SeedAttributesToPathTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_SeedForwarding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_Statistics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::NewProp_bUseOctreeSearch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPathfindingGrowPathsSettings Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::ClassParams = {
	&UPCGExPathfindingGrowPathsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::Class_MetaDataParams)
};
void UPCGExPathfindingGrowPathsSettings::StaticRegisterNativesUPCGExPathfindingGrowPathsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPathfindingGrowPathsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPathfindingGrowPathsSettings.OuterSingleton, Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPathfindingGrowPathsSettings.OuterSingleton;
}
UPCGExPathfindingGrowPathsSettings::UPCGExPathfindingGrowPathsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPathfindingGrowPathsSettings);
UPCGExPathfindingGrowPathsSettings::~UPCGExPathfindingGrowPathsSettings() {}
// ********** End Class UPCGExPathfindingGrowPathsSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingGrowPaths_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExGrowthIterationMode_StaticEnum, TEXT("EPCGExGrowthIterationMode"), &Z_Registration_Info_UEnum_EPCGExGrowthIterationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2659008398U) },
		{ EPCGExGrowthValueSource_StaticEnum, TEXT("EPCGExGrowthValueSource"), &Z_Registration_Info_UEnum_EPCGExGrowthValueSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3339660473U) },
		{ EPCGExGrowthUpdateMode_StaticEnum, TEXT("EPCGExGrowthUpdateMode"), &Z_Registration_Info_UEnum_EPCGExGrowthUpdateMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3983030297U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPathfindingGrowPathsSettings, UPCGExPathfindingGrowPathsSettings::StaticClass, TEXT("UPCGExPathfindingGrowPathsSettings"), &Z_Registration_Info_UClass_UPCGExPathfindingGrowPathsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPathfindingGrowPathsSettings), 4223522252U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingGrowPaths_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingGrowPaths_h__Script_PCGExtendedToolkit_1255615103{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingGrowPaths_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingGrowPaths_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingGrowPaths_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingGrowPaths_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
