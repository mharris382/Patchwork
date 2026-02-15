// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/Heuristics/PCGExHeuristicInertia.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExHeuristicInertia() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryInertia();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryInertia_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExHeuristicConfigInertia **************************************
struct Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExHeuristicConfigInertia); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExHeuristicConfigInertia); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicInertia.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Samples_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many previous edges should be averaged to compute the inertia. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicInertia.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "How many previous edges should be averaged to compute the inertia." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreIfNotEnoughSamples_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** If enabled, use fallback score if there is less samples than the specified number. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicInertia.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, use fallback score if there is less samples than the specified number." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalInertiaScore_MetaData[] = {
		{ "Category", "Settings|Fallbacks" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Value used for global score. Primarily used by A* Star to do initial sorting. */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicInertia.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Value used for global score. Primarily used by A* Star to do initial sorting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackInertiaScore_MetaData[] = {
		{ "Category", "Settings|Fallbacks" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fallback heuristic score for when no inertia value can be computed (no previous node). */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicInertia.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fallback heuristic score for when no inertia value can be computed (no previous node)." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExHeuristicConfigInertia constinit property declarations ******
	static const UECodeGen_Private::FIntPropertyParams NewProp_Samples;
	static void NewProp_bIgnoreIfNotEnoughSamples_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreIfNotEnoughSamples;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_GlobalInertiaScore;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FallbackInertiaScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExHeuristicConfigInertia constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExHeuristicConfigInertia>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics
static_assert(std::is_polymorphic<FPCGExHeuristicConfigInertia>() == std::is_polymorphic<FPCGExHeuristicConfigBase>(), "USTRUCT FPCGExHeuristicConfigInertia cannot be polymorphic unless super FPCGExHeuristicConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigInertia;
class UScriptStruct* FPCGExHeuristicConfigInertia::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigInertia.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigInertia.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExHeuristicConfigInertia"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigInertia.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExHeuristicConfigInertia Property Definitions *****************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::NewProp_Samples = { "Samples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicConfigInertia, Samples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Samples_MetaData), NewProp_Samples_MetaData) };
void Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::NewProp_bIgnoreIfNotEnoughSamples_SetBit(void* Obj)
{
	((FPCGExHeuristicConfigInertia*)Obj)->bIgnoreIfNotEnoughSamples = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::NewProp_bIgnoreIfNotEnoughSamples = { "bIgnoreIfNotEnoughSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExHeuristicConfigInertia), &Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::NewProp_bIgnoreIfNotEnoughSamples_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreIfNotEnoughSamples_MetaData), NewProp_bIgnoreIfNotEnoughSamples_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::NewProp_GlobalInertiaScore = { "GlobalInertiaScore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicConfigInertia, GlobalInertiaScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalInertiaScore_MetaData), NewProp_GlobalInertiaScore_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::NewProp_FallbackInertiaScore = { "FallbackInertiaScore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicConfigInertia, FallbackInertiaScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackInertiaScore_MetaData), NewProp_FallbackInertiaScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::NewProp_Samples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::NewProp_bIgnoreIfNotEnoughSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::NewProp_GlobalInertiaScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::NewProp_FallbackInertiaScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExHeuristicConfigInertia Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase,
	&NewStructOps,
	"PCGExHeuristicConfigInertia",
	Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::PropPointers),
	sizeof(FPCGExHeuristicConfigInertia),
	alignof(FPCGExHeuristicConfigInertia),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigInertia.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigInertia.InnerSingleton, Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigInertia.InnerSingleton);
}
// ********** End ScriptStruct FPCGExHeuristicConfigInertia ****************************************

