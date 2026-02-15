// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Diagrams/PCGExBuildVoronoiGraph2D.h"
#include "Geometry/PCGExGeo.h"
#include "Graph/PCGExGraph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBuildVoronoiGraph2D() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellCenter();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExVoronoiSitesOutputDetails ***********************************
struct Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExVoronoiSitesOutputDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExVoronoiSitesOutputDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameters for conducting a sweep with a specified shape against the physical world. */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "ToolTip", "Parameters for conducting a sweep with a specified shape against the physical world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteInfluencesCount_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfluencesCountAttributeName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bWriteInfluencesCount" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteMinRadius_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRadiusAttributeName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bWriteMinRadius" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteMaxRadius_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRadiusAttributeName_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bWriteMaxRadius" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExVoronoiSitesOutputDetails constinit property declarations ***
	static void NewProp_bWriteInfluencesCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteInfluencesCount;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InfluencesCountAttributeName;
	static void NewProp_bWriteMinRadius_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteMinRadius;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MinRadiusAttributeName;
	static void NewProp_bWriteMaxRadius_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteMaxRadius;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaxRadiusAttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExVoronoiSitesOutputDetails constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExVoronoiSitesOutputDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExVoronoiSitesOutputDetails;
class UScriptStruct* FPCGExVoronoiSitesOutputDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExVoronoiSitesOutputDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExVoronoiSitesOutputDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExVoronoiSitesOutputDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExVoronoiSitesOutputDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExVoronoiSitesOutputDetails Property Definitions **************
void Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewProp_bWriteInfluencesCount_SetBit(void* Obj)
{
	((FPCGExVoronoiSitesOutputDetails*)Obj)->bWriteInfluencesCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewProp_bWriteInfluencesCount = { "bWriteInfluencesCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExVoronoiSitesOutputDetails), &Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewProp_bWriteInfluencesCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteInfluencesCount_MetaData), NewProp_bWriteInfluencesCount_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewProp_InfluencesCountAttributeName = { "InfluencesCountAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExVoronoiSitesOutputDetails, InfluencesCountAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfluencesCountAttributeName_MetaData), NewProp_InfluencesCountAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewProp_bWriteMinRadius_SetBit(void* Obj)
{
	((FPCGExVoronoiSitesOutputDetails*)Obj)->bWriteMinRadius = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewProp_bWriteMinRadius = { "bWriteMinRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExVoronoiSitesOutputDetails), &Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewProp_bWriteMinRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteMinRadius_MetaData), NewProp_bWriteMinRadius_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewProp_MinRadiusAttributeName = { "MinRadiusAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExVoronoiSitesOutputDetails, MinRadiusAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRadiusAttributeName_MetaData), NewProp_MinRadiusAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewProp_bWriteMaxRadius_SetBit(void* Obj)
{
	((FPCGExVoronoiSitesOutputDetails*)Obj)->bWriteMaxRadius = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewProp_bWriteMaxRadius = { "bWriteMaxRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExVoronoiSitesOutputDetails), &Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewProp_bWriteMaxRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteMaxRadius_MetaData), NewProp_bWriteMaxRadius_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewProp_MaxRadiusAttributeName = { "MaxRadiusAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExVoronoiSitesOutputDetails, MaxRadiusAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRadiusAttributeName_MetaData), NewProp_MaxRadiusAttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewProp_bWriteInfluencesCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewProp_InfluencesCountAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewProp_bWriteMinRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewProp_MinRadiusAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewProp_bWriteMaxRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewProp_MaxRadiusAttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExVoronoiSitesOutputDetails Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExVoronoiSitesOutputDetails",
	Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::PropPointers),
	sizeof(FPCGExVoronoiSitesOutputDetails),
	alignof(FPCGExVoronoiSitesOutputDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExVoronoiSitesOutputDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExVoronoiSitesOutputDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExVoronoiSitesOutputDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExVoronoiSitesOutputDetails *************************************

// ********** Begin Class UPCGExBuildVoronoiGraph2DSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBuildVoronoiGraph2DSettings;
UClass* UPCGExBuildVoronoiGraph2DSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBuildVoronoiGraph2DSettings;
	if (!Z_Registration_Info_UClass_UPCGExBuildVoronoiGraph2DSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBuildVoronoiGraph2DSettings"),
			Z_Registration_Info_UClass_UPCGExBuildVoronoiGraph2DSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBuildVoronoiGraph2DSettings,
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
	return Z_Registration_Info_UClass_UPCGExBuildVoronoiGraph2DSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_NoRegister()
{
	return UPCGExBuildVoronoiGraph2DSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Clusters" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCGExNodeLibraryDoc", "clusters/diagrams/voronoi-2d" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Method used to find Voronoi cell location */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Method used to find Voronoi cell location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpandBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Bounds used for point pruning & balanced centroid. */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Bounds used for point pruning & balanced centroid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPruneOutOfBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Prune points outside bounds */" },
		{ "EditCondition", "Method == EPCGExCellCenter::Circumcenter" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Prune points outside bounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMarkHull_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Mark points & edges that lie on the hull */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Mark points & edges that lie on the hull" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HullAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the attribute to output the Hull boolean to. True if point is on the hull, otherwise false. */" },
		{ "EditCondition", "bMarkHull" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the attribute to output the Hull boolean to. True if point is on the hull, otherwise false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMarkEdgeOnTouch_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When true, edges that have at least a point on the Hull as marked as being on the hull. */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "When true, edges that have at least a point on the Hull as marked as being on the hull." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Projection settings. */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Projection settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphBuilderDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Graph & Edges output properties. Only available if bPruneOutsideBounds as it otherwise generates a complete graph. */" },
		{ "DisplayName", "Cluster Output Settings" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Graph & Edges output properties. Only available if bPruneOutsideBounds as it otherwise generates a complete graph." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputSites_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Whether to output updated sites */" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to output updated sites" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPruneOpenSites_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** If enabled, sites that belong to an removed (out-of-bound) cell will be removed from the output. */" },
		{ "EditCondition", "bOutputSites && bPruneOutOfBounds" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, sites that belong to an removed (out-of-bound) cell will be removed from the output." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenSiteFlag_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** Flag sites belonging to an open cell with a boolean attribute. */" },
		{ "EditCondition", "bOutputSites && bPruneOutOfBounds && !bPruneOpenSites" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Flag sites belonging to an open cell with a boolean attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SitesOutputDetails_MetaData[] = {
		{ "Category", "Settings|Additional Outputs" },
		{ "Comment", "/** */" },
		{ "EditCondition", "bOutputSites" },
		{ "ModuleRelativePath", "Public/Graph/Diagrams/PCGExBuildVoronoiGraph2D.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBuildVoronoiGraph2DSettings constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ExpandBounds;
	static void NewProp_bPruneOutOfBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPruneOutOfBounds;
	static void NewProp_bMarkHull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkHull;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HullAttributeName;
	static void NewProp_bMarkEdgeOnTouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkEdgeOnTouch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphBuilderDetails;
	static void NewProp_bOutputSites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputSites;
	static void NewProp_bPruneOpenSites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPruneOpenSites;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OpenSiteFlag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SitesOutputDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBuildVoronoiGraph2DSettings constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBuildVoronoiGraph2DSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics

// ********** Begin Class UPCGExBuildVoronoiGraph2DSettings Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildVoronoiGraph2DSettings, Method), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExCellCenter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Method_MetaData), NewProp_Method_MetaData) }; // 3191491460
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_ExpandBounds = { "ExpandBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildVoronoiGraph2DSettings, ExpandBounds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpandBounds_MetaData), NewProp_ExpandBounds_MetaData) };
void Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bPruneOutOfBounds_SetBit(void* Obj)
{
	((UPCGExBuildVoronoiGraph2DSettings*)Obj)->bPruneOutOfBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bPruneOutOfBounds = { "bPruneOutOfBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildVoronoiGraph2DSettings), &Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bPruneOutOfBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPruneOutOfBounds_MetaData), NewProp_bPruneOutOfBounds_MetaData) };
void Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bMarkHull_SetBit(void* Obj)
{
	((UPCGExBuildVoronoiGraph2DSettings*)Obj)->bMarkHull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bMarkHull = { "bMarkHull", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildVoronoiGraph2DSettings), &Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bMarkHull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMarkHull_MetaData), NewProp_bMarkHull_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_HullAttributeName = { "HullAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildVoronoiGraph2DSettings, HullAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HullAttributeName_MetaData), NewProp_HullAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bMarkEdgeOnTouch_SetBit(void* Obj)
{
	((UPCGExBuildVoronoiGraph2DSettings*)Obj)->bMarkEdgeOnTouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bMarkEdgeOnTouch = { "bMarkEdgeOnTouch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildVoronoiGraph2DSettings), &Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bMarkEdgeOnTouch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMarkEdgeOnTouch_MetaData), NewProp_bMarkEdgeOnTouch_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_ProjectionDetails = { "ProjectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildVoronoiGraph2DSettings, ProjectionDetails), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDetails_MetaData), NewProp_ProjectionDetails_MetaData) }; // 1019281773
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_GraphBuilderDetails = { "GraphBuilderDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildVoronoiGraph2DSettings, GraphBuilderDetails), Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphBuilderDetails_MetaData), NewProp_GraphBuilderDetails_MetaData) }; // 816765072
void Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bOutputSites_SetBit(void* Obj)
{
	((UPCGExBuildVoronoiGraph2DSettings*)Obj)->bOutputSites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bOutputSites = { "bOutputSites", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildVoronoiGraph2DSettings), &Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bOutputSites_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputSites_MetaData), NewProp_bOutputSites_MetaData) };
void Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bPruneOpenSites_SetBit(void* Obj)
{
	((UPCGExBuildVoronoiGraph2DSettings*)Obj)->bPruneOpenSites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bPruneOpenSites = { "bPruneOpenSites", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBuildVoronoiGraph2DSettings), &Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bPruneOpenSites_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPruneOpenSites_MetaData), NewProp_bPruneOpenSites_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_OpenSiteFlag = { "OpenSiteFlag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildVoronoiGraph2DSettings, OpenSiteFlag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenSiteFlag_MetaData), NewProp_OpenSiteFlag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_SitesOutputDetails = { "SitesOutputDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBuildVoronoiGraph2DSettings, SitesOutputDetails), Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SitesOutputDetails_MetaData), NewProp_SitesOutputDetails_MetaData) }; // 2817572180
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_Method_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_Method,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_ExpandBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bPruneOutOfBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bMarkHull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_HullAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bMarkEdgeOnTouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_ProjectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_GraphBuilderDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bOutputSites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_bPruneOpenSites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_OpenSiteFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::NewProp_SitesOutputDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBuildVoronoiGraph2DSettings Property Definitions *********************
UObject* (*const Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::ClassParams = {
	&UPCGExBuildVoronoiGraph2DSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::Class_MetaDataParams)
};
void UPCGExBuildVoronoiGraph2DSettings::StaticRegisterNativesUPCGExBuildVoronoiGraph2DSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBuildVoronoiGraph2DSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBuildVoronoiGraph2DSettings.OuterSingleton, Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBuildVoronoiGraph2DSettings.OuterSingleton;
}
UPCGExBuildVoronoiGraph2DSettings::UPCGExBuildVoronoiGraph2DSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBuildVoronoiGraph2DSettings);
UPCGExBuildVoronoiGraph2DSettings::~UPCGExBuildVoronoiGraph2DSettings() {}
// ********** End Class UPCGExBuildVoronoiGraph2DSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildVoronoiGraph2D_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExVoronoiSitesOutputDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExVoronoiSitesOutputDetails_Statics::NewStructOps, TEXT("PCGExVoronoiSitesOutputDetails"),&Z_Registration_Info_UScriptStruct_FPCGExVoronoiSitesOutputDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExVoronoiSitesOutputDetails), 2817572180U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBuildVoronoiGraph2DSettings, UPCGExBuildVoronoiGraph2DSettings::StaticClass, TEXT("UPCGExBuildVoronoiGraph2DSettings"), &Z_Registration_Info_UClass_UPCGExBuildVoronoiGraph2DSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBuildVoronoiGraph2DSettings), 904875890U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildVoronoiGraph2D_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildVoronoiGraph2D_h__Script_PCGExtendedToolkit_7995975{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildVoronoiGraph2D_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildVoronoiGraph2D_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildVoronoiGraph2D_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Diagrams_PCGExBuildVoronoiGraph2D_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
