// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Filters/PCGExDotFilter.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "PCGExCompare.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDotFilter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDotFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDotFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDotFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDotFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDotComparisonDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDotFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExDotFilterConfig *********************************************
struct Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDotFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDotFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDotFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandA_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Vector operand A */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDotFilter.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Vector operand A" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransformOperandA_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Transform OperandA with the local point' transform */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDotFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Transform OperandA with the local point' transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertOperandA_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Invert" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDotFilter.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompareAgainst_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of OperandB */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDotFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of OperandB" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandB_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for computing the dot product */" },
		{ "DisplayName", "Operand B (Attr)" },
		{ "EditCondition", "CompareAgainst != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDotFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for computing the dot product" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertOperandB_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Invert" },
		{ "EditCondition", "CompareAgainst != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDotFilter.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperandBConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for computing the dot product. */" },
		{ "DisplayName", "Operand B" },
		{ "EditCondition", "CompareAgainst == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDotFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for computing the dot product." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransformOperandB_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Transform OperandB with the local point' transform */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDotFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Transform OperandB with the local point' transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DotComparisonDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Dot comparison settings */" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDotFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Dot comparison settings" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDotFilterConfig constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandA;
	static void NewProp_bTransformOperandA_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformOperandA;
	static void NewProp_bInvertOperandA_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertOperandA;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompareAgainst_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompareAgainst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandB;
	static void NewProp_bInvertOperandB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertOperandB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperandBConstant;
	static void NewProp_bTransformOperandB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformOperandB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DotComparisonDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExDotFilterConfig constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDotFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDotFilterConfig;
class UScriptStruct* FPCGExDotFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDotFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDotFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDotFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDotFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDotFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExDotFilterConfig Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_OperandA = { "OperandA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDotFilterConfig, OperandA), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandA_MetaData), NewProp_OperandA_MetaData) }; // 3844583698
void Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_bTransformOperandA_SetBit(void* Obj)
{
	((FPCGExDotFilterConfig*)Obj)->bTransformOperandA = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_bTransformOperandA = { "bTransformOperandA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExDotFilterConfig), &Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_bTransformOperandA_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransformOperandA_MetaData), NewProp_bTransformOperandA_MetaData) };
void Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_bInvertOperandA_SetBit(void* Obj)
{
	((FPCGExDotFilterConfig*)Obj)->bInvertOperandA = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_bInvertOperandA = { "bInvertOperandA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExDotFilterConfig), &Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_bInvertOperandA_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertOperandA_MetaData), NewProp_bInvertOperandA_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_CompareAgainst_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_CompareAgainst = { "CompareAgainst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDotFilterConfig, CompareAgainst), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompareAgainst_MetaData), NewProp_CompareAgainst_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_OperandB = { "OperandB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDotFilterConfig, OperandB), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandB_MetaData), NewProp_OperandB_MetaData) }; // 3844583698
void Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_bInvertOperandB_SetBit(void* Obj)
{
	((FPCGExDotFilterConfig*)Obj)->bInvertOperandB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_bInvertOperandB = { "bInvertOperandB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExDotFilterConfig), &Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_bInvertOperandB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertOperandB_MetaData), NewProp_bInvertOperandB_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_OperandBConstant = { "OperandBConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDotFilterConfig, OperandBConstant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperandBConstant_MetaData), NewProp_OperandBConstant_MetaData) };
void Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_bTransformOperandB_SetBit(void* Obj)
{
	((FPCGExDotFilterConfig*)Obj)->bTransformOperandB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_bTransformOperandB = { "bTransformOperandB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExDotFilterConfig), &Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_bTransformOperandB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransformOperandB_MetaData), NewProp_bTransformOperandB_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_DotComparisonDetails = { "DotComparisonDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExDotFilterConfig, DotComparisonDetails), Z_Construct_UScriptStruct_FPCGExDotComparisonDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DotComparisonDetails_MetaData), NewProp_DotComparisonDetails_MetaData) }; // 1550145757
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_OperandA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_bTransformOperandA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_bInvertOperandA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_CompareAgainst_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_CompareAgainst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_OperandB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_bInvertOperandB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_OperandBConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_bTransformOperandB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewProp_DotComparisonDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExDotFilterConfig Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExDotFilterConfig",
	Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::PropPointers),
	sizeof(FPCGExDotFilterConfig),
	alignof(FPCGExDotFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDotFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDotFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDotFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDotFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDotFilterConfig ***********************************************

// ********** Begin Class UPCGExDotFilterFactory ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExDotFilterFactory;
UClass* UPCGExDotFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExDotFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExDotFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExDotFilterFactory"),
			Z_Registration_Info_UClass_UPCGExDotFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExDotFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExDotFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExDotFilterFactory_NoRegister()
{
	return UPCGExDotFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExDotFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/Filters/PCGExDotFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDotFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDotFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExDotFilterFactory constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExDotFilterFactory constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExDotFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExDotFilterFactory_Statics

// ********** Begin Class UPCGExDotFilterFactory Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExDotFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDotFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExDotFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1165847161
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExDotFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDotFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDotFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExDotFilterFactory Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UPCGExDotFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDotFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExDotFilterFactory_Statics::ClassParams = {
	&UPCGExDotFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExDotFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDotFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDotFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExDotFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExDotFilterFactory::StaticRegisterNativesUPCGExDotFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExDotFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExDotFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExDotFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExDotFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExDotFilterFactory.OuterSingleton;
}
UPCGExDotFilterFactory::UPCGExDotFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExDotFilterFactory);
UPCGExDotFilterFactory::~UPCGExDotFilterFactory() {}
// ********** End Class UPCGExDotFilterFactory *****************************************************

// ********** Begin Class UPCGExDotFilterProviderSettings ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExDotFilterProviderSettings;
UClass* UPCGExDotFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExDotFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExDotFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExDotFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExDotFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExDotFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExDotFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExDotFilterProviderSettings_NoRegister()
{
	return UPCGExDotFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExDotFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Filter" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "///\n" },
		{ "IncludePath", "Misc/Filters/PCGExDotFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDotFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-points/math-checks/dot-product" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Misc/Filters/PCGExDotFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExDotFilterProviderSettings constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExDotFilterProviderSettings constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExDotFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExDotFilterProviderSettings_Statics

// ********** Begin Class UPCGExDotFilterProviderSettings Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExDotFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDotFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExDotFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1165847161
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExDotFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDotFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDotFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExDotFilterProviderSettings Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UPCGExDotFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDotFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExDotFilterProviderSettings_Statics::ClassParams = {
	&UPCGExDotFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExDotFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDotFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDotFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExDotFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExDotFilterProviderSettings::StaticRegisterNativesUPCGExDotFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExDotFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExDotFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExDotFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExDotFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExDotFilterProviderSettings.OuterSingleton;
}
UPCGExDotFilterProviderSettings::UPCGExDotFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExDotFilterProviderSettings);
UPCGExDotFilterProviderSettings::~UPCGExDotFilterProviderSettings() {}
// ********** End Class UPCGExDotFilterProviderSettings ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExDotFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExDotFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExDotFilterConfig_Statics::NewStructOps, TEXT("PCGExDotFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExDotFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDotFilterConfig), 1165847161U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExDotFilterFactory, UPCGExDotFilterFactory::StaticClass, TEXT("UPCGExDotFilterFactory"), &Z_Registration_Info_UClass_UPCGExDotFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExDotFilterFactory), 3330977621U) },
		{ Z_Construct_UClass_UPCGExDotFilterProviderSettings, UPCGExDotFilterProviderSettings::StaticClass, TEXT("UPCGExDotFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExDotFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExDotFilterProviderSettings), 2845689333U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExDotFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExDotFilter_h__Script_PCGExtendedToolkit_281676311{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExDotFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExDotFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExDotFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExDotFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
