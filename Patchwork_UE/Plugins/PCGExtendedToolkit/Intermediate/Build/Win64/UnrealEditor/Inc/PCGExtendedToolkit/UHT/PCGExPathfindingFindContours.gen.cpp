// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/PCGExPathfindingFindContours.h"
#include "Data/PCGExDataForward.h"
#include "Geometry/PCGExGeo.h"
#include "Graph/PCGExCluster.h"
#include "Topology/PCGExTopology.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPathfindingFindContours() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFindContoursSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFindContoursSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExContourShapeTypeOutput();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExForwardDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExContourShapeTypeOutput **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExContourShapeTypeOutput;
static UEnum* EPCGExContourShapeTypeOutput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExContourShapeTypeOutput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExContourShapeTypeOutput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExContourShapeTypeOutput, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExContourShapeTypeOutput"));
	}
	return Z_Registration_Info_UEnum_EPCGExContourShapeTypeOutput.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExContourShapeTypeOutput>()
{
	return EPCGExContourShapeTypeOutput_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExContourShapeTypeOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Both.DisplayName", "Convex & Concave" },
		{ "Both.Name", "EPCGExContourShapeTypeOutput::Both" },
		{ "Both.ToolTip", "Output both convex and concave paths" },
		{ "ConcaveOnly.DisplayName", "Concave Only" },
		{ "ConcaveOnly.Name", "EPCGExContourShapeTypeOutput::ConcaveOnly" },
		{ "ConcaveOnly.ToolTip", "Output only concave paths" },
		{ "ConvexOnly.DisplayName", "Convex Only" },
		{ "ConvexOnly.Name", "EPCGExContourShapeTypeOutput::ConvexOnly" },
		{ "ConvexOnly.ToolTip", "Output only convex paths" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindContours.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExContourShapeTypeOutput::Both", (int64)EPCGExContourShapeTypeOutput::Both },
		{ "EPCGExContourShapeTypeOutput::ConvexOnly", (int64)EPCGExContourShapeTypeOutput::ConvexOnly },
		{ "EPCGExContourShapeTypeOutput::ConcaveOnly", (int64)EPCGExContourShapeTypeOutput::ConcaveOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExContourShapeTypeOutput_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExContourShapeTypeOutput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExContourShapeTypeOutput",
	"EPCGExContourShapeTypeOutput",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExContourShapeTypeOutput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExContourShapeTypeOutput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExContourShapeTypeOutput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExContourShapeTypeOutput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExContourShapeTypeOutput()
{
	if (!Z_Registration_Info_UEnum_EPCGExContourShapeTypeOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExContourShapeTypeOutput.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExContourShapeTypeOutput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExContourShapeTypeOutput.InnerSingleton;
}
// ********** End Enum EPCGExContourShapeTypeOutput ************************************************

// ********** Begin Class UPCGExFindContoursSettings ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFindContoursSettings;
UClass* UPCGExFindContoursSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFindContoursSettings;
	if (!Z_Registration_Info_UClass_UPCGExFindContoursSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFindContoursSettings"),
			Z_Registration_Info_UClass_UPCGExFindContoursSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFindContoursSettings,
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
	return Z_Registration_Info_UClass_UPCGExFindContoursSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFindContoursSettings_NoRegister()
{
	return UPCGExFindContoursSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFindContoursSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Pathfinding/PCGExPathfindingFindContours.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindContours.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/contours/find-contours" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedPicking_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Drive how a seed selects a node. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindContours.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Drive how a seed selects a node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindContours.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Artifacts_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Cell artifacts. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindContours.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Cell artifacts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputFilteredSeeds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Output a filtered set of points containing only seeds that generated a valid path */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindContours.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Output a filtered set of points containing only seeds that generated a valid path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedMutations_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bOutputFilteredSeeds" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindContours.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Projection settings. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindContours.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Projection settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedAttributesToPathTags_MetaData[] = {
		{ "Category", "Settings|Forwarding" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindContours.h" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedForwarding_MetaData[] = {
		{ "Category", "Settings|Forwarding" },
		{ "Comment", "/** Which Seed attributes to forward on paths. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindContours.h" },
		{ "ToolTip", "Which Seed attributes to forward on paths." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOctreeSearch_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Performance" },
		{ "Comment", "/** Whether or not to search for closest node using an octree. Depending on your dataset, enabling this may be either much faster, or much slower. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindContours.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether or not to search for closest node using an octree. Depending on your dataset, enabling this may be either much faster, or much slower." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFindContoursSettings constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeedPicking;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constraints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Artifacts;
	static void NewProp_bOutputFilteredSeeds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputFilteredSeeds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeedMutations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeedAttributesToPathTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeedForwarding;
	static void NewProp_bUseOctreeSearch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOctreeSearch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFindContoursSettings constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFindContoursSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFindContoursSettings_Statics

// ********** Begin Class UPCGExFindContoursSettings Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_SeedPicking = { "SeedPicking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindContoursSettings, SeedPicking), Z_Construct_UScriptStruct_FPCGExNodeSelectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedPicking_MetaData), NewProp_SeedPicking_MetaData) }; // 3434531453
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindContoursSettings, Constraints), Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraints_MetaData), NewProp_Constraints_MetaData) }; // 200512390
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_Artifacts = { "Artifacts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindContoursSettings, Artifacts), Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Artifacts_MetaData), NewProp_Artifacts_MetaData) }; // 2617001955
void Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_bOutputFilteredSeeds_SetBit(void* Obj)
{
	((UPCGExFindContoursSettings*)Obj)->bOutputFilteredSeeds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_bOutputFilteredSeeds = { "bOutputFilteredSeeds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFindContoursSettings), &Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_bOutputFilteredSeeds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputFilteredSeeds_MetaData), NewProp_bOutputFilteredSeeds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_SeedMutations = { "SeedMutations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindContoursSettings, SeedMutations), Z_Construct_UScriptStruct_FPCGExCellSeedMutationDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedMutations_MetaData), NewProp_SeedMutations_MetaData) }; // 2763279262
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_ProjectionDetails = { "ProjectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindContoursSettings, ProjectionDetails), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDetails_MetaData), NewProp_ProjectionDetails_MetaData) }; // 1019281773
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_SeedAttributesToPathTags = { "SeedAttributesToPathTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindContoursSettings, SeedAttributesToPathTags), Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedAttributesToPathTags_MetaData), NewProp_SeedAttributesToPathTags_MetaData) }; // 1295694073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_SeedForwarding = { "SeedForwarding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindContoursSettings, SeedForwarding), Z_Construct_UScriptStruct_FPCGExForwardDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedForwarding_MetaData), NewProp_SeedForwarding_MetaData) }; // 925115943
void Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_bUseOctreeSearch_SetBit(void* Obj)
{
	((UPCGExFindContoursSettings*)Obj)->bUseOctreeSearch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_bUseOctreeSearch = { "bUseOctreeSearch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFindContoursSettings), &Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_bUseOctreeSearch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOctreeSearch_MetaData), NewProp_bUseOctreeSearch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFindContoursSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_SeedPicking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_Constraints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_Artifacts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_bOutputFilteredSeeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_SeedMutations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_ProjectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_SeedAttributesToPathTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_SeedForwarding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindContoursSettings_Statics::NewProp_bUseOctreeSearch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindContoursSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFindContoursSettings Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExFindContoursSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindContoursSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFindContoursSettings_Statics::ClassParams = {
	&UPCGExFindContoursSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFindContoursSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindContoursSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindContoursSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFindContoursSettings_Statics::Class_MetaDataParams)
};
void UPCGExFindContoursSettings::StaticRegisterNativesUPCGExFindContoursSettings()
{
}
UClass* Z_Construct_UClass_UPCGExFindContoursSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFindContoursSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFindContoursSettings.OuterSingleton, Z_Construct_UClass_UPCGExFindContoursSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFindContoursSettings.OuterSingleton;
}
UPCGExFindContoursSettings::UPCGExFindContoursSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFindContoursSettings);
UPCGExFindContoursSettings::~UPCGExFindContoursSettings() {}
// ********** End Class UPCGExFindContoursSettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindContours_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExContourShapeTypeOutput_StaticEnum, TEXT("EPCGExContourShapeTypeOutput"), &Z_Registration_Info_UEnum_EPCGExContourShapeTypeOutput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1837245034U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFindContoursSettings, UPCGExFindContoursSettings::StaticClass, TEXT("UPCGExFindContoursSettings"), &Z_Registration_Info_UClass_UPCGExFindContoursSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFindContoursSettings), 2096021657U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindContours_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindContours_h__Script_PCGExtendedToolkit_4044109255{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindContours_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindContours_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindContours_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindContours_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
