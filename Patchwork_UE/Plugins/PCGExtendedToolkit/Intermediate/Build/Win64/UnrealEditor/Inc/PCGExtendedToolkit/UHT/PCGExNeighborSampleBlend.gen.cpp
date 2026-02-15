// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/Neighbors/PCGExNeighborSampleBlend.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExNeighborSampleBlend() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBlendOpFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSampleBlendSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSampleBlendSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSampleProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryData();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExNeighborSamplerFactoryBlend ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryBlend;
UClass* UPCGExNeighborSamplerFactoryBlend::GetPrivateStaticClass()
{
	using TClass = UPCGExNeighborSamplerFactoryBlend;
	if (!Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryBlend.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNeighborSamplerFactoryBlend"),
			Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryBlend.InnerSingleton,
			StaticRegisterNativesUPCGExNeighborSamplerFactoryBlend,
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
	return Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryBlend.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend_NoRegister()
{
	return UPCGExNeighborSamplerFactoryBlend::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/Neighbors/PCGExNeighborSampleBlend.h" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleBlend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendingFactories_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleBlend.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNeighborSamplerFactoryBlend constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlendingFactories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendingFactories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNeighborSamplerFactoryBlend constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNeighborSamplerFactoryBlend>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend_Statics

// ********** Begin Class UPCGExNeighborSamplerFactoryBlend Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend_Statics::NewProp_BlendingFactories_Inner = { "BlendingFactories", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPCGExBlendOpFactory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend_Statics::NewProp_BlendingFactories = { "BlendingFactories", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNeighborSamplerFactoryBlend, BlendingFactories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendingFactories_MetaData), NewProp_BlendingFactories_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend_Statics::NewProp_BlendingFactories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend_Statics::NewProp_BlendingFactories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNeighborSamplerFactoryBlend Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExNeighborSamplerFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend_Statics::ClassParams = {
	&UPCGExNeighborSamplerFactoryBlend::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend_Statics::Class_MetaDataParams)
};
void UPCGExNeighborSamplerFactoryBlend::StaticRegisterNativesUPCGExNeighborSamplerFactoryBlend()
{
}
UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend()
{
	if (!Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryBlend.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryBlend.OuterSingleton, Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryBlend.OuterSingleton;
}
UPCGExNeighborSamplerFactoryBlend::UPCGExNeighborSamplerFactoryBlend(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNeighborSamplerFactoryBlend);
UPCGExNeighborSamplerFactoryBlend::~UPCGExNeighborSamplerFactoryBlend() {}
// ********** End Class UPCGExNeighborSamplerFactoryBlend ******************************************

// ********** Begin Class UPCGExNeighborSampleBlendSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNeighborSampleBlendSettings;
UClass* UPCGExNeighborSampleBlendSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExNeighborSampleBlendSettings;
	if (!Z_Registration_Info_UClass_UPCGExNeighborSampleBlendSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNeighborSampleBlendSettings"),
			Z_Registration_Info_UClass_UPCGExNeighborSampleBlendSettings.InnerSingleton,
			StaticRegisterNativesUPCGExNeighborSampleBlendSettings,
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
	return Z_Registration_Info_UClass_UPCGExNeighborSampleBlendSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNeighborSampleBlendSettings_NoRegister()
{
	return UPCGExNeighborSampleBlendSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNeighborSampleBlendSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|NeighborSample" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/Neighbors/PCGExNeighborSampleBlend.h" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleBlend.h" },
		{ "PCGExNodeLibraryDoc", "sampling/sample-neighbors/sampler-vtx-properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNeighborSampleBlendSettings constinit property declarations ********
// ********** End Class UPCGExNeighborSampleBlendSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNeighborSampleBlendSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNeighborSampleBlendSettings_Statics
UObject* (*const Z_Construct_UClass_UPCGExNeighborSampleBlendSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExNeighborSampleProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSampleBlendSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNeighborSampleBlendSettings_Statics::ClassParams = {
	&UPCGExNeighborSampleBlendSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSampleBlendSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNeighborSampleBlendSettings_Statics::Class_MetaDataParams)
};
void UPCGExNeighborSampleBlendSettings::StaticRegisterNativesUPCGExNeighborSampleBlendSettings()
{
}
UClass* Z_Construct_UClass_UPCGExNeighborSampleBlendSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExNeighborSampleBlendSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNeighborSampleBlendSettings.OuterSingleton, Z_Construct_UClass_UPCGExNeighborSampleBlendSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNeighborSampleBlendSettings.OuterSingleton;
}
UPCGExNeighborSampleBlendSettings::UPCGExNeighborSampleBlendSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNeighborSampleBlendSettings);
UPCGExNeighborSampleBlendSettings::~UPCGExNeighborSampleBlendSettings() {}
// ********** End Class UPCGExNeighborSampleBlendSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleBlend_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExNeighborSamplerFactoryBlend, UPCGExNeighborSamplerFactoryBlend::StaticClass, TEXT("UPCGExNeighborSamplerFactoryBlend"), &Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryBlend, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNeighborSamplerFactoryBlend), 3219359501U) },
		{ Z_Construct_UClass_UPCGExNeighborSampleBlendSettings, UPCGExNeighborSampleBlendSettings::StaticClass, TEXT("UPCGExNeighborSampleBlendSettings"), &Z_Registration_Info_UClass_UPCGExNeighborSampleBlendSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNeighborSampleBlendSettings), 3834383432U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleBlend_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleBlend_h__Script_PCGExtendedToolkit_4079894900{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleBlend_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleBlend_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
