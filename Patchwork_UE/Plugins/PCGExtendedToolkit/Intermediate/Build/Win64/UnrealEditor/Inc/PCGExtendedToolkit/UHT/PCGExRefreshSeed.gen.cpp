// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExRefreshSeed.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExRefreshSeed() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRefreshSeedSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRefreshSeedSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExRefreshSeedSettings ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExRefreshSeedSettings;
UClass* UPCGExRefreshSeedSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExRefreshSeedSettings;
	if (!Z_Registration_Info_UClass_UPCGExRefreshSeedSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExRefreshSeedSettings"),
			Z_Registration_Info_UClass_UPCGExRefreshSeedSettings.InnerSingleton,
			StaticRegisterNativesUPCGExRefreshSeedSettings,
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
	return Z_Registration_Info_UClass_UPCGExRefreshSeedSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExRefreshSeedSettings_NoRegister()
{
	return UPCGExRefreshSeedSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExRefreshSeedSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/PCGExRefreshSeed.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRefreshSeed.h" },
		{ "PCGExNodeLibraryDoc", "metadata/refresh-seed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Base seed.*/" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRefreshSeed.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Base seed." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExRefreshSeedSettings constinit property declarations ****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Base;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExRefreshSeedSettings constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExRefreshSeedSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExRefreshSeedSettings_Statics

// ********** Begin Class UPCGExRefreshSeedSettings Property Definitions ***************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExRefreshSeedSettings_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRefreshSeedSettings, Base), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base_MetaData), NewProp_Base_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExRefreshSeedSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRefreshSeedSettings_Statics::NewProp_Base,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRefreshSeedSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExRefreshSeedSettings Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UPCGExRefreshSeedSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRefreshSeedSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExRefreshSeedSettings_Statics::ClassParams = {
	&UPCGExRefreshSeedSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExRefreshSeedSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRefreshSeedSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRefreshSeedSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExRefreshSeedSettings_Statics::Class_MetaDataParams)
};
void UPCGExRefreshSeedSettings::StaticRegisterNativesUPCGExRefreshSeedSettings()
{
}
UClass* Z_Construct_UClass_UPCGExRefreshSeedSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExRefreshSeedSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExRefreshSeedSettings.OuterSingleton, Z_Construct_UClass_UPCGExRefreshSeedSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExRefreshSeedSettings.OuterSingleton;
}
UPCGExRefreshSeedSettings::UPCGExRefreshSeedSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExRefreshSeedSettings);
UPCGExRefreshSeedSettings::~UPCGExRefreshSeedSettings() {}
// ********** End Class UPCGExRefreshSeedSettings **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRefreshSeed_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExRefreshSeedSettings, UPCGExRefreshSeedSettings::StaticClass, TEXT("UPCGExRefreshSeedSettings"), &Z_Registration_Info_UClass_UPCGExRefreshSeedSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExRefreshSeedSettings), 702615413U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRefreshSeed_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRefreshSeed_h__Script_PCGExtendedToolkit_2347157952{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRefreshSeed_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRefreshSeed_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
