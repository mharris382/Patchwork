// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/PCGExPathfindingPlotNavmesh.h"
#include "AI/Navigation/NavigationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPathfindingPlotNavmesh() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathfindingNavmeshMode();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExPathfindingPlotNavmeshSettings *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPathfindingPlotNavmeshSettings;
UClass* UPCGExPathfindingPlotNavmeshSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPathfindingPlotNavmeshSettings;
	if (!Z_Registration_Info_UClass_UPCGExPathfindingPlotNavmeshSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPathfindingPlotNavmeshSettings"),
			Z_Registration_Info_UClass_UPCGExPathfindingPlotNavmeshSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPathfindingPlotNavmeshSettings,
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
	return Z_Registration_Info_UClass_UPCGExPathfindingPlotNavmeshSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_NoRegister()
{
	return UPCGExPathfindingPlotNavmeshSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * Use PCGExTransform to manipulate the outgoing attributes instead of handling everything here.\n * This way we can multi-thread the various calculations instead of mixing everything along with async/game thread collision\n */" },
		{ "IncludePath", "Graph/Pathfinding/PCGExPathfindingPlotNavmesh.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotNavmesh.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/navmesh/pathfinding-plot-navmesh" },
		{ "ToolTip", "Use PCGExTransform to manipulate the outgoing attributes instead of handling everything here.\nThis way we can multi-thread the various calculations instead of mixing everything along with async/game thread collision" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddSeedToPath_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Add seed point at the beginning of the path */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotNavmesh.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Add seed point at the beginning of the path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddGoalToPath_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Add goal point at the end of the path */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotNavmesh.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Add goal point at the end of the path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddPlotPointsToPath_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Insert plot points inside the path */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotNavmesh.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Insert plot points inside the path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClosedLoop_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotNavmesh.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireNavigableEndLocation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether the pathfinding requires a naviguable end location. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotNavmesh.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether the pathfinding requires a naviguable end location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuseDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Fuse sub points by distance. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotNavmesh.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fuse sub points by distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blending_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Controls how path points blend from seed to goal. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotNavmesh.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Controls how path points blend from seed to goal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathfindingMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Pathfinding mode */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotNavmesh.h" },
		{ "ToolTip", "Pathfinding mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavAgentProperties_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Nav agent to be used by the nav system. */" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotNavmesh.h" },
		{ "ToolTip", "Nav agent to be used by the nav system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOmitCompletePathOnFailedPlot_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/PCGExPathfindingPlotNavmesh.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPathfindingPlotNavmeshSettings constinit property declarations *****
	static void NewProp_bAddSeedToPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddSeedToPath;
	static void NewProp_bAddGoalToPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddGoalToPath;
	static void NewProp_bAddPlotPointsToPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddPlotPointsToPath;
	static void NewProp_bClosedLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosedLoop;
	static void NewProp_bRequireNavigableEndLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireNavigableEndLocation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FuseDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blending;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PathfindingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PathfindingMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavAgentProperties;
	static void NewProp_bOmitCompletePathOnFailedPlot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOmitCompletePathOnFailedPlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPathfindingPlotNavmeshSettings constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPathfindingPlotNavmeshSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics

// ********** Begin Class UPCGExPathfindingPlotNavmeshSettings Property Definitions ****************
void Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bAddSeedToPath_SetBit(void* Obj)
{
	((UPCGExPathfindingPlotNavmeshSettings*)Obj)->bAddSeedToPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bAddSeedToPath = { "bAddSeedToPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingPlotNavmeshSettings), &Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bAddSeedToPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddSeedToPath_MetaData), NewProp_bAddSeedToPath_MetaData) };
void Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bAddGoalToPath_SetBit(void* Obj)
{
	((UPCGExPathfindingPlotNavmeshSettings*)Obj)->bAddGoalToPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bAddGoalToPath = { "bAddGoalToPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingPlotNavmeshSettings), &Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bAddGoalToPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddGoalToPath_MetaData), NewProp_bAddGoalToPath_MetaData) };
void Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bAddPlotPointsToPath_SetBit(void* Obj)
{
	((UPCGExPathfindingPlotNavmeshSettings*)Obj)->bAddPlotPointsToPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bAddPlotPointsToPath = { "bAddPlotPointsToPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingPlotNavmeshSettings), &Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bAddPlotPointsToPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddPlotPointsToPath_MetaData), NewProp_bAddPlotPointsToPath_MetaData) };
void Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bClosedLoop_SetBit(void* Obj)
{
	((UPCGExPathfindingPlotNavmeshSettings*)Obj)->bClosedLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bClosedLoop = { "bClosedLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingPlotNavmeshSettings), &Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bClosedLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClosedLoop_MetaData), NewProp_bClosedLoop_MetaData) };
void Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bRequireNavigableEndLocation_SetBit(void* Obj)
{
	((UPCGExPathfindingPlotNavmeshSettings*)Obj)->bRequireNavigableEndLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bRequireNavigableEndLocation = { "bRequireNavigableEndLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingPlotNavmeshSettings), &Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bRequireNavigableEndLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireNavigableEndLocation_MetaData), NewProp_bRequireNavigableEndLocation_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_FuseDistance = { "FuseDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingPlotNavmeshSettings, FuseDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuseDistance_MetaData), NewProp_FuseDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_Blending = { "Blending", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingPlotNavmeshSettings, Blending), Z_Construct_UClass_UPCGExSubPointsBlendInstancedFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blending_MetaData), NewProp_Blending_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_PathfindingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_PathfindingMode = { "PathfindingMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingPlotNavmeshSettings, PathfindingMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPathfindingNavmeshMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathfindingMode_MetaData), NewProp_PathfindingMode_MetaData) }; // 2615368300
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_NavAgentProperties = { "NavAgentProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathfindingPlotNavmeshSettings, NavAgentProperties), Z_Construct_UScriptStruct_FNavAgentProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavAgentProperties_MetaData), NewProp_NavAgentProperties_MetaData) }; // 3249677727
void Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bOmitCompletePathOnFailedPlot_SetBit(void* Obj)
{
	((UPCGExPathfindingPlotNavmeshSettings*)Obj)->bOmitCompletePathOnFailedPlot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bOmitCompletePathOnFailedPlot = { "bOmitCompletePathOnFailedPlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathfindingPlotNavmeshSettings), &Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bOmitCompletePathOnFailedPlot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOmitCompletePathOnFailedPlot_MetaData), NewProp_bOmitCompletePathOnFailedPlot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bAddSeedToPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bAddGoalToPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bAddPlotPointsToPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bClosedLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bRequireNavigableEndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_FuseDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_Blending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_PathfindingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_PathfindingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_NavAgentProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::NewProp_bOmitCompletePathOnFailedPlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPathfindingPlotNavmeshSettings Property Definitions ******************
UObject* (*const Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::ClassParams = {
	&UPCGExPathfindingPlotNavmeshSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::Class_MetaDataParams)
};
void UPCGExPathfindingPlotNavmeshSettings::StaticRegisterNativesUPCGExPathfindingPlotNavmeshSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPathfindingPlotNavmeshSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPathfindingPlotNavmeshSettings.OuterSingleton, Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPathfindingPlotNavmeshSettings.OuterSingleton;
}
UPCGExPathfindingPlotNavmeshSettings::UPCGExPathfindingPlotNavmeshSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPathfindingPlotNavmeshSettings);
UPCGExPathfindingPlotNavmeshSettings::~UPCGExPathfindingPlotNavmeshSettings() {}
// ********** End Class UPCGExPathfindingPlotNavmeshSettings ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingPlotNavmesh_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPathfindingPlotNavmeshSettings, UPCGExPathfindingPlotNavmeshSettings::StaticClass, TEXT("UPCGExPathfindingPlotNavmeshSettings"), &Z_Registration_Info_UClass_UPCGExPathfindingPlotNavmeshSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPathfindingPlotNavmeshSettings), 561985493U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingPlotNavmesh_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingPlotNavmesh_h__Script_PCGExtendedToolkit_2606745346{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingPlotNavmesh_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_PCGExPathfindingPlotNavmesh_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
