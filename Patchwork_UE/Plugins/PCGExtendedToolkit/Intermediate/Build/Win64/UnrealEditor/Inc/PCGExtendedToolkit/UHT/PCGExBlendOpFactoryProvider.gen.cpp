// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Blending/PCGExBlendOpFactoryProvider.h"
#include "Curves/CurveFloat.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBlendOpFactoryProvider() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGMetadataTypes();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBlendOpFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBlendOpFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExABBlendingType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOpOutputMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOperandAuthority();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoBlendOp();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExOperandAuthority ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExOperandAuthority;
static UEnum* EPCGExOperandAuthority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExOperandAuthority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExOperandAuthority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOperandAuthority, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExOperandAuthority"));
	}
	return Z_Registration_Info_UEnum_EPCGExOperandAuthority.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExOperandAuthority>()
{
	return EPCGExOperandAuthority_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOperandAuthority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "A.DisplayName", "Operand A" },
		{ "A.Name", "EPCGExOperandAuthority::A" },
		{ "A.ToolTip", "Type of operand A will drive the output type, thus converting operand B to the same type for the operation." },
		{ "Auto.DisplayName", "Auto" },
		{ "Auto.Name", "EPCGExOperandAuthority::Auto" },
		{ "Auto.ToolTip", "Takes an informed guess based on settings & existing data. Usually works well, but not fool-proof." },
		{ "B.DisplayName", "Operand B" },
		{ "B.Name", "EPCGExOperandAuthority::B" },
		{ "B.ToolTip", "Type of operand B will drive the output type, thus converting operand A to the same type for the operation." },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EPCGExOperandAuthority::Custom" },
		{ "Custom.ToolTip", "Select a specific type to output the result to." },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExOperandAuthority::A", (int64)EPCGExOperandAuthority::A },
		{ "EPCGExOperandAuthority::B", (int64)EPCGExOperandAuthority::B },
		{ "EPCGExOperandAuthority::Custom", (int64)EPCGExOperandAuthority::Custom },
		{ "EPCGExOperandAuthority::Auto", (int64)EPCGExOperandAuthority::Auto },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOperandAuthority_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOperandAuthority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExOperandAuthority",
	"EPCGExOperandAuthority",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOperandAuthority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOperandAuthority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOperandAuthority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOperandAuthority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOperandAuthority()
{
	if (!Z_Registration_Info_UEnum_EPCGExOperandAuthority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExOperandAuthority.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOperandAuthority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExOperandAuthority.InnerSingleton;
}
// ********** End Enum EPCGExOperandAuthority ******************************************************

// ********** Begin Enum EPCGExBlendOpOutputMode ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBlendOpOutputMode;
static UEnum* EPCGExBlendOpOutputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBlendOpOutputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBlendOpOutputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOpOutputMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBlendOpOutputMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExBlendOpOutputMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBlendOpOutputMode>()
{
	return EPCGExBlendOpOutputMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOpOutputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "New.DisplayName", "New" },
		{ "New.Name", "EPCGExBlendOpOutputMode::New" },
		{ "New.ToolTip", "Will write the output value to new selector." },
		{ "SameAsA.DisplayName", "Same as A" },
		{ "SameAsA.Name", "EPCGExBlendOpOutputMode::SameAsA" },
		{ "SameAsA.ToolTip", "Will write the output value to Operand A' selector." },
		{ "SameAsB.DisplayName", "Same as B" },
		{ "SameAsB.Name", "EPCGExBlendOpOutputMode::SameAsB" },
		{ "SameAsB.ToolTip", "Will write the output value to Operand B' selector. (Will default to A if B is not set)" },
		{ "Transient.DisplayName", "New (Transient)" },
		{ "Transient.Name", "EPCGExBlendOpOutputMode::Transient" },
		{ "Transient.ToolTip", "Will write the output value to a new selector that will only exist for the duration of the blend, but can be referenced by other blend ops." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBlendOpOutputMode::SameAsA", (int64)EPCGExBlendOpOutputMode::SameAsA },
		{ "EPCGExBlendOpOutputMode::SameAsB", (int64)EPCGExBlendOpOutputMode::SameAsB },
		{ "EPCGExBlendOpOutputMode::New", (int64)EPCGExBlendOpOutputMode::New },
		{ "EPCGExBlendOpOutputMode::Transient", (int64)EPCGExBlendOpOutputMode::Transient },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOpOutputMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOpOutputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBlendOpOutputMode",
	"EPCGExBlendOpOutputMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOpOutputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOpOutputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOpOutputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOpOutputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOpOutputMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExBlendOpOutputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBlendOpOutputMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOpOutputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBlendOpOutputMode.InnerSingleton;
}
// ********** End Enum EPCGExBlendOpOutputMode *****************************************************

// ********** Begin ScriptStruct FPCGExAttributeBlendWeight ****************************************
struct Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAttributeBlendWeight); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAttributeBlendWeight); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Weight */" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Weight" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to read weight value from. */" },
		{ "DisplayName", "Weight (Attr)" },
		{ "EditCondition", "WeightInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to read weight value from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant weight value. */" },
		{ "DisplayName", "Weight" },
		{ "EditCondition", "WeightInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant weight value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to use in-editor curve or an external asset. */" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to use in-editor curve or an external asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalWeightCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Curve the weight value will be remapped over. */" },
		{ "DisplayName", "Weight Curve" },
		{ "EditCondition", "bUseLocalCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Curve the weight value will be remapped over." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Curve the weight value will be remapped over. */" },
		{ "DisplayName", "Weight Curve" },
		{ "EditCondition", "!bUseLocalCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Curve the weight value will be remapped over." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAttributeBlendWeight constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_WeightInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WeightInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeightAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Weight;
	static void NewProp_bUseLocalCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalWeightCurve;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WeightCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAttributeBlendWeight constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAttributeBlendWeight>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendWeight;
class UScriptStruct* FPCGExAttributeBlendWeight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendWeight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendWeight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAttributeBlendWeight"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendWeight.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAttributeBlendWeight Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::NewProp_WeightInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::NewProp_WeightInput = { "WeightInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeBlendWeight, WeightInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightInput_MetaData), NewProp_WeightInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::NewProp_WeightAttribute = { "WeightAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeBlendWeight, WeightAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightAttribute_MetaData), NewProp_WeightAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeBlendWeight, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
void Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::NewProp_bUseLocalCurve_SetBit(void* Obj)
{
	((FPCGExAttributeBlendWeight*)Obj)->bUseLocalCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::NewProp_bUseLocalCurve = { "bUseLocalCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAttributeBlendWeight), &Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::NewProp_bUseLocalCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocalCurve_MetaData), NewProp_bUseLocalCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::NewProp_LocalWeightCurve = { "LocalWeightCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeBlendWeight, LocalWeightCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalWeightCurve_MetaData), NewProp_LocalWeightCurve_MetaData) }; // 2560417949
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::NewProp_WeightCurve = { "WeightCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeBlendWeight, WeightCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightCurve_MetaData), NewProp_WeightCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::NewProp_WeightInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::NewProp_WeightInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::NewProp_WeightAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::NewProp_bUseLocalCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::NewProp_LocalWeightCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::NewProp_WeightCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAttributeBlendWeight Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAttributeBlendWeight",
	Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::PropPointers),
	sizeof(FPCGExAttributeBlendWeight),
	alignof(FPCGExAttributeBlendWeight),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendWeight.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendWeight.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendWeight.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAttributeBlendWeight ******************************************

// ********** Begin ScriptStruct FPCGExAttributeBlendConfig ****************************************
struct Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExAttributeBlendConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExAttributeBlendConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresWeight_MetaData[] = {
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** BlendMode */" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "BlendMode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandA_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand A. */" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand A." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOperandB_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandB_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B. If not enabled, will re-use Operand A' input. */" },
		{ "EditCondition", "bUseOperandB" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B. If not enabled, will re-use Operand A' input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Choose where to output the result of the A/B blend */" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Choose where to output the result of the A/B blend" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTo_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Output to (AB blend). */" },
		{ "DisplayName", "Output To" },
		{ "EditCondition", "OutputMode == EPCGExBlendOpOutputMode::New || OutputMode == EPCGExBlendOpOutputMode::Transient" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Output to (AB blend)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetValueBeforeMultiSourceBlend_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, when a node uses multiple sources for blending, the value will be reset to 0 for some specific BlendModes so as to not account for inherited values. Default is true, as it is usually the most desirable behavior. */" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, when a node uses multiple sources for blending, the value will be reset to 0 for some specific BlendModes so as to not account for inherited values. Default is true, as it is usually the most desirable behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which type should be used for the output value. Only used if the output is not a point property. */" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which type should be used for the output value. Only used if the output is not a point property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which type should be used for the output value. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Type" },
		{ "EditCondition", "OutputType == EPCGExOperandAuthority::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which type should be used for the output value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weighting_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Weight settings */" },
		{ "EditCondition", "bRequiresWeight" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Weight settings" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExAttributeBlendConfig constinit property declarations ********
	static void NewProp_bRequiresWeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresWeight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandA;
	static void NewProp_bUseOperandB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOperandB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandB;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputTo;
	static void NewProp_bResetValueBeforeMultiSourceBlend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetValueBeforeMultiSourceBlend;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CustomType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CustomType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Weighting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExAttributeBlendConfig constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExAttributeBlendConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendConfig;
class UScriptStruct* FPCGExAttributeBlendConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExAttributeBlendConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExAttributeBlendConfig Property Definitions *******************
void Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_bRequiresWeight_SetBit(void* Obj)
{
	((FPCGExAttributeBlendConfig*)Obj)->bRequiresWeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_bRequiresWeight = { "bRequiresWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAttributeBlendConfig), &Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_bRequiresWeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresWeight_MetaData), NewProp_bRequiresWeight_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeBlendConfig, BlendMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExABBlendingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 1196643237
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_OperandA = { "OperandA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeBlendConfig, OperandA), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandA_MetaData), NewProp_OperandA_MetaData) }; // 3844583698
void Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_bUseOperandB_SetBit(void* Obj)
{
	((FPCGExAttributeBlendConfig*)Obj)->bUseOperandB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_bUseOperandB = { "bUseOperandB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAttributeBlendConfig), &Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_bUseOperandB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOperandB_MetaData), NewProp_bUseOperandB_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_OperandB = { "OperandB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeBlendConfig, OperandB), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandB_MetaData), NewProp_OperandB_MetaData) }; // 3844583698
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_OutputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_OutputMode = { "OutputMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeBlendConfig, OutputMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBlendOpOutputMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputMode_MetaData), NewProp_OutputMode_MetaData) }; // 299196680
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_OutputTo = { "OutputTo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeBlendConfig, OutputTo), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTo_MetaData), NewProp_OutputTo_MetaData) }; // 3844583698
void Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_bResetValueBeforeMultiSourceBlend_SetBit(void* Obj)
{
	((FPCGExAttributeBlendConfig*)Obj)->bResetValueBeforeMultiSourceBlend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_bResetValueBeforeMultiSourceBlend = { "bResetValueBeforeMultiSourceBlend", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExAttributeBlendConfig), &Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_bResetValueBeforeMultiSourceBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetValueBeforeMultiSourceBlend_MetaData), NewProp_bResetValueBeforeMultiSourceBlend_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_OutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeBlendConfig, OutputType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOperandAuthority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputType_MetaData), NewProp_OutputType_MetaData) }; // 703436176
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_CustomType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_CustomType = { "CustomType", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeBlendConfig, CustomType), Z_Construct_UEnum_PCG_EPCGMetadataTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomType_MetaData), NewProp_CustomType_MetaData) }; // 77595749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_Weighting = { "Weighting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExAttributeBlendConfig, Weighting), Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weighting_MetaData), NewProp_Weighting_MetaData) }; // 2163922432
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_bRequiresWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_BlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_OperandA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_bUseOperandB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_OperandB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_OutputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_OutputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_OutputTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_bResetValueBeforeMultiSourceBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_OutputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_OutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_CustomType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_CustomType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewProp_Weighting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExAttributeBlendConfig Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExAttributeBlendConfig",
	Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::PropPointers),
	sizeof(FPCGExAttributeBlendConfig),
	alignof(FPCGExAttributeBlendConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExAttributeBlendConfig ******************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoBlendOp *****************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoBlendOp_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDataTypeInfoBlendOp); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDataTypeInfoBlendOp); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_DataTypeDisplayName", "PCGEx | Blend Op" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDataTypeInfoBlendOp constinit property declarations *********
// ********** End ScriptStruct FPCGExDataTypeInfoBlendOp constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDataTypeInfoBlendOp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoBlendOp_Statics
static_assert(std::is_polymorphic<FPCGExDataTypeInfoBlendOp>() == std::is_polymorphic<FPCGExFactoryDataTypeInfo>(), "USTRUCT FPCGExDataTypeInfoBlendOp cannot be polymorphic unless super FPCGExFactoryDataTypeInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoBlendOp;
class UScriptStruct* FPCGExDataTypeInfoBlendOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoBlendOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoBlendOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDataTypeInfoBlendOp, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDataTypeInfoBlendOp"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoBlendOp.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDataTypeInfoBlendOp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo,
	&NewStructOps,
	"PCGExDataTypeInfoBlendOp",
	nullptr,
	0,
	sizeof(FPCGExDataTypeInfoBlendOp),
	alignof(FPCGExDataTypeInfoBlendOp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDataTypeInfoBlendOp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDataTypeInfoBlendOp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoBlendOp()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoBlendOp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoBlendOp.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDataTypeInfoBlendOp_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoBlendOp.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDataTypeInfoBlendOp *******************************************

// ********** Begin Class UPCGExBlendOpFactory *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBlendOpFactory;
UClass* UPCGExBlendOpFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExBlendOpFactory;
	if (!Z_Registration_Info_UClass_UPCGExBlendOpFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBlendOpFactory"),
			Z_Registration_Info_UClass_UPCGExBlendOpFactory.InnerSingleton,
			StaticRegisterNativesUPCGExBlendOpFactory,
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
	return Z_Registration_Info_UClass_UPCGExBlendOpFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBlendOpFactory_NoRegister()
{
	return UPCGExBlendOpFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBlendOpFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Blending" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBlendOpFactory constinit property declarations *********************
// ********** End Class UPCGExBlendOpFactory constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBlendOpFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBlendOpFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExBlendOpFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBlendOpFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBlendOpFactory_Statics::ClassParams = {
	&UPCGExBlendOpFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBlendOpFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBlendOpFactory_Statics::Class_MetaDataParams)
};
void UPCGExBlendOpFactory::StaticRegisterNativesUPCGExBlendOpFactory()
{
}
UClass* Z_Construct_UClass_UPCGExBlendOpFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExBlendOpFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBlendOpFactory.OuterSingleton, Z_Construct_UClass_UPCGExBlendOpFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBlendOpFactory.OuterSingleton;
}
UPCGExBlendOpFactory::UPCGExBlendOpFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBlendOpFactory);
UPCGExBlendOpFactory::~UPCGExBlendOpFactory() {}
// ********** End Class UPCGExBlendOpFactory *******************************************************

// ********** Begin Class UPCGExBlendOpFactoryProviderSettings *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBlendOpFactoryProviderSettings;
UClass* UPCGExBlendOpFactoryProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBlendOpFactoryProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExBlendOpFactoryProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBlendOpFactoryProviderSettings"),
			Z_Registration_Info_UClass_UPCGExBlendOpFactoryProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBlendOpFactoryProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExBlendOpFactoryProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings_NoRegister()
{
	return UPCGExBlendOpFactoryProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Blending" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCGExNodeLibraryDoc", "metadata/uber-blend/blend-op" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Priority.*/" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Filter Priority." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Config. */" },
		{ "ModuleRelativePath", "Public/Data/Blending/PCGExBlendOpFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBlendOpFactoryProviderSettings constinit property declarations *****
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBlendOpFactoryProviderSettings constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBlendOpFactoryProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings_Statics

// ********** Begin Class UPCGExBlendOpFactoryProviderSettings Property Definitions ****************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBlendOpFactoryProviderSettings, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBlendOpFactoryProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3577459098
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBlendOpFactoryProviderSettings Property Definitions ******************
UObject* (*const Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings_Statics::ClassParams = {
	&UPCGExBlendOpFactoryProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExBlendOpFactoryProviderSettings::StaticRegisterNativesUPCGExBlendOpFactoryProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBlendOpFactoryProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBlendOpFactoryProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBlendOpFactoryProviderSettings.OuterSingleton;
}
UPCGExBlendOpFactoryProviderSettings::UPCGExBlendOpFactoryProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBlendOpFactoryProviderSettings);
UPCGExBlendOpFactoryProviderSettings::~UPCGExBlendOpFactoryProviderSettings() {}
// ********** End Class UPCGExBlendOpFactoryProviderSettings ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExBlendOpFactoryProvider_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExOperandAuthority_StaticEnum, TEXT("EPCGExOperandAuthority"), &Z_Registration_Info_UEnum_EPCGExOperandAuthority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 703436176U) },
		{ EPCGExBlendOpOutputMode_StaticEnum, TEXT("EPCGExBlendOpOutputMode"), &Z_Registration_Info_UEnum_EPCGExBlendOpOutputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 299196680U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExAttributeBlendWeight::StaticStruct, Z_Construct_UScriptStruct_FPCGExAttributeBlendWeight_Statics::NewStructOps, TEXT("PCGExAttributeBlendWeight"),&Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendWeight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAttributeBlendWeight), 2163922432U) },
		{ FPCGExAttributeBlendConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExAttributeBlendConfig_Statics::NewStructOps, TEXT("PCGExAttributeBlendConfig"),&Z_Registration_Info_UScriptStruct_FPCGExAttributeBlendConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExAttributeBlendConfig), 3577459098U) },
		{ FPCGExDataTypeInfoBlendOp::StaticStruct, Z_Construct_UScriptStruct_FPCGExDataTypeInfoBlendOp_Statics::NewStructOps, TEXT("PCGExDataTypeInfoBlendOp"),&Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoBlendOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDataTypeInfoBlendOp), 2252068981U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBlendOpFactory, UPCGExBlendOpFactory::StaticClass, TEXT("UPCGExBlendOpFactory"), &Z_Registration_Info_UClass_UPCGExBlendOpFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBlendOpFactory), 2824668048U) },
		{ Z_Construct_UClass_UPCGExBlendOpFactoryProviderSettings, UPCGExBlendOpFactoryProviderSettings::StaticClass, TEXT("UPCGExBlendOpFactoryProviderSettings"), &Z_Registration_Info_UClass_UPCGExBlendOpFactoryProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBlendOpFactoryProviderSettings), 3640642619U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExBlendOpFactoryProvider_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExBlendOpFactoryProvider_h__Script_PCGExtendedToolkit_3718963448{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExBlendOpFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExBlendOpFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExBlendOpFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExBlendOpFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExBlendOpFactoryProvider_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Blending_PCGExBlendOpFactoryProvider_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
