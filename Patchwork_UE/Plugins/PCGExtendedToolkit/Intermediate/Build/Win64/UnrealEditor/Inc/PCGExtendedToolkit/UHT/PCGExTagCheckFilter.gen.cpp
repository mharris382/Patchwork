// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/CollectionFilters/PCGExTagCheckFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTagCheckFilter() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterCollectionFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTagCheckFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTagCheckFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExTagCheckFilterConfig ****************************************
struct Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTagCheckFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTagCheckFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagCheckFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant tag name value. */" },
		{ "DisplayName", "Tag Name" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagCheckFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant tag name value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Match_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Match" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagCheckFilter.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStrict_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** In strict mode, only check tag prefix and ignore values for tags formatted as `Tag:Value`. */" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagCheckFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "In strict mode, only check tag prefix and ignore values for tags formatted as `Tag:Value`." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Invert the result of this filter. */" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagCheckFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Invert the result of this filter." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTagCheckFilterConfig constinit property declarations ********
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Match_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Match;
	static void NewProp_bStrict_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStrict;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTagCheckFilterConfig constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTagCheckFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTagCheckFilterConfig;
class UScriptStruct* FPCGExTagCheckFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTagCheckFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTagCheckFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTagCheckFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTagCheckFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTagCheckFilterConfig Property Definitions *******************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTagCheckFilterConfig, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::NewProp_Match_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTagCheckFilterConfig, Match), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Match_MetaData), NewProp_Match_MetaData) }; // 2911749281
void Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::NewProp_bStrict_SetBit(void* Obj)
{
	((FPCGExTagCheckFilterConfig*)Obj)->bStrict = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::NewProp_bStrict = { "bStrict", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTagCheckFilterConfig), &Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::NewProp_bStrict_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStrict_MetaData), NewProp_bStrict_MetaData) };
void Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExTagCheckFilterConfig*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTagCheckFilterConfig), &Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::NewProp_Match_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::NewProp_Match,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::NewProp_bStrict,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTagCheckFilterConfig Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExTagCheckFilterConfig",
	Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::PropPointers),
	sizeof(FPCGExTagCheckFilterConfig),
	alignof(FPCGExTagCheckFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTagCheckFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTagCheckFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTagCheckFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTagCheckFilterConfig ******************************************

// ********** Begin Class UPCGExTagCheckFilterFactory **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTagCheckFilterFactory;
UClass* UPCGExTagCheckFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExTagCheckFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExTagCheckFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTagCheckFilterFactory"),
			Z_Registration_Info_UClass_UPCGExTagCheckFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExTagCheckFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExTagCheckFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTagCheckFilterFactory_NoRegister()
{
	return UPCGExTagCheckFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTagCheckFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/CollectionFilters/PCGExTagCheckFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagCheckFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagCheckFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTagCheckFilterFactory constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTagCheckFilterFactory constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTagCheckFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTagCheckFilterFactory_Statics

// ********** Begin Class UPCGExTagCheckFilterFactory Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTagCheckFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTagCheckFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2316485789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTagCheckFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTagCheckFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTagCheckFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTagCheckFilterFactory Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExTagCheckFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterCollectionFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTagCheckFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTagCheckFilterFactory_Statics::ClassParams = {
	&UPCGExTagCheckFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTagCheckFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTagCheckFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTagCheckFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTagCheckFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExTagCheckFilterFactory::StaticRegisterNativesUPCGExTagCheckFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExTagCheckFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExTagCheckFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTagCheckFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExTagCheckFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTagCheckFilterFactory.OuterSingleton;
}
UPCGExTagCheckFilterFactory::UPCGExTagCheckFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTagCheckFilterFactory);
UPCGExTagCheckFilterFactory::~UPCGExTagCheckFilterFactory() {}
// ********** End Class UPCGExTagCheckFilterFactory ************************************************

// ********** Begin Class UPCGExTagCheckFilterProviderSettings *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTagCheckFilterProviderSettings;
UClass* UPCGExTagCheckFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExTagCheckFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExTagCheckFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTagCheckFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExTagCheckFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExTagCheckFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExTagCheckFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings_NoRegister()
{
	return UPCGExTagCheckFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/CollectionFilters/PCGExTagCheckFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagCheckFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-collections/tag-check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagCheckFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTagCheckFilterProviderSettings constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTagCheckFilterProviderSettings constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTagCheckFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings_Statics

// ********** Begin Class UPCGExTagCheckFilterProviderSettings Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTagCheckFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2316485789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTagCheckFilterProviderSettings Property Definitions ******************
UObject* (*const Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings_Statics::ClassParams = {
	&UPCGExTagCheckFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExTagCheckFilterProviderSettings::StaticRegisterNativesUPCGExTagCheckFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExTagCheckFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTagCheckFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTagCheckFilterProviderSettings.OuterSingleton;
}
UPCGExTagCheckFilterProviderSettings::UPCGExTagCheckFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTagCheckFilterProviderSettings);
UPCGExTagCheckFilterProviderSettings::~UPCGExTagCheckFilterProviderSettings() {}
// ********** End Class UPCGExTagCheckFilterProviderSettings ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExTagCheckFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTagCheckFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExTagCheckFilterConfig_Statics::NewStructOps, TEXT("PCGExTagCheckFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExTagCheckFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTagCheckFilterConfig), 2316485789U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTagCheckFilterFactory, UPCGExTagCheckFilterFactory::StaticClass, TEXT("UPCGExTagCheckFilterFactory"), &Z_Registration_Info_UClass_UPCGExTagCheckFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTagCheckFilterFactory), 2079648807U) },
		{ Z_Construct_UClass_UPCGExTagCheckFilterProviderSettings, UPCGExTagCheckFilterProviderSettings::StaticClass, TEXT("UPCGExTagCheckFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExTagCheckFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTagCheckFilterProviderSettings), 2525679031U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExTagCheckFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExTagCheckFilter_h__Script_PCGExtendedToolkit_4286604251{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExTagCheckFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExTagCheckFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExTagCheckFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExTagCheckFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
