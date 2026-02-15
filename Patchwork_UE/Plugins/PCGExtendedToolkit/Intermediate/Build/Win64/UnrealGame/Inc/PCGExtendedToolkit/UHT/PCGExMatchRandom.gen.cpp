// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Matching/PCGExMatchRandom.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMatchRandom() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateMatchRandomSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateMatchRandomSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchRandomFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchRandomFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchRandomConfig();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExMatchRandomConfig *******************************************
struct Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExMatchRandomConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExMatchRandomConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchRandom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchRandom.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Threshold value source */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchRandom.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Threshold value source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Pass threshold -- Value is expected to fit within a 0-1 range. */" },
		{ "DisplayName", "Threshold (Attr)" },
		{ "EditCondition", "ThresholdInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchRandom.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Pass threshold -- Value is expected to fit within a 0-1 range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Pass threshold */" },
		{ "DisplayName", "Threshold" },
		{ "EditCondition", "ThresholdInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchRandom.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Pass threshold" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchRandom.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExMatchRandomConfig constinit property declarations ***********
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThresholdInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThresholdInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThresholdAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Threshold;
	static void NewProp_bInvertThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExMatchRandomConfig constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExMatchRandomConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics
static_assert(std::is_polymorphic<FPCGExMatchRandomConfig>() == std::is_polymorphic<FPCGExMatchRuleConfigBase>(), "USTRUCT FPCGExMatchRandomConfig cannot be polymorphic unless super FPCGExMatchRuleConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExMatchRandomConfig;
class UScriptStruct* FPCGExMatchRandomConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMatchRandomConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExMatchRandomConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExMatchRandomConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExMatchRandomConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExMatchRandomConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExMatchRandomConfig Property Definitions **********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchRandomConfig, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::NewProp_ThresholdInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::NewProp_ThresholdInput = { "ThresholdInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchRandomConfig, ThresholdInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdInput_MetaData), NewProp_ThresholdInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::NewProp_ThresholdAttribute = { "ThresholdAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchRandomConfig, ThresholdAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdAttribute_MetaData), NewProp_ThresholdAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchRandomConfig, Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Threshold_MetaData), NewProp_Threshold_MetaData) };
void Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::NewProp_bInvertThreshold_SetBit(void* Obj)
{
	((FPCGExMatchRandomConfig*)Obj)->bInvertThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::NewProp_bInvertThreshold = { "bInvertThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExMatchRandomConfig), &Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::NewProp_bInvertThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertThreshold_MetaData), NewProp_bInvertThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::NewProp_ThresholdInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::NewProp_ThresholdInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::NewProp_ThresholdAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::NewProp_Threshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::NewProp_bInvertThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExMatchRandomConfig Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase,
	&NewStructOps,
	"PCGExMatchRandomConfig",
	Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::PropPointers),
	sizeof(FPCGExMatchRandomConfig),
	alignof(FPCGExMatchRandomConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchRandomConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMatchRandomConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExMatchRandomConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExMatchRandomConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExMatchRandomConfig *********************************************

// ********** Begin Class UPCGExMatchRandomFactory *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExMatchRandomFactory;
UClass* UPCGExMatchRandomFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExMatchRandomFactory;
	if (!Z_Registration_Info_UClass_UPCGExMatchRandomFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExMatchRandomFactory"),
			Z_Registration_Info_UClass_UPCGExMatchRandomFactory.InnerSingleton,
			StaticRegisterNativesUPCGExMatchRandomFactory,
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
	return Z_Registration_Info_UClass_UPCGExMatchRandomFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExMatchRandomFactory_NoRegister()
{
	return UPCGExMatchRandomFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExMatchRandomFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/Matching/PCGExMatchRandom.h" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchRandom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchRandom.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExMatchRandomFactory constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExMatchRandomFactory constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExMatchRandomFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExMatchRandomFactory_Statics

// ********** Begin Class UPCGExMatchRandomFactory Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMatchRandomFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMatchRandomFactory, Config), Z_Construct_UScriptStruct_FPCGExMatchRandomConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4227488884
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExMatchRandomFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMatchRandomFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchRandomFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExMatchRandomFactory Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExMatchRandomFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExMatchRuleFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchRandomFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExMatchRandomFactory_Statics::ClassParams = {
	&UPCGExMatchRandomFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExMatchRandomFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchRandomFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchRandomFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExMatchRandomFactory_Statics::Class_MetaDataParams)
};
void UPCGExMatchRandomFactory::StaticRegisterNativesUPCGExMatchRandomFactory()
{
}
UClass* Z_Construct_UClass_UPCGExMatchRandomFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExMatchRandomFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExMatchRandomFactory.OuterSingleton, Z_Construct_UClass_UPCGExMatchRandomFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExMatchRandomFactory.OuterSingleton;
}
UPCGExMatchRandomFactory::UPCGExMatchRandomFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExMatchRandomFactory);
UPCGExMatchRandomFactory::~UPCGExMatchRandomFactory() {}
// ********** End Class UPCGExMatchRandomFactory ***************************************************

// ********** Begin Class UPCGExCreateMatchRandomSettings ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateMatchRandomSettings;
UClass* UPCGExCreateMatchRandomSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateMatchRandomSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateMatchRandomSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateMatchRandomSettings"),
			Z_Registration_Info_UClass_UPCGExCreateMatchRandomSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateMatchRandomSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateMatchRandomSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateMatchRandomSettings_NoRegister()
{
	return UPCGExCreateMatchRandomSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateMatchRandomSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DataMatch" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/Matching/PCGExMatchRandom.h" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchRandom.h" },
		{ "PCGExNodeLibraryDoc", "misc/data-matching/random" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rules properties */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchRandom.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Rules properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateMatchRandomSettings constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateMatchRandomSettings constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateMatchRandomSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateMatchRandomSettings_Statics

// ********** Begin Class UPCGExCreateMatchRandomSettings Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateMatchRandomSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateMatchRandomSettings, Config), Z_Construct_UScriptStruct_FPCGExMatchRandomConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4227488884
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateMatchRandomSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateMatchRandomSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchRandomSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateMatchRandomSettings Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UPCGExCreateMatchRandomSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchRandomSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateMatchRandomSettings_Statics::ClassParams = {
	&UPCGExCreateMatchRandomSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateMatchRandomSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchRandomSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchRandomSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateMatchRandomSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateMatchRandomSettings::StaticRegisterNativesUPCGExCreateMatchRandomSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateMatchRandomSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateMatchRandomSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateMatchRandomSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateMatchRandomSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateMatchRandomSettings.OuterSingleton;
}
UPCGExCreateMatchRandomSettings::UPCGExCreateMatchRandomSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateMatchRandomSettings);
UPCGExCreateMatchRandomSettings::~UPCGExCreateMatchRandomSettings() {}
// ********** End Class UPCGExCreateMatchRandomSettings ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchRandom_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExMatchRandomConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExMatchRandomConfig_Statics::NewStructOps, TEXT("PCGExMatchRandomConfig"),&Z_Registration_Info_UScriptStruct_FPCGExMatchRandomConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExMatchRandomConfig), 4227488884U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExMatchRandomFactory, UPCGExMatchRandomFactory::StaticClass, TEXT("UPCGExMatchRandomFactory"), &Z_Registration_Info_UClass_UPCGExMatchRandomFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExMatchRandomFactory), 3167757853U) },
		{ Z_Construct_UClass_UPCGExCreateMatchRandomSettings, UPCGExCreateMatchRandomSettings::StaticClass, TEXT("UPCGExCreateMatchRandomSettings"), &Z_Registration_Info_UClass_UPCGExCreateMatchRandomSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateMatchRandomSettings), 2725456947U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchRandom_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchRandom_h__Script_PCGExtendedToolkit_3615783313{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchRandom_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchRandom_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchRandom_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchRandom_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
