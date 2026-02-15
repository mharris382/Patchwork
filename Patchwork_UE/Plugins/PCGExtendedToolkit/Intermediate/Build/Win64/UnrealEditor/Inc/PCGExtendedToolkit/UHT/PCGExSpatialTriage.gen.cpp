// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExSpatialTriage.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSpatialTriage() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSpatialTriageSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSpatialTriageSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSpatialTriageSettings **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSpatialTriageSettings;
UClass* UPCGExSpatialTriageSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSpatialTriageSettings;
	if (!Z_Registration_Info_UClass_UPCGExSpatialTriageSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSpatialTriageSettings"),
			Z_Registration_Info_UClass_UPCGExSpatialTriageSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSpatialTriageSettings,
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
	return Z_Registration_Info_UClass_UPCGExSpatialTriageSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSpatialTriageSettings_NoRegister()
{
	return UPCGExSpatialTriageSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSpatialTriageSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExSpatialTriage.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExSpatialTriage.h" },
		{ "PCGExNodeLibraryDoc", "quality-of-life/spatial-triage" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSpatialTriageSettings constinit property declarations **************
// ********** End Class UPCGExSpatialTriageSettings constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSpatialTriageSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSpatialTriageSettings_Statics
UObject* (*const Z_Construct_UClass_UPCGExSpatialTriageSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSpatialTriageSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSpatialTriageSettings_Statics::ClassParams = {
	&UPCGExSpatialTriageSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSpatialTriageSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSpatialTriageSettings_Statics::Class_MetaDataParams)
};
void UPCGExSpatialTriageSettings::StaticRegisterNativesUPCGExSpatialTriageSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSpatialTriageSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSpatialTriageSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSpatialTriageSettings.OuterSingleton, Z_Construct_UClass_UPCGExSpatialTriageSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSpatialTriageSettings.OuterSingleton;
}
UPCGExSpatialTriageSettings::UPCGExSpatialTriageSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSpatialTriageSettings);
UPCGExSpatialTriageSettings::~UPCGExSpatialTriageSettings() {}
// ********** End Class UPCGExSpatialTriageSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExSpatialTriage_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSpatialTriageSettings, UPCGExSpatialTriageSettings::StaticClass, TEXT("UPCGExSpatialTriageSettings"), &Z_Registration_Info_UClass_UPCGExSpatialTriageSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSpatialTriageSettings), 88874760U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExSpatialTriage_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExSpatialTriage_h__Script_PCGExtendedToolkit_2985251251{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExSpatialTriage_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExSpatialTriage_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
