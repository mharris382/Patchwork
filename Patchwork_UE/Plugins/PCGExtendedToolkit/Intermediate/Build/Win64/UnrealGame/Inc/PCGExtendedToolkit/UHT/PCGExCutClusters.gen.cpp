// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExCutClusters.h"
#include "Graph/PCGExGraph.h"
#include "Paths/PCGExPaths.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExCutClusters() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCutEdgesSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCutEdgesSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutEdgesMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExCutEdgesMode ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExCutEdgesMode;
static UEnum* EPCGExCutEdgesMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExCutEdgesMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExCutEdgesMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutEdgesMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExCutEdgesMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExCutEdgesMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCutEdgesMode>()
{
	return EPCGExCutEdgesMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutEdgesMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Edges.DisplayName", "Edges" },
		{ "Edges.Name", "EPCGExCutEdgesMode::Edges" },
		{ "Edges.ToolTip", "Check for path overlap with edges" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCutClusters.h" },
		{ "Nodes.DisplayName", "Nodes" },
		{ "Nodes.Name", "EPCGExCutEdgesMode::Nodes" },
		{ "Nodes.ToolTip", "Check for path overlap with nodes" },
		{ "NodesAndEdges.DisplayName", "Edges & Nodes" },
		{ "NodesAndEdges.Name", "EPCGExCutEdgesMode::NodesAndEdges" },
		{ "NodesAndEdges.ToolTip", "Check for overlap with both nodes and edges" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExCutEdgesMode::Nodes", (int64)EPCGExCutEdgesMode::Nodes },
		{ "EPCGExCutEdgesMode::Edges", (int64)EPCGExCutEdgesMode::Edges },
		{ "EPCGExCutEdgesMode::NodesAndEdges", (int64)EPCGExCutEdgesMode::NodesAndEdges },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutEdgesMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutEdgesMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExCutEdgesMode",
	"EPCGExCutEdgesMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutEdgesMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutEdgesMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutEdgesMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutEdgesMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutEdgesMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExCutEdgesMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExCutEdgesMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutEdgesMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExCutEdgesMode.InnerSingleton;
}
// ********** End Enum EPCGExCutEdgesMode **********************************************************

// ********** Begin Class UPCGExCutEdgesSettings ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExCutEdgesSettings;
UClass* UPCGExCutEdgesSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExCutEdgesSettings;
	if (!Z_Registration_Info_UClass_UPCGExCutEdgesSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExCutEdgesSettings"),
			Z_Registration_Info_UClass_UPCGExCutEdgesSettings.InnerSingleton,
			StaticRegisterNativesUPCGExCutEdgesSettings,
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
	return Z_Registration_Info_UClass_UPCGExCutEdgesSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExCutEdgesSettings_NoRegister()
{
	return UPCGExCutEdgesSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExCutEdgesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/PCGExCutClusters.h" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCutClusters.h" },
		{ "PCGExNodeLibraryDoc", "clusters/paths-interop/cut-clusters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCutClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Keep intersections/proximity instead of removing. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCutClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Keep intersections/proximity instead of removing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCutClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeExpansion_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Expansion factor of node points to check for initial overlap. Uses scaled bounds expanded by the specified value. */" },
		{ "EditCondition", "Mode != EPCGExCutEdgesMode::Edges" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCutClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Expansion factor of node points to check for initial overlap. Uses scaled bounds expanded by the specified value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeDistanceSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "Mode != EPCGExCutEdgesMode::Edges" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCutClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectedNodesAffectConnectedEdges_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "Mode != EPCGExCutEdgesMode::Edges" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCutClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectedEdgesAffectEndpoints_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "!bInvert && Mode != EPCGExCutEdgesMode::Nodes" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCutClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepEdgesThatConnectValidNodes_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bInvert && Mode != EPCGExCutEdgesMode::Edges" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCutClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphBuilderDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Graph & Edges output properties */" },
		{ "DisplayName", "Cluster Output Settings" },
		{ "ModuleRelativePath", "Public/Graph/PCGExCutClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Graph & Edges output properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExCutEdgesSettings constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntersectionDetails;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NodeExpansion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NodeDistanceSettings_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NodeDistanceSettings;
	static void NewProp_bAffectedNodesAffectConnectedEdges_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectedNodesAffectConnectedEdges;
	static void NewProp_bAffectedEdgesAffectEndpoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectedEdgesAffectEndpoints;
	static void NewProp_bKeepEdgesThatConnectValidNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepEdgesThatConnectValidNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphBuilderDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExCutEdgesSettings constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExCutEdgesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExCutEdgesSettings_Statics

// ********** Begin Class UPCGExCutEdgesSettings Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_IntersectionDetails = { "IntersectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCutEdgesSettings, IntersectionDetails), Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionDetails_MetaData), NewProp_IntersectionDetails_MetaData) }; // 2450089009
void Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((UPCGExCutEdgesSettings*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCutEdgesSettings), &Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCutEdgesSettings, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCutEdgesMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 1868590330
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_NodeExpansion = { "NodeExpansion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCutEdgesSettings, NodeExpansion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeExpansion_MetaData), NewProp_NodeExpansion_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_NodeDistanceSettings_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_NodeDistanceSettings = { "NodeDistanceSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCutEdgesSettings, NodeDistanceSettings), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDistance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeDistanceSettings_MetaData), NewProp_NodeDistanceSettings_MetaData) }; // 1812963399
void Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_bAffectedNodesAffectConnectedEdges_SetBit(void* Obj)
{
	((UPCGExCutEdgesSettings*)Obj)->bAffectedNodesAffectConnectedEdges = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_bAffectedNodesAffectConnectedEdges = { "bAffectedNodesAffectConnectedEdges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCutEdgesSettings), &Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_bAffectedNodesAffectConnectedEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectedNodesAffectConnectedEdges_MetaData), NewProp_bAffectedNodesAffectConnectedEdges_MetaData) };
void Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_bAffectedEdgesAffectEndpoints_SetBit(void* Obj)
{
	((UPCGExCutEdgesSettings*)Obj)->bAffectedEdgesAffectEndpoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_bAffectedEdgesAffectEndpoints = { "bAffectedEdgesAffectEndpoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCutEdgesSettings), &Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_bAffectedEdgesAffectEndpoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectedEdgesAffectEndpoints_MetaData), NewProp_bAffectedEdgesAffectEndpoints_MetaData) };
void Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_bKeepEdgesThatConnectValidNodes_SetBit(void* Obj)
{
	((UPCGExCutEdgesSettings*)Obj)->bKeepEdgesThatConnectValidNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_bKeepEdgesThatConnectValidNodes = { "bKeepEdgesThatConnectValidNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExCutEdgesSettings), &Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_bKeepEdgesThatConnectValidNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepEdgesThatConnectValidNodes_MetaData), NewProp_bKeepEdgesThatConnectValidNodes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_GraphBuilderDetails = { "GraphBuilderDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExCutEdgesSettings, GraphBuilderDetails), Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphBuilderDetails_MetaData), NewProp_GraphBuilderDetails_MetaData) }; // 816765072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_IntersectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_bInvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_NodeExpansion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_NodeDistanceSettings_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_NodeDistanceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_bAffectedNodesAffectConnectedEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_bAffectedEdgesAffectEndpoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_bKeepEdgesThatConnectValidNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::NewProp_GraphBuilderDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExCutEdgesSettings Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::ClassParams = {
	&UPCGExCutEdgesSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::Class_MetaDataParams)
};
void UPCGExCutEdgesSettings::StaticRegisterNativesUPCGExCutEdgesSettings()
{
}
UClass* Z_Construct_UClass_UPCGExCutEdgesSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExCutEdgesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExCutEdgesSettings.OuterSingleton, Z_Construct_UClass_UPCGExCutEdgesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExCutEdgesSettings.OuterSingleton;
}
UPCGExCutEdgesSettings::UPCGExCutEdgesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExCutEdgesSettings);
UPCGExCutEdgesSettings::~UPCGExCutEdgesSettings() {}
// ********** End Class UPCGExCutEdgesSettings *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCutClusters_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExCutEdgesMode_StaticEnum, TEXT("EPCGExCutEdgesMode"), &Z_Registration_Info_UEnum_EPCGExCutEdgesMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1868590330U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExCutEdgesSettings, UPCGExCutEdgesSettings::StaticClass, TEXT("UPCGExCutEdgesSettings"), &Z_Registration_Info_UClass_UPCGExCutEdgesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExCutEdgesSettings), 959521474U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCutClusters_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCutClusters_h__Script_PCGExtendedToolkit_30277405{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCutClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCutClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCutClusters_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExCutClusters_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
