// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Matching/PCGExMatchTagToAttr.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMatchTagToAttr() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchTagToAttrFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMatchTagToAttrFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExMatchTagToAttrConfig ****************************************
struct Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExMatchTagToAttrConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExMatchTagToAttrConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchTagToAttr.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagNameInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Tag Name value */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchTagToAttr.h" },
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
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchTagToAttr.h" },
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
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchTagToAttr.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant tag name value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameMatch_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Match" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchTagToAttr.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoValueMatch_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to do a tag value match or not. */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchTagToAttr.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to do a tag value match or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Expected value type, this is a strict check. */" },
		{ "EditCondition", "bDoValueMatch" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchTagToAttr.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Expected value type, this is a strict check." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to read tag name value from. */" },
		{ "EditCondition", "bDoValueMatch" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchTagToAttr.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to read tag name value from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumericComparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "DisplayName", "Comparison" },
		{ "EditCondition", "bDoValueMatch && ValueType == EPCGExComparisonDataType::Numeric" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchTagToAttr.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Comparison" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for relative measures */" },
		{ "EditCondition", "bDoValueMatch && ValueType == EPCGExComparisonDataType::Numeric && (NumericComparison == EPCGExComparison::NearlyEqual || NumericComparison == EPCGExComparison::NearlyNotEqual)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchTagToAttr.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Rounding mode for relative measures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringComparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison */" },
		{ "DisplayName", "Comparison" },
		{ "EditCondition", "bDoValueMatch && ValueType == EPCGExComparisonDataType::String" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchTagToAttr.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Comparison" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExMatchTagToAttrConfig constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_TagNameInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TagNameInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagNameAttribute;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NameMatch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NameMatch;
	static void NewProp_bDoValueMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoValueMatch;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValueAttribute;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NumericComparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NumericComparison;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StringComparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StringComparison;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExMatchTagToAttrConfig constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExMatchTagToAttrConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics
static_assert(std::is_polymorphic<FPCGExMatchTagToAttrConfig>() == std::is_polymorphic<FPCGExMatchRuleConfigBase>(), "USTRUCT FPCGExMatchTagToAttrConfig cannot be polymorphic unless super FPCGExMatchRuleConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExMatchTagToAttrConfig;
class UScriptStruct* FPCGExMatchTagToAttrConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMatchTagToAttrConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExMatchTagToAttrConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExMatchTagToAttrConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExMatchTagToAttrConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExMatchTagToAttrConfig Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_TagNameInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_TagNameInput = { "TagNameInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchTagToAttrConfig, TagNameInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagNameInput_MetaData), NewProp_TagNameInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_TagNameAttribute = { "TagNameAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchTagToAttrConfig, TagNameAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagNameAttribute_MetaData), NewProp_TagNameAttribute_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchTagToAttrConfig, TagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagName_MetaData), NewProp_TagName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_NameMatch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_NameMatch = { "NameMatch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchTagToAttrConfig, NameMatch), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringMatchMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameMatch_MetaData), NewProp_NameMatch_MetaData) }; // 2911749281
void Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_bDoValueMatch_SetBit(void* Obj)
{
	((FPCGExMatchTagToAttrConfig*)Obj)->bDoValueMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_bDoValueMatch = { "bDoValueMatch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExMatchTagToAttrConfig), &Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_bDoValueMatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoValueMatch_MetaData), NewProp_bDoValueMatch_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_ValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchTagToAttrConfig, ValueType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparisonDataType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueType_MetaData), NewProp_ValueType_MetaData) }; // 1949993194
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_ValueAttribute = { "ValueAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchTagToAttrConfig, ValueAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueAttribute_MetaData), NewProp_ValueAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_NumericComparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_NumericComparison = { "NumericComparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchTagToAttrConfig, NumericComparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumericComparison_MetaData), NewProp_NumericComparison_MetaData) }; // 703604353
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchTagToAttrConfig, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_StringComparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_StringComparison = { "StringComparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExMatchTagToAttrConfig, StringComparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExStringComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringComparison_MetaData), NewProp_StringComparison_MetaData) }; // 4028780742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_TagNameInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_TagNameInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_TagNameAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_NameMatch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_NameMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_bDoValueMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_ValueType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_ValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_ValueAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_NumericComparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_NumericComparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_StringComparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewProp_StringComparison,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExMatchTagToAttrConfig Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExMatchRuleConfigBase,
	&NewStructOps,
	"PCGExMatchTagToAttrConfig",
	Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::PropPointers),
	sizeof(FPCGExMatchTagToAttrConfig),
	alignof(FPCGExMatchTagToAttrConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExMatchTagToAttrConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExMatchTagToAttrConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExMatchTagToAttrConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExMatchTagToAttrConfig ******************************************

// ********** Begin Class UPCGExMatchTagToAttrFactory **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExMatchTagToAttrFactory;
UClass* UPCGExMatchTagToAttrFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExMatchTagToAttrFactory;
	if (!Z_Registration_Info_UClass_UPCGExMatchTagToAttrFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExMatchTagToAttrFactory"),
			Z_Registration_Info_UClass_UPCGExMatchTagToAttrFactory.InnerSingleton,
			StaticRegisterNativesUPCGExMatchTagToAttrFactory,
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
	return Z_Registration_Info_UClass_UPCGExMatchTagToAttrFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExMatchTagToAttrFactory_NoRegister()
{
	return UPCGExMatchTagToAttrFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExMatchTagToAttrFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/Matching/PCGExMatchTagToAttr.h" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchTagToAttr.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchTagToAttr.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExMatchTagToAttrFactory constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExMatchTagToAttrFactory constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExMatchTagToAttrFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExMatchTagToAttrFactory_Statics

// ********** Begin Class UPCGExMatchTagToAttrFactory Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMatchTagToAttrFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMatchTagToAttrFactory, Config), Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2145921640
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExMatchTagToAttrFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMatchTagToAttrFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchTagToAttrFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExMatchTagToAttrFactory Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UPCGExMatchTagToAttrFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExMatchRuleFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchTagToAttrFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExMatchTagToAttrFactory_Statics::ClassParams = {
	&UPCGExMatchTagToAttrFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExMatchTagToAttrFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchTagToAttrFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMatchTagToAttrFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExMatchTagToAttrFactory_Statics::Class_MetaDataParams)
};
void UPCGExMatchTagToAttrFactory::StaticRegisterNativesUPCGExMatchTagToAttrFactory()
{
}
UClass* Z_Construct_UClass_UPCGExMatchTagToAttrFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExMatchTagToAttrFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExMatchTagToAttrFactory.OuterSingleton, Z_Construct_UClass_UPCGExMatchTagToAttrFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExMatchTagToAttrFactory.OuterSingleton;
}
UPCGExMatchTagToAttrFactory::UPCGExMatchTagToAttrFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExMatchTagToAttrFactory);
UPCGExMatchTagToAttrFactory::~UPCGExMatchTagToAttrFactory() {}
// ********** End Class UPCGExMatchTagToAttrFactory ************************************************

// ********** Begin Class UPCGExCreateMatchTagToAttrSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCreateMatchTagToAttrSettings;
UClass* UPCGExCreateMatchTagToAttrSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCreateMatchTagToAttrSettings;
	if (!Z_Registration_Info_UClass_UPCGExCreateMatchTagToAttrSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCreateMatchTagToAttrSettings"),
			Z_Registration_Info_UClass_UPCGExCreateMatchTagToAttrSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCreateMatchTagToAttrSettings,
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
	return Z_Registration_Info_UClass_UPCGExCreateMatchTagToAttrSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings_NoRegister()
{
	return UPCGExCreateMatchTagToAttrSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DataMatch" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/Matching/PCGExMatchTagToAttr.h" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchTagToAttr.h" },
		{ "PCGExNodeLibraryDoc", "misc/data-matching/tags-attributes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rules properties */" },
		{ "ModuleRelativePath", "Public/Data/Matching/PCGExMatchTagToAttr.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Rules properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCreateMatchTagToAttrSettings constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCreateMatchTagToAttrSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCreateMatchTagToAttrSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings_Statics

// ********** Begin Class UPCGExCreateMatchTagToAttrSettings Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCreateMatchTagToAttrSettings, Config), Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2145921640
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCreateMatchTagToAttrSettings Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExMatchRuleFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings_Statics::ClassParams = {
	&UPCGExCreateMatchTagToAttrSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings_Statics::Class_MetaDataParams)
};
void UPCGExCreateMatchTagToAttrSettings::StaticRegisterNativesUPCGExCreateMatchTagToAttrSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCreateMatchTagToAttrSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCreateMatchTagToAttrSettings.OuterSingleton, Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCreateMatchTagToAttrSettings.OuterSingleton;
}
UPCGExCreateMatchTagToAttrSettings::UPCGExCreateMatchTagToAttrSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCreateMatchTagToAttrSettings);
UPCGExCreateMatchTagToAttrSettings::~UPCGExCreateMatchTagToAttrSettings() {}
// ********** End Class UPCGExCreateMatchTagToAttrSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchTagToAttr_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExMatchTagToAttrConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExMatchTagToAttrConfig_Statics::NewStructOps, TEXT("PCGExMatchTagToAttrConfig"),&Z_Registration_Info_UScriptStruct_FPCGExMatchTagToAttrConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExMatchTagToAttrConfig), 2145921640U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExMatchTagToAttrFactory, UPCGExMatchTagToAttrFactory::StaticClass, TEXT("UPCGExMatchTagToAttrFactory"), &Z_Registration_Info_UClass_UPCGExMatchTagToAttrFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExMatchTagToAttrFactory), 3968064333U) },
		{ Z_Construct_UClass_UPCGExCreateMatchTagToAttrSettings, UPCGExCreateMatchTagToAttrSettings::StaticClass, TEXT("UPCGExCreateMatchTagToAttrSettings"), &Z_Registration_Info_UClass_UPCGExCreateMatchTagToAttrSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCreateMatchTagToAttrSettings), 3670688042U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchTagToAttr_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchTagToAttr_h__Script_PCGExtendedToolkit_2933322274{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchTagToAttr_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchTagToAttr_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchTagToAttr_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Matching_PCGExMatchTagToAttr_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
