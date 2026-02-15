// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Matching/PCGExMatchSharedTag.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMatchSharedTag() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchSharedTagFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchSharedTagFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExMatchSharedTagConfig ****************************************
struct Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExMatchSharedTagConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExMatchSharedTagConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchSharedTag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagNameInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Tag Name value */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchSharedTag.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Tag Name value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagNameAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to read tag name value from. */" },
		{ "DisplayName", "Tag Name (Attr)" },
		{ "EditCondition", "TagNameInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchSharedTag.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to read tag name value from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant tag name value. */" },
		{ "DisplayName", "Tag Name" },
		{ "EditCondition", "TagNameInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchSharedTag.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant tag name value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoValueMatch_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to do a tag value match or not. */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchSharedTag.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to do a tag value match or not." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExMatchSharedTagConfig constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_TagNameInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TagNameInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagNameAttribute;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
	static void NewProp_bDoValueMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoValueMatch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExMatchSharedTagConfig constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExMatchSharedTagConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics
static_assert(std::is_polymorphic<FPCGExMatchSharedTagConfig>() == std::is_polymorphic<FPCGExMatchRuleConfigBase>(), "USTRUCT FPCGExMatchSharedTagConfig cannot be polymorphic unless super FPCGExMatchRuleConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExMatchSharedTagConfig;
class UScriptStruct* FPCGExMatchSharedTagConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMatchSharedTagConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExMatchSharedTagConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExMatchSharedTagConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExMatchSharedTagConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExMatchSharedTagConfig Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::NewProp_TagNameInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::NewProp_TagNameInput = { "TagNameInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchSharedTagConfig, TagNameInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagNameInput_MetaData), NewProp_TagNameInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::NewProp_TagNameAttribute = { "TagNameAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchSharedTagConfig, TagNameAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagNameAttribute_MetaData), NewProp_TagNameAttribute_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchSharedTagConfig, TagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagName_MetaData), NewProp_TagName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::NewProp_bDoValueMatch_SetBit(void* Obj)
{
	((FPCGExMatchSharedTagConfig*)Obj)->bDoValueMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::NewProp_bDoValueMatch = { "bDoValueMatch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExMatchSharedTagConfig), &Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::NewProp_bDoValueMatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoValueMatch_MetaData), NewProp_bDoValueMatch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::NewProp_TagNameInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::NewProp_TagNameInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::NewProp_TagNameAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::NewProp_bDoValueMatch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExMatchSharedTagConfig Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase,
	&NewStructOps,
	"PCGExMatchSharedTagConfig",
	Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::PropPointers),
	sizeof(FPCGExMatchSharedTagConfig),
	alignof(FPCGExMatchSharedTagConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMatchSharedTagConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExMatchSharedTagConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExMatchSharedTagConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExMatchSharedTagConfig ******************************************

// ********** Begin Class UPCGExMatchSharedTagFactory **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExMatchSharedTagFactory;
UClass* UPCGExMatchSharedTagFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExMatchSharedTagFactory;
	if (!Z_Registration_Info_UClass_UPCGExMatchSharedTagFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExMatchSharedTagFactory"),
			Z_Registration_Info_UClass_UPCGExMatchSharedTagFactory.InnerSingleton,
			StaticRegisterNativesUPCGExMatchSharedTagFactory,
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
	return Z_Registration_Info_UClass_UPCGExMatchSharedTagFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExMatchSharedTagFactory_NoRegister()
{
	return UPCGExMatchSharedTagFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExMatchSharedTagFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/Matching/PCGExMatchSharedTag.h" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchSharedTag.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchSharedTag.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExMatchSharedTagFactory constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExMatchSharedTagFactory constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExMatchSharedTagFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExMatchSharedTagFactory_Statics

// ********** Begin Class UPCGExMatchSharedTagFactory Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMatchSharedTagFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMatchSharedTagFactory, Config), Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2286226591
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExMatchSharedTagFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMatchSharedTagFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchSharedTagFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExMatchSharedTagFactory Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExMatchSharedTagFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExMatchRuleFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchSharedTagFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExMatchSharedTagFactory_Statics::ClassParams = {
	&UPCGExMatchSharedTagFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExMatchSharedTagFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchSharedTagFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchSharedTagFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExMatchSharedTagFactory_Statics::Class_MetaDataParams)
};
void UPCGExMatchSharedTagFactory::StaticRegisterNativesUPCGExMatchSharedTagFactory()
{
}
UClass* Z_Construct_UClass_UPCGExMatchSharedTagFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExMatchSharedTagFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExMatchSharedTagFactory.OuterSingleton, Z_Construct_UClass_UPCGExMatchSharedTagFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExMatchSharedTagFactory.OuterSingleton;
}
UPCGExMatchSharedTagFactory::UPCGExMatchSharedTagFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExMatchSharedTagFactory);
UPCGExMatchSharedTagFactory::~UPCGExMatchSharedTagFactory() {}
// ********** End Class UPCGExMatchSharedTagFactory ************************************************

// ********** Begin Class UPCGExCreateMatchSharedTagSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateMatchSharedTagSettings;
UClass* UPCGExCreateMatchSharedTagSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateMatchSharedTagSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateMatchSharedTagSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateMatchSharedTagSettings"),
			Z_Registration_Info_UClass_UPCGExCreateMatchSharedTagSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateMatchSharedTagSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateMatchSharedTagSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings_NoRegister()
{
	return UPCGExCreateMatchSharedTagSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DataMatch" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/Matching/PCGExMatchSharedTag.h" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchSharedTag.h" },
		{ "PCGExNodeLibraryDoc", "misc/data-matching/tags-attributes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rules properties */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchSharedTag.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Rules properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateMatchSharedTagSettings constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateMatchSharedTagSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateMatchSharedTagSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings_Statics

// ********** Begin Class UPCGExCreateMatchSharedTagSettings Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateMatchSharedTagSettings, Config), Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2286226591
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateMatchSharedTagSettings Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings_Statics::ClassParams = {
	&UPCGExCreateMatchSharedTagSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateMatchSharedTagSettings::StaticRegisterNativesUPCGExCreateMatchSharedTagSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateMatchSharedTagSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateMatchSharedTagSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateMatchSharedTagSettings.OuterSingleton;
}
UPCGExCreateMatchSharedTagSettings::UPCGExCreateMatchSharedTagSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateMatchSharedTagSettings);
UPCGExCreateMatchSharedTagSettings::~UPCGExCreateMatchSharedTagSettings() {}
// ********** End Class UPCGExCreateMatchSharedTagSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchSharedTag_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExMatchSharedTagConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExMatchSharedTagConfig_Statics::NewStructOps, TEXT("PCGExMatchSharedTagConfig"),&Z_Registration_Info_UScriptStruct_FPCGExMatchSharedTagConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExMatchSharedTagConfig), 2286226591U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExMatchSharedTagFactory, UPCGExMatchSharedTagFactory::StaticClass, TEXT("UPCGExMatchSharedTagFactory"), &Z_Registration_Info_UClass_UPCGExMatchSharedTagFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExMatchSharedTagFactory), 2684175966U) },
		{ Z_Construct_UClass_UPCGExCreateMatchSharedTagSettings, UPCGExCreateMatchSharedTagSettings::StaticClass, TEXT("UPCGExCreateMatchSharedTagSettings"), &Z_Registration_Info_UClass_UPCGExCreateMatchSharedTagSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateMatchSharedTagSettings), 489115692U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchSharedTag_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchSharedTag_h__Script_PCGExtendedToolkit_1800761202{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchSharedTag_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchSharedTag_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchSharedTag_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchSharedTag_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
