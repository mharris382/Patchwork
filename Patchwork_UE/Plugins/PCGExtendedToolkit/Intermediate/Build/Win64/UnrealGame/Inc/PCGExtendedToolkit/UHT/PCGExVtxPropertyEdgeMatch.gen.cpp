// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Properties/PCGExVtxPropertyEdgeMatch.h"
#include "Graph/Edges/Properties/PCGExVtxPropertyFactoryProvider.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "PCGExCompare.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExVtxPropertyEdgeMatch() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxPropertyProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyDirectionOrigin();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDotComparisonDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExEdgeMatchConfig *********************************************
struct Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExEdgeMatchConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExEdgeMatchConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyEdgeMatch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Direction orientation */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyEdgeMatch.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Direction orientation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Where to read the compared direction from. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyEdgeMatch.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Where to read the compared direction from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Direction for computing the dot product against the edge's. */" },
		{ "DisplayName", "Direction (Attr)" },
		{ "EditCondition", "DirectionInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyEdgeMatch.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Direction for computing the dot product against the edge's." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Invert" },
		{ "EditCondition", "DirectionInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyEdgeMatch.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Direction for computing the dot product against the edge's. */" },
		{ "DisplayName", "Direction" },
		{ "EditCondition", "DirectionInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyEdgeMatch.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Direction for computing the dot product against the edge's." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransformDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to transform the direction source by the vtx' transform */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyEdgeMatch.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to transform the direction source by the vtx' transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DotComparisonDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Dot comparison settings */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyEdgeMatch.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Dot comparison settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchingEdge_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Matching edge. */" },
		{ "DisplayName", "Output" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyEdgeMatch.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Matching edge." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExEdgeMatchConfig constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Origin_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DirectionInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DirectionInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static void NewProp_bInvertDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionConstant;
	static void NewProp_bTransformDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DotComparisonDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MatchingEdge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExEdgeMatchConfig constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExEdgeMatchConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExEdgeMatchConfig;
class UScriptStruct* FPCGExEdgeMatchConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeMatchConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExEdgeMatchConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExEdgeMatchConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExEdgeMatchConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExEdgeMatchConfig Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_Origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeMatchConfig, Origin), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyDirectionOrigin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) }; // 1941991347
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_DirectionInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_DirectionInput = { "DirectionInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeMatchConfig, DirectionInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionInput_MetaData), NewProp_DirectionInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeMatchConfig, Direction), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 3844583698
void Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_bInvertDirection_SetBit(void* Obj)
{
	((FPCGExEdgeMatchConfig*)Obj)->bInvertDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_bInvertDirection = { "bInvertDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExEdgeMatchConfig), &Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_bInvertDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertDirection_MetaData), NewProp_bInvertDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_DirectionConstant = { "DirectionConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeMatchConfig, DirectionConstant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionConstant_MetaData), NewProp_DirectionConstant_MetaData) };
void Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_bTransformDirection_SetBit(void* Obj)
{
	((FPCGExEdgeMatchConfig*)Obj)->bTransformDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_bTransformDirection = { "bTransformDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExEdgeMatchConfig), &Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_bTransformDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransformDirection_MetaData), NewProp_bTransformDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_DotComparisonDetails = { "DotComparisonDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeMatchConfig, DotComparisonDetails), Z_Construct_UScriptStruct_FPCGExDotComparisonDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DotComparisonDetails_MetaData), NewProp_DotComparisonDetails_MetaData) }; // 1550145757
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_MatchingEdge = { "MatchingEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExEdgeMatchConfig, MatchingEdge), Z_Construct_UScriptStruct_FPCGExEdgeOutputWithIndexSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchingEdge_MetaData), NewProp_MatchingEdge_MetaData) }; // 2378656728
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_Origin_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_DirectionInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_DirectionInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_bInvertDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_DirectionConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_bTransformDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_DotComparisonDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewProp_MatchingEdge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExEdgeMatchConfig Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExEdgeMatchConfig",
	Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::PropPointers),
	sizeof(FPCGExEdgeMatchConfig),
	alignof(FPCGExEdgeMatchConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExEdgeMatchConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExEdgeMatchConfig.InnerSingleton, Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExEdgeMatchConfig.InnerSingleton);
}
// ********** End ScriptStruct FPCGExEdgeMatchConfig ***********************************************

