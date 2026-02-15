// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actions/PCGExActionWriteValues.h"
#include "Data/PCGExDataFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExActionWriteValues() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExActionFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExActionProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExActionWriteValuesFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExActionWriteValuesFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeGatherDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExActionWriteValuesFactory *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExActionWriteValuesFactory;
UClass* UPCGExActionWriteValuesFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExActionWriteValuesFactory;
	if (!Z_Registration_Info_UClass_UPCGExActionWriteValuesFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExActionWriteValuesFactory"),
			Z_Registration_Info_UClass_UPCGExActionWriteValuesFactory.InnerSingleton,
			StaticRegisterNativesUPCGExActionWriteValuesFactory,
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
	return Z_Registration_Info_UClass_UPCGExActionWriteValuesFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExActionWriteValuesFactory_NoRegister()
{
	return UPCGExActionWriteValuesFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExActionWriteValuesFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Actions/PCGExActionWriteValues.h" },
		{ "ModuleRelativePath", "Public/Actions/PCGExActionWriteValues.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExActionWriteValuesFactory constinit property declarations ***********
// ********** End Class UPCGExActionWriteValuesFactory constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExActionWriteValuesFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExActionWriteValuesFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExActionWriteValuesFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExActionFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExActionWriteValuesFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExActionWriteValuesFactory_Statics::ClassParams = {
	&UPCGExActionWriteValuesFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExActionWriteValuesFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExActionWriteValuesFactory_Statics::Class_MetaDataParams)
};
void UPCGExActionWriteValuesFactory::StaticRegisterNativesUPCGExActionWriteValuesFactory()
{
}
UClass* Z_Construct_UClass_UPCGExActionWriteValuesFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExActionWriteValuesFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExActionWriteValuesFactory.OuterSingleton, Z_Construct_UClass_UPCGExActionWriteValuesFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExActionWriteValuesFactory.OuterSingleton;
}
UPCGExActionWriteValuesFactory::UPCGExActionWriteValuesFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExActionWriteValuesFactory);
UPCGExActionWriteValuesFactory::~UPCGExActionWriteValuesFactory() {}
// ********** End Class UPCGExActionWriteValuesFactory *********************************************

// ********** Begin Class UPCGExActionWriteValuesProviderSettings **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExActionWriteValuesProviderSettings;
UClass* UPCGExActionWriteValuesProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExActionWriteValuesProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExActionWriteValuesProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExActionWriteValuesProviderSettings"),
			Z_Registration_Info_UClass_UPCGExActionWriteValuesProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExActionWriteValuesProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExActionWriteValuesProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings_NoRegister()
{
	return UPCGExActionWriteValuesProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|ActionWriteValues" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Actions/PCGExActionWriteValues.h" },
		{ "ModuleRelativePath", "Public/Actions/PCGExActionWriteValues.h" },
		{ "PCGExNodeLibraryDoc", "quality-of-life/batch-actions/write-attributes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuccessAttributesFilter_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Actions/PCGExActionWriteValues.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailAttributesFilter_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Actions/PCGExActionWriteValues.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExActionWriteValuesProviderSettings constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_SuccessAttributesFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailAttributesFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExActionWriteValuesProviderSettings constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExActionWriteValuesProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings_Statics

// ********** Begin Class UPCGExActionWriteValuesProviderSettings Property Definitions *************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings_Statics::NewProp_SuccessAttributesFilter = { "SuccessAttributesFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExActionWriteValuesProviderSettings, SuccessAttributesFilter), Z_Construct_UScriptStruct_FPCGExAttributeGatherDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuccessAttributesFilter_MetaData), NewProp_SuccessAttributesFilter_MetaData) }; // 2865583282
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings_Statics::NewProp_FailAttributesFilter = { "FailAttributesFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExActionWriteValuesProviderSettings, FailAttributesFilter), Z_Construct_UScriptStruct_FPCGExAttributeGatherDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailAttributesFilter_MetaData), NewProp_FailAttributesFilter_MetaData) }; // 2865583282
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings_Statics::NewProp_SuccessAttributesFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings_Statics::NewProp_FailAttributesFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExActionWriteValuesProviderSettings Property Definitions ***************
UObject* (*const Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExActionProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings_Statics::ClassParams = {
	&UPCGExActionWriteValuesProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExActionWriteValuesProviderSettings::StaticRegisterNativesUPCGExActionWriteValuesProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExActionWriteValuesProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExActionWriteValuesProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExActionWriteValuesProviderSettings.OuterSingleton;
}
UPCGExActionWriteValuesProviderSettings::UPCGExActionWriteValuesProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExActionWriteValuesProviderSettings);
UPCGExActionWriteValuesProviderSettings::~UPCGExActionWriteValuesProviderSettings() {}
// ********** End Class UPCGExActionWriteValuesProviderSettings ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Actions_PCGExActionWriteValues_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExActionWriteValuesFactory, UPCGExActionWriteValuesFactory::StaticClass, TEXT("UPCGExActionWriteValuesFactory"), &Z_Registration_Info_UClass_UPCGExActionWriteValuesFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExActionWriteValuesFactory), 637014092U) },
		{ Z_Construct_UClass_UPCGExActionWriteValuesProviderSettings, UPCGExActionWriteValuesProviderSettings::StaticClass, TEXT("UPCGExActionWriteValuesProviderSettings"), &Z_Registration_Info_UClass_UPCGExActionWriteValuesProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExActionWriteValuesProviderSettings), 3723590691U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Actions_PCGExActionWriteValues_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Actions_PCGExActionWriteValues_h__Script_PCGExtendedToolkit_1823006655{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Actions_PCGExActionWriteValues_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Actions_PCGExActionWriteValues_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
