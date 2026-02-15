// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/Heuristics/PCGExHeuristicSteepness.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExHeuristicSteepness() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactorySteepness();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactorySteepness_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExHeuristicConfigSteepness ************************************
struct Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExHeuristicConfigSteepness); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExHeuristicConfigSteepness); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicSteepness.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAccumulateScore_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicSteepness.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulationSamples_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many previous edges should be added to the current score. Use this when dealing with very smooth terrain to exacerbate steepness. */" },
		{ "EditCondition", "bAccumulateScore" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicSteepness.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How many previous edges should be added to the current score. Use this when dealing with very smooth terrain to exacerbate steepness." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpVector_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Vector pointing in the \"up\" direction. Mirrored. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicSteepness.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Vector pointing in the \"up\" direction. Mirrored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteSteepness_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When enabled, the overall steepness (whether toward or away the UpVector) determine the score. When disabled, the full range of the dot is used, with -1:1 remapped to 0:1 */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicSteepness.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "When enabled, the overall steepness (whether toward or away the UpVector) determine the score. When disabled, the full range of the dot is used, with -1:1 remapped to 0:1" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExHeuristicConfigSteepness constinit property declarations ****
	static void NewProp_bAccumulateScore_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccumulateScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AccumulationSamples;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpVector;
	static void NewProp_bAbsoluteSteepness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteSteepness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExHeuristicConfigSteepness constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExHeuristicConfigSteepness>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics
static_assert(std::is_polymorphic<FPCGExHeuristicConfigSteepness>() == std::is_polymorphic<FPCGExHeuristicConfigBase>(), "USTRUCT FPCGExHeuristicConfigSteepness cannot be polymorphic unless super FPCGExHeuristicConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigSteepness;
class UScriptStruct* FPCGExHeuristicConfigSteepness::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigSteepness.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigSteepness.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExHeuristicConfigSteepness"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigSteepness.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExHeuristicConfigSteepness Property Definitions ***************
void Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::NewProp_bAccumulateScore_SetBit(void* Obj)
{
	((FPCGExHeuristicConfigSteepness*)Obj)->bAccumulateScore = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::NewProp_bAccumulateScore = { "bAccumulateScore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExHeuristicConfigSteepness), &Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::NewProp_bAccumulateScore_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAccumulateScore_MetaData), NewProp_bAccumulateScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::NewProp_AccumulationSamples = { "AccumulationSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicConfigSteepness, AccumulationSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulationSamples_MetaData), NewProp_AccumulationSamples_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicConfigSteepness, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpVector_MetaData), NewProp_UpVector_MetaData) };
void Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::NewProp_bAbsoluteSteepness_SetBit(void* Obj)
{
	((FPCGExHeuristicConfigSteepness*)Obj)->bAbsoluteSteepness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::NewProp_bAbsoluteSteepness = { "bAbsoluteSteepness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExHeuristicConfigSteepness), &Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::NewProp_bAbsoluteSteepness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsoluteSteepness_MetaData), NewProp_bAbsoluteSteepness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::NewProp_bAccumulateScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::NewProp_AccumulationSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::NewProp_UpVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::NewProp_bAbsoluteSteepness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExHeuristicConfigSteepness Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase,
	&NewStructOps,
	"PCGExHeuristicConfigSteepness",
	Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::PropPointers),
	sizeof(FPCGExHeuristicConfigSteepness),
	alignof(FPCGExHeuristicConfigSteepness),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigSteepness.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigSteepness.InnerSingleton, Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigSteepness.InnerSingleton);
}
// ********** End ScriptStruct FPCGExHeuristicConfigSteepness **************************************

