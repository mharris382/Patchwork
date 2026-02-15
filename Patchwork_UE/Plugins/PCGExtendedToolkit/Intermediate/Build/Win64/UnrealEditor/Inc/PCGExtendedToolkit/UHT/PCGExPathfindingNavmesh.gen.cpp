// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/PCGExPathfindingNavmesh.h"
#include "AI/Navigation/NavigationTypes.h"
#include "Data/PCGExDataForward.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPathfindingNavmesh() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGoalPicker_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathfindingNavmeshSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathfindingNavmeshMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExForwardDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExPathfindingNavmeshSettings *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPathfindingNavmeshSettings;
UClass* UPCGExPathfindingNavmeshSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPathfindingNavmeshSettings;
	if (!Z_Registration_Info_UClass_UPCGExPathfindingNavmeshSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPathfindingNavmeshSettings"),
			Z_Registration_Info_UClass_UPCGExPathfindingNavmeshSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPathfindingNavmeshSettings,
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
	return Z_Registration_Info_UClass_UPCGExPathfindingNavmeshSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_NoRegister()
{
	return UPCGExPathfindingNavmeshSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Use PCGExTransform to manipulate the outgoing attributes instead of handling everything here.\n * This way we can multi-thread the various calculations instead of mixing everything along with async/game thread collision\n */" },
		{ "IncludePath", "Graph/Pathfinding/PCGExPathfindingNavmesh.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingNavmesh.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/navmesh/pathfinding-navmesh" },
		{ "ToolTip", "Use PCGExTransform to manipulate the outgoing attributes instead of handling everything here.\nThis way we can multi-thread the various calculations instead of mixing everything along with async/game thread collision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalPicker_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Controls how goals are picked.*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingNavmesh.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Controls how goals are picked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddSeedToPath_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Add seed point at the beginning of the path */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingNavmesh.h" },
		{ "ToolTip", "Add seed point at the beginning of the path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddGoalToPath_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Add goal point at the beginning of the path */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingNavmesh.h" },
		{ "ToolTip", "Add goal point at the beginning of the path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireNavigableEndLocation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether the pathfinding requires a naviguable end location. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingNavmesh.h" },
		{ "ToolTip", "Whether the pathfinding requires a naviguable end location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuseDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Fuse sub points by distance. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingNavmesh.h" },
		{ "ToolTip", "Fuse sub points by distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blending_MetaData[] = {
		{ "Category", "Settings|Blending" },
		{ "Comment", "/** Controls how path points blend from seed to goal. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingNavmesh.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Controls how path points blend from seed to goal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedAttributesToPathTags_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingNavmesh.h" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedForwarding_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** Which Seed attributes to forward on paths. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingNavmesh.h" },
		{ "ToolTip", "Which Seed attributes to forward on paths." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalAttributesToPathTags_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingNavmesh.h" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalForwarding_MetaData[] = {
		{ "Category", "Settings|Tagging & Forwarding" },
		{ "Comment", "/** Which Goal attributes to forward on paths. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingNavmesh.h" },
		{ "ToolTip", "Which Goal attributes to forward on paths." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathfindingMode_MetaData[] = {
		{ "Category", "Settings|Advanced" },
		{ "Comment", "/** Pathfinding mode */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingNavmesh.h" },
		{ "ToolTip", "Pathfinding mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavAgentProperties_MetaData[] = {
		{ "Category", "Settings|Advanced" },
		{ "Comment", "/** Nav agent to be used by the nav system. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingNavmesh.h" },
		{ "ToolTip", "Nav agent to be used by the nav system." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPathfindingNavmeshSettings constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GoalPicker;
	static void NewProp_bAddSeedToPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddSeedToPath;
	static void NewProp_bAddGoalToPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddGoalToPath;
	static void NewProp_bRequireNavigableEndLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireNavigableEndLocation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FuseDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blending;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeedAttributesToPathTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeedForwarding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GoalAttributesToPathTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GoalForwarding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PathfindingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PathfindingMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavAgentProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPathfindingNavmeshSettings constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPathfindingNavmeshSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics

// ********** Begin Class UPCGExPathfindingNavmeshSettings Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_GoalPicker = { "GoalPicker", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingNavmeshSettings, GoalPicker), Z_Construct_UClass_UPCGExGoalPicker_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalPicker_MetaData), NewProp_GoalPicker_MetaData) };
void Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_bAddSeedToPath_SetBit(void* Obj)
{
	((UPCGExPathfindingNavmeshSettings*)Obj)->bAddSeedToPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_bAddSeedToPath = { "bAddSeedToPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingNavmeshSettings), &Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_bAddSeedToPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddSeedToPath_MetaData), NewProp_bAddSeedToPath_MetaData) };
void Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_bAddGoalToPath_SetBit(void* Obj)
{
	((UPCGExPathfindingNavmeshSettings*)Obj)->bAddGoalToPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_bAddGoalToPath = { "bAddGoalToPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingNavmeshSettings), &Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_bAddGoalToPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddGoalToPath_MetaData), NewProp_bAddGoalToPath_MetaData) };
void Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_bRequireNavigableEndLocation_SetBit(void* Obj)
{
	((UPCGExPathfindingNavmeshSettings*)Obj)->bRequireNavigableEndLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_bRequireNavigableEndLocation = { "bRequireNavigableEndLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingNavmeshSettings), &Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_bRequireNavigableEndLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireNavigableEndLocation_MetaData), NewProp_bRequireNavigableEndLocation_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_FuseDistance = { "FuseDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingNavmeshSettings, FuseDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuseDistance_MetaData), NewProp_FuseDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_Blending = { "Blending", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingNavmeshSettings, Blending), Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blending_MetaData), NewProp_Blending_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_SeedAttributesToPathTags = { "SeedAttributesToPathTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingNavmeshSettings, SeedAttributesToPathTags), Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedAttributesToPathTags_MetaData), NewProp_SeedAttributesToPathTags_MetaData) }; // 1295694073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_SeedForwarding = { "SeedForwarding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingNavmeshSettings, SeedForwarding), Z_Construct_UScriptStruct_FPCGExForwardDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedForwarding_MetaData), NewProp_SeedForwarding_MetaData) }; // 925115943
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_GoalAttributesToPathTags = { "GoalAttributesToPathTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingNavmeshSettings, GoalAttributesToPathTags), Z_Construct_UScriptStruct_FPCGExAttributeToTagDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalAttributesToPathTags_MetaData), NewProp_GoalAttributesToPathTags_MetaData) }; // 1295694073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_GoalForwarding = { "GoalForwarding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingNavmeshSettings, GoalForwarding), Z_Construct_UScriptStruct_FPCGExForwardDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalForwarding_MetaData), NewProp_GoalForwarding_MetaData) }; // 925115943
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_PathfindingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_PathfindingMode = { "PathfindingMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingNavmeshSettings, PathfindingMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathfindingNavmeshMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathfindingMode_MetaData), NewProp_PathfindingMode_MetaData) }; // 2615368300
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_NavAgentProperties = { "NavAgentProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingNavmeshSettings, NavAgentProperties), Z_Construct_UScriptStruct_FNavAgentProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavAgentProperties_MetaData), NewProp_NavAgentProperties_MetaData) }; // 3249677727
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_GoalPicker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_bAddSeedToPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_bAddGoalToPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_bRequireNavigableEndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_FuseDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_Blending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_SeedAttributesToPathTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_SeedForwarding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_GoalAttributesToPathTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_GoalForwarding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_PathfindingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_PathfindingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::NewProp_NavAgentProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPathfindingNavmeshSettings Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::ClassParams = {
	&UPCGExPathfindingNavmeshSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::Class_MetaDataParams)
};
void UPCGExPathfindingNavmeshSettings::StaticRegisterNativesUPCGExPathfindingNavmeshSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPathfindingNavmeshSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPathfindingNavmeshSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPathfindingNavmeshSettings.OuterSingleton, Z_Construct_UClass_UPCGExPathfindingNavmeshSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPathfindingNavmeshSettings.OuterSingleton;
}
UPCGExPathfindingNavmeshSettings::UPCGExPathfindingNavmeshSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPathfindingNavmeshSettings);
UPCGExPathfindingNavmeshSettings::~UPCGExPathfindingNavmeshSettings() {}
// ********** End Class UPCGExPathfindingNavmeshSettings *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingNavmesh_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPathfindingNavmeshSettings, UPCGExPathfindingNavmeshSettings::StaticClass, TEXT("UPCGExPathfindingNavmeshSettings"), &Z_Registration_Info_UClass_UPCGExPathfindingNavmeshSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPathfindingNavmeshSettings), 2432303328U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingNavmesh_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingNavmesh_h__Script_PCGExtendedToolkit_169650270{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingNavmesh_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingNavmesh_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
