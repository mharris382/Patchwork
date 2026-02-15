// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h"
#include "Graph/PCGExEdgeDirectionSettings.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "PCGExCompare.h"
#include "PCGExSorting.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExIsoEdgeDirectionFilter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDirectionCheckMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDotComparisonDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSortRuleConfig();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExIsoEdgeDirectionFilterConfig ********************************
struct Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExIsoEdgeDirectionFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExIsoEdgeDirectionFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Defines the direction in which points will be ordered to form the final paths. */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Defines the direction in which points will be ordered to form the final paths." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComparisonQuality_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of check; Note that Fast comparison ignores adjacency consolidation. */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Type of check; Note that Fast comparison ignores adjacency consolidation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompareAgainst_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Where to read the compared direction from. */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Where to read the compared direction from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for testing -- Will be translated to `double` under the hood. */" },
		{ "DisplayName", "Direction (Attr)" },
		{ "EditCondition", "CompareAgainst != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for testing -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Invert" },
		{ "EditCondition", "CompareAgainst != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Direction for computing the dot product against the edge's. */" },
		{ "DisplayName", "Direction" },
		{ "EditCondition", "CompareAgainst == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Direction for computing the dot product against the edge's." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransformDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Transform the reference direction with the local point' transform */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Transform the reference direction with the local point' transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DotComparisonDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Dot comparison settings */" },
		{ "EditCondition", "ComparisonQuality == EPCGExDirectionCheckMode::Dot" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Dot comparison settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HashComparisonDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Hash comparison settings */" },
		{ "EditCondition", "ComparisonQuality == EPCGExDirectionCheckMode::Hash" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Hash comparison settings" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExIsoEdgeDirectionFilterConfig constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonQuality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonQuality;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompareAgainst_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompareAgainst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static void NewProp_bInvertDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionConstant;
	static void NewProp_bTransformDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DotComparisonDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HashComparisonDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExIsoEdgeDirectionFilterConfig constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExIsoEdgeDirectionFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig;
class UScriptStruct* FPCGExIsoEdgeDirectionFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExIsoEdgeDirectionFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExIsoEdgeDirectionFilterConfig Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_DirectionSettings = { "DirectionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExIsoEdgeDirectionFilterConfig, DirectionSettings), Z_Construct_UScriptStruct_FPCGExEdgeDirectionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionSettings_MetaData), NewProp_DirectionSettings_MetaData) }; // 1520832441
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_ComparisonQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_ComparisonQuality = { "ComparisonQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExIsoEdgeDirectionFilterConfig, ComparisonQuality), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDirectionCheckMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComparisonQuality_MetaData), NewProp_ComparisonQuality_MetaData) }; // 3501249217
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_CompareAgainst_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_CompareAgainst = { "CompareAgainst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExIsoEdgeDirectionFilterConfig, CompareAgainst), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompareAgainst_MetaData), NewProp_CompareAgainst_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExIsoEdgeDirectionFilterConfig, Direction), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 3844583698
void Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_bInvertDirection_SetBit(void* Obj)
{
	((FPCGExIsoEdgeDirectionFilterConfig*)Obj)->bInvertDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_bInvertDirection = { "bInvertDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExIsoEdgeDirectionFilterConfig), &Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_bInvertDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertDirection_MetaData), NewProp_bInvertDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_DirectionConstant = { "DirectionConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExIsoEdgeDirectionFilterConfig, DirectionConstant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionConstant_MetaData), NewProp_DirectionConstant_MetaData) };
void Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_bTransformDirection_SetBit(void* Obj)
{
	((FPCGExIsoEdgeDirectionFilterConfig*)Obj)->bTransformDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_bTransformDirection = { "bTransformDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExIsoEdgeDirectionFilterConfig), &Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_bTransformDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransformDirection_MetaData), NewProp_bTransformDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_DotComparisonDetails = { "DotComparisonDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExIsoEdgeDirectionFilterConfig, DotComparisonDetails), Z_Construct_UScriptStruct_FPCGExDotComparisonDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DotComparisonDetails_MetaData), NewProp_DotComparisonDetails_MetaData) }; // 1550145757
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_HashComparisonDetails = { "HashComparisonDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExIsoEdgeDirectionFilterConfig, HashComparisonDetails), Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HashComparisonDetails_MetaData), NewProp_HashComparisonDetails_MetaData) }; // 1421576008
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_DirectionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_ComparisonQuality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_ComparisonQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_CompareAgainst_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_CompareAgainst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_bInvertDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_DirectionConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_bTransformDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_DotComparisonDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewProp_HashComparisonDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExIsoEdgeDirectionFilterConfig Property Definitions *************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExIsoEdgeDirectionFilterConfig",
	Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::PropPointers),
	sizeof(FPCGExIsoEdgeDirectionFilterConfig),
	alignof(FPCGExIsoEdgeDirectionFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExIsoEdgeDirectionFilterConfig **********************************

// ********** Begin Class UPCGExIsoEdgeDirectionFilterFactory **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExIsoEdgeDirectionFilterFactory;
UClass* UPCGExIsoEdgeDirectionFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExIsoEdgeDirectionFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExIsoEdgeDirectionFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExIsoEdgeDirectionFilterFactory"),
			Z_Registration_Info_UClass_UPCGExIsoEdgeDirectionFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExIsoEdgeDirectionFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExIsoEdgeDirectionFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_NoRegister()
{
	return UPCGExIsoEdgeDirectionFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeSortingRules_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExIsoEdgeDirectionFilterFactory constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeSortingRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EdgeSortingRules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExIsoEdgeDirectionFilterFactory constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExIsoEdgeDirectionFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_Statics

// ********** Begin Class UPCGExIsoEdgeDirectionFilterFactory Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExIsoEdgeDirectionFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2768352209
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_Statics::NewProp_EdgeSortingRules_Inner = { "EdgeSortingRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGExSortRuleConfig, METADATA_PARAMS(0, nullptr) }; // 3286425527
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_Statics::NewProp_EdgeSortingRules = { "EdgeSortingRules", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExIsoEdgeDirectionFilterFactory, EdgeSortingRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeSortingRules_MetaData), NewProp_EdgeSortingRules_MetaData) }; // 3286425527
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_Statics::NewProp_EdgeSortingRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_Statics::NewProp_EdgeSortingRules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExIsoEdgeDirectionFilterFactory Property Definitions *******************
UObject* (*const Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_Statics::ClassParams = {
	&UPCGExIsoEdgeDirectionFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExIsoEdgeDirectionFilterFactory::StaticRegisterNativesUPCGExIsoEdgeDirectionFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExIsoEdgeDirectionFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExIsoEdgeDirectionFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExIsoEdgeDirectionFilterFactory.OuterSingleton;
}
UPCGExIsoEdgeDirectionFilterFactory::UPCGExIsoEdgeDirectionFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExIsoEdgeDirectionFilterFactory);
UPCGExIsoEdgeDirectionFilterFactory::~UPCGExIsoEdgeDirectionFilterFactory() {}
// ********** End Class UPCGExIsoEdgeDirectionFilterFactory ****************************************

// ********** Begin Class UPCGExIsoEdgeDirectionFilterProviderSettings *****************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings;
UClass* UPCGExIsoEdgeDirectionFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExIsoEdgeDirectionFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExIsoEdgeDirectionFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExIsoEdgeDirectionFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings_NoRegister()
{
	return UPCGExIsoEdgeDirectionFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-edges/direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Test Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Edges/PCGExIsoEdgeDirectionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Test Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExIsoEdgeDirectionFilterProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExIsoEdgeDirectionFilterProviderSettings constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExIsoEdgeDirectionFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings_Statics

// ********** Begin Class UPCGExIsoEdgeDirectionFilterProviderSettings Property Definitions ********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExIsoEdgeDirectionFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2768352209
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExIsoEdgeDirectionFilterProviderSettings Property Definitions **********
UObject* (*const Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgeFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings_Statics::ClassParams = {
	&UPCGExIsoEdgeDirectionFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExIsoEdgeDirectionFilterProviderSettings::StaticRegisterNativesUPCGExIsoEdgeDirectionFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings.OuterSingleton;
}
UPCGExIsoEdgeDirectionFilterProviderSettings::UPCGExIsoEdgeDirectionFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExIsoEdgeDirectionFilterProviderSettings);
UPCGExIsoEdgeDirectionFilterProviderSettings::~UPCGExIsoEdgeDirectionFilterProviderSettings() {}
// ********** End Class UPCGExIsoEdgeDirectionFilterProviderSettings *******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExIsoEdgeDirectionFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExIsoEdgeDirectionFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig_Statics::NewStructOps, TEXT("PCGExIsoEdgeDirectionFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExIsoEdgeDirectionFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExIsoEdgeDirectionFilterConfig), 2768352209U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterFactory, UPCGExIsoEdgeDirectionFilterFactory::StaticClass, TEXT("UPCGExIsoEdgeDirectionFilterFactory"), &Z_Registration_Info_UClass_UPCGExIsoEdgeDirectionFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExIsoEdgeDirectionFilterFactory), 482439017U) },
		{ Z_Construct_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings, UPCGExIsoEdgeDirectionFilterProviderSettings::StaticClass, TEXT("UPCGExIsoEdgeDirectionFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExIsoEdgeDirectionFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExIsoEdgeDirectionFilterProviderSettings), 1448477653U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExIsoEdgeDirectionFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExIsoEdgeDirectionFilter_h__Script_PCGExtendedToolkit_2258907227{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExIsoEdgeDirectionFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExIsoEdgeDirectionFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExIsoEdgeDirectionFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Edges_PCGExIsoEdgeDirectionFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