// ********** Begin Class UPCGExVtxPropertyEdgeMatchFactory ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExVtxPropertyEdgeMatchFactory;
UClass* UPCGExVtxPropertyEdgeMatchFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExVtxPropertyEdgeMatchFactory;
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertyEdgeMatchFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExVtxPropertyEdgeMatchFactory"),
			Z_Registration_Info_UClass_UPCGExVtxPropertyEdgeMatchFactory.InnerSingleton,
			StaticRegisterNativesUPCGExVtxPropertyEdgeMatchFactory,
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
	return Z_Registration_Info_UClass_UPCGExVtxPropertyEdgeMatchFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchFactory_NoRegister()
{
	return UPCGExVtxPropertyEdgeMatchFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Edges/Properties/PCGExVtxPropertyEdgeMatch.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyEdgeMatch.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExVtxPropertyEdgeMatchFactory constinit property declarations ********
// ********** End Class UPCGExVtxPropertyEdgeMatchFactory constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExVtxPropertyEdgeMatchFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExVtxPropertyFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchFactory_Statics::ClassParams = {
	&UPCGExVtxPropertyEdgeMatchFactory::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchFactory_Statics::Class_MetaDataParams)
};
void UPCGExVtxPropertyEdgeMatchFactory::StaticRegisterNativesUPCGExVtxPropertyEdgeMatchFactory()
{
}
UClass* Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertyEdgeMatchFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExVtxPropertyEdgeMatchFactory.OuterSingleton, Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExVtxPropertyEdgeMatchFactory.OuterSingleton;
}
UPCGExVtxPropertyEdgeMatchFactory::UPCGExVtxPropertyEdgeMatchFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExVtxPropertyEdgeMatchFactory);
UPCGExVtxPropertyEdgeMatchFactory::~UPCGExVtxPropertyEdgeMatchFactory() {}
// ********** End Class UPCGExVtxPropertyEdgeMatchFactory ******************************************

// ********** Begin Class UPCGExVtxPropertyEdgeMatchSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExVtxPropertyEdgeMatchSettings;
UClass* UPCGExVtxPropertyEdgeMatchSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExVtxPropertyEdgeMatchSettings;
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertyEdgeMatchSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExVtxPropertyEdgeMatchSettings"),
			Z_Registration_Info_UClass_UPCGExVtxPropertyEdgeMatchSettings.InnerSingleton,
			StaticRegisterNativesUPCGExVtxPropertyEdgeMatchSettings,
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
	return Z_Registration_Info_UClass_UPCGExVtxPropertyEdgeMatchSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings_NoRegister()
{
	return UPCGExVtxPropertyEdgeMatchSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|VtxProperty" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Edges/Properties/PCGExVtxPropertyEdgeMatch.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyEdgeMatch.h" },
		{ "PCGExNodeLibraryDoc", "clusters/metadata/vtx-properties/vtx-edge-match" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Direction Settings. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Properties/PCGExVtxPropertyEdgeMatch.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Direction Settings." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExVtxPropertyEdgeMatchSettings constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExVtxPropertyEdgeMatchSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExVtxPropertyEdgeMatchSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings_Statics

// ********** Begin Class UPCGExVtxPropertyEdgeMatchSettings Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExVtxPropertyEdgeMatchSettings, Config), Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2639329387
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExVtxPropertyEdgeMatchSettings Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExVtxPropertyProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings_Statics::ClassParams = {
	&UPCGExVtxPropertyEdgeMatchSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings_Statics::Class_MetaDataParams)
};
void UPCGExVtxPropertyEdgeMatchSettings::StaticRegisterNativesUPCGExVtxPropertyEdgeMatchSettings()
{
}
UClass* Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExVtxPropertyEdgeMatchSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExVtxPropertyEdgeMatchSettings.OuterSingleton, Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExVtxPropertyEdgeMatchSettings.OuterSingleton;
}
UPCGExVtxPropertyEdgeMatchSettings::UPCGExVtxPropertyEdgeMatchSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExVtxPropertyEdgeMatchSettings);
UPCGExVtxPropertyEdgeMatchSettings::~UPCGExVtxPropertyEdgeMatchSettings() {}
// ********** End Class UPCGExVtxPropertyEdgeMatchSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyEdgeMatch_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExEdgeMatchConfig::StaticStruct, Z_Construct_UScriptStruct_FPCGExEdgeMatchConfig_Statics::NewStructOps, TEXT("PCGExEdgeMatchConfig"),&Z_Registration_Info_UScriptStruct_FPCGExEdgeMatchConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExEdgeMatchConfig), 2639329387U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchFactory, UPCGExVtxPropertyEdgeMatchFactory::StaticClass, TEXT("UPCGExVtxPropertyEdgeMatchFactory"), &Z_Registration_Info_UClass_UPCGExVtxPropertyEdgeMatchFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExVtxPropertyEdgeMatchFactory), 356259396U) },
		{ Z_Construct_UClass_UPCGExVtxPropertyEdgeMatchSettings, UPCGExVtxPropertyEdgeMatchSettings::StaticClass, TEXT("UPCGExVtxPropertyEdgeMatchSettings"), &Z_Registration_Info_UClass_UPCGExVtxPropertyEdgeMatchSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExVtxPropertyEdgeMatchSettings), 1462110999U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyEdgeMatch_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyEdgeMatch_h__Script_PCGExtendedToolkit_319091488{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyEdgeMatch_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyEdgeMatch_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyEdgeMatch_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Properties_PCGExVtxPropertyEdgeMatch_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
