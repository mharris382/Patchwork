// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExPathToClusters.h"
#include "Data/Blending/PCGExDataBlending.h"
#include "Data/PCGExDataFilter.h"
#include "Details/PCGExDetailsIntersection.h"
#include "Graph/PCGExGraph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPathToClusters() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathToClustersSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathToClustersSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBlendingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCarryOverDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExPathToClustersSettings *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPathToClustersSettings;
UClass* UPCGExPathToClustersSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPathToClustersSettings;
	if (!Z_Registration_Info_UClass_UPCGExPathToClustersSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPathToClustersSettings"),
			Z_Registration_Info_UClass_UPCGExPathToClustersSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPathToClustersSettings,
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
	return Z_Registration_Info_UClass_UPCGExPathToClustersSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPathToClustersSettings_NoRegister()
{
	return UPCGExPathToClustersSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPathToClustersSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExPathToClusters.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathToClusters.h" },
		{ "PCGExNodeLibraryDoc", "clusters/paths-interop/path-to-clusters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFusePaths_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to fuse paths into a single graph or not. */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to fuse paths into a single graph or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointPointIntersectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fuse Settings */" },
		{ "DisplayName", "Point/Point Settings" },
		{ "EditCondition", "bFusePaths" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fuse Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFindPointEdgeIntersections_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Find Point-Edge intersection (points on edges)*/" },
		{ "EditCondition", "bFusePaths" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Find Point-Edge intersection (points on edges)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointEdgeIntersectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Point-Edge intersection settings */" },
		{ "DisplayName", "Point/Edge Settings" },
		{ "EditCondition", "bFusePaths && bFindPointEdgeIntersections" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Point-Edge intersection settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFindEdgeEdgeIntersections_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Find Edge-Edge intersection (edge crossings)*/" },
		{ "EditCondition", "bFusePaths" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Find Edge-Edge intersection (edge crossings)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeEdgeIntersectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Edge-Edge intersection settings */" },
		{ "DisplayName", "Edge/Edge Settings" },
		{ "EditCondition", "bFusePaths && bFindEdgeEdgeIntersections" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Edge-Edge intersection settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPointsBlendingDetails_MetaData[] = {
		{ "Category", "Settings|Data Blending" },
		{ "Comment", "/** Defines how fused point properties and attributes are merged together for fused points. */" },
		{ "EditCondition", "bFusePaths" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathToClusters.h" },
		{ "ToolTip", "Defines how fused point properties and attributes are merged together for fused points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEdgesBlendingDetails_MetaData[] = {
		{ "Category", "Settings|Data Blending" },
		{ "Comment", "/** Defines how fused point properties and attributes are merged together for fused edges. */" },
		{ "EditCondition", "bFusePaths" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathToClusters.h" },
		{ "ToolTip", "Defines how fused point properties and attributes are merged together for fused edges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomPointEdgeBlending_MetaData[] = {
		{ "Category", "Settings|Data Blending" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "bFusePaths" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathToClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomPointEdgeBlendingDetails_MetaData[] = {
		{ "Category", "Settings|Data Blending" },
		{ "Comment", "/** Defines how fused point properties and attributes are merged together for Point/Edge intersections. */" },
		{ "EditCondition", "bFusePaths && bUseCustomPointEdgeBlending" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Defines how fused point properties and attributes are merged together for Point/Edge intersections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomEdgeEdgeBlending_MetaData[] = {
		{ "Category", "Settings|Data Blending" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "bFusePaths" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathToClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomEdgeEdgeBlendingDetails_MetaData[] = {
		{ "Category", "Settings|Data Blending" },
		{ "Comment", "/** Defines how fused point properties and attributes are merged together for Edge/Edge intersections (Crossings). */" },
		{ "EditCondition", "bFusePaths && bUseCustomEdgeEdgeBlending" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Defines how fused point properties and attributes are merged together for Edge/Edge intersections (Crossings)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarryOverDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Meta filter settings. */" },
		{ "DisplayName", "Carry Over Settings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Meta filter settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphBuilderDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Graph & Edges output properties */" },
		{ "DisplayName", "Cluster Output Settings" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathToClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Graph & Edges output properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPathToClustersSettings constinit property declarations *************
	static void NewProp_bFusePaths_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFusePaths;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointPointIntersectionDetails;
	static void NewProp_bFindPointEdgeIntersections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindPointEdgeIntersections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointEdgeIntersectionDetails;
	static void NewProp_bFindEdgeEdgeIntersections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindEdgeEdgeIntersections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeEdgeIntersectionDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPointsBlendingDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultEdgesBlendingDetails;
	static void NewProp_bUseCustomPointEdgeBlending_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomPointEdgeBlending;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomPointEdgeBlendingDetails;
	static void NewProp_bUseCustomEdgeEdgeBlending_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomEdgeEdgeBlending;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomEdgeEdgeBlendingDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CarryOverDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphBuilderDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPathToClustersSettings constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPathToClustersSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPathToClustersSettings_Statics

// ********** Begin Class UPCGExPathToClustersSettings Property Definitions ************************
void Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bFusePaths_SetBit(void* Obj)
{
	((UPCGExPathToClustersSettings*)Obj)->bFusePaths = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bFusePaths = { "bFusePaths", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathToClustersSettings), &Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bFusePaths_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFusePaths_MetaData), NewProp_bFusePaths_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_PointPointIntersectionDetails = { "PointPointIntersectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathToClustersSettings, PointPointIntersectionDetails), Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointPointIntersectionDetails_MetaData), NewProp_PointPointIntersectionDetails_MetaData) }; // 2944920897
void Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bFindPointEdgeIntersections_SetBit(void* Obj)
{
	((UPCGExPathToClustersSettings*)Obj)->bFindPointEdgeIntersections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bFindPointEdgeIntersections = { "bFindPointEdgeIntersections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathToClustersSettings), &Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bFindPointEdgeIntersections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFindPointEdgeIntersections_MetaData), NewProp_bFindPointEdgeIntersections_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_PointEdgeIntersectionDetails = { "PointEdgeIntersectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathToClustersSettings, PointEdgeIntersectionDetails), Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointEdgeIntersectionDetails_MetaData), NewProp_PointEdgeIntersectionDetails_MetaData) }; // 2141664578
void Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bFindEdgeEdgeIntersections_SetBit(void* Obj)
{
	((UPCGExPathToClustersSettings*)Obj)->bFindEdgeEdgeIntersections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bFindEdgeEdgeIntersections = { "bFindEdgeEdgeIntersections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathToClustersSettings), &Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bFindEdgeEdgeIntersections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFindEdgeEdgeIntersections_MetaData), NewProp_bFindEdgeEdgeIntersections_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_EdgeEdgeIntersectionDetails = { "EdgeEdgeIntersectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathToClustersSettings, EdgeEdgeIntersectionDetails), Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeEdgeIntersectionDetails_MetaData), NewProp_EdgeEdgeIntersectionDetails_MetaData) }; // 715389155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_DefaultPointsBlendingDetails = { "DefaultPointsBlendingDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathToClustersSettings, DefaultPointsBlendingDetails), Z_Construct_UScriptStruct_FPCGExBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPointsBlendingDetails_MetaData), NewProp_DefaultPointsBlendingDetails_MetaData) }; // 1694264898
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_DefaultEdgesBlendingDetails = { "DefaultEdgesBlendingDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathToClustersSettings, DefaultEdgesBlendingDetails), Z_Construct_UScriptStruct_FPCGExBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultEdgesBlendingDetails_MetaData), NewProp_DefaultEdgesBlendingDetails_MetaData) }; // 1694264898
void Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bUseCustomPointEdgeBlending_SetBit(void* Obj)
{
	((UPCGExPathToClustersSettings*)Obj)->bUseCustomPointEdgeBlending = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bUseCustomPointEdgeBlending = { "bUseCustomPointEdgeBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathToClustersSettings), &Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bUseCustomPointEdgeBlending_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomPointEdgeBlending_MetaData), NewProp_bUseCustomPointEdgeBlending_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_CustomPointEdgeBlendingDetails = { "CustomPointEdgeBlendingDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathToClustersSettings, CustomPointEdgeBlendingDetails), Z_Construct_UScriptStruct_FPCGExBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomPointEdgeBlendingDetails_MetaData), NewProp_CustomPointEdgeBlendingDetails_MetaData) }; // 1694264898
void Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bUseCustomEdgeEdgeBlending_SetBit(void* Obj)
{
	((UPCGExPathToClustersSettings*)Obj)->bUseCustomEdgeEdgeBlending = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bUseCustomEdgeEdgeBlending = { "bUseCustomEdgeEdgeBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathToClustersSettings), &Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bUseCustomEdgeEdgeBlending_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomEdgeEdgeBlending_MetaData), NewProp_bUseCustomEdgeEdgeBlending_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_CustomEdgeEdgeBlendingDetails = { "CustomEdgeEdgeBlendingDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathToClustersSettings, CustomEdgeEdgeBlendingDetails), Z_Construct_UScriptStruct_FPCGExBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomEdgeEdgeBlendingDetails_MetaData), NewProp_CustomEdgeEdgeBlendingDetails_MetaData) }; // 1694264898
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_CarryOverDetails = { "CarryOverDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathToClustersSettings, CarryOverDetails), Z_Construct_UScriptStruct_FPCGExCarryOverDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarryOverDetails_MetaData), NewProp_CarryOverDetails_MetaData) }; // 4041221405
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_GraphBuilderDetails = { "GraphBuilderDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathToClustersSettings, GraphBuilderDetails), Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphBuilderDetails_MetaData), NewProp_GraphBuilderDetails_MetaData) }; // 816765072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bFusePaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_PointPointIntersectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bFindPointEdgeIntersections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_PointEdgeIntersectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bFindEdgeEdgeIntersections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_EdgeEdgeIntersectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_DefaultPointsBlendingDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_DefaultEdgesBlendingDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bUseCustomPointEdgeBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_CustomPointEdgeBlendingDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_bUseCustomEdgeEdgeBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_CustomEdgeEdgeBlendingDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_CarryOverDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::NewProp_GraphBuilderDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPathToClustersSettings Property Definitions **************************
UObject* (*const Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::ClassParams = {
	&UPCGExPathToClustersSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::Class_MetaDataParams)
};
void UPCGExPathToClustersSettings::StaticRegisterNativesUPCGExPathToClustersSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPathToClustersSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPathToClustersSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPathToClustersSettings.OuterSingleton, Z_Construct_UClass_UPCGExPathToClustersSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPathToClustersSettings.OuterSingleton;
}
UPCGExPathToClustersSettings::UPCGExPathToClustersSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPathToClustersSettings);
UPCGExPathToClustersSettings::~UPCGExPathToClustersSettings() {}
// ********** End Class UPCGExPathToClustersSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathToClusters_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPathToClustersSettings, UPCGExPathToClustersSettings::StaticClass, TEXT("UPCGExPathToClustersSettings"), &Z_Registration_Info_UClass_UPCGExPathToClustersSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPathToClustersSettings), 493951324U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathToClusters_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathToClusters_h__Script_PCGExtendedToolkit_2875790457{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathToClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathToClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