// ********** Begin Class UPCGExHeuristicsFactorySteepness *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExHeuristicsFactorySteepness;
UClass* UPCGExHeuristicsFactorySteepness::GetPrivateStaticClass()
{
	using TClass = UPCGExHeuristicsFactorySteepness;
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsFactorySteepness.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExHeuristicsFactorySteepness"),
			Z_Registration_Info_UClass_UPCGExHeuristicsFactorySteepness.InnerSingleton,
			StaticRegisterNativesUPCGExHeuristicsFactorySteepness,
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
	return Z_Registration_Info_UClass_UPCGExHeuristicsFactorySteepness.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExHeuristicsFactorySteepness_NoRegister()
{
	return UPCGExHeuristicsFactorySteepness::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExHeuristicsFactorySteepness_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Pathfinding/Heuristics/PCGExHeuristicSteepness.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicSteepness.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicSteepness.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExHeuristicsFactorySteepness constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExHeuristicsFactorySteepness constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExHeuristicsFactorySteepness>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExHeuristicsFactorySteepness_Statics

// ********** Begin Class UPCGExHeuristicsFactorySteepness Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExHeuristicsFactorySteepness_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExHeuristicsFactorySteepness, Config), Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2834425016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExHeuristicsFactorySteepness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExHeuristicsFactorySteepness_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactorySteepness_Statics::PropPointers) < 2048);
// ********** End Class UPCGExHeuristicsFactorySteepness Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExHeuristicsFactorySteepness_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExHeuristicsFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactorySteepness_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExHeuristicsFactorySteepness_Statics::ClassParams = {
	&UPCGExHeuristicsFactorySteepness::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExHeuristicsFactorySteepness_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactorySteepness_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactorySteepness_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExHeuristicsFactorySteepness_Statics::Class_MetaDataParams)
};
void UPCGExHeuristicsFactorySteepness::StaticRegisterNativesUPCGExHeuristicsFactorySteepness()
{
}
UClass* Z_Construct_UClass_UPCGExHeuristicsFactorySteepness()
{
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsFactorySteepness.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExHeuristicsFactorySteepness.OuterSingleton, Z_Construct_UClass_UPCGExHeuristicsFactorySteepness_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExHeuristicsFactorySteepness.OuterSingleton;
}
UPCGExHeuristicsFactorySteepness::UPCGExHeuristicsFactorySteepness(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExHeuristicsFactorySteepness);
UPCGExHeuristicsFactorySteepness::~UPCGExHeuristicsFactorySteepness() {}
// ********** End Class UPCGExHeuristicsFactorySteepness *******************************************

// ********** Begin Class UPCGExHeuristicsSteepnessProviderSettings ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExHeuristicsSteepnessProviderSettings;
UClass* UPCGExHeuristicsSteepnessProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExHeuristicsSteepnessProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsSteepnessProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExHeuristicsSteepnessProviderSettings"),
			Z_Registration_Info_UClass_UPCGExHeuristicsSteepnessProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExHeuristicsSteepnessProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExHeuristicsSteepnessProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings_NoRegister()
{
	return UPCGExHeuristicsSteepnessProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Pathfinding/Heuristics/PCGExHeuristicSteepness.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicSteepness.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/heuristics/hx-steepness" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicSteepness.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExHeuristicsSteepnessProviderSettings constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExHeuristicsSteepnessProviderSettings constinit property declarations **
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExHeuristicsSteepnessProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings_Statics

// ********** Begin Class UPCGExHeuristicsSteepnessProviderSettings Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExHeuristicsSteepnessProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2834425016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExHeuristicsSteepnessProviderSettings Property Definitions *************
UObject* (*const Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings_Statics::ClassParams = {
	&UPCGExHeuristicsSteepnessProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExHeuristicsSteepnessProviderSettings::StaticRegisterNativesUPCGExHeuristicsSteepnessProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsSteepnessProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExHeuristicsSteepnessProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExHeuristicsSteepnessProviderSettings.OuterSingleton;
}
UPCGExHeuristicsSteepnessProviderSettings::UPCGExHeuristicsSteepnessProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExHeuristicsSteepnessProviderSettings);
UPCGExHeuristicsSteepnessProviderSettings::~UPCGExHeuristicsSteepnessProviderSettings() {}
// ********** End Class UPCGExHeuristicsSteepnessProviderSettings **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicSteepness_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExHeuristicConfigSteepness::StaticStruct, Z_Construct_UScriptStruct_FPCGExHeuristicConfigSteepness_Statics::NewStructOps, TEXT("PCGExHeuristicConfigSteepness"),&Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigSteepness, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExHeuristicConfigSteepness), 2834425016U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExHeuristicsFactorySteepness, UPCGExHeuristicsFactorySteepness::StaticClass, TEXT("UPCGExHeuristicsFactorySteepness"), &Z_Registration_Info_UClass_UPCGExHeuristicsFactorySteepness, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExHeuristicsFactorySteepness), 459742464U) },
		{ Z_Construct_UClass_UPCGExHeuristicsSteepnessProviderSettings, UPCGExHeuristicsSteepnessProviderSettings::StaticClass, TEXT("UPCGExHeuristicsSteepnessProviderSettings"), &Z_Registration_Info_UClass_UPCGExHeuristicsSteepnessProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExHeuristicsSteepnessProviderSettings), 3071853469U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicSteepness_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicSteepness_h__Script_PCGExtendedToolkit_2385120388{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicSteepness_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicSteepness_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicSteepness_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicSteepness_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