// ********** Begin Class UPCGExHeuristicsFactoryInertia *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExHeuristicsFactoryInertia;
UClass* UPCGExHeuristicsFactoryInertia::GetPrivateStaticClass()
{
	using TClass = UPCGExHeuristicsFactoryInertia;
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsFactoryInertia.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExHeuristicsFactoryInertia"),
			Z_Registration_Info_UClass_UPCGExHeuristicsFactoryInertia.InnerSingleton,
			StaticRegisterNativesUPCGExHeuristicsFactoryInertia,
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
	return Z_Registration_Info_UClass_UPCGExHeuristicsFactoryInertia.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryInertia_NoRegister()
{
	return UPCGExHeuristicsFactoryInertia::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExHeuristicsFactoryInertia_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "////\n" },
		{ "IncludePath", "Graph/Pathfinding/Heuristics/PCGExHeuristicInertia.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicInertia.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicInertia.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExHeuristicsFactoryInertia constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExHeuristicsFactoryInertia constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExHeuristicsFactoryInertia>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExHeuristicsFactoryInertia_Statics

// ********** Begin Class UPCGExHeuristicsFactoryInertia Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExHeuristicsFactoryInertia_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExHeuristicsFactoryInertia, Config), Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1080448018
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExHeuristicsFactoryInertia_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExHeuristicsFactoryInertia_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryInertia_Statics::PropPointers) < 2048);
// ********** End Class UPCGExHeuristicsFactoryInertia Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExHeuristicsFactoryInertia_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExHeuristicsFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryInertia_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExHeuristicsFactoryInertia_Statics::ClassParams = {
	&UPCGExHeuristicsFactoryInertia::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExHeuristicsFactoryInertia_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryInertia_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryInertia_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExHeuristicsFactoryInertia_Statics::Class_MetaDataParams)
};
void UPCGExHeuristicsFactoryInertia::StaticRegisterNativesUPCGExHeuristicsFactoryInertia()
{
}
UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryInertia()
{
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsFactoryInertia.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExHeuristicsFactoryInertia.OuterSingleton, Z_Construct_UClass_UPCGExHeuristicsFactoryInertia_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExHeuristicsFactoryInertia.OuterSingleton;
}
UPCGExHeuristicsFactoryInertia::UPCGExHeuristicsFactoryInertia(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExHeuristicsFactoryInertia);
UPCGExHeuristicsFactoryInertia::~UPCGExHeuristicsFactoryInertia() {}
// ********** End Class UPCGExHeuristicsFactoryInertia *********************************************

// ********** Begin Class UPCGExHeuristicsInertiaProviderSettings **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExHeuristicsInertiaProviderSettings;
UClass* UPCGExHeuristicsInertiaProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExHeuristicsInertiaProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsInertiaProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExHeuristicsInertiaProviderSettings"),
			Z_Registration_Info_UClass_UPCGExHeuristicsInertiaProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExHeuristicsInertiaProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExHeuristicsInertiaProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings_NoRegister()
{
	return UPCGExHeuristicsInertiaProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Pathfinding/Heuristics/PCGExHeuristicInertia.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicInertia.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/heuristics/hx-inertia" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicInertia.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExHeuristicsInertiaProviderSettings constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExHeuristicsInertiaProviderSettings constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExHeuristicsInertiaProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings_Statics

// ********** Begin Class UPCGExHeuristicsInertiaProviderSettings Property Definitions *************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExHeuristicsInertiaProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1080448018
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExHeuristicsInertiaProviderSettings Property Definitions ***************
UObject* (*const Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings_Statics::ClassParams = {
	&UPCGExHeuristicsInertiaProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExHeuristicsInertiaProviderSettings::StaticRegisterNativesUPCGExHeuristicsInertiaProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsInertiaProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExHeuristicsInertiaProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExHeuristicsInertiaProviderSettings.OuterSingleton;
}
UPCGExHeuristicsInertiaProviderSettings::UPCGExHeuristicsInertiaProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExHeuristicsInertiaProviderSettings);
UPCGExHeuristicsInertiaProviderSettings::~UPCGExHeuristicsInertiaProviderSettings() {}
// ********** End Class UPCGExHeuristicsInertiaProviderSettings ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicInertia_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExHeuristicConfigInertia::StaticStruct, Z_Construct_UScriptStruct_FPCGExHeuristicConfigInertia_Statics::NewStructOps, TEXT("PCGExHeuristicConfigInertia"),&Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigInertia, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExHeuristicConfigInertia), 1080448018U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExHeuristicsFactoryInertia, UPCGExHeuristicsFactoryInertia::StaticClass, TEXT("UPCGExHeuristicsFactoryInertia"), &Z_Registration_Info_UClass_UPCGExHeuristicsFactoryInertia, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExHeuristicsFactoryInertia), 3182273270U) },
		{ Z_Construct_UClass_UPCGExHeuristicsInertiaProviderSettings, UPCGExHeuristicsInertiaProviderSettings::StaticClass, TEXT("UPCGExHeuristicsInertiaProviderSettings"), &Z_Registration_Info_UClass_UPCGExHeuristicsInertiaProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExHeuristicsInertiaProviderSettings), 3770990029U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicInertia_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicInertia_h__Script_PCGExtendedToolkit_344456801{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicInertia_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicInertia_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicInertia_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicInertia_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
