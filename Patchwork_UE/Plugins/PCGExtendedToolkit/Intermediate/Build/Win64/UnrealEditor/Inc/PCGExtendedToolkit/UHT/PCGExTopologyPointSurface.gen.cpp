// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Topology/PCGExTopologyPointSurface.h"
#include "Geometry/PCGExGeo.h"
#include "GeometryScript/MeshRepairFunctions.h"
#include "Topology/PCGExTopology.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTopologyPointSurface() {}

// ********** Begin Cross Module References ********************************************************
GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTopologyDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExTopologyPointSurfaceSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTopologyPointSurfaceSettings;
UClass* UPCGExTopologyPointSurfaceSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExTopologyPointSurfaceSettings;
	if (!Z_Registration_Info_UClass_UPCGExTopologyPointSurfaceSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTopologyPointSurfaceSettings"),
			Z_Registration_Info_UClass_UPCGExTopologyPointSurfaceSettings.InnerSingleton,
			StaticRegisterNativesUPCGExTopologyPointSurfaceSettings,
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
	return Z_Registration_Info_UClass_UPCGExTopologyPointSurfaceSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_NoRegister()
{
	return UPCGExTopologyPointSurfaceSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Topology/PCGExTopologyPointSurface.h" },
		{ "Keywords", "triangulation" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopologyPointSurface.h" },
		{ "PCGExNodeLibraryDoc", "clusters/diagrams/delaunay-2d" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Projection settings. */" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopologyPointSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Projection settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttemptRepair_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopologyPointSurface.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepairDegenerate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Degeneration settings. */" },
		{ "EditCondition", "bAttemptRepair" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopologyPointSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Degeneration settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Topology_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Topology settings. Some settings will be ignored based on selected output mode. */" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopologyPointSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Topology settings. Some settings will be ignored based on selected output mode." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTopologyPointSurfaceSettings constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionDetails;
	static void NewProp_bAttemptRepair_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttemptRepair;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RepairDegenerate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Topology;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTopologyPointSurfaceSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTopologyPointSurfaceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics

// ********** Begin Class UPCGExTopologyPointSurfaceSettings Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::NewProp_ProjectionDetails = { "ProjectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTopologyPointSurfaceSettings, ProjectionDetails), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDetails_MetaData), NewProp_ProjectionDetails_MetaData) }; // 1019281773
void Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::NewProp_bAttemptRepair_SetBit(void* Obj)
{
	((UPCGExTopologyPointSurfaceSettings*)Obj)->bAttemptRepair = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::NewProp_bAttemptRepair = { "bAttemptRepair", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExTopologyPointSurfaceSettings), &Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::NewProp_bAttemptRepair_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttemptRepair_MetaData), NewProp_bAttemptRepair_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::NewProp_RepairDegenerate = { "RepairDegenerate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTopologyPointSurfaceSettings, RepairDegenerate), Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepairDegenerate_MetaData), NewProp_RepairDegenerate_MetaData) }; // 209567941
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::NewProp_Topology = { "Topology", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTopologyPointSurfaceSettings, Topology), Z_Construct_UScriptStruct_FPCGExTopologyDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Topology_MetaData), NewProp_Topology_MetaData) }; // 4263416702
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::NewProp_ProjectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::NewProp_bAttemptRepair,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::NewProp_RepairDegenerate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::NewProp_Topology,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTopologyPointSurfaceSettings Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::ClassParams = {
	&UPCGExTopologyPointSurfaceSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::Class_MetaDataParams)
};
void UPCGExTopologyPointSurfaceSettings::StaticRegisterNativesUPCGExTopologyPointSurfaceSettings()
{
}
UClass* Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExTopologyPointSurfaceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTopologyPointSurfaceSettings.OuterSingleton, Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTopologyPointSurfaceSettings.OuterSingleton;
}
UPCGExTopologyPointSurfaceSettings::UPCGExTopologyPointSurfaceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTopologyPointSurfaceSettings);
UPCGExTopologyPointSurfaceSettings::~UPCGExTopologyPointSurfaceSettings() {}
// ********** End Class UPCGExTopologyPointSurfaceSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyPointSurface_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTopologyPointSurfaceSettings, UPCGExTopologyPointSurfaceSettings::StaticClass, TEXT("UPCGExTopologyPointSurfaceSettings"), &Z_Registration_Info_UClass_UPCGExTopologyPointSurfaceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTopologyPointSurfaceSettings), 3422537832U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyPointSurface_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyPointSurface_h__Script_PCGExtendedToolkit_1264203604{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyPointSurface_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyPointSurface_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
