// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExModularSortPoints.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExModularSortPoints() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExModularSortPointsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExModularSortPointsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSortPointsBaseSettings();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExModularSortPointsSettings ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExModularSortPointsSettings;
UClass* UPCGExModularSortPointsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExModularSortPointsSettings;
	if (!Z_Registration_Info_UClass_UPCGExModularSortPointsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExModularSortPointsSettings"),
			Z_Registration_Info_UClass_UPCGExModularSortPointsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExModularSortPointsSettings,
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
	return Z_Registration_Info_UClass_UPCGExModularSortPointsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExModularSortPointsSettings_NoRegister()
{
	return UPCGExModularSortPointsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExModularSortPointsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExModularSortPoints.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExModularSortPoints.h" },
		{ "PCGExNodeLibraryDoc", "misc/sort-points" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExModularSortPointsSettings constinit property declarations **********
// ********** End Class UPCGExModularSortPointsSettings constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExModularSortPointsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExModularSortPointsSettings_Statics
UObject* (*const Z_Construct_UClass_UPCGExModularSortPointsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExSortPointsBaseSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExModularSortPointsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExModularSortPointsSettings_Statics::ClassParams = {
	&UPCGExModularSortPointsSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExModularSortPointsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExModularSortPointsSettings_Statics::Class_MetaDataParams)
};
void UPCGExModularSortPointsSettings::StaticRegisterNativesUPCGExModularSortPointsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExModularSortPointsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExModularSortPointsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExModularSortPointsSettings.OuterSingleton, Z_Construct_UClass_UPCGExModularSortPointsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExModularSortPointsSettings.OuterSingleton;
}
UPCGExModularSortPointsSettings::UPCGExModularSortPointsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExModularSortPointsSettings);
UPCGExModularSortPointsSettings::~UPCGExModularSortPointsSettings() {}
// ********** End Class UPCGExModularSortPointsSettings ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExModularSortPoints_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExModularSortPointsSettings, UPCGExModularSortPointsSettings::StaticClass, TEXT("UPCGExModularSortPointsSettings"), &Z_Registration_Info_UClass_UPCGExModularSortPointsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExModularSortPointsSettings), 3494233268U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExModularSortPoints_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExModularSortPoints_h__Script_PCGExtendedToolkit_1426610970{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExModularSortPoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExModularSortPoints_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
