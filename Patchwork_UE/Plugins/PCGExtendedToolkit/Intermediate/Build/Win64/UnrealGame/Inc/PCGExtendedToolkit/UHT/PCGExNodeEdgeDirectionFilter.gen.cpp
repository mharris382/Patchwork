// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Filters/Nodes/PCGExNodeEdgeDirectionFilter.h"
#include "Graph/Filters/PCGExAdjacency.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "PCGExCompare.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExNodeEdgeDirectionFilter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeFilterFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxFilterProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyDirectionOrigin();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDirectionCheckMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAdjacencySettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDotComparisonDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExNodeEdgeDirectionFilterConfig *******************************
struct Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExNodeEdgeDirectionFilterConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExNodeEdgeDirectionFilterConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeDirectionFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComparisonQuality_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of check; Note that Fast comparison ignores adjacency consolidation. */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeDirectionFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Type of check; Note that Fast comparison ignores adjacency consolidation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Adjacency_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Adjacency Settings */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeDirectionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Adjacency Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionOrder_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Direction orientation */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeDirectionFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Direction orientation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompareAgainst_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Where to read the compared direction from. */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeDirectionFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Where to read the compared direction from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Operand B for testing -- Will be translated to `double` under the hood. */" },
		{ "DisplayName", "Direction (Attr)" },
		{ "EditCondition", "CompareAgainst != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeDirectionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Operand B for testing -- Will be translated to `double` under the hood." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Invert" },
		{ "EditCondition", "CompareAgainst != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeDirectionFilter.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Direction for computing the dot product against the edge's. */" },
		{ "DisplayName", "Direction" },
		{ "EditCondition", "CompareAgainst == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeDirectionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Direction for computing the dot product against the edge's." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransformDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Transform the reference direction with the local point' transform */" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeDirectionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Transform the reference direction with the local point' transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DotComparisonDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Dot comparison settings */" },
		{ "EditCondition", "ComparisonQuality == EPCGExDirectionCheckMode::Dot" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeDirectionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Dot comparison settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HashComparisonDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Hash comparison settings */" },
		{ "EditCondition", "ComparisonQuality == EPCGExDirectionCheckMode::Hash" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeDirectionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Hash comparison settings" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExNodeEdgeDirectionFilterConfig constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonQuality_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonQuality;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Adjacency;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DirectionOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionOrder;
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
// ********** End ScriptStruct FPCGExNodeEdgeDirectionFilterConfig constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExNodeEdgeDirectionFilterConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig;
class UScriptStruct* FPCGExNodeEdgeDirectionFilterConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExNodeEdgeDirectionFilterConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExNodeEdgeDirectionFilterConfig Property Definitions **********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_ComparisonQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_ComparisonQuality = { "ComparisonQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeEdgeDirectionFilterConfig, ComparisonQuality), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDirectionCheckMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComparisonQuality_MetaData), NewProp_ComparisonQuality_MetaData) }; // 3501249217
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_Adjacency = { "Adjacency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeEdgeDirectionFilterConfig, Adjacency), Z_Construct_UScriptStruct_FPCGExAdjacencySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Adjacency_MetaData), NewProp_Adjacency_MetaData) }; // 3816161896
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_DirectionOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_DirectionOrder = { "DirectionOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeEdgeDirectionFilterConfig, DirectionOrder), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyDirectionOrigin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionOrder_MetaData), NewProp_DirectionOrder_MetaData) }; // 1941991347
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_CompareAgainst_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_CompareAgainst = { "CompareAgainst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeEdgeDirectionFilterConfig, CompareAgainst), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompareAgainst_MetaData), NewProp_CompareAgainst_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeEdgeDirectionFilterConfig, Direction), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 3844583698
void Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_bInvertDirection_SetBit(void* Obj)
{
	((FPCGExNodeEdgeDirectionFilterConfig*)Obj)->bInvertDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_bInvertDirection = { "bInvertDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExNodeEdgeDirectionFilterConfig), &Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_bInvertDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertDirection_MetaData), NewProp_bInvertDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_DirectionConstant = { "DirectionConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeEdgeDirectionFilterConfig, DirectionConstant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionConstant_MetaData), NewProp_DirectionConstant_MetaData) };
void Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_bTransformDirection_SetBit(void* Obj)
{
	((FPCGExNodeEdgeDirectionFilterConfig*)Obj)->bTransformDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_bTransformDirection = { "bTransformDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExNodeEdgeDirectionFilterConfig), &Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_bTransformDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransformDirection_MetaData), NewProp_bTransformDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_DotComparisonDetails = { "DotComparisonDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeEdgeDirectionFilterConfig, DotComparisonDetails), Z_Construct_UScriptStruct_FPCGExDotComparisonDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DotComparisonDetails_MetaData), NewProp_DotComparisonDetails_MetaData) }; // 1550145757
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_HashComparisonDetails = { "HashComparisonDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExNodeEdgeDirectionFilterConfig, HashComparisonDetails), Z_Construct_UScriptStruct_FPCGExVectorHashComparisonDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HashComparisonDetails_MetaData), NewProp_HashComparisonDetails_MetaData) }; // 1421576008
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_ComparisonQuality_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_ComparisonQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_Adjacency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_DirectionOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_DirectionOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_CompareAgainst_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_CompareAgainst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_bInvertDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_DirectionConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_bTransformDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_DotComparisonDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewProp_HashComparisonDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExNodeEdgeDirectionFilterConfig Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExNodeEdgeDirectionFilterConfig",
	Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::PropPointers),
	sizeof(FPCGExNodeEdgeDirectionFilterConfig),
	alignof(FPCGExNodeEdgeDirectionFilterConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExNodeEdgeDirectionFilterConfig *********************************

// ********** Begin Class UPCGExNodeEdgeDirectionFilterFactory *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNodeEdgeDirectionFilterFactory;
UClass* UPCGExNodeEdgeDirectionFilterFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExNodeEdgeDirectionFilterFactory;
	if (!Z_Registration_Info_UClass_UPCGExNodeEdgeDirectionFilterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNodeEdgeDirectionFilterFactory"),
			Z_Registration_Info_UClass_UPCGExNodeEdgeDirectionFilterFactory.InnerSingleton,
			StaticRegisterNativesUPCGExNodeEdgeDirectionFilterFactory,
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
	return Z_Registration_Info_UClass_UPCGExNodeEdgeDirectionFilterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory_NoRegister()
{
	return UPCGExNodeEdgeDirectionFilterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Filters/Nodes/PCGExNodeEdgeDirectionFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeDirectionFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeDirectionFilter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNodeEdgeDirectionFilterFactory constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNodeEdgeDirectionFilterFactory constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNodeEdgeDirectionFilterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory_Statics

// ********** Begin Class UPCGExNodeEdgeDirectionFilterFactory Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNodeEdgeDirectionFilterFactory, Config), Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1507689270
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNodeEdgeDirectionFilterFactory Property Definitions ******************
UObject* (*const Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExNodeFilterFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory_Statics::ClassParams = {
	&UPCGExNodeEdgeDirectionFilterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory_Statics::Class_MetaDataParams)
};
void UPCGExNodeEdgeDirectionFilterFactory::StaticRegisterNativesUPCGExNodeEdgeDirectionFilterFactory()
{
}
UClass* Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExNodeEdgeDirectionFilterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNodeEdgeDirectionFilterFactory.OuterSingleton, Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNodeEdgeDirectionFilterFactory.OuterSingleton;
}
UPCGExNodeEdgeDirectionFilterFactory::UPCGExNodeEdgeDirectionFilterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNodeEdgeDirectionFilterFactory);
UPCGExNodeEdgeDirectionFilterFactory::~UPCGExNodeEdgeDirectionFilterFactory() {}
// ********** End Class UPCGExNodeEdgeDirectionFilterFactory ***************************************

// ********** Begin Class UPCGExNodeEdgeDirectionFilterProviderSettings ****************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings;
UClass* UPCGExNodeEdgeDirectionFilterProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExNodeEdgeDirectionFilterProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExNodeEdgeDirectionFilterProviderSettings"),
			Z_Registration_Info_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExNodeEdgeDirectionFilterProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings_NoRegister()
{
	return UPCGExNodeEdgeDirectionFilterProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Filters/Nodes/PCGExNodeEdgeDirectionFilter.h" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeDirectionFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/filters-vtx-nodes/edge-direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Test Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Filters/Nodes/PCGExNodeEdgeDirectionFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Test Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExNodeEdgeDirectionFilterProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExNodeEdgeDirectionFilterProviderSettings constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExNodeEdgeDirectionFilterProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings_Statics

// ********** Begin Class UPCGExNodeEdgeDirectionFilterProviderSettings Property Definitions *******
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExNodeEdgeDirectionFilterProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1507689270
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExNodeEdgeDirectionFilterProviderSettings Property Definitions *********
UObject* (*const Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExVtxFilterProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings_Statics::ClassParams = {
	&UPCGExNodeEdgeDirectionFilterProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExNodeEdgeDirectionFilterProviderSettings::StaticRegisterNativesUPCGExNodeEdgeDirectionFilterProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings.OuterSingleton;
}
UPCGExNodeEdgeDirectionFilterProviderSettings::UPCGExNodeEdgeDirectionFilterProviderSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExNodeEdgeDirectionFilterProviderSettings);
UPCGExNodeEdgeDirectionFilterProviderSettings::~UPCGExNodeEdgeDirectionFilterProviderSettings() {}
// ********** End Class UPCGExNodeEdgeDirectionFilterProviderSettings ******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeEdgeDirectionFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExNodeEdgeDirectionFilterConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig_Statics::NewStructOps, TEXT("PCGExNodeEdgeDirectionFilterConfig"),&Z_Registration_Info_UScriptStruct_FPCGExNodeEdgeDirectionFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExNodeEdgeDirectionFilterConfig), 1507689270U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterFactory, UPCGExNodeEdgeDirectionFilterFactory::StaticClass, TEXT("UPCGExNodeEdgeDirectionFilterFactory"), &Z_Registration_Info_UClass_UPCGExNodeEdgeDirectionFilterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNodeEdgeDirectionFilterFactory), 3961263451U) },
		{ Z_Construct_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings, UPCGExNodeEdgeDirectionFilterProviderSettings::StaticClass, TEXT("UPCGExNodeEdgeDirectionFilterProviderSettings"), &Z_Registration_Info_UClass_UPCGExNodeEdgeDirectionFilterProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExNodeEdgeDirectionFilterProviderSettings), 904605730U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeEdgeDirectionFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeEdgeDirectionFilter_h__Script_PCGExtendedToolkit_2345126400{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeEdgeDirectionFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeEdgeDirectionFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeEdgeDirectionFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_Nodes_PCGExNodeEdgeDirectionFilter_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
