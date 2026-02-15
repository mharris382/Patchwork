// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExPartitionVertices.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPartitionVertices() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPartitionVerticesSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPartitionVerticesSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExPartitionVerticesSettings ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPartitionVerticesSettings;
UClass* UPCGExPartitionVerticesSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPartitionVerticesSettings;
	if (!Z_Registration_Info_UClass_UPCGExPartitionVerticesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPartitionVerticesSettings"),
			Z_Registration_Info_UClass_UPCGExPartitionVerticesSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPartitionVerticesSettings,
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
	return Z_Registration_Info_UClass_UPCGExPartitionVerticesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPartitionVerticesSettings_NoRegister()
{
	return UPCGExPartitionVerticesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPartitionVerticesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/PCGExPartitionVertices.h" },
		{ "ModuleRelativePath", "Public/Graph/PCGExPartitionVertices.h" },
		{ "PCGExNodeLibraryDoc", "clusters/packing/partition-vtx" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPartitionVerticesSettings constinit property declarations **********
// ********** End Class UPCGExPartitionVerticesSettings constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPartitionVerticesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPartitionVerticesSettings_Statics
UObject* (*const Z_Construct_UClass_UPCGExPartitionVerticesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPartitionVerticesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPartitionVerticesSettings_Statics::ClassParams = {
	&UPCGExPartitionVerticesSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPartitionVerticesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPartitionVerticesSettings_Statics::Class_MetaDataParams)
};
void UPCGExPartitionVerticesSettings::StaticRegisterNativesUPCGExPartitionVerticesSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPartitionVerticesSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPartitionVerticesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPartitionVerticesSettings.OuterSingleton, Z_Construct_UClass_UPCGExPartitionVerticesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPartitionVerticesSettings.OuterSingleton;
}
UPCGExPartitionVerticesSettings::UPCGExPartitionVerticesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPartitionVerticesSettings);
UPCGExPartitionVerticesSettings::~UPCGExPartitionVerticesSettings() {}
// ********** End Class UPCGExPartitionVerticesSettings ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPartitionVertices_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPartitionVerticesSettings, UPCGExPartitionVerticesSettings::StaticClass, TEXT("UPCGExPartitionVerticesSettings"), &Z_Registration_Info_UClass_UPCGExPartitionVerticesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPartitionVerticesSettings), 3396310823U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPartitionVertices_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPartitionVertices_h__Script_PCGExtendedToolkit_3394711000{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPartitionVertices_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExPartitionVertices_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
