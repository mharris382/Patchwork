// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Matching/PCGExMatchCopyTags.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMatchCopyTags() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchCopyTagsFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchCopyTagsFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchCopyTagsConfig();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExMatchCopyTagsConfig *****************************************
struct Z_Construct_UScriptStruct_FPCGExMatchCopyTagsConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExMatchCopyTagsConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExMatchCopyTagsConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchCopyTags.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExMatchCopyTagsConfig constinit property declarations *********
// ********** End ScriptStruct FPCGExMatchCopyTagsConfig constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExMatchCopyTagsConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExMatchCopyTagsConfig_Statics
static_assert(std::is_polymorphic<FPCGExMatchCopyTagsConfig>() == std::is_polymorphic<FPCGExMatchRuleConfigBase>(), "USTRUCT FPCGExMatchCopyTagsConfig cannot be polymorphic unless super FPCGExMatchRuleConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExMatchCopyTagsConfig;
class UScriptStruct* FPCGExMatchCopyTagsConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMatchCopyTagsConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExMatchCopyTagsConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExMatchCopyTagsConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExMatchCopyTagsConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExMatchCopyTagsConfig.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExMatchCopyTagsConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase,
	&NewStructOps,
	"PCGExMatchCopyTagsConfig",
	nullptr,
	0,
	sizeof(FPCGExMatchCopyTagsConfig),
	alignof(FPCGExMatchCopyTagsConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchCopyTagsConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExMatchCopyTagsConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchCopyTagsConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMatchCopyTagsConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExMatchCopyTagsConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExMatchCopyTagsConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExMatchCopyTagsConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExMatchCopyTagsConfig *******************************************

// ********** Begin Class UPCGExMatchCopyTagsFactory ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExMatchCopyTagsFactory;
UClass* UPCGExMatchCopyTagsFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExMatchCopyTagsFactory;
	if (!Z_Registration_Info_UClass_UPCGExMatchCopyTagsFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExMatchCopyTagsFactory"),
			Z_Registration_Info_UClass_UPCGExMatchCopyTagsFactory.InnerSingleton,
			StaticRegisterNativesUPCGExMatchCopyTagsFactory,
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
	return Z_Registration_Info_UClass_UPCGExMatchCopyTagsFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExMatchCopyTagsFactory_NoRegister()
{
	return UPCGExMatchCopyTagsFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExMatchCopyTagsFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/Matching/PCGExMatchCopyTags.h" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchCopyTags.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchCopyTags.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExMatchCopyTagsFactory constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExMatchCopyTagsFactory constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExMatchCopyTagsFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExMatchCopyTagsFactory_Statics

// ********** Begin Class UPCGExMatchCopyTagsFactory Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMatchCopyTagsFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMatchCopyTagsFactory, Config), Z_Construct_UScriptStruct_FPCGExMatchCopyTagsConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3716958308
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExMatchCopyTagsFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMatchCopyTagsFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchCopyTagsFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExMatchCopyTagsFactory Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExMatchCopyTagsFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExMatchRuleFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchCopyTagsFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExMatchCopyTagsFactory_Statics::ClassParams = {
	&UPCGExMatchCopyTagsFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExMatchCopyTagsFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchCopyTagsFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchCopyTagsFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExMatchCopyTagsFactory_Statics::Class_MetaDataParams)
};
void UPCGExMatchCopyTagsFactory::StaticRegisterNativesUPCGExMatchCopyTagsFactory()
{
}
UClass* Z_Construct_UClass_UPCGExMatchCopyTagsFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExMatchCopyTagsFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExMatchCopyTagsFactory.OuterSingleton, Z_Construct_UClass_UPCGExMatchCopyTagsFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExMatchCopyTagsFactory.OuterSingleton;
}
UPCGExMatchCopyTagsFactory::UPCGExMatchCopyTagsFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExMatchCopyTagsFactory);
UPCGExMatchCopyTagsFactory::~UPCGExMatchCopyTagsFactory() {}
// ********** End Class UPCGExMatchCopyTagsFactory *************************************************

// ********** Begin Class UPCGExCreateMatchCopyTagsSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateMatchCopyTagsSettings;
UClass* UPCGExCreateMatchCopyTagsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateMatchCopyTagsSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateMatchCopyTagsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateMatchCopyTagsSettings"),
			Z_Registration_Info_UClass_UPCGExCreateMatchCopyTagsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateMatchCopyTagsSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateMatchCopyTagsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings_NoRegister()
{
	return UPCGExCreateMatchCopyTagsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|DataMatch" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/Matching/PCGExMatchCopyTags.h" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchCopyTags.h" },
		{ "PCGExNodeLibraryDoc", "misc/shapes/shape-circle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rules properties */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchCopyTags.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Rules properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateMatchCopyTagsSettings constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateMatchCopyTagsSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateMatchCopyTagsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings_Statics

// ********** Begin Class UPCGExCreateMatchCopyTagsSettings Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateMatchCopyTagsSettings, Config), Z_Construct_UScriptStruct_FPCGExMatchCopyTagsConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3716958308
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateMatchCopyTagsSettings Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings_Statics::ClassParams = {
	&UPCGExCreateMatchCopyTagsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateMatchCopyTagsSettings::StaticRegisterNativesUPCGExCreateMatchCopyTagsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateMatchCopyTagsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateMatchCopyTagsSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateMatchCopyTagsSettings.OuterSingleton;
}
UPCGExCreateMatchCopyTagsSettings::UPCGExCreateMatchCopyTagsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateMatchCopyTagsSettings);
UPCGExCreateMatchCopyTagsSettings::~UPCGExCreateMatchCopyTagsSettings() {}
// ********** End Class UPCGExCreateMatchCopyTagsSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchCopyTags_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExMatchCopyTagsConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExMatchCopyTagsConfig_Statics::NewStructOps, TEXT("PCGExMatchCopyTagsConfig"),&Z_Registration_Info_UScriptStruct_FPCGExMatchCopyTagsConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExMatchCopyTagsConfig), 3716958308U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExMatchCopyTagsFactory, UPCGExMatchCopyTagsFactory::StaticClass, TEXT("UPCGExMatchCopyTagsFactory"), &Z_Registration_Info_UClass_UPCGExMatchCopyTagsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExMatchCopyTagsFactory), 1105570685U) },
		{ Z_Construct_UClass_UPCGExCreateMatchCopyTagsSettings, UPCGExCreateMatchCopyTagsSettings::StaticClass, TEXT("UPCGExCreateMatchCopyTagsSettings"), &Z_Registration_Info_UClass_UPCGExCreateMatchCopyTagsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateMatchCopyTagsSettings), 2662541735U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchCopyTags_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchCopyTags_h__Script_PCGExtendedToolkit_2390498881{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchCopyTags_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchCopyTags_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchCopyTags_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchCopyTags_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
