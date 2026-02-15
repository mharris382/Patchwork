// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/CollectionFilters/PCGExTagValueFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTagValueFilter() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterCollectionFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTagValueFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTagValueFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTagValueFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTagValueFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterGroupMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExTagValueFilterConfig ****************************************
struct Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTagValueFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTagValueFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagValueFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant tag name value. */" },
		{ "DisplayName", "Tag Name" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagValueFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant tag name value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Match_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Match" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagValueFilter.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Expected value type, this is a strict check. */" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagValueFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Expected value type, this is a strict check." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumericComparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "DisplayName", "Comparison" },
		{ "EditCondition", "ValueType == EPCGExComparisonDataType::Numeric" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagValueFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumericOperandB_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant tag string value. */" },
		{ "DisplayName", "Operand B (Numeric)" },
		{ "EditCondition", "ValueType == EPCGExComparisonDataType::Numeric" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagValueFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant tag string value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for relative measures */" },
		{ "EditCondition", "ValueType == EPCGExComparisonDataType::Numeric && (NumericComparison == EPCGExComparison::NearlyEqual || NumericComparison == EPCGExComparison::NearlyNotEqual)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagValueFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rounding mode for relative measures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringComparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "DisplayName", "Comparison" },
		{ "EditCondition", "ValueType == EPCGExComparisonDataType::String" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagValueFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringOperandB_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant tag string value. */" },
		{ "DisplayName", "Operand B (String)" },
		{ "EditCondition", "ValueType == EPCGExComparisonDataType::String" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagValueFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant tag string value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiMatch_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** OR only requires a single match to pass, AND requires all matches to pass. */" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagValueFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "OR only requires a single match to pass, AND requires all matches to pass." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Invert the result of this filter. */" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagValueFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Invert the result of this filter." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTagValueFilterConfig constinit property declarations ********
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Match_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Match;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NumericComparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NumericComparison;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NumericOperandB;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StringComparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StringComparison;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringOperandB;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MultiMatch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MultiMatch;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTagValueFilterConfig constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTagValueFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTagValueFilterConfig;
class UScriptStruct* FPCGExTagValueFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTagValueFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTagValueFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTagValueFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTagValueFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTagValueFilterConfig Property Definitions *******************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTagValueFilterConfig, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_Match_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTagValueFilterConfig, Match), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Match_MetaData), NewProp_Match_MetaData) }; // 2911749281
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_ValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTagValueFilterConfig, ValueType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueType_MetaData), NewProp_ValueType_MetaData) }; // 1949993194
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_NumericComparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_NumericComparison = { "NumericComparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTagValueFilterConfig, NumericComparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumericComparison_MetaData), NewProp_NumericComparison_MetaData) }; // 703604353
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_NumericOperandB = { "NumericOperandB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTagValueFilterConfig, NumericOperandB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumericOperandB_MetaData), NewProp_NumericOperandB_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTagValueFilterConfig, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_StringComparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_StringComparison = { "StringComparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTagValueFilterConfig, StringComparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringComparison_MetaData), NewProp_StringComparison_MetaData) }; // 4028780742
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_StringOperandB = { "StringOperandB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTagValueFilterConfig, StringOperandB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringOperandB_MetaData), NewProp_StringOperandB_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_MultiMatch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_MultiMatch = { "MultiMatch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTagValueFilterConfig, MultiMatch), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterGroupMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiMatch_MetaData), NewProp_MultiMatch_MetaData) }; // 3555833813
void Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExTagValueFilterConfig*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTagValueFilterConfig), &Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_Match_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_Match,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_ValueType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_ValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_NumericComparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_NumericComparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_NumericOperandB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_StringComparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_StringComparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_StringOperandB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_MultiMatch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_MultiMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTagValueFilterConfig Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExTagValueFilterConfig",
	Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::PropPointers),
	sizeof(FPCGExTagValueFilterConfig),
	alignof(FPCGExTagValueFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTagValueFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTagValueFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTagValueFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTagValueFilterConfig ******************************************

// ********** Begin Class UPCGExTagValueFilterFactory **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTagValueFilterFactory;
UClass* UPCGExTagValueFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExTagValueFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExTagValueFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTagValueFilterFactory"),
			Z_Registration_Info_UClass_UPCGExTagValueFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExTagValueFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExTagValueFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTagValueFilterFactory_NoRegister()
{
	return UPCGExTagValueFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTagValueFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/CollectionFilters/PCGExTagValueFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagValueFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagValueFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTagValueFilterFactory constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTagValueFilterFactory constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTagValueFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTagValueFilterFactory_Statics

// ********** Begin Class UPCGExTagValueFilterFactory Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTagValueFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTagValueFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1736601714
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTagValueFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTagValueFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTagValueFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTagValueFilterFactory Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExTagValueFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterCollectionFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTagValueFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTagValueFilterFactory_Statics::ClassParams = {
	&UPCGExTagValueFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTagValueFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTagValueFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTagValueFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTagValueFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExTagValueFilterFactory::StaticRegisterNativesUPCGExTagValueFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExTagValueFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExTagValueFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTagValueFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExTagValueFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTagValueFilterFactory.OuterSingleton;
}
UPCGExTagValueFilterFactory::UPCGExTagValueFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTagValueFilterFactory);
UPCGExTagValueFilterFactory::~UPCGExTagValueFilterFactory() {}
// ********** End Class UPCGExTagValueFilterFactory ************************************************

// ********** Begin Class UPCGExTagValueFilterProviderSettings *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTagValueFilterProviderSettings;
UClass* UPCGExTagValueFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExTagValueFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExTagValueFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTagValueFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExTagValueFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExTagValueFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExTagValueFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTagValueFilterProviderSettings_NoRegister()
{
	return UPCGExTagValueFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTagValueFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/CollectionFilters/PCGExTagValueFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagValueFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-collections/tag-value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/CollectionFilters/PCGExTagValueFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTagValueFilterProviderSettings constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTagValueFilterProviderSettings constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTagValueFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTagValueFilterProviderSettings_Statics

// ********** Begin Class UPCGExTagValueFilterProviderSettings Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExTagValueFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTagValueFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1736601714
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTagValueFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTagValueFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTagValueFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTagValueFilterProviderSettings Property Definitions ******************
UObject* (*const Z_Construct_UClass_UPCGExTagValueFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTagValueFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTagValueFilterProviderSettings_Statics::ClassParams = {
	&UPCGExTagValueFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTagValueFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTagValueFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTagValueFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTagValueFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExTagValueFilterProviderSettings::StaticRegisterNativesUPCGExTagValueFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExTagValueFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExTagValueFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTagValueFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExTagValueFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTagValueFilterProviderSettings.OuterSingleton;
}
UPCGExTagValueFilterProviderSettings::UPCGExTagValueFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTagValueFilterProviderSettings);
UPCGExTagValueFilterProviderSettings::~UPCGExTagValueFilterProviderSettings() {}
// ********** End Class UPCGExTagValueFilterProviderSettings ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExTagValueFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTagValueFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExTagValueFilterConfig_Statics::NewStructOps, TEXT("PCGExTagValueFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExTagValueFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTagValueFilterConfig), 1736601714U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTagValueFilterFactory, UPCGExTagValueFilterFactory::StaticClass, TEXT("UPCGExTagValueFilterFactory"), &Z_Registration_Info_UClass_UPCGExTagValueFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTagValueFilterFactory), 2837056956U) },
		{ Z_Construct_UClass_UPCGExTagValueFilterProviderSettings, UPCGExTagValueFilterProviderSettings::StaticClass, TEXT("UPCGExTagValueFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExTagValueFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTagValueFilterProviderSettings), 1925286514U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExTagValueFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExTagValueFilter_h__Script_PCGExtendedToolkit_2851325720{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExTagValueFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExTagValueFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExTagValueFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_CollectionFilters_PCGExTagValueFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
