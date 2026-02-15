// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sampling/Neighbors/PCGExNeighborSampleProperties.h"
#include "Data/Blending/PCGExDataBlending.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExNeighborSampleProperties() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSampleProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryProperties();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryProperties_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPropertiesSamplerConfigBase();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExPropertiesSamplerConfigBase *********************************
struct Z_Construct_UScriptStruct_FPCGExPropertiesSamplerConfigBase_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPropertiesSamplerConfigBase); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPropertiesSamplerConfigBase); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///\n" },
		{ "Hidden", "TRUE" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blending_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Properties blending */" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Properties blending" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPropertiesSamplerConfigBase constinit property declarations *
	static const UECodeGen_Private::FStructPropertyParams NewProp_Blending;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPropertiesSamplerConfigBase constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPropertiesSamplerConfigBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPropertiesSamplerConfigBase_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPropertiesSamplerConfigBase;
class UScriptStruct* FPCGExPropertiesSamplerConfigBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPropertiesSamplerConfigBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPropertiesSamplerConfigBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPropertiesSamplerConfigBase, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPropertiesSamplerConfigBase"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPropertiesSamplerConfigBase.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPropertiesSamplerConfigBase Property Definitions ************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExPropertiesSamplerConfigBase_Statics::NewProp_Blending = { "Blending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPropertiesSamplerConfigBase, Blending), Z_Construct_UScriptStruct_FPCGExPropertiesBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blending_MetaData), NewProp_Blending_MetaData) }; // 1047595412
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPropertiesSamplerConfigBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPropertiesSamplerConfigBase_Statics::NewProp_Blending,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPropertiesSamplerConfigBase_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPropertiesSamplerConfigBase Property Definitions **************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPropertiesSamplerConfigBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExPropertiesSamplerConfigBase",
	Z_Construct_UScriptStruct_FPCGExPropertiesSamplerConfigBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPropertiesSamplerConfigBase_Statics::PropPointers),
	sizeof(FPCGExPropertiesSamplerConfigBase),
	alignof(FPCGExPropertiesSamplerConfigBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPropertiesSamplerConfigBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPropertiesSamplerConfigBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPropertiesSamplerConfigBase()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPropertiesSamplerConfigBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPropertiesSamplerConfigBase.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPropertiesSamplerConfigBase_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPropertiesSamplerConfigBase.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPropertiesSamplerConfigBase ***********************************

// ********** Begin Class UPCGExNeighborSamplerFactoryProperties ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryProperties;
UClass* UPCGExNeighborSamplerFactoryProperties::GetPrivateStaticClass()
{
	using TClass = UPCGExNeighborSamplerFactoryProperties;
	if (!Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryProperties.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNeighborSamplerFactoryProperties"),
			Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryProperties.InnerSingleton,
			StaticRegisterNativesUPCGExNeighborSamplerFactoryProperties,
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
	return Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryProperties.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryProperties_NoRegister()
{
	return UPCGExNeighborSamplerFactoryProperties::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNeighborSamplerFactoryProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/Neighbors/PCGExNeighborSampleProperties.h" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleProperties.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNeighborSamplerFactoryProperties constinit property declarations ***
// ********** End Class UPCGExNeighborSamplerFactoryProperties constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNeighborSamplerFactoryProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNeighborSamplerFactoryProperties_Statics
UObject* (*const Z_Construct_UClass_UPCGExNeighborSamplerFactoryProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExNeighborSamplerFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSamplerFactoryProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNeighborSamplerFactoryProperties_Statics::ClassParams = {
	&UPCGExNeighborSamplerFactoryProperties::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSamplerFactoryProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNeighborSamplerFactoryProperties_Statics::Class_MetaDataParams)
};
void UPCGExNeighborSamplerFactoryProperties::StaticRegisterNativesUPCGExNeighborSamplerFactoryProperties()
{
}
UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryProperties()
{
	if (!Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryProperties.OuterSingleton, Z_Construct_UClass_UPCGExNeighborSamplerFactoryProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryProperties.OuterSingleton;
}
UPCGExNeighborSamplerFactoryProperties::UPCGExNeighborSamplerFactoryProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNeighborSamplerFactoryProperties);
UPCGExNeighborSamplerFactoryProperties::~UPCGExNeighborSamplerFactoryProperties() {}
// ********** End Class UPCGExNeighborSamplerFactoryProperties *************************************

// ********** Begin Class UPCGExNeighborSamplePropertiesSettings ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNeighborSamplePropertiesSettings;
UClass* UPCGExNeighborSamplePropertiesSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExNeighborSamplePropertiesSettings;
	if (!Z_Registration_Info_UClass_UPCGExNeighborSamplePropertiesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNeighborSamplePropertiesSettings"),
			Z_Registration_Info_UClass_UPCGExNeighborSamplePropertiesSettings.InnerSingleton,
			StaticRegisterNativesUPCGExNeighborSamplePropertiesSettings,
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
	return Z_Registration_Info_UClass_UPCGExNeighborSamplePropertiesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings_NoRegister()
{
	return UPCGExNeighborSamplePropertiesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|NeighborSample" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Sampling/Neighbors/PCGExNeighborSampleProperties.h" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sampler Settings. */" },
		{ "ModuleRelativePath", "Public/Sampling/Neighbors/PCGExNeighborSampleProperties.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Sampler Settings." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNeighborSamplePropertiesSettings constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNeighborSamplePropertiesSettings constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNeighborSamplePropertiesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings_Statics

// ********** Begin Class UPCGExNeighborSamplePropertiesSettings Property Definitions **************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNeighborSamplePropertiesSettings, Config), Z_Construct_UScriptStruct_FPCGExPropertiesSamplerConfigBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 841724698
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNeighborSamplePropertiesSettings Property Definitions ****************
UObject* (*const Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExNeighborSampleProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings_Statics::ClassParams = {
	&UPCGExNeighborSamplePropertiesSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings_Statics::PropPointers),
	0,
	0x010800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings_Statics::Class_MetaDataParams)
};
void UPCGExNeighborSamplePropertiesSettings::StaticRegisterNativesUPCGExNeighborSamplePropertiesSettings()
{
}
UClass* Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExNeighborSamplePropertiesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNeighborSamplePropertiesSettings.OuterSingleton, Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNeighborSamplePropertiesSettings.OuterSingleton;
}
UPCGExNeighborSamplePropertiesSettings::UPCGExNeighborSamplePropertiesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNeighborSamplePropertiesSettings);
UPCGExNeighborSamplePropertiesSettings::~UPCGExNeighborSamplePropertiesSettings() {}
// ********** End Class UPCGExNeighborSamplePropertiesSettings *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleProperties_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExPropertiesSamplerConfigBase::StaticStruct, Z_Construct_UScriptStruct_FPCGExPropertiesSamplerConfigBase_Statics::NewStructOps, TEXT("PCGExPropertiesSamplerConfigBase"),&Z_Registration_Info_UScriptStruct_FPCGExPropertiesSamplerConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPropertiesSamplerConfigBase), 841724698U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExNeighborSamplerFactoryProperties, UPCGExNeighborSamplerFactoryProperties::StaticClass, TEXT("UPCGExNeighborSamplerFactoryProperties"), &Z_Registration_Info_UClass_UPCGExNeighborSamplerFactoryProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNeighborSamplerFactoryProperties), 339571388U) },
		{ Z_Construct_UClass_UPCGExNeighborSamplePropertiesSettings, UPCGExNeighborSamplePropertiesSettings::StaticClass, TEXT("UPCGExNeighborSamplePropertiesSettings"), &Z_Registration_Info_UClass_UPCGExNeighborSamplePropertiesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNeighborSamplePropertiesSettings), 2944323870U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleProperties_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleProperties_h__Script_PCGExtendedToolkit_2468041205{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleProperties_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleProperties_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleProperties_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleProperties_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
