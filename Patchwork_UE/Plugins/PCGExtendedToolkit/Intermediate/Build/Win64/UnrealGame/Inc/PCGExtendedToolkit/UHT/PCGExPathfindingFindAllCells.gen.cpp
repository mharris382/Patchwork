// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/PCGExPathfindingFindAllCells.h"
#include "Geometry/PCGExGeo.h"
#include "Topology/PCGExTopology.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPathfindingFindAllCells() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFindAllCellsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFindAllCellsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExFindAllCellsSettings ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFindAllCellsSettings;
UClass* UPCGExFindAllCellsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFindAllCellsSettings;
	if (!Z_Registration_Info_UClass_UPCGExFindAllCellsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFindAllCellsSettings"),
			Z_Registration_Info_UClass_UPCGExFindAllCellsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFindAllCellsSettings,
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
	return Z_Registration_Info_UClass_UPCGExFindAllCellsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFindAllCellsSettings_NoRegister()
{
	return UPCGExFindAllCellsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Pathfinding/PCGExPathfindingFindAllCells.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindAllCells.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/contours/find-all-cells" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindAllCells.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Artifacts_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Cell artifacts. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindAllCells.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Cell artifacts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Projection settings. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindAllCells.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Projection settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOctreeSearch_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Performance" },
		{ "Comment", "/** Whether or not to search for closest node using an octree. Depending on your dataset, enabling this may be either much faster, or much slower. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingFindAllCells.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether or not to search for closest node using an octree. Depending on your dataset, enabling this may be either much faster, or much slower." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFindAllCellsSettings constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constraints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Artifacts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionDetails;
	static void NewProp_bUseOctreeSearch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOctreeSearch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFindAllCellsSettings constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFindAllCellsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics

// ********** Begin Class UPCGExFindAllCellsSettings Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindAllCellsSettings, Constraints), Z_Construct_UScriptStruct_FPCGExCellConstraintsDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraints_MetaData), NewProp_Constraints_MetaData) }; // 200512390
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::NewProp_Artifacts = { "Artifacts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindAllCellsSettings, Artifacts), Z_Construct_UScriptStruct_FPCGExCellArtifactsDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Artifacts_MetaData), NewProp_Artifacts_MetaData) }; // 2617001955
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::NewProp_ProjectionDetails = { "ProjectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindAllCellsSettings, ProjectionDetails), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDetails_MetaData), NewProp_ProjectionDetails_MetaData) }; // 1019281773
void Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::NewProp_bUseOctreeSearch_SetBit(void* Obj)
{
	((UPCGExFindAllCellsSettings*)Obj)->bUseOctreeSearch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::NewProp_bUseOctreeSearch = { "bUseOctreeSearch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFindAllCellsSettings), &Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::NewProp_bUseOctreeSearch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOctreeSearch_MetaData), NewProp_bUseOctreeSearch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::NewProp_Constraints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::NewProp_Artifacts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::NewProp_ProjectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::NewProp_bUseOctreeSearch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFindAllCellsSettings Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::ClassParams = {
	&UPCGExFindAllCellsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::Class_MetaDataParams)
};
void UPCGExFindAllCellsSettings::StaticRegisterNativesUPCGExFindAllCellsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExFindAllCellsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFindAllCellsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFindAllCellsSettings.OuterSingleton, Z_Construct_UClass_UPCGExFindAllCellsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFindAllCellsSettings.OuterSingleton;
}
UPCGExFindAllCellsSettings::UPCGExFindAllCellsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFindAllCellsSettings);
UPCGExFindAllCellsSettings::~UPCGExFindAllCellsSettings() {}
// ********** End Class UPCGExFindAllCellsSettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindAllCells_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFindAllCellsSettings, UPCGExFindAllCellsSettings::StaticClass, TEXT("UPCGExFindAllCellsSettings"), &Z_Registration_Info_UClass_UPCGExFindAllCellsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFindAllCellsSettings), 740848962U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindAllCells_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindAllCells_h__Script_PCGExtendedToolkit_732729114{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindAllCells_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingFindAllCells_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
