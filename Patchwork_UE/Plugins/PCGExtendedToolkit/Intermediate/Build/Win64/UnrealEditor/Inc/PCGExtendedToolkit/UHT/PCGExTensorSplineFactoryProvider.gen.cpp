// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/Tensors/PCGExTensorSplineFactoryProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorSplineFactoryProvider() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSplineFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSplineFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExTensorSplineFactoryData ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorSplineFactoryData;
UClass* UPCGExTensorSplineFactoryData::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorSplineFactoryData;
	if (!Z_Registration_Info_UClass_UPCGExTensorSplineFactoryData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorSplineFactoryData"),
			Z_Registration_Info_UClass_UPCGExTensorSplineFactoryData.InnerSingleton,
			StaticRegisterNativesUPCGExTensorSplineFactoryData,
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
	return Z_Registration_Info_UClass_UPCGExTensorSplineFactoryData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorSplineFactoryData_NoRegister()
{
	return UPCGExTensorSplineFactoryData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorSplineFactoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorSplineFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSplineFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorSplineFactoryData constinit property declarations ************
// ********** End Class UPCGExTensorSplineFactoryData constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorSplineFactoryData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorSplineFactoryData_Statics
UObject* (*const Z_Construct_UClass_UPCGExTensorSplineFactoryData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorSplineFactoryData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorSplineFactoryData_Statics::ClassParams = {
	&UPCGExTensorSplineFactoryData::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorSplineFactoryData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorSplineFactoryData_Statics::Class_MetaDataParams)
};
void UPCGExTensorSplineFactoryData::StaticRegisterNativesUPCGExTensorSplineFactoryData()
{
}
UClass* Z_Construct_UClass_UPCGExTensorSplineFactoryData()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorSplineFactoryData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorSplineFactoryData.OuterSingleton, Z_Construct_UClass_UPCGExTensorSplineFactoryData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorSplineFactoryData.OuterSingleton;
}
UPCGExTensorSplineFactoryData::UPCGExTensorSplineFactoryData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorSplineFactoryData);
UPCGExTensorSplineFactoryData::~UPCGExTensorSplineFactoryData() {}
// ********** End Class UPCGExTensorSplineFactoryData **********************************************

// ********** Begin Class UPCGExTensorSplineFactoryProviderSettings ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorSplineFactoryProviderSettings;
UClass* UPCGExTensorSplineFactoryProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorSplineFactoryProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExTensorSplineFactoryProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorSplineFactoryProviderSettings"),
			Z_Registration_Info_UClass_UPCGExTensorSplineFactoryProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExTensorSplineFactoryProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExTensorSplineFactoryProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings_NoRegister()
{
	return UPCGExTensorSplineFactoryProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorSplineFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorSplineFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorSplineFactoryProviderSettings constinit property declarations 
// ********** End Class UPCGExTensorSplineFactoryProviderSettings constinit property declarations **
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorSplineFactoryProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings_Statics
UObject* (*const Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings_Statics::ClassParams = {
	&UPCGExTensorSplineFactoryProviderSettings::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExTensorSplineFactoryProviderSettings::StaticRegisterNativesUPCGExTensorSplineFactoryProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorSplineFactoryProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorSplineFactoryProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorSplineFactoryProviderSettings.OuterSingleton;
}
UPCGExTensorSplineFactoryProviderSettings::UPCGExTensorSplineFactoryProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorSplineFactoryProviderSettings);
UPCGExTensorSplineFactoryProviderSettings::~UPCGExTensorSplineFactoryProviderSettings() {}
// ********** End Class UPCGExTensorSplineFactoryProviderSettings **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplineFactoryProvider_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTensorSplineFactoryData, UPCGExTensorSplineFactoryData::StaticClass, TEXT("UPCGExTensorSplineFactoryData"), &Z_Registration_Info_UClass_UPCGExTensorSplineFactoryData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorSplineFactoryData), 2750339054U) },
		{ Z_Construct_UClass_UPCGExTensorSplineFactoryProviderSettings, UPCGExTensorSplineFactoryProviderSettings::StaticClass, TEXT("UPCGExTensorSplineFactoryProviderSettings"), &Z_Registration_Info_UClass_UPCGExTensorSplineFactoryProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorSplineFactoryProviderSettings), 380281025U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplineFactoryProvider_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplineFactoryProvider_h__Script_PCGExtendedToolkit_157981551{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplineFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorSplineFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
