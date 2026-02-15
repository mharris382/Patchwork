// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExSimplifyClusters.h"
#include "Data/Blending/PCGExDataBlending.h"
#include "Data/PCGExDataFilter.h"
#include "Details/PCGExDetailsIntersection.h"
#include "Graph/PCGExGraph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExSimplifyClusters() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgesProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSimplifyClustersSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSimplifyClustersSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSimplifyClusterEdgeFilterRole();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBlendingDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCarryOverDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExSimplifyClusterEdgeFilterRole ***************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSimplifyClusterEdgeFilterRole;
static UEnum* EPCGExSimplifyClusterEdgeFilterRole_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSimplifyClusterEdgeFilterRole.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSimplifyClusterEdgeFilterRole.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSimplifyClusterEdgeFilterRole, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSimplifyClusterEdgeFilterRole"));
	}
	return Z_Registration_Info_UEnum_EPCGExSimplifyClusterEdgeFilterRole.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSimplifyClusterEdgeFilterRole>()
{
	return EPCGExSimplifyClusterEdgeFilterRole_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSimplifyClusterEdgeFilterRole_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Collapse.DisplayName", "Collapse" },
		{ "Collapse.Name", "EPCGExSimplifyClusterEdgeFilterRole::Collapse" },
		{ "Collapse.ToolTip", "Collapse endpoints of edges that pass the filters" },
		{ "ModuleRelativePath", "Public/Graph/PCGExSimplifyClusters.h" },
		{ "Preserve.DisplayName", "Preserve" },
		{ "Preserve.Name", "EPCGExSimplifyClusterEdgeFilterRole::Preserve" },
		{ "Preserve.ToolTip", "Preserve endpoints of edges that pass the filters" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSimplifyClusterEdgeFilterRole::Preserve", (int64)EPCGExSimplifyClusterEdgeFilterRole::Preserve },
		{ "EPCGExSimplifyClusterEdgeFilterRole::Collapse", (int64)EPCGExSimplifyClusterEdgeFilterRole::Collapse },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSimplifyClusterEdgeFilterRole_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSimplifyClusterEdgeFilterRole_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSimplifyClusterEdgeFilterRole",
	"EPCGExSimplifyClusterEdgeFilterRole",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSimplifyClusterEdgeFilterRole_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSimplifyClusterEdgeFilterRole_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSimplifyClusterEdgeFilterRole_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSimplifyClusterEdgeFilterRole_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSimplifyClusterEdgeFilterRole()
{
	if (!Z_Registration_Info_UEnum_EPCGExSimplifyClusterEdgeFilterRole.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSimplifyClusterEdgeFilterRole.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSimplifyClusterEdgeFilterRole_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSimplifyClusterEdgeFilterRole.InnerSingleton;
}
// ********** End Enum EPCGExSimplifyClusterEdgeFilterRole *****************************************

// ********** Begin Class UPCGExSimplifyClustersSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExSimplifyClustersSettings;
UClass* UPCGExSimplifyClustersSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExSimplifyClustersSettings;
	if (!Z_Registration_Info_UClass_UPCGExSimplifyClustersSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExSimplifyClustersSettings"),
			Z_Registration_Info_UClass_UPCGExSimplifyClustersSettings.InnerSingleton,
			StaticRegisterNativesUPCGExSimplifyClustersSettings,
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
	return Z_Registration_Info_UClass_UPCGExSimplifyClustersSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExSimplifyClustersSettings_NoRegister()
{
	return UPCGExSimplifyClustersSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/PCGExSimplifyClusters.h" },
		{ "ModuleRelativePath", "Public/Graph/PCGExSimplifyClusters.h" },
		{ "PCGExNodeLibraryDoc", "clusters/simplify" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOperateOnLeavesOnly_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, only check for dead ends. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExSimplifyClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, only check for dead ends." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeFilterRole_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  Define the behavior of connected edge filters, if any */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExSimplifyClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Define the behavior of connected edge filters, if any" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeAboveAngularThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExSimplifyClusters.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If enabled, uses an angular threshold below which nodes are merged. */" },
		{ "EditCondition", "bMergeAboveAngularThreshold" },
		{ "ModuleRelativePath", "Public/Graph/PCGExSimplifyClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, uses an angular threshold below which nodes are merged." },
		{ "Units", "Degrees" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertAngularThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Removes hard angles instead of collinear ones. */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Invert" },
		{ "EditCondition", "bMergeAboveAngularThreshold" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExSimplifyClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Removes hard angles instead of collinear ones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFuseCollocated_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will consider collocated binary nodes for collocation and remove them as part of the simplification. */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Fuse Collocated" },
		{ "EditCondition", "bMergeAboveAngularThreshold" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExSimplifyClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will consider collocated binary nodes for collocation and remove them as part of the simplification." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuseDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Distance used to consider point to be overlapping. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Tolerance" },
		{ "EditCondition", "bMergeAboveAngularThreshold && bFuseCollocated" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExSimplifyClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Distance used to consider point to be overlapping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPruneLeaves_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, prune dead ends. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExSimplifyClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, prune dead ends." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeBlendingDetails_MetaData[] = {
		{ "Category", "Settings|Data Blending" },
		{ "Comment", "/** Defines how fused point properties and attributes are merged together for Edges (When an edge is the result of a simplification). */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExSimplifyClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Defines how fused point properties and attributes are merged together for Edges (When an edge is the result of a simplification)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeCarryOverDetails_MetaData[] = {
		{ "Category", "Settings|Data Blending" },
		{ "Comment", "/** Meta filter settings for edge data. */" },
		{ "DisplayName", "Carry Over Settings" },
		{ "ModuleRelativePath", "Public/Graph/PCGExSimplifyClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Meta filter settings for edge data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeUnionData_MetaData[] = {
		{ "Category", "Settings|Data Blending" },
		{ "Comment", "/**  Edge Union Data */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExSimplifyClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Edge Union Data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphBuilderDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Graph & Edges output properties */" },
		{ "DisplayName", "Cluster Output Settings" },
		{ "ModuleRelativePath", "Public/Graph/PCGExSimplifyClusters.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Graph & Edges output properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExSimplifyClustersSettings constinit property declarations ***********
	static void NewProp_bOperateOnLeavesOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOperateOnLeavesOnly;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EdgeFilterRole_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EdgeFilterRole;
	static void NewProp_bMergeAboveAngularThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeAboveAngularThreshold;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AngularThreshold;
	static void NewProp_bInvertAngularThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertAngularThreshold;
	static void NewProp_bFuseCollocated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFuseCollocated;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FuseDistance;
	static void NewProp_bPruneLeaves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPruneLeaves;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeBlendingDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeCarryOverDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeUnionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphBuilderDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExSimplifyClustersSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExSimplifyClustersSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics

// ********** Begin Class UPCGExSimplifyClustersSettings Property Definitions **********************
void Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bOperateOnLeavesOnly_SetBit(void* Obj)
{
	((UPCGExSimplifyClustersSettings*)Obj)->bOperateOnLeavesOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bOperateOnLeavesOnly = { "bOperateOnLeavesOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSimplifyClustersSettings), &Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bOperateOnLeavesOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOperateOnLeavesOnly_MetaData), NewProp_bOperateOnLeavesOnly_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_EdgeFilterRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_EdgeFilterRole = { "EdgeFilterRole", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSimplifyClustersSettings, EdgeFilterRole), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSimplifyClusterEdgeFilterRole, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeFilterRole_MetaData), NewProp_EdgeFilterRole_MetaData) }; // 238118962
void Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bMergeAboveAngularThreshold_SetBit(void* Obj)
{
	((UPCGExSimplifyClustersSettings*)Obj)->bMergeAboveAngularThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bMergeAboveAngularThreshold = { "bMergeAboveAngularThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSimplifyClustersSettings), &Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bMergeAboveAngularThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeAboveAngularThreshold_MetaData), NewProp_bMergeAboveAngularThreshold_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_AngularThreshold = { "AngularThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSimplifyClustersSettings, AngularThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularThreshold_MetaData), NewProp_AngularThreshold_MetaData) };
void Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bInvertAngularThreshold_SetBit(void* Obj)
{
	((UPCGExSimplifyClustersSettings*)Obj)->bInvertAngularThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bInvertAngularThreshold = { "bInvertAngularThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSimplifyClustersSettings), &Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bInvertAngularThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertAngularThreshold_MetaData), NewProp_bInvertAngularThreshold_MetaData) };
void Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bFuseCollocated_SetBit(void* Obj)
{
	((UPCGExSimplifyClustersSettings*)Obj)->bFuseCollocated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bFuseCollocated = { "bFuseCollocated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSimplifyClustersSettings), &Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bFuseCollocated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFuseCollocated_MetaData), NewProp_bFuseCollocated_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_FuseDistance = { "FuseDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSimplifyClustersSettings, FuseDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuseDistance_MetaData), NewProp_FuseDistance_MetaData) };
void Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bPruneLeaves_SetBit(void* Obj)
{
	((UPCGExSimplifyClustersSettings*)Obj)->bPruneLeaves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bPruneLeaves = { "bPruneLeaves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExSimplifyClustersSettings), &Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bPruneLeaves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPruneLeaves_MetaData), NewProp_bPruneLeaves_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_EdgeBlendingDetails = { "EdgeBlendingDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSimplifyClustersSettings, EdgeBlendingDetails), Z_Construct_UScriptStruct_FPCGExBlendingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeBlendingDetails_MetaData), NewProp_EdgeBlendingDetails_MetaData) }; // 1694264898
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_EdgeCarryOverDetails = { "EdgeCarryOverDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSimplifyClustersSettings, EdgeCarryOverDetails), Z_Construct_UScriptStruct_FPCGExCarryOverDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeCarryOverDetails_MetaData), NewProp_EdgeCarryOverDetails_MetaData) }; // 4041221405
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_EdgeUnionData = { "EdgeUnionData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSimplifyClustersSettings, EdgeUnionData), Z_Construct_UScriptStruct_FPCGExEdgeUnionMetadataDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeUnionData_MetaData), NewProp_EdgeUnionData_MetaData) }; // 959195692
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_GraphBuilderDetails = { "GraphBuilderDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExSimplifyClustersSettings, GraphBuilderDetails), Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphBuilderDetails_MetaData), NewProp_GraphBuilderDetails_MetaData) }; // 816765072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bOperateOnLeavesOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_EdgeFilterRole_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_EdgeFilterRole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bMergeAboveAngularThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_AngularThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bInvertAngularThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bFuseCollocated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_FuseDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_bPruneLeaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_EdgeBlendingDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_EdgeCarryOverDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_EdgeUnionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::NewProp_GraphBuilderDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExSimplifyClustersSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExEdgesProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::ClassParams = {
	&UPCGExSimplifyClustersSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::Class_MetaDataParams)
};
void UPCGExSimplifyClustersSettings::StaticRegisterNativesUPCGExSimplifyClustersSettings()
{
}
UClass* Z_Construct_UClass_UPCGExSimplifyClustersSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExSimplifyClustersSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExSimplifyClustersSettings.OuterSingleton, Z_Construct_UClass_UPCGExSimplifyClustersSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExSimplifyClustersSettings.OuterSingleton;
}
UPCGExSimplifyClustersSettings::UPCGExSimplifyClustersSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExSimplifyClustersSettings);
UPCGExSimplifyClustersSettings::~UPCGExSimplifyClustersSettings() {}
// ********** End Class UPCGExSimplifyClustersSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExSimplifyClusters_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExSimplifyClusterEdgeFilterRole_StaticEnum, TEXT("EPCGExSimplifyClusterEdgeFilterRole"), &Z_Registration_Info_UEnum_EPCGExSimplifyClusterEdgeFilterRole, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 238118962U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExSimplifyClustersSettings, UPCGExSimplifyClustersSettings::StaticClass, TEXT("UPCGExSimplifyClustersSettings"), &Z_Registration_Info_UClass_UPCGExSimplifyClustersSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExSimplifyClustersSettings), 459154731U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExSimplifyClusters_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExSimplifyClusters_h__Script_PCGExtendedToolkit_1295557296{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExSimplifyClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExSimplifyClusters_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExSimplifyClusters_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExSimplifyClusters_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
