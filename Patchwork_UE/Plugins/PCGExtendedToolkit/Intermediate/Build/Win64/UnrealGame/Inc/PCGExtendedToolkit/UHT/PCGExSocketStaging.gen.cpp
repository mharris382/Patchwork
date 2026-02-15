// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetStaging/PCGExSocketStaging.h"
#include "Details/PCGExDetailsStaging.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSocketStaging() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSocketStagingSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSocketStagingSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSocketOutputDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSocketStagingSettings **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSocketStagingSettings;
UClass* UPCGExSocketStagingSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSocketStagingSettings;
	if (!Z_Registration_Info_UClass_UPCGExSocketStagingSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSocketStagingSettings"),
			Z_Registration_Info_UClass_UPCGExSocketStagingSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSocketStagingSettings,
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
	return Z_Registration_Info_UClass_UPCGExSocketStagingSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSocketStagingSettings_NoRegister()
{
	return UPCGExSocketStagingSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSocketStagingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "AssetStaging/PCGExSocketStaging.h" },
		{ "Keywords", "stage prepare spawn proxy" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExSocketStaging.h" },
		{ "PCGExNodeLibraryDoc", "assets-management/asset-staging" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputSocketDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AssetStaging/PCGExSocketStaging.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSocketStagingSettings constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputSocketDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSocketStagingSettings constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSocketStagingSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSocketStagingSettings_Statics

// ********** Begin Class UPCGExSocketStagingSettings Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSocketStagingSettings_Statics::NewProp_OutputSocketDetails = { "OutputSocketDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSocketStagingSettings, OutputSocketDetails), Z_Construct_UScriptStruct_FPCGExSocketOutputDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputSocketDetails_MetaData), NewProp_OutputSocketDetails_MetaData) }; // 3220705066
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSocketStagingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSocketStagingSettings_Statics::NewProp_OutputSocketDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSocketStagingSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSocketStagingSettings Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExSocketStagingSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSocketStagingSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSocketStagingSettings_Statics::ClassParams = {
	&UPCGExSocketStagingSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSocketStagingSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSocketStagingSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSocketStagingSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSocketStagingSettings_Statics::Class_MetaDataParams)
};
void UPCGExSocketStagingSettings::StaticRegisterNativesUPCGExSocketStagingSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSocketStagingSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSocketStagingSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSocketStagingSettings.OuterSingleton, Z_Construct_UClass_UPCGExSocketStagingSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSocketStagingSettings.OuterSingleton;
}
UPCGExSocketStagingSettings::UPCGExSocketStagingSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSocketStagingSettings);
UPCGExSocketStagingSettings::~UPCGExSocketStagingSettings() {}
// ********** End Class UPCGExSocketStagingSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExSocketStaging_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSocketStagingSettings, UPCGExSocketStagingSettings::StaticClass, TEXT("UPCGExSocketStagingSettings"), &Z_Registration_Info_UClass_UPCGExSocketStagingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSocketStagingSettings), 1137746073U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExSocketStaging_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExSocketStaging_h__Script_PCGExtendedToolkit_401332747{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExSocketStaging_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExSocketStaging_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
