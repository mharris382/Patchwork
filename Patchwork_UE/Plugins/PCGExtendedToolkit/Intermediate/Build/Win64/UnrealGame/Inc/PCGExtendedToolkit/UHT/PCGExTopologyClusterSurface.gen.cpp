// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Topology/PCGExTopologyClusterSurface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTopologyClusterSurface() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTopologyClusterSurfaceSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTopologyClusterSurfaceSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExTopologyClusterSurfaceSettings *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTopologyClusterSurfaceSettings;
UClass* UPCGExTopologyClusterSurfaceSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExTopologyClusterSurfaceSettings;
	if (!Z_Registration_Info_UClass_UPCGExTopologyClusterSurfaceSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTopologyClusterSurfaceSettings"),
			Z_Registration_Info_UClass_UPCGExTopologyClusterSurfaceSettings.InnerSingleton,
			StaticRegisterNativesUPCGExTopologyClusterSurfaceSettings,
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
	return Z_Registration_Info_UClass_UPCGExTopologyClusterSurfaceSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTopologyClusterSurfaceSettings_NoRegister()
{
	return UPCGExTopologyClusterSurfaceSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTopologyClusterSurfaceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Topology/PCGExTopologyClusterSurface.h" },
		{ "Keywords", "collision" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopologyClusterSurface.h" },
		{ "PCGExNodeLibraryDoc", "topology/cluster-surface" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTopologyClusterSurfaceSettings constinit property declarations *****
// ********** End Class UPCGExTopologyClusterSurfaceSettings constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTopologyClusterSurfaceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTopologyClusterSurfaceSettings_Statics
UObject* (*const Z_Construct_UClass_UPCGExTopologyClusterSurfaceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTopologyEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTopologyClusterSurfaceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTopologyClusterSurfaceSettings_Statics::ClassParams = {
	&UPCGExTopologyClusterSurfaceSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTopologyClusterSurfaceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTopologyClusterSurfaceSettings_Statics::Class_MetaDataParams)
};
void UPCGExTopologyClusterSurfaceSettings::StaticRegisterNativesUPCGExTopologyClusterSurfaceSettings()
{
}
UClass* Z_Construct_UClass_UPCGExTopologyClusterSurfaceSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExTopologyClusterSurfaceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTopologyClusterSurfaceSettings.OuterSingleton, Z_Construct_UClass_UPCGExTopologyClusterSurfaceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTopologyClusterSurfaceSettings.OuterSingleton;
}
UPCGExTopologyClusterSurfaceSettings::UPCGExTopologyClusterSurfaceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTopologyClusterSurfaceSettings);
UPCGExTopologyClusterSurfaceSettings::~UPCGExTopologyClusterSurfaceSettings() {}
// ********** End Class UPCGExTopologyClusterSurfaceSettings ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyClusterSurface_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTopologyClusterSurfaceSettings, UPCGExTopologyClusterSurfaceSettings::StaticClass, TEXT("UPCGExTopologyClusterSurfaceSettings"), &Z_Registration_Info_UClass_UPCGExTopologyClusterSurfaceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTopologyClusterSurfaceSettings), 2183936878U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyClusterSurface_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyClusterSurface_h__Script_PCGExtendedToolkit_3705932170{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyClusterSurface_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyClusterSurface_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
