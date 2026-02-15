// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Pickers/PCGExPickerAttributeSet.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPickerAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickerAttributeSetFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickerAttributeSetFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickerAttributeSetSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickerAttributeSetSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickerFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickerFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPickerConfigBase();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExPickerAttributeSetConfig ************************************
struct Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPickerAttributeSetConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPickerAttributeSetConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** List of attributes to read individual indices from. Use negative values to select from the end. */" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerAttributeSet.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "List of attributes to read individual indices from. Use negative values to select from the end." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPickerAttributeSetConfig constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPickerAttributeSetConfig constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPickerAttributeSetConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig_Statics
static_assert(std::is_polymorphic<FPCGExPickerAttributeSetConfig>() == std::is_polymorphic<FPCGExPickerConfigBase>(), "USTRUCT FPCGExPickerAttributeSetConfig cannot be polymorphic unless super FPCGExPickerConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPickerAttributeSetConfig;
class UScriptStruct* FPCGExPickerAttributeSetConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPickerAttributeSetConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPickerAttributeSetConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPickerAttributeSetConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPickerAttributeSetConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPickerAttributeSetConfig Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(0, nullptr) }; // 3844583698
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPickerAttributeSetConfig, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 3844583698
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig_Statics::NewProp_Attributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig_Statics::NewProp_Attributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPickerAttributeSetConfig Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExPickerConfigBase,
	&NewStructOps,
	"PCGExPickerAttributeSetConfig",
	Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig_Statics::PropPointers),
	sizeof(FPCGExPickerAttributeSetConfig),
	alignof(FPCGExPickerAttributeSetConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPickerAttributeSetConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPickerAttributeSetConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPickerAttributeSetConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPickerAttributeSetConfig **************************************

// ********** Begin Class UPCGExPickerAttributeSetFactory ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPickerAttributeSetFactory;
UClass* UPCGExPickerAttributeSetFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExPickerAttributeSetFactory;
	if (!Z_Registration_Info_UClass_UPCGExPickerAttributeSetFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPickerAttributeSetFactory"),
			Z_Registration_Info_UClass_UPCGExPickerAttributeSetFactory.InnerSingleton,
			StaticRegisterNativesUPCGExPickerAttributeSetFactory,
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
	return Z_Registration_Info_UClass_UPCGExPickerAttributeSetFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPickerAttributeSetFactory_NoRegister()
{
	return UPCGExPickerAttributeSetFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPickerAttributeSetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/Pickers/PCGExPickerAttributeSet.h" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerAttributeSet.h" },
		{ "PCGExNodeLibraryDoc", "filters/cherry-pick-points/picker-constant-set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerAttributeSet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPickerAttributeSetFactory constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPickerAttributeSetFactory constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPickerAttributeSetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPickerAttributeSetFactory_Statics

// ********** Begin Class UPCGExPickerAttributeSetFactory Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPickerAttributeSetFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPickerAttributeSetFactory, Config), Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3126363996
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPickerAttributeSetFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickerAttributeSetFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerAttributeSetFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPickerAttributeSetFactory Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UPCGExPickerAttributeSetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPickerFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerAttributeSetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPickerAttributeSetFactory_Statics::ClassParams = {
	&UPCGExPickerAttributeSetFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPickerAttributeSetFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerAttributeSetFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerAttributeSetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPickerAttributeSetFactory_Statics::Class_MetaDataParams)
};
void UPCGExPickerAttributeSetFactory::StaticRegisterNativesUPCGExPickerAttributeSetFactory()
{
}
UClass* Z_Construct_UClass_UPCGExPickerAttributeSetFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExPickerAttributeSetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPickerAttributeSetFactory.OuterSingleton, Z_Construct_UClass_UPCGExPickerAttributeSetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPickerAttributeSetFactory.OuterSingleton;
}
UPCGExPickerAttributeSetFactory::UPCGExPickerAttributeSetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPickerAttributeSetFactory);
UPCGExPickerAttributeSetFactory::~UPCGExPickerAttributeSetFactory() {}
// ********** End Class UPCGExPickerAttributeSetFactory ********************************************

// ********** Begin Class UPCGExPickerAttributeSetSettings *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPickerAttributeSetSettings;
UClass* UPCGExPickerAttributeSetSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPickerAttributeSetSettings;
	if (!Z_Registration_Info_UClass_UPCGExPickerAttributeSetSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPickerAttributeSetSettings"),
			Z_Registration_Info_UClass_UPCGExPickerAttributeSetSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPickerAttributeSetSettings,
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
	return Z_Registration_Info_UClass_UPCGExPickerAttributeSetSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPickerAttributeSetSettings_NoRegister()
{
	return UPCGExPickerAttributeSetSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPickerAttributeSetSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Pickers|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/Pickers/PCGExPickerAttributeSet.h" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Picker properties */" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerAttributeSet.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Picker properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPickerAttributeSetSettings constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPickerAttributeSetSettings constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPickerAttributeSetSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPickerAttributeSetSettings_Statics

// ********** Begin Class UPCGExPickerAttributeSetSettings Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPickerAttributeSetSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPickerAttributeSetSettings, Config), Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3126363996
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPickerAttributeSetSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickerAttributeSetSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerAttributeSetSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPickerAttributeSetSettings Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExPickerAttributeSetSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPickerFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerAttributeSetSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPickerAttributeSetSettings_Statics::ClassParams = {
	&UPCGExPickerAttributeSetSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPickerAttributeSetSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerAttributeSetSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerAttributeSetSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPickerAttributeSetSettings_Statics::Class_MetaDataParams)
};
void UPCGExPickerAttributeSetSettings::StaticRegisterNativesUPCGExPickerAttributeSetSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPickerAttributeSetSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPickerAttributeSetSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPickerAttributeSetSettings.OuterSingleton, Z_Construct_UClass_UPCGExPickerAttributeSetSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPickerAttributeSetSettings.OuterSingleton;
}
UPCGExPickerAttributeSetSettings::UPCGExPickerAttributeSetSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPickerAttributeSetSettings);
UPCGExPickerAttributeSetSettings::~UPCGExPickerAttributeSetSettings() {}
// ********** End Class UPCGExPickerAttributeSetSettings *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerAttributeSet_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExPickerAttributeSetConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExPickerAttributeSetConfig_Statics::NewStructOps, TEXT("PCGExPickerAttributeSetConfig"),&Z_Registration_Info_UScriptStruct_FPCGExPickerAttributeSetConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPickerAttributeSetConfig), 3126363996U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPickerAttributeSetFactory, UPCGExPickerAttributeSetFactory::StaticClass, TEXT("UPCGExPickerAttributeSetFactory"), &Z_Registration_Info_UClass_UPCGExPickerAttributeSetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPickerAttributeSetFactory), 4029090418U) },
		{ Z_Construct_UClass_UPCGExPickerAttributeSetSettings, UPCGExPickerAttributeSetSettings::StaticClass, TEXT("UPCGExPickerAttributeSetSettings"), &Z_Registration_Info_UClass_UPCGExPickerAttributeSetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPickerAttributeSetSettings), 1529827687U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerAttributeSet_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerAttributeSet_h__Script_PCGExtendedToolkit_1271153039{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerAttributeSet_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerAttributeSet_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerAttributeSet_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerAttributeSet_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
