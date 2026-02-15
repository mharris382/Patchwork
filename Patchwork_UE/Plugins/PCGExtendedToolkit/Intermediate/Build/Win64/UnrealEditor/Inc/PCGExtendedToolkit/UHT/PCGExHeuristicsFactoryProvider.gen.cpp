// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h"
#include "Curves/CurveFloat.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExHeuristicsFactoryProvider() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoHeuristics();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoHeuristics **************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoHeuristics_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDataTypeInfoHeuristics); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDataTypeInfoHeuristics); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h" },
		{ "PCG_DataTypeDisplayName", "PCGEx | Heuristic" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDataTypeInfoHeuristics constinit property declarations ******
// ********** End ScriptStruct FPCGExDataTypeInfoHeuristics constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDataTypeInfoHeuristics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoHeuristics_Statics
static_assert(std::is_polymorphic<FPCGExDataTypeInfoHeuristics>() == std::is_polymorphic<FPCGExFactoryDataTypeInfo>(), "USTRUCT FPCGExDataTypeInfoHeuristics cannot be polymorphic unless super FPCGExFactoryDataTypeInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoHeuristics;
class UScriptStruct* FPCGExDataTypeInfoHeuristics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoHeuristics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoHeuristics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDataTypeInfoHeuristics, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDataTypeInfoHeuristics"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoHeuristics.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDataTypeInfoHeuristics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo,
	&NewStructOps,
	"PCGExDataTypeInfoHeuristics",
	nullptr,
	0,
	sizeof(FPCGExDataTypeInfoHeuristics),
	alignof(FPCGExDataTypeInfoHeuristics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDataTypeInfoHeuristics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDataTypeInfoHeuristics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoHeuristics()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoHeuristics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoHeuristics.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDataTypeInfoHeuristics_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoHeuristics.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDataTypeInfoHeuristics ****************************************

// ********** Begin ScriptStruct FPCGExHeuristicConfigBase *****************************************
struct Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExHeuristicConfigBase); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExHeuristicConfigBase); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRawSettings_MetaData[] = {
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightFactor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The weight factor for this heuristic.*/" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The weight factor for this heuristic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Invert the final heuristics score. */" },
		{ "DisplayPriority", "-1" },
		{ "EditCondition", "!bRawSettings" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Invert the final heuristics score." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to use in-editor curve or an external asset. */" },
		{ "DisplayPriority", "-1" },
		{ "EditCondition", "!bRawSettings" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to use in-editor curve or an external asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalScoreCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Curve the value will be remapped over. */" },
		{ "DisplayName", "Score Curve" },
		{ "DisplayPriority", "-1" },
		{ "EditCondition", "!bRawSettings && bUseLocalCurve" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Curve the value will be remapped over." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Curve the value will be remapped over. */" },
		{ "DisplayName", "Score Curve" },
		{ "DisplayPriority", "-1" },
		{ "EditCondition", "!bRawSettings && !bUseLocalCurve" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Curve the value will be remapped over." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalWeightMultiplier_MetaData[] = {
		{ "Category", "Settings|Local Weight" },
		{ "Comment", "/** Use a local attribute */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Use a local attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVWSeed_MetaData[] = {
		{ "Category", "Settings|Roaming" },
		{ "Comment", "/** Bound-relative seed position used when this heuristic is used in a \"roaming\" context */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Bound-relative seed position used when this heuristic is used in a \"roaming\" context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVWGoal_MetaData[] = {
		{ "Category", "Settings|Roaming" },
		{ "Comment", "/** Bound-relative goal position used when this heuristic is used in a \"roaming\" context */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Bound-relative goal position used when this heuristic is used in a \"roaming\" context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalWeightMultiplierSource_MetaData[] = {
		{ "Category", "Settings|Local Weight" },
		{ "Comment", "/** Local multiplier attribute source */" },
		{ "EditCondition", "bUseLocalWeightMultiplier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Local multiplier attribute source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMultiplierAttribute_MetaData[] = {
		{ "Category", "Settings|Local Weight" },
		{ "Comment", "/** Attribute to read multiplier value from. */" },
		{ "EditCondition", "bUseLocalWeightMultiplier" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to read multiplier value from." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExHeuristicConfigBase constinit property declarations *********
	static void NewProp_bRawSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRawSettings;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WeightFactor;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static void NewProp_bUseLocalCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalScoreCurve;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ScoreCurve;
	static void NewProp_bUseLocalWeightMultiplier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalWeightMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVWSeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVWGoal;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocalWeightMultiplierSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LocalWeightMultiplierSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeightMultiplierAttribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExHeuristicConfigBase constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExHeuristicConfigBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigBase;
class UScriptStruct* FPCGExHeuristicConfigBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExHeuristicConfigBase"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigBase.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExHeuristicConfigBase Property Definitions ********************
void Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_bRawSettings_SetBit(void* Obj)
{
	((FPCGExHeuristicConfigBase*)Obj)->bRawSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_bRawSettings = { "bRawSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExHeuristicConfigBase), &Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_bRawSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRawSettings_MetaData), NewProp_bRawSettings_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_WeightFactor = { "WeightFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicConfigBase, WeightFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightFactor_MetaData), NewProp_WeightFactor_MetaData) };
void Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FPCGExHeuristicConfigBase*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExHeuristicConfigBase), &Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
void Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_bUseLocalCurve_SetBit(void* Obj)
{
	((FPCGExHeuristicConfigBase*)Obj)->bUseLocalCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_bUseLocalCurve = { "bUseLocalCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExHeuristicConfigBase), &Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_bUseLocalCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocalCurve_MetaData), NewProp_bUseLocalCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_LocalScoreCurve = { "LocalScoreCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicConfigBase, LocalScoreCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalScoreCurve_MetaData), NewProp_LocalScoreCurve_MetaData) }; // 2560417949
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_ScoreCurve = { "ScoreCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicConfigBase, ScoreCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreCurve_MetaData), NewProp_ScoreCurve_MetaData) };
void Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_bUseLocalWeightMultiplier_SetBit(void* Obj)
{
	((FPCGExHeuristicConfigBase*)Obj)->bUseLocalWeightMultiplier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_bUseLocalWeightMultiplier = { "bUseLocalWeightMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExHeuristicConfigBase), &Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_bUseLocalWeightMultiplier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLocalWeightMultiplier_MetaData), NewProp_bUseLocalWeightMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_UVWSeed = { "UVWSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicConfigBase, UVWSeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVWSeed_MetaData), NewProp_UVWSeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_UVWGoal = { "UVWGoal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicConfigBase, UVWGoal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVWGoal_MetaData), NewProp_UVWGoal_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_LocalWeightMultiplierSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_LocalWeightMultiplierSource = { "LocalWeightMultiplierSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicConfigBase, LocalWeightMultiplierSource), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalWeightMultiplierSource_MetaData), NewProp_LocalWeightMultiplierSource_MetaData) }; // 1423364254
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_WeightMultiplierAttribute = { "WeightMultiplierAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicConfigBase, WeightMultiplierAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMultiplierAttribute_MetaData), NewProp_WeightMultiplierAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_bRawSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_WeightFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_bInvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_bUseLocalCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_LocalScoreCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_ScoreCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_bUseLocalWeightMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_UVWSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_UVWGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_LocalWeightMultiplierSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_LocalWeightMultiplierSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewProp_WeightMultiplierAttribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExHeuristicConfigBase Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExHeuristicConfigBase",
	Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::PropPointers),
	sizeof(FPCGExHeuristicConfigBase),
	alignof(FPCGExHeuristicConfigBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigBase.InnerSingleton, Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigBase.InnerSingleton);
}
// ********** End ScriptStruct FPCGExHeuristicConfigBase *******************************************

// ********** Begin Class UPCGExHeuristicsFactoryData **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExHeuristicsFactoryData;
UClass* UPCGExHeuristicsFactoryData::GetPrivateStaticClass()
{
	using TClass = UPCGExHeuristicsFactoryData;
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsFactoryData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExHeuristicsFactoryData"),
			Z_Registration_Info_UClass_UPCGExHeuristicsFactoryData.InnerSingleton,
			StaticRegisterNativesUPCGExHeuristicsFactoryData,
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
	return Z_Registration_Info_UClass_UPCGExHeuristicsFactoryData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryData_NoRegister()
{
	return UPCGExHeuristicsFactoryData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExHeuristicsFactoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExHeuristicsFactoryData constinit property declarations **************
// ********** End Class UPCGExHeuristicsFactoryData constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExHeuristicsFactoryData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExHeuristicsFactoryData_Statics
UObject* (*const Z_Construct_UClass_UPCGExHeuristicsFactoryData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExHeuristicsFactoryData_Statics::ClassParams = {
	&UPCGExHeuristicsFactoryData::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExHeuristicsFactoryData_Statics::Class_MetaDataParams)
};
void UPCGExHeuristicsFactoryData::StaticRegisterNativesUPCGExHeuristicsFactoryData()
{
}
UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryData()
{
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsFactoryData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExHeuristicsFactoryData.OuterSingleton, Z_Construct_UClass_UPCGExHeuristicsFactoryData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExHeuristicsFactoryData.OuterSingleton;
}
UPCGExHeuristicsFactoryData::UPCGExHeuristicsFactoryData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExHeuristicsFactoryData);
UPCGExHeuristicsFactoryData::~UPCGExHeuristicsFactoryData() {}
// ********** End Class UPCGExHeuristicsFactoryData ************************************************

// ********** Begin Class UPCGExHeuristicsFactoryProviderSettings **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExHeuristicsFactoryProviderSettings;
UClass* UPCGExHeuristicsFactoryProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExHeuristicsFactoryProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsFactoryProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExHeuristicsFactoryProviderSettings"),
			Z_Registration_Info_UClass_UPCGExHeuristicsFactoryProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExHeuristicsFactoryProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExHeuristicsFactoryProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings_NoRegister()
{
	return UPCGExHeuristicsFactoryProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicsFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExHeuristicsFactoryProviderSettings constinit property declarations **
// ********** End Class UPCGExHeuristicsFactoryProviderSettings constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExHeuristicsFactoryProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings_Statics
UObject* (*const Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings_Statics::ClassParams = {
	&UPCGExHeuristicsFactoryProviderSettings::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExHeuristicsFactoryProviderSettings::StaticRegisterNativesUPCGExHeuristicsFactoryProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsFactoryProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExHeuristicsFactoryProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExHeuristicsFactoryProviderSettings.OuterSingleton;
}
UPCGExHeuristicsFactoryProviderSettings::UPCGExHeuristicsFactoryProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExHeuristicsFactoryProviderSettings);
UPCGExHeuristicsFactoryProviderSettings::~UPCGExHeuristicsFactoryProviderSettings() {}
// ********** End Class UPCGExHeuristicsFactoryProviderSettings ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExDataTypeInfoHeuristics::StaticStruct, Z_Construct_UScriptStruct_FPCGExDataTypeInfoHeuristics_Statics::NewStructOps, TEXT("PCGExDataTypeInfoHeuristics"),&Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoHeuristics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDataTypeInfoHeuristics), 3146173417U) },
		{ FPCGExHeuristicConfigBase::StaticStruct, Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase_Statics::NewStructOps, TEXT("PCGExHeuristicConfigBase"),&Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExHeuristicConfigBase), 275664527U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExHeuristicsFactoryData, UPCGExHeuristicsFactoryData::StaticClass, TEXT("UPCGExHeuristicsFactoryData"), &Z_Registration_Info_UClass_UPCGExHeuristicsFactoryData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExHeuristicsFactoryData), 1569835403U) },
		{ Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings, UPCGExHeuristicsFactoryProviderSettings::StaticClass, TEXT("UPCGExHeuristicsFactoryProviderSettings"), &Z_Registration_Info_UClass_UPCGExHeuristicsFactoryProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExHeuristicsFactoryProviderSettings), 1146103719U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h__Script_PCGExtendedToolkit_3853666630{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicsFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
