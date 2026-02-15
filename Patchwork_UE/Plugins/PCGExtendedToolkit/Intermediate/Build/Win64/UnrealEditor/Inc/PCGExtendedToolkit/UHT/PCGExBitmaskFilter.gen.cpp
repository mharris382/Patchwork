// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExBitmaskFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBitmaskFilter() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBitmaskFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBitmaskFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitflagComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExBitmaskFilterConfig *****************************************
struct Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExBitmaskFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExBitmaskFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBitmaskFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagsAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Source value. (Operand A) */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBitmaskFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Source value. (Operand A)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExBitflag64" },
		{ "Category", "Settings" },
		{ "Comment", "/** Type of flag comparison */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBitmaskFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Type of flag comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Mask */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBitmaskFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Type of Mask" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitmaskAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Mask for testing -- Must be int64. (Operand B) */" },
		{ "DisplayName", "Bitmask (Attr)" },
		{ "EditCondition", "MaskInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBitmaskFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Mask for testing -- Must be int64. (Operand B)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bitmask_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** (Operand B) */" },
		{ "DisplayName", "Bitmask" },
		{ "EditCondition", "MaskInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBitmaskFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "(Operand B)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBitmaskFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExBitmaskFilterConfig constinit property declarations *********
	static const UECodeGen_Private::FNamePropertyParams NewProp_FlagsAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaskInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaskInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BitmaskAttribute;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Bitmask;
	static void NewProp_bInvertResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExBitmaskFilterConfig constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExBitmaskFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExBitmaskFilterConfig;
class UScriptStruct* FPCGExBitmaskFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExBitmaskFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExBitmaskFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExBitmaskFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExBitmaskFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExBitmaskFilterConfig Property Definitions ********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewProp_FlagsAttribute = { "FlagsAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmaskFilterConfig, FlagsAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagsAttribute_MetaData), NewProp_FlagsAttribute_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmaskFilterConfig, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBitflagComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 3612544535
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewProp_MaskInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewProp_MaskInput = { "MaskInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmaskFilterConfig, MaskInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskInput_MetaData), NewProp_MaskInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewProp_BitmaskAttribute = { "BitmaskAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmaskFilterConfig, BitmaskAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitmaskAttribute_MetaData), NewProp_BitmaskAttribute_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewProp_Bitmask = { "Bitmask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBitmaskFilterConfig, Bitmask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bitmask_MetaData), NewProp_Bitmask_MetaData) };
void Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewProp_bInvertResult_SetBit(void* Obj)
{
	((FPCGExBitmaskFilterConfig*)Obj)->bInvertResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewProp_bInvertResult = { "bInvertResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExBitmaskFilterConfig), &Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewProp_bInvertResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertResult_MetaData), NewProp_bInvertResult_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewProp_FlagsAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewProp_MaskInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewProp_MaskInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewProp_BitmaskAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewProp_Bitmask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewProp_bInvertResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExBitmaskFilterConfig Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExBitmaskFilterConfig",
	Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::PropPointers),
	sizeof(FPCGExBitmaskFilterConfig),
	alignof(FPCGExBitmaskFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExBitmaskFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExBitmaskFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExBitmaskFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExBitmaskFilterConfig *******************************************

// ********** Begin Class UPCGExBitmaskFilterFactory ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBitmaskFilterFactory;
UClass* UPCGExBitmaskFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExBitmaskFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExBitmaskFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBitmaskFilterFactory"),
			Z_Registration_Info_UClass_UPCGExBitmaskFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExBitmaskFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExBitmaskFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBitmaskFilterFactory_NoRegister()
{
	return UPCGExBitmaskFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBitmaskFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/Filters/PCGExBitmaskFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBitmaskFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBitmaskFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBitmaskFilterFactory constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBitmaskFilterFactory constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBitmaskFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBitmaskFilterFactory_Statics

// ********** Begin Class UPCGExBitmaskFilterFactory Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBitmaskFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBitmaskFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2529685276
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBitmaskFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBitmaskFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitmaskFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBitmaskFilterFactory Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExBitmaskFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitmaskFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBitmaskFilterFactory_Statics::ClassParams = {
	&UPCGExBitmaskFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBitmaskFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitmaskFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitmaskFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBitmaskFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExBitmaskFilterFactory::StaticRegisterNativesUPCGExBitmaskFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExBitmaskFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExBitmaskFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBitmaskFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExBitmaskFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBitmaskFilterFactory.OuterSingleton;
}
UPCGExBitmaskFilterFactory::UPCGExBitmaskFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBitmaskFilterFactory);
UPCGExBitmaskFilterFactory::~UPCGExBitmaskFilterFactory() {}
// ********** End Class UPCGExBitmaskFilterFactory *************************************************

// ********** Begin Class UPCGExBitmaskFilterProviderSettings **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBitmaskFilterProviderSettings;
UClass* UPCGExBitmaskFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBitmaskFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExBitmaskFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBitmaskFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExBitmaskFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBitmaskFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExBitmaskFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings_NoRegister()
{
	return UPCGExBitmaskFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExBitmaskFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBitmaskFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-points/bitmask" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExBitmaskFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBitmaskFilterProviderSettings constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBitmaskFilterProviderSettings constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBitmaskFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings_Statics

// ********** Begin Class UPCGExBitmaskFilterProviderSettings Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBitmaskFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2529685276
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBitmaskFilterProviderSettings Property Definitions *******************
UObject* (*const Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings_Statics::ClassParams = {
	&UPCGExBitmaskFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExBitmaskFilterProviderSettings::StaticRegisterNativesUPCGExBitmaskFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBitmaskFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBitmaskFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBitmaskFilterProviderSettings.OuterSingleton;
}
UPCGExBitmaskFilterProviderSettings::UPCGExBitmaskFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBitmaskFilterProviderSettings);
UPCGExBitmaskFilterProviderSettings::~UPCGExBitmaskFilterProviderSettings() {}
// ********** End Class UPCGExBitmaskFilterProviderSettings ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExBitmaskFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExBitmaskFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExBitmaskFilterConfig_Statics::NewStructOps, TEXT("PCGExBitmaskFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExBitmaskFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExBitmaskFilterConfig), 2529685276U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBitmaskFilterFactory, UPCGExBitmaskFilterFactory::StaticClass, TEXT("UPCGExBitmaskFilterFactory"), &Z_Registration_Info_UClass_UPCGExBitmaskFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBitmaskFilterFactory), 3273521854U) },
		{ Z_Construct_UClass_UPCGExBitmaskFilterProviderSettings, UPCGExBitmaskFilterProviderSettings::StaticClass, TEXT("UPCGExBitmaskFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExBitmaskFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBitmaskFilterProviderSettings), 3694520389U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExBitmaskFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExBitmaskFilter_h__Script_PCGExtendedToolkit_911865197{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExBitmaskFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExBitmaskFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExBitmaskFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExBitmaskFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
