// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Filters/Edges/PCGExEdgeNeighborsCountFilter.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExEdgeNeighborsCountFilter() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgeThresholdMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExRefineEdgeThresholdMode *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExRefineEdgeThresholdMode;
static UEnum* EPCGExRefineEdgeThresholdMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExRefineEdgeThresholdMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExRefineEdgeThresholdMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgeThresholdMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExRefineEdgeThresholdMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExRefineEdgeThresholdMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRefineEdgeThresholdMode>()
{
	return EPCGExRefineEdgeThresholdMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgeThresholdMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Any.DisplayName", "Any Endpoint" },
		{ "Any.Name", "EPCGExRefineEdgeThresholdMode::Any" },
		{ "Any.Tooltip", "At least one endpoint adjacency count must pass the comparison against the specified threshold" },
		{ "Both.DisplayName", "Both Endpoints" },
		{ "Both.Name", "EPCGExRefineEdgeThresholdMode::Both" },
		{ "Both.Tooltip", "Both endpoint adjacency count must individually pass the comparison against the specified threshold" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeNeighborsCountFilter.h" },
		{ "Sum.DisplayName", "Sum" },
		{ "Sum.Name", "EPCGExRefineEdgeThresholdMode::Sum" },
		{ "Sum.Tooltip", "The sum of adjacencies will be compared against the specified threshold" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExRefineEdgeThresholdMode::Sum", (int64)EPCGExRefineEdgeThresholdMode::Sum },
		{ "EPCGExRefineEdgeThresholdMode::Any", (int64)EPCGExRefineEdgeThresholdMode::Any },
		{ "EPCGExRefineEdgeThresholdMode::Both", (int64)EPCGExRefineEdgeThresholdMode::Both },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgeThresholdMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgeThresholdMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExRefineEdgeThresholdMode",
	"EPCGExRefineEdgeThresholdMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgeThresholdMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgeThresholdMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgeThresholdMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgeThresholdMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgeThresholdMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExRefineEdgeThresholdMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExRefineEdgeThresholdMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgeThresholdMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExRefineEdgeThresholdMode.InnerSingleton;
}
// ********** End Enum EPCGExRefineEdgeThresholdMode ***********************************************

// ********** Begin ScriptStruct FPCGExEdgeNeighborsCountFilterConfig ******************************
struct Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExEdgeNeighborsCountFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExEdgeNeighborsCountFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeNeighborsCountFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to read the threshold from an attribute on the edge or a constant. */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeNeighborsCountFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to read the threshold from an attribute on the edge or a constant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to fetch threshold from */" },
		{ "DisplayName", "Threshold (Attr)" },
		{ "EditCondition", "ThresholdInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeNeighborsCountFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to fetch threshold from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of connection endpoints must have to be considered a Bridge. */" },
		{ "DisplayName", "Threshold" },
		{ "EditCondition", "ThresholdInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeNeighborsCountFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The number of connection endpoints must have to be considered a Bridge." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How should we check if the threshold is reached. */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeNeighborsCountFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How should we check if the threshold is reached." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Comparison check */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeNeighborsCountFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Comparison check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Rounding mode for approx. comparison modes */" },
		{ "EditCondition", "Comparison == EPCGExComparison::NearlyEqual || Comparison == EPCGExComparison::NearlyNotEqual" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeNeighborsCountFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Rounding mode for approx. comparison modes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeNeighborsCountFilter.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExEdgeNeighborsCountFilterConfig constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThresholdInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThresholdInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThresholdAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ThresholdConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Tolerance;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExEdgeNeighborsCountFilterConfig constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExEdgeNeighborsCountFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig;
class UScriptStruct* FPCGExEdgeNeighborsCountFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExEdgeNeighborsCountFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExEdgeNeighborsCountFilterConfig Property Definitions *********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_ThresholdInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_ThresholdInput = { "ThresholdInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeNeighborsCountFilterConfig, ThresholdInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdInput_MetaData), NewProp_ThresholdInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_ThresholdAttribute = { "ThresholdAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeNeighborsCountFilterConfig, ThresholdAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdAttribute_MetaData), NewProp_ThresholdAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_ThresholdConstant = { "ThresholdConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeNeighborsCountFilterConfig, ThresholdConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThresholdConstant_MetaData), NewProp_ThresholdConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeNeighborsCountFilterConfig, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRefineEdgeThresholdMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3021454084
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeNeighborsCountFilterConfig, Comparison), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExComparison, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comparison_MetaData), NewProp_Comparison_MetaData) }; // 703604353
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeNeighborsCountFilterConfig, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
void Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExEdgeNeighborsCountFilterConfig*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExEdgeNeighborsCountFilterConfig), &Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_ThresholdInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_ThresholdInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_ThresholdAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_ThresholdConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_Comparison_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_Comparison,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExEdgeNeighborsCountFilterConfig Property Definitions ***********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExEdgeNeighborsCountFilterConfig",
	Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::PropPointers),
	sizeof(FPCGExEdgeNeighborsCountFilterConfig),
	alignof(FPCGExEdgeNeighborsCountFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExEdgeNeighborsCountFilterConfig ********************************

// ********** Begin Class UPCGExEdgeNeighborsCountFilterFactory ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeNeighborsCountFilterFactory;
UClass* UPCGExEdgeNeighborsCountFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeNeighborsCountFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExEdgeNeighborsCountFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeNeighborsCountFilterFactory"),
			Z_Registration_Info_UClass_UPCGExEdgeNeighborsCountFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeNeighborsCountFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExEdgeNeighborsCountFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory_NoRegister()
{
	return UPCGExEdgeNeighborsCountFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Filters/Edges/PCGExEdgeNeighborsCountFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeNeighborsCountFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeNeighborsCountFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeNeighborsCountFilterFactory constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExEdgeNeighborsCountFilterFactory constinit property declarations ******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeNeighborsCountFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory_Statics

// ********** Begin Class UPCGExEdgeNeighborsCountFilterFactory Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeNeighborsCountFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 496821137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExEdgeNeighborsCountFilterFactory Property Definitions *****************
UObject* (*const Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory_Statics::ClassParams = {
	&UPCGExEdgeNeighborsCountFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExEdgeNeighborsCountFilterFactory::StaticRegisterNativesUPCGExEdgeNeighborsCountFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeNeighborsCountFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeNeighborsCountFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeNeighborsCountFilterFactory.OuterSingleton;
}
UPCGExEdgeNeighborsCountFilterFactory::UPCGExEdgeNeighborsCountFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeNeighborsCountFilterFactory);
UPCGExEdgeNeighborsCountFilterFactory::~UPCGExEdgeNeighborsCountFilterFactory() {}
// ********** End Class UPCGExEdgeNeighborsCountFilterFactory **************************************

// ********** Begin Class UPCGExEdgeNeighborsCountFilterProviderSettings ***************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings;
UClass* UPCGExEdgeNeighborsCountFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExEdgeNeighborsCountFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExEdgeNeighborsCountFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExEdgeNeighborsCountFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings_NoRegister()
{
	return UPCGExEdgeNeighborsCountFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Outputs a single GraphParam to be consumed by other nodes */" },
		{ "IncludePath", "Graph/Filters/Edges/PCGExEdgeNeighborsCountFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeNeighborsCountFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-edges/neighbors-count" },
		{ "ToolTip", "Outputs a single GraphParam to be consumed by other nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Test Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExEdgeNeighborsCountFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Test Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExEdgeNeighborsCountFilterProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExEdgeNeighborsCountFilterProviderSettings constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExEdgeNeighborsCountFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings_Statics

// ********** Begin Class UPCGExEdgeNeighborsCountFilterProviderSettings Property Definitions ******
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExEdgeNeighborsCountFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 496821137
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExEdgeNeighborsCountFilterProviderSettings Property Definitions ********
UObject* (*const Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings_Statics::ClassParams = {
	&UPCGExEdgeNeighborsCountFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExEdgeNeighborsCountFilterProviderSettings::StaticRegisterNativesUPCGExEdgeNeighborsCountFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings.OuterSingleton;
}
UPCGExEdgeNeighborsCountFilterProviderSettings::UPCGExEdgeNeighborsCountFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExEdgeNeighborsCountFilterProviderSettings);
UPCGExEdgeNeighborsCountFilterProviderSettings::~UPCGExEdgeNeighborsCountFilterProviderSettings() {}
// ********** End Class UPCGExEdgeNeighborsCountFilterProviderSettings *****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeNeighborsCountFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExRefineEdgeThresholdMode_StaticEnum, TEXT("EPCGExRefineEdgeThresholdMode"), &Z_Registration_Info_UEnum_EPCGExRefineEdgeThresholdMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3021454084U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExEdgeNeighborsCountFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig_Statics::NewStructOps, TEXT("PCGExEdgeNeighborsCountFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExEdgeNeighborsCountFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExEdgeNeighborsCountFilterConfig), 496821137U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterFactory, UPCGExEdgeNeighborsCountFilterFactory::StaticClass, TEXT("UPCGExEdgeNeighborsCountFilterFactory"), &Z_Registration_Info_UClass_UPCGExEdgeNeighborsCountFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeNeighborsCountFilterFactory), 2879552113U) },
		{ Z_Construct_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings, UPCGExEdgeNeighborsCountFilterProviderSettings::StaticClass, TEXT("UPCGExEdgeNeighborsCountFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExEdgeNeighborsCountFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExEdgeNeighborsCountFilterProviderSettings), 405878804U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeNeighborsCountFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeNeighborsCountFilter_h__Script_PCGExtendedToolkit_4125027848{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeNeighborsCountFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeNeighborsCountFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeNeighborsCountFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeNeighborsCountFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeNeighborsCountFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExEdgeNeighborsCountFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
