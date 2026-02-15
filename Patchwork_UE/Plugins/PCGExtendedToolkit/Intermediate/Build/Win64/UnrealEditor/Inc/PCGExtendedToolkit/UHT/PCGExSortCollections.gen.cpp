// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExSortCollections.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSortCollections() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSortCollectionsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSortCollectionsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExSortCollectionsSettings ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSortCollectionsSettings;
UClass* UPCGExSortCollectionsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSortCollectionsSettings;
	if (!Z_Registration_Info_UClass_UPCGExSortCollectionsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSortCollectionsSettings"),
			Z_Registration_Info_UClass_UPCGExSortCollectionsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSortCollectionsSettings,
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
	return Z_Registration_Info_UClass_UPCGExSortCollectionsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSortCollectionsSettings_NoRegister()
{
	return UPCGExSortCollectionsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSortCollectionsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExSortCollections.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExSortCollections.h" },
		{ "PCGExNodeLibraryDoc", "metadata/reduce-data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Controls the order in which data will be sorted */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExSortCollections.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Controls the order in which data will be sorted" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSortCollectionsSettings constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSortCollectionsSettings constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSortCollectionsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSortCollectionsSettings_Statics

// ********** Begin Class UPCGExSortCollectionsSettings Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSortCollectionsSettings_Statics::NewProp_SortDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSortCollectionsSettings_Statics::NewProp_SortDirection = { "SortDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSortCollectionsSettings, SortDirection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortDirection_MetaData), NewProp_SortDirection_MetaData) }; // 477201674
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSortCollectionsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSortCollectionsSettings_Statics::NewProp_SortDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSortCollectionsSettings_Statics::NewProp_SortDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSortCollectionsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSortCollectionsSettings Property Definitions *************************
UObject* (*const Z_Construct_UClass_UPCGExSortCollectionsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSortCollectionsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSortCollectionsSettings_Statics::ClassParams = {
	&UPCGExSortCollectionsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSortCollectionsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSortCollectionsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSortCollectionsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSortCollectionsSettings_Statics::Class_MetaDataParams)
};
void UPCGExSortCollectionsSettings::StaticRegisterNativesUPCGExSortCollectionsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSortCollectionsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSortCollectionsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSortCollectionsSettings.OuterSingleton, Z_Construct_UClass_UPCGExSortCollectionsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSortCollectionsSettings.OuterSingleton;
}
UPCGExSortCollectionsSettings::UPCGExSortCollectionsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSortCollectionsSettings);
UPCGExSortCollectionsSettings::~UPCGExSortCollectionsSettings() {}
// ********** End Class UPCGExSortCollectionsSettings **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExSortCollections_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSortCollectionsSettings, UPCGExSortCollectionsSettings::StaticClass, TEXT("UPCGExSortCollectionsSettings"), &Z_Registration_Info_UClass_UPCGExSortCollectionsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSortCollectionsSettings), 2397245419U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExSortCollections_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExSortCollections_h__Script_PCGExtendedToolkit_33086447{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExSortCollections_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExSortCollections_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
