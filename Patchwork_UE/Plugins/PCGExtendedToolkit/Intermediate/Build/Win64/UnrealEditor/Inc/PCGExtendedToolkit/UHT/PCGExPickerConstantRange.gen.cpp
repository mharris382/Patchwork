// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Pickers/PCGExPickerConstantRange.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPickerConstantRange() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickerConstantRangeFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickerConstantRangeFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickerConstantRangeSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickerConstantRangeSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickerFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickerFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPickerConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExPickerConstantRangeConfig ***********************************
struct Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExPickerConstantRangeConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExPickerConstantRangeConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerConstantRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiscreteStartIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Use negative values to select from the end. */" },
		{ "DisplayAfter", "bTreatAsNormalized" },
		{ "EditCondition", "!bTreatAsNormalized" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerConstantRange.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Use negative values to select from the end." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeStartIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Use negative values to select from the end. */" },
		{ "DisplayAfter", "bTreatAsNormalized" },
		{ "EditCondition", "bTreatAsNormalized" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerConstantRange.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Use negative values to select from the end." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiscreteEndIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Use negative values to select from the end. */" },
		{ "DisplayAfter", "bTreatAsNormalized" },
		{ "EditCondition", "!bTreatAsNormalized" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerConstantRange.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Use negative values to select from the end." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeEndIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Use negative values to select from the end. */" },
		{ "DisplayAfter", "bTreatAsNormalized" },
		{ "EditCondition", "bTreatAsNormalized" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerConstantRange.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Use negative values to select from the end." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExPickerConstantRangeConfig constinit property declarations ***
	static const UECodeGen_Private::FIntPropertyParams NewProp_DiscreteStartIndex;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RelativeStartIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DiscreteEndIndex;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RelativeEndIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExPickerConstantRangeConfig constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExPickerConstantRangeConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics
static_assert(std::is_polymorphic<FPCGExPickerConstantRangeConfig>() == std::is_polymorphic<FPCGExPickerConfigBase>(), "USTRUCT FPCGExPickerConstantRangeConfig cannot be polymorphic unless super FPCGExPickerConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExPickerConstantRangeConfig;
class UScriptStruct* FPCGExPickerConstantRangeConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPickerConstantRangeConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExPickerConstantRangeConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExPickerConstantRangeConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExPickerConstantRangeConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExPickerConstantRangeConfig Property Definitions **************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics::NewProp_DiscreteStartIndex = { "DiscreteStartIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPickerConstantRangeConfig, DiscreteStartIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiscreteStartIndex_MetaData), NewProp_DiscreteStartIndex_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics::NewProp_RelativeStartIndex = { "RelativeStartIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPickerConstantRangeConfig, RelativeStartIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeStartIndex_MetaData), NewProp_RelativeStartIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics::NewProp_DiscreteEndIndex = { "DiscreteEndIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPickerConstantRangeConfig, DiscreteEndIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiscreteEndIndex_MetaData), NewProp_DiscreteEndIndex_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics::NewProp_RelativeEndIndex = { "RelativeEndIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExPickerConstantRangeConfig, RelativeEndIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeEndIndex_MetaData), NewProp_RelativeEndIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics::NewProp_DiscreteStartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics::NewProp_RelativeStartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics::NewProp_DiscreteEndIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics::NewProp_RelativeEndIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExPickerConstantRangeConfig Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExPickerConfigBase,
	&NewStructOps,
	"PCGExPickerConstantRangeConfig",
	Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics::PropPointers),
	sizeof(FPCGExPickerConstantRangeConfig),
	alignof(FPCGExPickerConstantRangeConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExPickerConstantRangeConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExPickerConstantRangeConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExPickerConstantRangeConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExPickerConstantRangeConfig *************************************

// ********** Begin Class UPCGExPickerConstantRangeFactory *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPickerConstantRangeFactory;
UClass* UPCGExPickerConstantRangeFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExPickerConstantRangeFactory;
	if (!Z_Registration_Info_UClass_UPCGExPickerConstantRangeFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPickerConstantRangeFactory"),
			Z_Registration_Info_UClass_UPCGExPickerConstantRangeFactory.InnerSingleton,
			StaticRegisterNativesUPCGExPickerConstantRangeFactory,
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
	return Z_Registration_Info_UClass_UPCGExPickerConstantRangeFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPickerConstantRangeFactory_NoRegister()
{
	return UPCGExPickerConstantRangeFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPickerConstantRangeFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/Pickers/PCGExPickerConstantRange.h" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerConstantRange.h" },
		{ "PCGExNodeLibraryDoc", "filters/cherry-pick-points/picker-range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerConstantRange.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPickerConstantRangeFactory constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPickerConstantRangeFactory constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPickerConstantRangeFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPickerConstantRangeFactory_Statics

// ********** Begin Class UPCGExPickerConstantRangeFactory Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPickerConstantRangeFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPickerConstantRangeFactory, Config), Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2290421750
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPickerConstantRangeFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickerConstantRangeFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerConstantRangeFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPickerConstantRangeFactory Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExPickerConstantRangeFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPickerFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerConstantRangeFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPickerConstantRangeFactory_Statics::ClassParams = {
	&UPCGExPickerConstantRangeFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPickerConstantRangeFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerConstantRangeFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerConstantRangeFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPickerConstantRangeFactory_Statics::Class_MetaDataParams)
};
void UPCGExPickerConstantRangeFactory::StaticRegisterNativesUPCGExPickerConstantRangeFactory()
{
}
UClass* Z_Construct_UClass_UPCGExPickerConstantRangeFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExPickerConstantRangeFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPickerConstantRangeFactory.OuterSingleton, Z_Construct_UClass_UPCGExPickerConstantRangeFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPickerConstantRangeFactory.OuterSingleton;
}
UPCGExPickerConstantRangeFactory::UPCGExPickerConstantRangeFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPickerConstantRangeFactory);
UPCGExPickerConstantRangeFactory::~UPCGExPickerConstantRangeFactory() {}
// ********** End Class UPCGExPickerConstantRangeFactory *******************************************

// ********** Begin Class UPCGExPickerConstantRangeSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPickerConstantRangeSettings;
UClass* UPCGExPickerConstantRangeSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPickerConstantRangeSettings;
	if (!Z_Registration_Info_UClass_UPCGExPickerConstantRangeSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPickerConstantRangeSettings"),
			Z_Registration_Info_UClass_UPCGExPickerConstantRangeSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPickerConstantRangeSettings,
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
	return Z_Registration_Info_UClass_UPCGExPickerConstantRangeSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPickerConstantRangeSettings_NoRegister()
{
	return UPCGExPickerConstantRangeSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPickerConstantRangeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Pickers|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/Pickers/PCGExPickerConstantRange.h" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerConstantRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Picker properties */" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerConstantRange.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Picker properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPickerConstantRangeSettings constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPickerConstantRangeSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPickerConstantRangeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPickerConstantRangeSettings_Statics

// ********** Begin Class UPCGExPickerConstantRangeSettings Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPickerConstantRangeSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPickerConstantRangeSettings, Config), Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2290421750
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPickerConstantRangeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickerConstantRangeSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerConstantRangeSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPickerConstantRangeSettings Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExPickerConstantRangeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPickerFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerConstantRangeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPickerConstantRangeSettings_Statics::ClassParams = {
	&UPCGExPickerConstantRangeSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPickerConstantRangeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerConstantRangeSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerConstantRangeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPickerConstantRangeSettings_Statics::Class_MetaDataParams)
};
void UPCGExPickerConstantRangeSettings::StaticRegisterNativesUPCGExPickerConstantRangeSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPickerConstantRangeSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPickerConstantRangeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPickerConstantRangeSettings.OuterSingleton, Z_Construct_UClass_UPCGExPickerConstantRangeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPickerConstantRangeSettings.OuterSingleton;
}
UPCGExPickerConstantRangeSettings::UPCGExPickerConstantRangeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPickerConstantRangeSettings);
UPCGExPickerConstantRangeSettings::~UPCGExPickerConstantRangeSettings() {}
// ********** End Class UPCGExPickerConstantRangeSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerConstantRange_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExPickerConstantRangeConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExPickerConstantRangeConfig_Statics::NewStructOps, TEXT("PCGExPickerConstantRangeConfig"),&Z_Registration_Info_UScriptStruct_FPCGExPickerConstantRangeConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExPickerConstantRangeConfig), 2290421750U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPickerConstantRangeFactory, UPCGExPickerConstantRangeFactory::StaticClass, TEXT("UPCGExPickerConstantRangeFactory"), &Z_Registration_Info_UClass_UPCGExPickerConstantRangeFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPickerConstantRangeFactory), 3835443428U) },
		{ Z_Construct_UClass_UPCGExPickerConstantRangeSettings, UPCGExPickerConstantRangeSettings::StaticClass, TEXT("UPCGExPickerConstantRangeSettings"), &Z_Registration_Info_UClass_UPCGExPickerConstantRangeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPickerConstantRangeSettings), 1216420984U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerConstantRange_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerConstantRange_h__Script_PCGExtendedToolkit_3391054718{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerConstantRange_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerConstantRange_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerConstantRange_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerConstantRange_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
