// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExStringCompareFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExStringCompareFilter() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExStringCompareFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExStringCompareFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExStringCompareFilterConfig ***********************************
struct Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExStringCompareFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExStringCompareFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringCompareFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandA_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand A for testing -- Will be translated to `double` under the hood. */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand A for testing -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompareAgainst_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of OperandB */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of OperandB" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandB_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for testing -- Will be translated to `double` under the hood. */" },
		{ "DisplayName", "Operand B (Attr)" },
		{ "EditCondition", "CompareAgainst != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for testing -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandBConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for testing */" },
		{ "DisplayName", "Operand B" },
		{ "EditCondition", "CompareAgainst == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for testing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSwapOperands_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Swap operands. Useful to invert \"contains\" checks */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Swap operands. Useful to invert \"contains\" checks" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExStringCompareFilterConfig constinit property declarations ***
	static const UECodeGen_Private::FNamePropertyParams NewProp_OperandA;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompareAgainst_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompareAgainst;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OperandB;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OperandBConstant;
	static void NewProp_bSwapOperands_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwapOperands;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExStringCompareFilterConfig constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExStringCompareFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExStringCompareFilterConfig;
class UScriptStruct* FPCGExStringCompareFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExStringCompareFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExStringCompareFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExStringCompareFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExStringCompareFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExStringCompareFilterConfig Property Definitions **************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewProp_OperandA = { "OperandA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStringCompareFilterConfig, OperandA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandA_MetaData), NewProp_OperandA_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStringCompareFilterConfig, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 4028780742
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewProp_CompareAgainst_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewProp_CompareAgainst = { "CompareAgainst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStringCompareFilterConfig, CompareAgainst), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompareAgainst_MetaData), NewProp_CompareAgainst_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewProp_OperandB = { "OperandB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStringCompareFilterConfig, OperandB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandB_MetaData), NewProp_OperandB_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewProp_OperandBConstant = { "OperandBConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExStringCompareFilterConfig, OperandBConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandBConstant_MetaData), NewProp_OperandBConstant_MetaData) };
void Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewProp_bSwapOperands_SetBit(void* Obj)
{
	((FPCGExStringCompareFilterConfig*)Obj)->bSwapOperands = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewProp_bSwapOperands = { "bSwapOperands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExStringCompareFilterConfig), &Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewProp_bSwapOperands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSwapOperands_MetaData), NewProp_bSwapOperands_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewProp_OperandA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewProp_CompareAgainst_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewProp_CompareAgainst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewProp_OperandB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewProp_OperandBConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewProp_bSwapOperands,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExStringCompareFilterConfig Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExStringCompareFilterConfig",
	Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::PropPointers),
	sizeof(FPCGExStringCompareFilterConfig),
	alignof(FPCGExStringCompareFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExStringCompareFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExStringCompareFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExStringCompareFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExStringCompareFilterConfig *************************************

// ********** Begin Class UPCGExStringCompareFilterFactory *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExStringCompareFilterFactory;
UClass* UPCGExStringCompareFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExStringCompareFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExStringCompareFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExStringCompareFilterFactory"),
			Z_Registration_Info_UClass_UPCGExStringCompareFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExStringCompareFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExStringCompareFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExStringCompareFilterFactory_NoRegister()
{
	return UPCGExStringCompareFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExStringCompareFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/Filters/PCGExStringCompareFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringCompareFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringCompareFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExStringCompareFilterFactory constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExStringCompareFilterFactory constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExStringCompareFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExStringCompareFilterFactory_Statics

// ********** Begin Class UPCGExStringCompareFilterFactory Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExStringCompareFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExStringCompareFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2192163435
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExStringCompareFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExStringCompareFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExStringCompareFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExStringCompareFilterFactory Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExStringCompareFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExStringCompareFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExStringCompareFilterFactory_Statics::ClassParams = {
	&UPCGExStringCompareFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExStringCompareFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExStringCompareFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExStringCompareFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExStringCompareFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExStringCompareFilterFactory::StaticRegisterNativesUPCGExStringCompareFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExStringCompareFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExStringCompareFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExStringCompareFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExStringCompareFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExStringCompareFilterFactory.OuterSingleton;
}
UPCGExStringCompareFilterFactory::UPCGExStringCompareFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExStringCompareFilterFactory);
UPCGExStringCompareFilterFactory::~UPCGExStringCompareFilterFactory() {}
// ********** End Class UPCGExStringCompareFilterFactory *******************************************

// ********** Begin Class UPCGExStringCompareFilterProviderSettings ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExStringCompareFilterProviderSettings;
UClass* UPCGExStringCompareFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExStringCompareFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExStringCompareFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExStringCompareFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExStringCompareFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExStringCompareFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExStringCompareFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings_NoRegister()
{
	return UPCGExStringCompareFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExStringCompareFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringCompareFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-points/simple-comparisons/string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** State name.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExStringCompareFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "State name." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExStringCompareFilterProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExStringCompareFilterProviderSettings constinit property declarations **
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExStringCompareFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings_Statics

// ********** Begin Class UPCGExStringCompareFilterProviderSettings Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExStringCompareFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2192163435
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExStringCompareFilterProviderSettings Property Definitions *************
UObject* (*const Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings_Statics::ClassParams = {
	&UPCGExStringCompareFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExStringCompareFilterProviderSettings::StaticRegisterNativesUPCGExStringCompareFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExStringCompareFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExStringCompareFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExStringCompareFilterProviderSettings.OuterSingleton;
}
UPCGExStringCompareFilterProviderSettings::UPCGExStringCompareFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExStringCompareFilterProviderSettings);
UPCGExStringCompareFilterProviderSettings::~UPCGExStringCompareFilterProviderSettings() {}
// ********** End Class UPCGExStringCompareFilterProviderSettings **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExStringCompareFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExStringCompareFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExStringCompareFilterConfig_Statics::NewStructOps, TEXT("PCGExStringCompareFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExStringCompareFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExStringCompareFilterConfig), 2192163435U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExStringCompareFilterFactory, UPCGExStringCompareFilterFactory::StaticClass, TEXT("UPCGExStringCompareFilterFactory"), &Z_Registration_Info_UClass_UPCGExStringCompareFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExStringCompareFilterFactory), 3972775325U) },
		{ Z_Construct_UClass_UPCGExStringCompareFilterProviderSettings, UPCGExStringCompareFilterProviderSettings::StaticClass, TEXT("UPCGExStringCompareFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExStringCompareFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExStringCompareFilterProviderSettings), 4050485378U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExStringCompareFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExStringCompareFilter_h__Script_PCGExtendedToolkit_798432721{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExStringCompareFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExStringCompareFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExStringCompareFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExStringCompareFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
