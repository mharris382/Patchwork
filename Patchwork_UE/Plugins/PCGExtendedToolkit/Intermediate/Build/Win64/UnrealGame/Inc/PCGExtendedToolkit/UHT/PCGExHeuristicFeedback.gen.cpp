// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/Heuristics/PCGExHeuristicFeedback.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExHeuristicFeedback() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExHeuristicConfigFeedback *************************************
struct Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExHeuristicConfigFeedback); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExHeuristicConfigFeedback); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBinary_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If enabled, weight doesn't scale with overlap; the base score is either 0 or 1. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicFeedback.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, weight doesn't scale with overlap; the base score is either 0 or 1." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisitedPointsWeightFactor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Weight to add to points that are already part of the plotted path. This is used to sample the weight curve.*/" },
		{ "EditCondition", "!bBinary" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicFeedback.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Weight to add to points that are already part of the plotted path. This is used to sample the weight curve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisitedEdgesWeightFactor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Weight to add to edges that are already part of the plotted path. This is used to sample the weight curve.*/" },
		{ "EditCondition", "!bBinary" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicFeedback.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Weight to add to edges that are already part of the plotted path. This is used to sample the weight curve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGlobalFeedback_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Global feedback weight persist between path query in a single pathfinding node.  IMPORTANT NOTE: This break parallelism, and may be slower.*/" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicFeedback.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Global feedback weight persist between path query in a single pathfinding node.  IMPORTANT NOTE: This break parallelism, and may be slower." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectAllConnectedEdges_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicFeedback.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExHeuristicConfigFeedback constinit property declarations *****
	static void NewProp_bBinary_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBinary;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_VisitedPointsWeightFactor;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_VisitedEdgesWeightFactor;
	static void NewProp_bGlobalFeedback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGlobalFeedback;
	static void NewProp_bAffectAllConnectedEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectAllConnectedEdges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExHeuristicConfigFeedback constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExHeuristicConfigFeedback>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics
static_assert(std::is_polymorphic<FPCGExHeuristicConfigFeedback>() == std::is_polymorphic<FPCGExHeuristicConfigBase>(), "USTRUCT FPCGExHeuristicConfigFeedback cannot be polymorphic unless super FPCGExHeuristicConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigFeedback;
class UScriptStruct* FPCGExHeuristicConfigFeedback::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigFeedback.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigFeedback.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExHeuristicConfigFeedback"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigFeedback.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExHeuristicConfigFeedback Property Definitions ****************
void Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::NewProp_bBinary_SetBit(void* Obj)
{
	((FPCGExHeuristicConfigFeedback*)Obj)->bBinary = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::NewProp_bBinary = { "bBinary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExHeuristicConfigFeedback), &Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::NewProp_bBinary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBinary_MetaData), NewProp_bBinary_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::NewProp_VisitedPointsWeightFactor = { "VisitedPointsWeightFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicConfigFeedback, VisitedPointsWeightFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisitedPointsWeightFactor_MetaData), NewProp_VisitedPointsWeightFactor_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::NewProp_VisitedEdgesWeightFactor = { "VisitedEdgesWeightFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExHeuristicConfigFeedback, VisitedEdgesWeightFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisitedEdgesWeightFactor_MetaData), NewProp_VisitedEdgesWeightFactor_MetaData) };
void Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::NewProp_bGlobalFeedback_SetBit(void* Obj)
{
	((FPCGExHeuristicConfigFeedback*)Obj)->bGlobalFeedback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::NewProp_bGlobalFeedback = { "bGlobalFeedback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExHeuristicConfigFeedback), &Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::NewProp_bGlobalFeedback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGlobalFeedback_MetaData), NewProp_bGlobalFeedback_MetaData) };
void Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::NewProp_bAffectAllConnectedEdges_SetBit(void* Obj)
{
	((FPCGExHeuristicConfigFeedback*)Obj)->bAffectAllConnectedEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::NewProp_bAffectAllConnectedEdges = { "bAffectAllConnectedEdges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExHeuristicConfigFeedback), &Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::NewProp_bAffectAllConnectedEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectAllConnectedEdges_MetaData), NewProp_bAffectAllConnectedEdges_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::NewProp_bBinary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::NewProp_VisitedPointsWeightFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::NewProp_VisitedEdgesWeightFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::NewProp_bGlobalFeedback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::NewProp_bAffectAllConnectedEdges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExHeuristicConfigFeedback Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExHeuristicConfigBase,
	&NewStructOps,
	"PCGExHeuristicConfigFeedback",
	Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::PropPointers),
	sizeof(FPCGExHeuristicConfigFeedback),
	alignof(FPCGExHeuristicConfigFeedback),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigFeedback.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigFeedback.InnerSingleton, Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigFeedback.InnerSingleton);
}
// ********** End ScriptStruct FPCGExHeuristicConfigFeedback ***************************************

// ********** Begin Class UPCGExHeuristicsFactoryFeedback ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExHeuristicsFactoryFeedback;
UClass* UPCGExHeuristicsFactoryFeedback::GetPrivateStaticClass()
{
	using TClass = UPCGExHeuristicsFactoryFeedback;
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsFactoryFeedback.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExHeuristicsFactoryFeedback"),
			Z_Registration_Info_UClass_UPCGExHeuristicsFactoryFeedback.InnerSingleton,
			StaticRegisterNativesUPCGExHeuristicsFactoryFeedback,
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
	return Z_Registration_Info_UClass_UPCGExHeuristicsFactoryFeedback.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback_NoRegister()
{
	return UPCGExHeuristicsFactoryFeedback::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "////\n" },
		{ "IncludePath", "Graph/Pathfinding/Heuristics/PCGExHeuristicFeedback.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicFeedback.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicFeedback.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExHeuristicsFactoryFeedback constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExHeuristicsFactoryFeedback constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExHeuristicsFactoryFeedback>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback_Statics

// ********** Begin Class UPCGExHeuristicsFactoryFeedback Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExHeuristicsFactoryFeedback, Config), Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4178988983
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback_Statics::PropPointers) < 2048);
// ********** End Class UPCGExHeuristicsFactoryFeedback Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExHeuristicsFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback_Statics::ClassParams = {
	&UPCGExHeuristicsFactoryFeedback::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback_Statics::Class_MetaDataParams)
};
void UPCGExHeuristicsFactoryFeedback::StaticRegisterNativesUPCGExHeuristicsFactoryFeedback()
{
}
UClass* Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback()
{
	if (!Z_Registration_Info_UClass_UPCGExHeuristicsFactoryFeedback.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExHeuristicsFactoryFeedback.OuterSingleton, Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExHeuristicsFactoryFeedback.OuterSingleton;
}
UPCGExHeuristicsFactoryFeedback::UPCGExHeuristicsFactoryFeedback(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExHeuristicsFactoryFeedback);
UPCGExHeuristicsFactoryFeedback::~UPCGExHeuristicsFactoryFeedback() {}
// ********** End Class UPCGExHeuristicsFactoryFeedback ********************************************

// ********** Begin Class UPCGExHeuristicFeedbackProviderSettings **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExHeuristicFeedbackProviderSettings;
UClass* UPCGExHeuristicFeedbackProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExHeuristicFeedbackProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExHeuristicFeedbackProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExHeuristicFeedbackProviderSettings"),
			Z_Registration_Info_UClass_UPCGExHeuristicFeedbackProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExHeuristicFeedbackProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExHeuristicFeedbackProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings_NoRegister()
{
	return UPCGExHeuristicFeedbackProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Pathfinding/Heuristics/PCGExHeuristicFeedback.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicFeedback.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/heuristics/hx-feedback" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/Heuristics/PCGExHeuristicFeedback.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExHeuristicFeedbackProviderSettings constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExHeuristicFeedbackProviderSettings constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExHeuristicFeedbackProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings_Statics

// ********** Begin Class UPCGExHeuristicFeedbackProviderSettings Property Definitions *************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExHeuristicFeedbackProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4178988983
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExHeuristicFeedbackProviderSettings Property Definitions ***************
UObject* (*const Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExHeuristicsFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings_Statics::ClassParams = {
	&UPCGExHeuristicFeedbackProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExHeuristicFeedbackProviderSettings::StaticRegisterNativesUPCGExHeuristicFeedbackProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExHeuristicFeedbackProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExHeuristicFeedbackProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExHeuristicFeedbackProviderSettings.OuterSingleton;
}
UPCGExHeuristicFeedbackProviderSettings::UPCGExHeuristicFeedbackProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExHeuristicFeedbackProviderSettings);
UPCGExHeuristicFeedbackProviderSettings::~UPCGExHeuristicFeedbackProviderSettings() {}
// ********** End Class UPCGExHeuristicFeedbackProviderSettings ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicFeedback_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExHeuristicConfigFeedback::StaticStruct, Z_Construct_UScriptStruct_FPCGExHeuristicConfigFeedback_Statics::NewStructOps, TEXT("PCGExHeuristicConfigFeedback"),&Z_Registration_Info_UScriptStruct_FPCGExHeuristicConfigFeedback, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExHeuristicConfigFeedback), 4178988983U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExHeuristicsFactoryFeedback, UPCGExHeuristicsFactoryFeedback::StaticClass, TEXT("UPCGExHeuristicsFactoryFeedback"), &Z_Registration_Info_UClass_UPCGExHeuristicsFactoryFeedback, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExHeuristicsFactoryFeedback), 855760551U) },
		{ Z_Construct_UClass_UPCGExHeuristicFeedbackProviderSettings, UPCGExHeuristicFeedbackProviderSettings::StaticClass, TEXT("UPCGExHeuristicFeedbackProviderSettings"), &Z_Registration_Info_UClass_UPCGExHeuristicFeedbackProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExHeuristicFeedbackProviderSettings), 1045356082U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicFeedback_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicFeedback_h__Script_PCGExtendedToolkit_764895413{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicFeedback_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicFeedback_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicFeedback_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_Heuristics_PCGExHeuristicFeedback_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
