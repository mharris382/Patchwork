// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExFuseClusters.h"
#include "Data/Blending/PCGExDataBlending.h"
#include "Data/PCGExDataFilter.h"
#include "Details/PCGExDetailsIntersection.h"
#include "Graph/PCGExGraph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFuseClusters() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFuseClustersSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFuseClustersSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBlendingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCarryOverDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExFuseClustersSettings ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFuseClustersSettings;
UClass* UPCGExFuseClustersSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFuseClustersSettings;
	if (!Z_Registration_Info_UClass_UPCGExFuseClustersSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFuseClustersSettings"),
			Z_Registration_Info_UClass_UPCGExFuseClustersSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFuseClustersSettings,
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
	return Z_Registration_Info_UClass_UPCGExFuseClustersSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFuseClustersSettings_NoRegister()
{
	return UPCGExFuseClustersSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFuseClustersSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/PCGExFuseClusters.h" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFuseClusters.h" },
		{ "PCGExNodeLibraryDoc", "clusters/fuse-clusters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointPointIntersectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fuse Settings */" },
		{ "DisplayName", "Point/Point Settings" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFuseClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fuse Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFindPointEdgeIntersections_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Find Point-Edge intersection */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFuseClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Find Point-Edge intersection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointEdgeIntersectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Point-Edge intersection settings */" },
		{ "DisplayName", "Point/Edge Settings" },
		{ "EditCondition", "bFindPointEdgeIntersections" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFuseClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Point-Edge intersection settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFindEdgeEdgeIntersections_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Find Edge-Edge intersection */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFuseClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Find Edge-Edge intersection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeEdgeIntersectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Edge-Edge intersection */" },
		{ "DisplayName", "Edge/Edge Settings" },
		{ "EditCondition", "bFindEdgeEdgeIntersections" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFuseClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Edge-Edge intersection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPointsBlendingDetails_MetaData[] = {
		{ "Category", "Settings|Data Blending" },
		{ "Comment", "/** Defines how fused point properties and attributes are merged together for fused points. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFuseClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Defines how fused point properties and attributes are merged together for fused points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEdgesBlendingDetails_MetaData[] = {
		{ "Category", "Settings|Data Blending" },
		{ "Comment", "/** Defines how fused point properties and attributes are merged together for fused edges. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFuseClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Defines how fused point properties and attributes are merged together for fused edges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomPointEdgeBlending_MetaData[] = {
		{ "Category", "Settings|Data Blending" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFuseClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomPointEdgeBlendingDetails_MetaData[] = {
		{ "Category", "Settings|Data Blending" },
		{ "Comment", "/** Defines how fused point properties and attributes are merged together for Point/Edge intersections. */" },
		{ "EditCondition", "bUseCustomPointEdgeBlending" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFuseClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Defines how fused point properties and attributes are merged together for Point/Edge intersections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomEdgeEdgeBlending_MetaData[] = {
		{ "Category", "Settings|Data Blending" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFuseClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomEdgeEdgeBlendingDetails_MetaData[] = {
		{ "Category", "Settings|Data Blending" },
		{ "Comment", "/** Defines how fused point properties and attributes are merged together for Edge/Edge intersections (Crossings). */" },
		{ "EditCondition", "bUseCustomEdgeEdgeBlending" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFuseClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Defines how fused point properties and attributes are merged together for Edge/Edge intersections (Crossings)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VtxCarryOverDetails_MetaData[] = {
		{ "Category", "Settings|Meta Filters" },
		{ "Comment", "/** Meta filter settings for Vtx. */" },
		{ "DisplayName", "Carry Over Settings - Vtx" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFuseClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Meta filter settings for Vtx." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgesCarryOverDetails_MetaData[] = {
		{ "Category", "Settings|Meta Filters" },
		{ "Comment", "/** Meta filter settings for Edges. */" },
		{ "DisplayName", "Carry Over Settings - Edges" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFuseClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Meta filter settings for Edges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphBuilderDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Graph & Edges output properties */" },
		{ "DisplayName", "Cluster Output Settings" },
		{ "ModuleRelativePath", "Public/Graph/PCGExFuseClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Graph & Edges output properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFuseClustersSettings constinit property declarations ***************
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_VtxCarryOverDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgesCarryOverDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphBuilderDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFuseClustersSettings constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFuseClustersSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFuseClustersSettings_Statics

// ********** Begin Class UPCGExFuseClustersSettings Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_PointPointIntersectionDetails = { "PointPointIntersectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFuseClustersSettings, PointPointIntersectionDetails), Z_Construct_UScriptStruct_FPCGExPointPointIntersectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointPointIntersectionDetails_MetaData), NewProp_PointPointIntersectionDetails_MetaData) }; // 2944920897
void Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_bFindPointEdgeIntersections_SetBit(void* Obj)
{
	((UPCGExFuseClustersSettings*)Obj)->bFindPointEdgeIntersections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_bFindPointEdgeIntersections = { "bFindPointEdgeIntersections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFuseClustersSettings), &Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_bFindPointEdgeIntersections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFindPointEdgeIntersections_MetaData), NewProp_bFindPointEdgeIntersections_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_PointEdgeIntersectionDetails = { "PointEdgeIntersectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFuseClustersSettings, PointEdgeIntersectionDetails), Z_Construct_UScriptStruct_FPCGExPointEdgeIntersectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointEdgeIntersectionDetails_MetaData), NewProp_PointEdgeIntersectionDetails_MetaData) }; // 2141664578
void Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_bFindEdgeEdgeIntersections_SetBit(void* Obj)
{
	((UPCGExFuseClustersSettings*)Obj)->bFindEdgeEdgeIntersections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_bFindEdgeEdgeIntersections = { "bFindEdgeEdgeIntersections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFuseClustersSettings), &Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_bFindEdgeEdgeIntersections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFindEdgeEdgeIntersections_MetaData), NewProp_bFindEdgeEdgeIntersections_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_EdgeEdgeIntersectionDetails = { "EdgeEdgeIntersectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFuseClustersSettings, EdgeEdgeIntersectionDetails), Z_Construct_UScriptStruct_FPCGExEdgeEdgeIntersectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeEdgeIntersectionDetails_MetaData), NewProp_EdgeEdgeIntersectionDetails_MetaData) }; // 715389155
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_DefaultPointsBlendingDetails = { "DefaultPointsBlendingDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFuseClustersSettings, DefaultPointsBlendingDetails), Z_Construct_UScriptStruct_FPCGExBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPointsBlendingDetails_MetaData), NewProp_DefaultPointsBlendingDetails_MetaData) }; // 1694264898
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_DefaultEdgesBlendingDetails = { "DefaultEdgesBlendingDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFuseClustersSettings, DefaultEdgesBlendingDetails), Z_Construct_UScriptStruct_FPCGExBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultEdgesBlendingDetails_MetaData), NewProp_DefaultEdgesBlendingDetails_MetaData) }; // 1694264898
void Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_bUseCustomPointEdgeBlending_SetBit(void* Obj)
{
	((UPCGExFuseClustersSettings*)Obj)->bUseCustomPointEdgeBlending = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_bUseCustomPointEdgeBlending = { "bUseCustomPointEdgeBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFuseClustersSettings), &Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_bUseCustomPointEdgeBlending_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomPointEdgeBlending_MetaData), NewProp_bUseCustomPointEdgeBlending_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_CustomPointEdgeBlendingDetails = { "CustomPointEdgeBlendingDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFuseClustersSettings, CustomPointEdgeBlendingDetails), Z_Construct_UScriptStruct_FPCGExBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomPointEdgeBlendingDetails_MetaData), NewProp_CustomPointEdgeBlendingDetails_MetaData) }; // 1694264898
void Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_bUseCustomEdgeEdgeBlending_SetBit(void* Obj)
{
	((UPCGExFuseClustersSettings*)Obj)->bUseCustomEdgeEdgeBlending = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_bUseCustomEdgeEdgeBlending = { "bUseCustomEdgeEdgeBlending", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFuseClustersSettings), &Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_bUseCustomEdgeEdgeBlending_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomEdgeEdgeBlending_MetaData), NewProp_bUseCustomEdgeEdgeBlending_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_CustomEdgeEdgeBlendingDetails = { "CustomEdgeEdgeBlendingDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFuseClustersSettings, CustomEdgeEdgeBlendingDetails), Z_Construct_UScriptStruct_FPCGExBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomEdgeEdgeBlendingDetails_MetaData), NewProp_CustomEdgeEdgeBlendingDetails_MetaData) }; // 1694264898
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_VtxCarryOverDetails = { "VtxCarryOverDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFuseClustersSettings, VtxCarryOverDetails), Z_Construct_UScriptStruct_FPCGExCarryOverDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VtxCarryOverDetails_MetaData), NewProp_VtxCarryOverDetails_MetaData) }; // 4041221405
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_EdgesCarryOverDetails = { "EdgesCarryOverDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFuseClustersSettings, EdgesCarryOverDetails), Z_Construct_UScriptStruct_FPCGExCarryOverDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgesCarryOverDetails_MetaData), NewProp_EdgesCarryOverDetails_MetaData) }; // 4041221405
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_GraphBuilderDetails = { "GraphBuilderDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFuseClustersSettings, GraphBuilderDetails), Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphBuilderDetails_MetaData), NewProp_GraphBuilderDetails_MetaData) }; // 816765072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_PointPointIntersectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_bFindPointEdgeIntersections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_PointEdgeIntersectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_bFindEdgeEdgeIntersections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_EdgeEdgeIntersectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_DefaultPointsBlendingDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_DefaultEdgesBlendingDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_bUseCustomPointEdgeBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_CustomPointEdgeBlendingDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_bUseCustomEdgeEdgeBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_CustomEdgeEdgeBlendingDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_VtxCarryOverDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_EdgesCarryOverDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::NewProp_GraphBuilderDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFuseClustersSettings Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::ClassParams = {
	&UPCGExFuseClustersSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::Class_MetaDataParams)
};
void UPCGExFuseClustersSettings::StaticRegisterNativesUPCGExFuseClustersSettings()
{
}
UClass* Z_Construct_UClass_UPCGExFuseClustersSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFuseClustersSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFuseClustersSettings.OuterSingleton, Z_Construct_UClass_UPCGExFuseClustersSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFuseClustersSettings.OuterSingleton;
}
UPCGExFuseClustersSettings::UPCGExFuseClustersSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFuseClustersSettings);
UPCGExFuseClustersSettings::~UPCGExFuseClustersSettings() {}
// ********** End Class UPCGExFuseClustersSettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFuseClusters_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFuseClustersSettings, UPCGExFuseClustersSettings::StaticClass, TEXT("UPCGExFuseClustersSettings"), &Z_Registration_Info_UClass_UPCGExFuseClustersSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFuseClustersSettings), 2061334667U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFuseClusters_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFuseClusters_h__Script_PCGExtendedToolkit_428354418{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFuseClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExFuseClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
