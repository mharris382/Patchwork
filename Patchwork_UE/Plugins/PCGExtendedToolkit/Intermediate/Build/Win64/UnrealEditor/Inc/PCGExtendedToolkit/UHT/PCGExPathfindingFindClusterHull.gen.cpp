// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/PCGExPathfindingFindClusterHull.h"
#include "Geometry/PCGExGeo.h"
#include "Topology/PCGExTopology.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPathfindingFindClusterHull() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFindClusterHullSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFindClusterHullSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExFindClusterHullSettings ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFindClusterHullSettings;
UClass* UPCGExFindClusterHullSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFindClusterHullSettings;
	if (!Z_Registration_Info_UClass_UPCGExFindClusterHullSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFindClusterHullSettings"),
			Z_Registration_Info_UClass_UPCGExFindClusterHullSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFindClusterHullSettings,
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
	return Z_Registration_Info_UClass_UPCGExFindClusterHullSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFindClusterHullSettings_NoRegister()
{
	return UPCGExFindClusterHullSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Pathfinding/PCGExPathfindingFindClusterHull.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindClusterHull.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/contours/find-all-cells-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindClusterHull.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Artifacts_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Cell artifacts. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindClusterHull.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Cell artifacts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Projection settings. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindClusterHull.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Projection settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOctreeSearch_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Performance" },
		{ "Comment", "/** Whether or not to search for closest node using an octree. Depending on your dataset, enabling this may be either much faster, or much slower. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindClusterHull.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether or not to search for closest node using an octree. Depending on your dataset, enabling this may be either much faster, or much slower." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietFailedToFindHullWarning_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindClusterHull.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFindClusterHullSettings constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constraints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Artifacts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionDetails;
	static void NewProp_bUseOctreeSearch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOctreeSearch;
	static void NewProp_bQuietFailedToFindHullWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietFailedToFindHullWarning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFindClusterHullSettings constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFindClusterHullSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics

// ********** Begin Class UPCGExFindClusterHullSettings Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindClusterHullSettings, Constraints), Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraints_MetaData), NewProp_Constraints_MetaData) }; // 200512390
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::NewProp_Artifacts = { "Artifacts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindClusterHullSettings, Artifacts), Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Artifacts_MetaData), NewProp_Artifacts_MetaData) }; // 2617001955
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::NewProp_ProjectionDetails = { "ProjectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindClusterHullSettings, ProjectionDetails), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDetails_MetaData), NewProp_ProjectionDetails_MetaData) }; // 1019281773
void Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::NewProp_bUseOctreeSearch_SetBit(void* Obj)
{
	((UPCGExFindClusterHullSettings*)Obj)->bUseOctreeSearch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::NewProp_bUseOctreeSearch = { "bUseOctreeSearch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFindClusterHullSettings), &Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::NewProp_bUseOctreeSearch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOctreeSearch_MetaData), NewProp_bUseOctreeSearch_MetaData) };
void Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::NewProp_bQuietFailedToFindHullWarning_SetBit(void* Obj)
{
	((UPCGExFindClusterHullSettings*)Obj)->bQuietFailedToFindHullWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::NewProp_bQuietFailedToFindHullWarning = { "bQuietFailedToFindHullWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFindClusterHullSettings), &Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::NewProp_bQuietFailedToFindHullWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietFailedToFindHullWarning_MetaData), NewProp_bQuietFailedToFindHullWarning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::NewProp_Constraints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::NewProp_Artifacts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::NewProp_ProjectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::NewProp_bUseOctreeSearch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::NewProp_bQuietFailedToFindHullWarning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFindClusterHullSettings Property Definitions *************************
UObject* (*const Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::ClassParams = {
	&UPCGExFindClusterHullSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::Class_MetaDataParams)
};
void UPCGExFindClusterHullSettings::StaticRegisterNativesUPCGExFindClusterHullSettings()
{
}
UClass* Z_Construct_UClass_UPCGExFindClusterHullSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFindClusterHullSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFindClusterHullSettings.OuterSingleton, Z_Construct_UClass_UPCGExFindClusterHullSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFindClusterHullSettings.OuterSingleton;
}
UPCGExFindClusterHullSettings::UPCGExFindClusterHullSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFindClusterHullSettings);
UPCGExFindClusterHullSettings::~UPCGExFindClusterHullSettings() {}
// ********** End Class UPCGExFindClusterHullSettings **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindClusterHull_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFindClusterHullSettings, UPCGExFindClusterHullSettings::StaticClass, TEXT("UPCGExFindClusterHullSettings"), &Z_Registration_Info_UClass_UPCGExFindClusterHullSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFindClusterHullSettings), 1792185378U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindClusterHull_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindClusterHull_h__Script_PCGExtendedToolkit_932299016{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindClusterHull_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindClusterHull_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
