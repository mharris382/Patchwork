// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Diagrams/PCGExBuildDelaunayGraph2D.h"
#include "Geometry/PCGExGeo.h"
#include "Graph/PCGExGraph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBuildDelaunayGraph2D() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUrquhartSiteMergeMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExUrquhartSiteMergeMode ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExUrquhartSiteMergeMode;
static UEnum* EPCGExUrquhartSiteMergeMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExUrquhartSiteMergeMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExUrquhartSiteMergeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUrquhartSiteMergeMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExUrquhartSiteMergeMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExUrquhartSiteMergeMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExUrquhartSiteMergeMode>()
{
	return EPCGExUrquhartSiteMergeMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUrquhartSiteMergeMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MergeEdges.DisplayName", "Merge Edges" },
		{ "MergeEdges.Name", "EPCGExUrquhartSiteMergeMode::MergeEdges" },
		{ "MergeEdges.ToolTip", "Merge site is the averge of the removed edges." },
		{ "MergeSites.DisplayName", "Merge Sites" },
		{ "MergeSites.Name", "EPCGExUrquhartSiteMergeMode::MergeSites" },
		{ "MergeSites.ToolTip", "Merge site is the average of the merge." },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph2D.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExUrquhartSiteMergeMode::None" },
		{ "None.ToolTip", "Do not merge sites." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExUrquhartSiteMergeMode::None", (int64)EPCGExUrquhartSiteMergeMode::None },
		{ "EPCGExUrquhartSiteMergeMode::MergeSites", (int64)EPCGExUrquhartSiteMergeMode::MergeSites },
		{ "EPCGExUrquhartSiteMergeMode::MergeEdges", (int64)EPCGExUrquhartSiteMergeMode::MergeEdges },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUrquhartSiteMergeMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUrquhartSiteMergeMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExUrquhartSiteMergeMode",
	"EPCGExUrquhartSiteMergeMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUrquhartSiteMergeMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUrquhartSiteMergeMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUrquhartSiteMergeMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUrquhartSiteMergeMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUrquhartSiteMergeMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExUrquhartSiteMergeMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExUrquhartSiteMergeMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUrquhartSiteMergeMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExUrquhartSiteMergeMode.InnerSingleton;
}
// ********** End Enum EPCGExUrquhartSiteMergeMode *************************************************

// ********** Begin Class UPCGExBuildDelaunayGraph2DSettings ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBuildDelaunayGraph2DSettings;
UClass* UPCGExBuildDelaunayGraph2DSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBuildDelaunayGraph2DSettings;
	if (!Z_Registration_Info_UClass_UPCGExBuildDelaunayGraph2DSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBuildDelaunayGraph2DSettings"),
			Z_Registration_Info_UClass_UPCGExBuildDelaunayGraph2DSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBuildDelaunayGraph2DSettings,
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
	return Z_Registration_Info_UClass_UPCGExBuildDelaunayGraph2DSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_NoRegister()
{
	return UPCGExBuildDelaunayGraph2DSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Diagrams/PCGExBuildDelaunayGraph2D.h" },
		{ "Keywords", "triangulation" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph2D.h" },
		{ "PCGExNodeLibraryDoc", "clusters/diagrams/delaunay-2d" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUrquhart_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Output the Urquhart graph of the Delaunay triangulation (removes the longest edge of each Delaunay cell) */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Output the Urquhart graph of the Delaunay triangulation (removes the longest edge of each Delaunay cell)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputSites_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/** Output delaunay sites */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Output delaunay sites" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMarkSiteHull_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/** Mark points & edges that lie on the hull */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Mark points & edges that lie on the hull" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SiteHullAttributeName_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/** Name of the attribute to output the Hull boolean to. True if point is on the hull, otherwise false. */" },
		{ "EditCondition", "bMarkSiteHull" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to output the Hull boolean to. True if point is on the hull, otherwise false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UrquhartSitesMerge_MetaData[] = {
		{ "Category", "Settings|Output" },
		{ "Comment", "/** Merge adjacent sites into a single point */" },
		{ "EditCondition", "bUrquhart && bOutputSites" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Merge adjacent sites into a single point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMarkHull_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Mark points & edges that lie on the hull */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Mark points & edges that lie on the hull" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HullAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to output the Hull boolean to. True if point is on the hull, otherwise false. */" },
		{ "EditCondition", "bMarkHull" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to output the Hull boolean to. True if point is on the hull, otherwise false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMarkEdgeOnTouch_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When true, edges that have at least a point on the Hull as marked as being on the hull. */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "When true, edges that have at least a point on the Hull as marked as being on the hull." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Projection settings. */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Projection settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphBuilderDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Graph & Edges output properties */" },
		{ "DisplayName", "Cluster Output Settings" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildDelaunayGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Graph & Edges output properties" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBuildDelaunayGraph2DSettings constinit property declarations *******
	static void NewProp_bUrquhart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUrquhart;
	static void NewProp_bOutputSites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputSites;
	static void NewProp_bMarkSiteHull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkSiteHull;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SiteHullAttributeName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UrquhartSitesMerge_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UrquhartSitesMerge;
	static void NewProp_bMarkHull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkHull;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HullAttributeName;
	static void NewProp_bMarkEdgeOnTouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkEdgeOnTouch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphBuilderDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBuildDelaunayGraph2DSettings constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBuildDelaunayGraph2DSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics

// ********** Begin Class UPCGExBuildDelaunayGraph2DSettings Property Definitions ******************
void Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bUrquhart_SetBit(void* Obj)
{
	((UPCGExBuildDelaunayGraph2DSettings*)Obj)->bUrquhart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bUrquhart = { "bUrquhart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildDelaunayGraph2DSettings), &Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bUrquhart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUrquhart_MetaData), NewProp_bUrquhart_MetaData) };
void Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bOutputSites_SetBit(void* Obj)
{
	((UPCGExBuildDelaunayGraph2DSettings*)Obj)->bOutputSites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bOutputSites = { "bOutputSites", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildDelaunayGraph2DSettings), &Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bOutputSites_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputSites_MetaData), NewProp_bOutputSites_MetaData) };
void Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bMarkSiteHull_SetBit(void* Obj)
{
	((UPCGExBuildDelaunayGraph2DSettings*)Obj)->bMarkSiteHull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bMarkSiteHull = { "bMarkSiteHull", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildDelaunayGraph2DSettings), &Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bMarkSiteHull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMarkSiteHull_MetaData), NewProp_bMarkSiteHull_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_SiteHullAttributeName = { "SiteHullAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildDelaunayGraph2DSettings, SiteHullAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SiteHullAttributeName_MetaData), NewProp_SiteHullAttributeName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_UrquhartSitesMerge_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_UrquhartSitesMerge = { "UrquhartSitesMerge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildDelaunayGraph2DSettings, UrquhartSitesMerge), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUrquhartSiteMergeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UrquhartSitesMerge_MetaData), NewProp_UrquhartSitesMerge_MetaData) }; // 2004993113
void Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bMarkHull_SetBit(void* Obj)
{
	((UPCGExBuildDelaunayGraph2DSettings*)Obj)->bMarkHull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bMarkHull = { "bMarkHull", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildDelaunayGraph2DSettings), &Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bMarkHull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMarkHull_MetaData), NewProp_bMarkHull_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_HullAttributeName = { "HullAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildDelaunayGraph2DSettings, HullAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HullAttributeName_MetaData), NewProp_HullAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bMarkEdgeOnTouch_SetBit(void* Obj)
{
	((UPCGExBuildDelaunayGraph2DSettings*)Obj)->bMarkEdgeOnTouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bMarkEdgeOnTouch = { "bMarkEdgeOnTouch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildDelaunayGraph2DSettings), &Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bMarkEdgeOnTouch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMarkEdgeOnTouch_MetaData), NewProp_bMarkEdgeOnTouch_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_ProjectionDetails = { "ProjectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildDelaunayGraph2DSettings, ProjectionDetails), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDetails_MetaData), NewProp_ProjectionDetails_MetaData) }; // 1019281773
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_GraphBuilderDetails = { "GraphBuilderDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildDelaunayGraph2DSettings, GraphBuilderDetails), Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphBuilderDetails_MetaData), NewProp_GraphBuilderDetails_MetaData) }; // 816765072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bUrquhart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bOutputSites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bMarkSiteHull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_SiteHullAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_UrquhartSitesMerge_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_UrquhartSitesMerge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bMarkHull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_HullAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_bMarkEdgeOnTouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_ProjectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::NewProp_GraphBuilderDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBuildDelaunayGraph2DSettings Property Definitions ********************
UObject* (*const Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::ClassParams = {
	&UPCGExBuildDelaunayGraph2DSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::Class_MetaDataParams)
};
void UPCGExBuildDelaunayGraph2DSettings::StaticRegisterNativesUPCGExBuildDelaunayGraph2DSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBuildDelaunayGraph2DSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBuildDelaunayGraph2DSettings.OuterSingleton, Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBuildDelaunayGraph2DSettings.OuterSingleton;
}
UPCGExBuildDelaunayGraph2DSettings::UPCGExBuildDelaunayGraph2DSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBuildDelaunayGraph2DSettings);
UPCGExBuildDelaunayGraph2DSettings::~UPCGExBuildDelaunayGraph2DSettings() {}
// ********** End Class UPCGExBuildDelaunayGraph2DSettings *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph2D_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExUrquhartSiteMergeMode_StaticEnum, TEXT("EPCGExUrquhartSiteMergeMode"), &Z_Registration_Info_UEnum_EPCGExUrquhartSiteMergeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2004993113U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBuildDelaunayGraph2DSettings, UPCGExBuildDelaunayGraph2DSettings::StaticClass, TEXT("UPCGExBuildDelaunayGraph2DSettings"), &Z_Registration_Info_UClass_UPCGExBuildDelaunayGraph2DSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBuildDelaunayGraph2DSettings), 1976684589U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph2D_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph2D_h__Script_PCGExtendedToolkit_3575292757{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph2D_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph2D_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph2D_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildDelaunayGraph2D_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
