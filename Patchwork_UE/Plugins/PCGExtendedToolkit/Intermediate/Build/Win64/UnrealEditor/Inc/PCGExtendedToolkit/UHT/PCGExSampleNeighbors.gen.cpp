// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/PCGExSampleNeighbors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSampleNeighbors() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleNeighborsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleNeighborsSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSampleNeighborsSettings ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSampleNeighborsSettings;
UClass* UPCGExSampleNeighborsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSampleNeighborsSettings;
	if (!Z_Registration_Info_UClass_UPCGExSampleNeighborsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSampleNeighborsSettings"),
			Z_Registration_Info_UClass_UPCGExSampleNeighborsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSampleNeighborsSettings,
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
	return Z_Registration_Info_UClass_UPCGExSampleNeighborsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSampleNeighborsSettings_NoRegister()
{
	return UPCGExSampleNeighborsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSampleNeighborsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/PCGExSampleNeighbors.h" },
		{ "ModuleRelativePath", "Public/Sampling/PCGExSampleNeighbors.h" },
		{ "PCGExNodeLibraryDoc", "sampling/sample-neighbors" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSampleNeighborsSettings constinit property declarations ************
// ********** End Class UPCGExSampleNeighborsSettings constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSampleNeighborsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSampleNeighborsSettings_Statics
UObject* (*const Z_Construct_UClass_UPCGExSampleNeighborsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNeighborsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSampleNeighborsSettings_Statics::ClassParams = {
	&UPCGExSampleNeighborsSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSampleNeighborsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSampleNeighborsSettings_Statics::Class_MetaDataParams)
};
void UPCGExSampleNeighborsSettings::StaticRegisterNativesUPCGExSampleNeighborsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSampleNeighborsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSampleNeighborsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSampleNeighborsSettings.OuterSingleton, Z_Construct_UClass_UPCGExSampleNeighborsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSampleNeighborsSettings.OuterSingleton;
}
UPCGExSampleNeighborsSettings::UPCGExSampleNeighborsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSampleNeighborsSettings);
UPCGExSampleNeighborsSettings::~UPCGExSampleNeighborsSettings() {}
// ********** End Class UPCGExSampleNeighborsSettings **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNeighbors_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSampleNeighborsSettings, UPCGExSampleNeighborsSettings::StaticClass, TEXT("UPCGExSampleNeighborsSettings"), &Z_Registration_Info_UClass_UPCGExSampleNeighborsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSampleNeighborsSettings), 2750563900U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNeighbors_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNeighbors_h__Script_PCGExtendedToolkit_3129596877{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNeighbors_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNeighbors_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
