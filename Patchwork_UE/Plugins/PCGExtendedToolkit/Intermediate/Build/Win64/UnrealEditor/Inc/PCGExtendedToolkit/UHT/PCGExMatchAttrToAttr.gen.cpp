// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Matching/PCGExMatchAttrToAttr.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMatchAttrToAttr() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchAttrToAttrFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchAttrToAttrFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExMatchAttrToAttrConfig ***************************************
struct Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExMatchAttrToAttrConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExMatchAttrToAttrConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchAttrToAttr.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CandidateAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The attribute to read on the candidates (the data that's not used as target). Only support @Data domain, and will only try to read from there. */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchAttrToAttr.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The attribute to read on the candidates (the data that's not used as target). Only support @Data domain, and will only try to read from there." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The attribute to read from on the targets. Depending on where the match operate, this can be read on a target point or data domain. If only data domain is supported, will read first element value. */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchAttrToAttr.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The attribute to read from on the targets. Depending on where the match operate, this can be read on a target point or data domain. If only data domain is supported, will read first element value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Check_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How should the data be compared. */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchAttrToAttr.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How should the data be compared." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumericComparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "DisplayName", "Comparison" },
		{ "EditCondition", "Check == EPCGExComparisonDataType::Numeric" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchAttrToAttr.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for near measures */" },
		{ "EditCondition", "Check == EPCGExComparisonDataType::Numeric && NumericComparison == EPCGExComparison::NearlyEqual || NumericComparison == EPCGExComparison::NearlyNotEqual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchAttrToAttr.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rounding mode for near measures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringComparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "DisplayName", "Comparison" },
		{ "EditCondition", "Check == EPCGExComparisonDataType::String" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchAttrToAttr.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSwapOperands_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will swap operands during check */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchAttrToAttr.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will swap operands during check" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExMatchAttrToAttrConfig constinit property declarations *******
	static const UECodeGen_Private::FNamePropertyParams NewProp_CandidateAttributeName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetAttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Check_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Check;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NumericComparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NumericComparison;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StringComparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StringComparison;
	static void NewProp_bSwapOperands_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwapOperands;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExMatchAttrToAttrConfig constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExMatchAttrToAttrConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics
static_assert(std::is_polymorphic<FPCGExMatchAttrToAttrConfig>() == std::is_polymorphic<FPCGExMatchRuleConfigBase>(), "USTRUCT FPCGExMatchAttrToAttrConfig cannot be polymorphic unless super FPCGExMatchRuleConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExMatchAttrToAttrConfig;
class UScriptStruct* FPCGExMatchAttrToAttrConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMatchAttrToAttrConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExMatchAttrToAttrConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExMatchAttrToAttrConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExMatchAttrToAttrConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExMatchAttrToAttrConfig Property Definitions ******************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_CandidateAttributeName = { "CandidateAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchAttrToAttrConfig, CandidateAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CandidateAttributeName_MetaData), NewProp_CandidateAttributeName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_TargetAttributeName = { "TargetAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchAttrToAttrConfig, TargetAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAttributeName_MetaData), NewProp_TargetAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_Check_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_Check = { "Check", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchAttrToAttrConfig, Check), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Check_MetaData), NewProp_Check_MetaData) }; // 1949993194
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_NumericComparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_NumericComparison = { "NumericComparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchAttrToAttrConfig, NumericComparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumericComparison_MetaData), NewProp_NumericComparison_MetaData) }; // 703604353
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchAttrToAttrConfig, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_StringComparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_StringComparison = { "StringComparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchAttrToAttrConfig, StringComparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringComparison_MetaData), NewProp_StringComparison_MetaData) }; // 4028780742
void Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_bSwapOperands_SetBit(void* Obj)
{
	((FPCGExMatchAttrToAttrConfig*)Obj)->bSwapOperands = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_bSwapOperands = { "bSwapOperands", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExMatchAttrToAttrConfig), &Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_bSwapOperands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSwapOperands_MetaData), NewProp_bSwapOperands_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_CandidateAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_TargetAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_Check_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_Check,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_NumericComparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_NumericComparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_StringComparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_StringComparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewProp_bSwapOperands,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExMatchAttrToAttrConfig Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase,
	&NewStructOps,
	"PCGExMatchAttrToAttrConfig",
	Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::PropPointers),
	sizeof(FPCGExMatchAttrToAttrConfig),
	alignof(FPCGExMatchAttrToAttrConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMatchAttrToAttrConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExMatchAttrToAttrConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExMatchAttrToAttrConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExMatchAttrToAttrConfig *****************************************

// ********** Begin Class UPCGExMatchAttrToAttrFactory *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExMatchAttrToAttrFactory;
UClass* UPCGExMatchAttrToAttrFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExMatchAttrToAttrFactory;
	if (!Z_Registration_Info_UClass_UPCGExMatchAttrToAttrFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExMatchAttrToAttrFactory"),
			Z_Registration_Info_UClass_UPCGExMatchAttrToAttrFactory.InnerSingleton,
			StaticRegisterNativesUPCGExMatchAttrToAttrFactory,
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
	return Z_Registration_Info_UClass_UPCGExMatchAttrToAttrFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExMatchAttrToAttrFactory_NoRegister()
{
	return UPCGExMatchAttrToAttrFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExMatchAttrToAttrFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/Matching/PCGExMatchAttrToAttr.h" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchAttrToAttr.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchAttrToAttr.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExMatchAttrToAttrFactory constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExMatchAttrToAttrFactory constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExMatchAttrToAttrFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExMatchAttrToAttrFactory_Statics

// ********** Begin Class UPCGExMatchAttrToAttrFactory Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMatchAttrToAttrFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMatchAttrToAttrFactory, Config), Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1569771205
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExMatchAttrToAttrFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMatchAttrToAttrFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchAttrToAttrFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExMatchAttrToAttrFactory Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExMatchAttrToAttrFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExMatchRuleFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchAttrToAttrFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExMatchAttrToAttrFactory_Statics::ClassParams = {
	&UPCGExMatchAttrToAttrFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExMatchAttrToAttrFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchAttrToAttrFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchAttrToAttrFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExMatchAttrToAttrFactory_Statics::Class_MetaDataParams)
};
void UPCGExMatchAttrToAttrFactory::StaticRegisterNativesUPCGExMatchAttrToAttrFactory()
{
}
UClass* Z_Construct_UClass_UPCGExMatchAttrToAttrFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExMatchAttrToAttrFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExMatchAttrToAttrFactory.OuterSingleton, Z_Construct_UClass_UPCGExMatchAttrToAttrFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExMatchAttrToAttrFactory.OuterSingleton;
}
UPCGExMatchAttrToAttrFactory::UPCGExMatchAttrToAttrFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExMatchAttrToAttrFactory);
UPCGExMatchAttrToAttrFactory::~UPCGExMatchAttrToAttrFactory() {}
// ********** End Class UPCGExMatchAttrToAttrFactory ***********************************************

// ********** Begin Class UPCGExCreateMatchAttrToAttrSettings **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateMatchAttrToAttrSettings;
UClass* UPCGExCreateMatchAttrToAttrSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateMatchAttrToAttrSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateMatchAttrToAttrSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateMatchAttrToAttrSettings"),
			Z_Registration_Info_UClass_UPCGExCreateMatchAttrToAttrSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateMatchAttrToAttrSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateMatchAttrToAttrSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings_NoRegister()
{
	return UPCGExCreateMatchAttrToAttrSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DataMatch" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/Matching/PCGExMatchAttrToAttr.h" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchAttrToAttr.h" },
		{ "PCGExNodeLibraryDoc", "misc/data-matching/attributes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rules properties */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchAttrToAttr.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Rules properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateMatchAttrToAttrSettings constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateMatchAttrToAttrSettings constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateMatchAttrToAttrSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings_Statics

// ********** Begin Class UPCGExCreateMatchAttrToAttrSettings Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateMatchAttrToAttrSettings, Config), Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1569771205
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateMatchAttrToAttrSettings Property Definitions *******************
UObject* (*const Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings_Statics::ClassParams = {
	&UPCGExCreateMatchAttrToAttrSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateMatchAttrToAttrSettings::StaticRegisterNativesUPCGExCreateMatchAttrToAttrSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateMatchAttrToAttrSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateMatchAttrToAttrSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateMatchAttrToAttrSettings.OuterSingleton;
}
UPCGExCreateMatchAttrToAttrSettings::UPCGExCreateMatchAttrToAttrSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateMatchAttrToAttrSettings);
UPCGExCreateMatchAttrToAttrSettings::~UPCGExCreateMatchAttrToAttrSettings() {}
// ********** End Class UPCGExCreateMatchAttrToAttrSettings ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchAttrToAttr_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExMatchAttrToAttrConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExMatchAttrToAttrConfig_Statics::NewStructOps, TEXT("PCGExMatchAttrToAttrConfig"),&Z_Registration_Info_UScriptStruct_FPCGExMatchAttrToAttrConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExMatchAttrToAttrConfig), 1569771205U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExMatchAttrToAttrFactory, UPCGExMatchAttrToAttrFactory::StaticClass, TEXT("UPCGExMatchAttrToAttrFactory"), &Z_Registration_Info_UClass_UPCGExMatchAttrToAttrFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExMatchAttrToAttrFactory), 1373965987U) },
		{ Z_Construct_UClass_UPCGExCreateMatchAttrToAttrSettings, UPCGExCreateMatchAttrToAttrSettings::StaticClass, TEXT("UPCGExCreateMatchAttrToAttrSettings"), &Z_Registration_Info_UClass_UPCGExCreateMatchAttrToAttrSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateMatchAttrToAttrSettings), 3832601315U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchAttrToAttr_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchAttrToAttr_h__Script_PCGExtendedToolkit_2102241280{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchAttrToAttr_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchAttrToAttr_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchAttrToAttr_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchAttrToAttr_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
