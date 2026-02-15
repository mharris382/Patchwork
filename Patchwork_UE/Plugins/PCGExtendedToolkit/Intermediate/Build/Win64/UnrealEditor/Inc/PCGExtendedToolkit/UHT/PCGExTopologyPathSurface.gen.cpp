// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Topology/PCGExTopologyPathSurface.h"
#include "Topology/PCGExTopology.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTopologyPathSurface() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTopologyDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExTopologyPathSurfaceSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTopologyPathSurfaceSettings;
UClass* UPCGExTopologyPathSurfaceSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExTopologyPathSurfaceSettings;
	if (!Z_Registration_Info_UClass_UPCGExTopologyPathSurfaceSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTopologyPathSurfaceSettings"),
			Z_Registration_Info_UClass_UPCGExTopologyPathSurfaceSettings.InnerSingleton,
			StaticRegisterNativesUPCGExTopologyPathSurfaceSettings,
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
	return Z_Registration_Info_UClass_UPCGExTopologyPathSurfaceSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings_NoRegister()
{
	return UPCGExTopologyPathSurfaceSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Topology/PCGExTopologyPathSurface.h" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopologyPathSurface.h" },
		{ "PCGExNodeLibraryDoc", "topology/path-surface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Topology_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Topology settings. Some settings will be ignored based on selected output mode. */" },
		{ "ModuleRelativePath", "Public/Topology/PCGExTopologyPathSurface.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Topology settings. Some settings will be ignored based on selected output mode." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTopologyPathSurfaceSettings constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Topology;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTopologyPathSurfaceSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTopologyPathSurfaceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings_Statics

// ********** Begin Class UPCGExTopologyPathSurfaceSettings Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings_Statics::NewProp_Topology = { "Topology", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTopologyPathSurfaceSettings, Topology), Z_Construct_UScriptStruct_FPCGExTopologyDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Topology_MetaData), NewProp_Topology_MetaData) }; // 4263416702
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings_Statics::NewProp_Topology,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTopologyPathSurfaceSettings Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings_Statics::ClassParams = {
	&UPCGExTopologyPathSurfaceSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings_Statics::Class_MetaDataParams)
};
void UPCGExTopologyPathSurfaceSettings::StaticRegisterNativesUPCGExTopologyPathSurfaceSettings()
{
}
UClass* Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExTopologyPathSurfaceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTopologyPathSurfaceSettings.OuterSingleton, Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTopologyPathSurfaceSettings.OuterSingleton;
}
UPCGExTopologyPathSurfaceSettings::UPCGExTopologyPathSurfaceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTopologyPathSurfaceSettings);
UPCGExTopologyPathSurfaceSettings::~UPCGExTopologyPathSurfaceSettings() {}
// ********** End Class UPCGExTopologyPathSurfaceSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyPathSurface_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTopologyPathSurfaceSettings, UPCGExTopologyPathSurfaceSettings::StaticClass, TEXT("UPCGExTopologyPathSurfaceSettings"), &Z_Registration_Info_UClass_UPCGExTopologyPathSurfaceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTopologyPathSurfaceSettings), 3584450279U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyPathSurface_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyPathSurface_h__Script_PCGExtendedToolkit_917531544{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyPathSurface_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Topology_PCGExTopologyPathSurface_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
