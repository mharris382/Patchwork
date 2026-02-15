// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Matching/PCGExMatchByIndex.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMatchByIndex() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateMatchByIndexSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateMatchByIndexSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchByIndexFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchByIndexFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchByIndexSource();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExMatchByIndexSource **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExMatchByIndexSource;
static UEnum* EPCGExMatchByIndexSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExMatchByIndexSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExMatchByIndexSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchByIndexSource, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExMatchByIndexSource"));
	}
	return Z_Registration_Info_UEnum_EPCGExMatchByIndexSource.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMatchByIndexSource>()
{
	return EPCGExMatchByIndexSource_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchByIndexSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Candidate.DisplayName", "Candidate" },
		{ "Candidate.Name", "EPCGExMatchByIndexSource::Candidate" },
		{ "Candidate.ToolTip", "Reads the specific index value on the input candidate and compares it against the index of the target" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchByIndex.h" },
		{ "Target.DisplayName", "Target" },
		{ "Target.Name", "EPCGExMatchByIndexSource::Target" },
		{ "Target.ToolTip", "Reads the specific index value on the target and compares it against the index of the input candidate" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExMatchByIndexSource::Target", (int64)EPCGExMatchByIndexSource::Target },
		{ "EPCGExMatchByIndexSource::Candidate", (int64)EPCGExMatchByIndexSource::Candidate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchByIndexSource_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchByIndexSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExMatchByIndexSource",
	"EPCGExMatchByIndexSource",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchByIndexSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchByIndexSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchByIndexSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchByIndexSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchByIndexSource()
{
	if (!Z_Registration_Info_UEnum_EPCGExMatchByIndexSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExMatchByIndexSource.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchByIndexSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExMatchByIndexSource.InnerSingleton;
}
// ********** End Enum EPCGExMatchByIndexSource ****************************************************

// ********** Begin ScriptStruct FPCGExMatchByIndexConfig ******************************************
struct Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExMatchByIndexConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExMatchByIndexConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchByIndex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The attribute to read on the candidates (the data that's not used as target). Only support @Data domain, and will only try to read from there. */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchByIndex.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The attribute to read on the candidates (the data that's not used as target). Only support @Data domain, and will only try to read from there." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The attribute to read on the candidates (the data that's not used as target). Only support @Data domain, and will only try to read from there. */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchByIndex.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The attribute to read on the candidates (the data that's not used as target). Only support @Data domain, and will only try to read from there." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexSafety_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchByIndex.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExMatchByIndexConfig constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IndexAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IndexSafety_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IndexSafety;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExMatchByIndexConfig constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExMatchByIndexConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics
static_assert(std::is_polymorphic<FPCGExMatchByIndexConfig>() == std::is_polymorphic<FPCGExMatchRuleConfigBase>(), "USTRUCT FPCGExMatchByIndexConfig cannot be polymorphic unless super FPCGExMatchRuleConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExMatchByIndexConfig;
class UScriptStruct* FPCGExMatchByIndexConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMatchByIndexConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExMatchByIndexConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExMatchByIndexConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExMatchByIndexConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExMatchByIndexConfig Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchByIndexConfig, Source), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMatchByIndexSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 3944436621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::NewProp_IndexAttribute = { "IndexAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchByIndexConfig, IndexAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexAttribute_MetaData), NewProp_IndexAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::NewProp_IndexSafety_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::NewProp_IndexSafety = { "IndexSafety", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchByIndexConfig, IndexSafety), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexSafety_MetaData), NewProp_IndexSafety_MetaData) }; // 122057320
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::NewProp_IndexAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::NewProp_IndexSafety_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::NewProp_IndexSafety,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExMatchByIndexConfig Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase,
	&NewStructOps,
	"PCGExMatchByIndexConfig",
	Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::PropPointers),
	sizeof(FPCGExMatchByIndexConfig),
	alignof(FPCGExMatchByIndexConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMatchByIndexConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExMatchByIndexConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExMatchByIndexConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExMatchByIndexConfig ********************************************

// ********** Begin Class UPCGExMatchByIndexFactory ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExMatchByIndexFactory;
UClass* UPCGExMatchByIndexFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExMatchByIndexFactory;
	if (!Z_Registration_Info_UClass_UPCGExMatchByIndexFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExMatchByIndexFactory"),
			Z_Registration_Info_UClass_UPCGExMatchByIndexFactory.InnerSingleton,
			StaticRegisterNativesUPCGExMatchByIndexFactory,
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
	return Z_Registration_Info_UClass_UPCGExMatchByIndexFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExMatchByIndexFactory_NoRegister()
{
	return UPCGExMatchByIndexFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExMatchByIndexFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/Matching/PCGExMatchByIndex.h" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchByIndex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchByIndex.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExMatchByIndexFactory constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExMatchByIndexFactory constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExMatchByIndexFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExMatchByIndexFactory_Statics

// ********** Begin Class UPCGExMatchByIndexFactory Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMatchByIndexFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMatchByIndexFactory, Config), Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1971552453
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExMatchByIndexFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMatchByIndexFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchByIndexFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExMatchByIndexFactory Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UPCGExMatchByIndexFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExMatchRuleFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchByIndexFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExMatchByIndexFactory_Statics::ClassParams = {
	&UPCGExMatchByIndexFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExMatchByIndexFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchByIndexFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchByIndexFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExMatchByIndexFactory_Statics::Class_MetaDataParams)
};
void UPCGExMatchByIndexFactory::StaticRegisterNativesUPCGExMatchByIndexFactory()
{
}
UClass* Z_Construct_UClass_UPCGExMatchByIndexFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExMatchByIndexFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExMatchByIndexFactory.OuterSingleton, Z_Construct_UClass_UPCGExMatchByIndexFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExMatchByIndexFactory.OuterSingleton;
}
UPCGExMatchByIndexFactory::UPCGExMatchByIndexFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExMatchByIndexFactory);
UPCGExMatchByIndexFactory::~UPCGExMatchByIndexFactory() {}
// ********** End Class UPCGExMatchByIndexFactory **************************************************

// ********** Begin Class UPCGExCreateMatchByIndexSettings *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateMatchByIndexSettings;
UClass* UPCGExCreateMatchByIndexSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateMatchByIndexSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateMatchByIndexSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateMatchByIndexSettings"),
			Z_Registration_Info_UClass_UPCGExCreateMatchByIndexSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateMatchByIndexSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateMatchByIndexSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateMatchByIndexSettings_NoRegister()
{
	return UPCGExCreateMatchByIndexSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateMatchByIndexSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DataMatch" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/Matching/PCGExMatchByIndex.h" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchByIndex.h" },
		{ "PCGExNodeLibraryDoc", "misc/data-matching/index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rules properties */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchByIndex.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Rules properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateMatchByIndexSettings constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateMatchByIndexSettings constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateMatchByIndexSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateMatchByIndexSettings_Statics

// ********** Begin Class UPCGExCreateMatchByIndexSettings Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateMatchByIndexSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateMatchByIndexSettings, Config), Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1971552453
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateMatchByIndexSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateMatchByIndexSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchByIndexSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateMatchByIndexSettings Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExCreateMatchByIndexSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchByIndexSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateMatchByIndexSettings_Statics::ClassParams = {
	&UPCGExCreateMatchByIndexSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateMatchByIndexSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchByIndexSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchByIndexSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateMatchByIndexSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateMatchByIndexSettings::StaticRegisterNativesUPCGExCreateMatchByIndexSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateMatchByIndexSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateMatchByIndexSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateMatchByIndexSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateMatchByIndexSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateMatchByIndexSettings.OuterSingleton;
}
UPCGExCreateMatchByIndexSettings::UPCGExCreateMatchByIndexSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateMatchByIndexSettings);
UPCGExCreateMatchByIndexSettings::~UPCGExCreateMatchByIndexSettings() {}
// ********** End Class UPCGExCreateMatchByIndexSettings *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchByIndex_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExMatchByIndexSource_StaticEnum, TEXT("EPCGExMatchByIndexSource"), &Z_Registration_Info_UEnum_EPCGExMatchByIndexSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3944436621U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExMatchByIndexConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExMatchByIndexConfig_Statics::NewStructOps, TEXT("PCGExMatchByIndexConfig"),&Z_Registration_Info_UScriptStruct_FPCGExMatchByIndexConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExMatchByIndexConfig), 1971552453U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExMatchByIndexFactory, UPCGExMatchByIndexFactory::StaticClass, TEXT("UPCGExMatchByIndexFactory"), &Z_Registration_Info_UClass_UPCGExMatchByIndexFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExMatchByIndexFactory), 764169293U) },
		{ Z_Construct_UClass_UPCGExCreateMatchByIndexSettings, UPCGExCreateMatchByIndexSettings::StaticClass, TEXT("UPCGExCreateMatchByIndexSettings"), &Z_Registration_Info_UClass_UPCGExCreateMatchByIndexSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateMatchByIndexSettings), 200514294U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchByIndex_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchByIndex_h__Script_PCGExtendedToolkit_3309408366{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchByIndex_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchByIndex_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchByIndex_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchByIndex_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchByIndex_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchByIndex_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
