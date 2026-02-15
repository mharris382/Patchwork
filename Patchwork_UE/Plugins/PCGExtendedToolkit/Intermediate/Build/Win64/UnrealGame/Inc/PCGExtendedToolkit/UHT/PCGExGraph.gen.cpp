// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/PCGExGraph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExGraph() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyDirectionOrigin();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBasicEdgeRadius();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExAdjacencyDirectionOrigin ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExAdjacencyDirectionOrigin;
static UEnum* EPCGExAdjacencyDirectionOrigin_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExAdjacencyDirectionOrigin.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExAdjacencyDirectionOrigin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyDirectionOrigin, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExAdjacencyDirectionOrigin"));
	}
	return Z_Registration_Info_UEnum_EPCGExAdjacencyDirectionOrigin.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAdjacencyDirectionOrigin>()
{
	return EPCGExAdjacencyDirectionOrigin_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyDirectionOrigin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FromNeighbor.DisplayName", "From Neighbor to Node" },
		{ "FromNeighbor.Name", "EPCGExAdjacencyDirectionOrigin::FromNeighbor" },
		{ "FromNeighbor.Tooltip", "..." },
		{ "FromNode.DisplayName", "From Node to Neighbor" },
		{ "FromNode.Name", "EPCGExAdjacencyDirectionOrigin::FromNode" },
		{ "FromNode.Tooltip", "..." },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExAdjacencyDirectionOrigin::FromNode", (int64)EPCGExAdjacencyDirectionOrigin::FromNode },
		{ "EPCGExAdjacencyDirectionOrigin::FromNeighbor", (int64)EPCGExAdjacencyDirectionOrigin::FromNeighbor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyDirectionOrigin_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyDirectionOrigin_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExAdjacencyDirectionOrigin",
	"EPCGExAdjacencyDirectionOrigin",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyDirectionOrigin_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyDirectionOrigin_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyDirectionOrigin_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyDirectionOrigin_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyDirectionOrigin()
{
	if (!Z_Registration_Info_UEnum_EPCGExAdjacencyDirectionOrigin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExAdjacencyDirectionOrigin.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAdjacencyDirectionOrigin_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExAdjacencyDirectionOrigin.InnerSingleton;
}
// ********** End Enum EPCGExAdjacencyDirectionOrigin **********************************************

// ********** Begin Enum EPCGExClusterElement ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExClusterElement;
static UEnum* EPCGExClusterElement_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExClusterElement.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExClusterElement.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExClusterElement"));
	}
	return Z_Registration_Info_UEnum_EPCGExClusterElement.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExClusterElement>()
{
	return EPCGExClusterElement_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Edge.ActionIcon", "Edges" },
		{ "Edge.DisplayName", "Edge" },
		{ "Edge.Name", "EPCGExClusterElement::Edge" },
		{ "Edge.Tooltip", "Value is fetched from the edge connecting to the point being evaluated." },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "Vtx.ActionIcon", "Vtx" },
		{ "Vtx.DisplayName", "Point" },
		{ "Vtx.Name", "EPCGExClusterElement::Vtx" },
		{ "Vtx.Tooltip", "Value is fetched from the point being evaluated." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExClusterElement::Vtx", (int64)EPCGExClusterElement::Vtx },
		{ "EPCGExClusterElement::Edge", (int64)EPCGExClusterElement::Edge },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExClusterElement",
	"EPCGExClusterElement",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement()
{
	if (!Z_Registration_Info_UEnum_EPCGExClusterElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExClusterElement.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExClusterElement_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExClusterElement.InnerSingleton;
}
// ********** End Enum EPCGExClusterElement ********************************************************

// ********** Begin Enum EPCGExIntersectionType ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExIntersectionType;
static UEnum* EPCGExIntersectionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExIntersectionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExIntersectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExIntersectionType"));
	}
	return Z_Registration_Info_UEnum_EPCGExIntersectionType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExIntersectionType>()
{
	return EPCGExIntersectionType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EdgeEdge.DisplayName", "Edge/Edge" },
		{ "EdgeEdge.Name", "EPCGExIntersectionType::EdgeEdge" },
		{ "EdgeEdge.ToolTip", "Edge/Edge Intersection." },
		{ "FusedEdge.DisplayName", "Fused Edge" },
		{ "FusedEdge.Name", "EPCGExIntersectionType::FusedEdge" },
		{ "FusedEdge.ToolTip", "Fused Edge Intersection." },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "PointEdge.DisplayName", "Point/Edge" },
		{ "PointEdge.Name", "EPCGExIntersectionType::PointEdge" },
		{ "PointEdge.ToolTip", "Point/Edge Intersection." },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EPCGExIntersectionType::Unknown" },
		{ "Unknown.ToolTip", "Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExIntersectionType::Unknown", (int64)EPCGExIntersectionType::Unknown },
		{ "EPCGExIntersectionType::PointEdge", (int64)EPCGExIntersectionType::PointEdge },
		{ "EPCGExIntersectionType::EdgeEdge", (int64)EPCGExIntersectionType::EdgeEdge },
		{ "EPCGExIntersectionType::FusedEdge", (int64)EPCGExIntersectionType::FusedEdge },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExIntersectionType",
	"EPCGExIntersectionType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionType()
{
	if (!Z_Registration_Info_UEnum_EPCGExIntersectionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExIntersectionType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIntersectionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExIntersectionType.InnerSingleton;
}
// ********** End Enum EPCGExIntersectionType ******************************************************

// ********** Begin Enum EPCGExBasicEdgeRadius *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBasicEdgeRadius;
static UEnum* EPCGExBasicEdgeRadius_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBasicEdgeRadius.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBasicEdgeRadius.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBasicEdgeRadius, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBasicEdgeRadius"));
	}
	return Z_Registration_Info_UEnum_EPCGExBasicEdgeRadius.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBasicEdgeRadius>()
{
	return EPCGExBasicEdgeRadius_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBasicEdgeRadius_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Average.DisplayName", "Average" },
		{ "Average.Name", "EPCGExBasicEdgeRadius::Average" },
		{ "Average.ToolTip", "Edge radius is the average of each endpoint' bounds radii" },
		{ "Fixed.DisplayName", "Fixed" },
		{ "Fixed.Name", "EPCGExBasicEdgeRadius::Fixed" },
		{ "Fixed.ToolTip", "Edge radius is a fixed size" },
		{ "Lerp.DisplayName", "Lerp" },
		{ "Lerp.Name", "EPCGExBasicEdgeRadius::Lerp" },
		{ "Lerp.ToolTip", "Edge radius is the edge lerp position between endpoint' bounds radii" },
		{ "Max.DisplayName", "Max" },
		{ "Max.Name", "EPCGExBasicEdgeRadius::Max" },
		{ "Max.ToolTip", "Edge radius is the largest endpoint' bounds radius" },
		{ "Min.DisplayName", "Min" },
		{ "Min.Name", "EPCGExBasicEdgeRadius::Min" },
		{ "Min.ToolTip", "Edge radius is the smallest endpoint' bounds radius" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBasicEdgeRadius::Average", (int64)EPCGExBasicEdgeRadius::Average },
		{ "EPCGExBasicEdgeRadius::Lerp", (int64)EPCGExBasicEdgeRadius::Lerp },
		{ "EPCGExBasicEdgeRadius::Min", (int64)EPCGExBasicEdgeRadius::Min },
		{ "EPCGExBasicEdgeRadius::Max", (int64)EPCGExBasicEdgeRadius::Max },
		{ "EPCGExBasicEdgeRadius::Fixed", (int64)EPCGExBasicEdgeRadius::Fixed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBasicEdgeRadius_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBasicEdgeRadius_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBasicEdgeRadius",
	"EPCGExBasicEdgeRadius",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBasicEdgeRadius_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBasicEdgeRadius_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBasicEdgeRadius_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBasicEdgeRadius_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBasicEdgeRadius()
{
	if (!Z_Registration_Info_UEnum_EPCGExBasicEdgeRadius.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBasicEdgeRadius.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBasicEdgeRadius_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBasicEdgeRadius.InnerSingleton;
}
// ********** End Enum EPCGExBasicEdgeRadius *******************************************************

// ********** Begin ScriptStruct FPCGExBasicEdgeSolidificationDetails ******************************
struct Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExBasicEdgeSolidificationDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExBasicEdgeSolidificationDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolidificationAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Align the edge point to the edge direction over the selected axis. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Align the edge point to the edge direction over the selected axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Pick how edge radius should be calculated in regard to its endpoints */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Pick how edge radius should be calculated in regard to its endpoints" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fixed edge radius */" },
		{ "EditCondition", "RadiusType == EPCGExBasicEdgeRadius::Fixed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Fixed edge radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Scale the computed radius by a factor */" },
		{ "EditCondition", "RadiusType != EPCGExBasicEdgeRadius::Fixed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Scale the computed radius by a factor" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExBasicEdgeSolidificationDetails constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_SolidificationAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SolidificationAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RadiusType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RadiusType;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RadiusConstant;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RadiusScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExBasicEdgeSolidificationDetails constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExBasicEdgeSolidificationDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExBasicEdgeSolidificationDetails;
class UScriptStruct* FPCGExBasicEdgeSolidificationDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExBasicEdgeSolidificationDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExBasicEdgeSolidificationDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExBasicEdgeSolidificationDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExBasicEdgeSolidificationDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExBasicEdgeSolidificationDetails Property Definitions *********
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::NewProp_SolidificationAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::NewProp_SolidificationAxis = { "SolidificationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBasicEdgeSolidificationDetails, SolidificationAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMinimalAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolidificationAxis_MetaData), NewProp_SolidificationAxis_MetaData) }; // 904353693
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::NewProp_RadiusType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::NewProp_RadiusType = { "RadiusType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBasicEdgeSolidificationDetails, RadiusType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBasicEdgeRadius, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusType_MetaData), NewProp_RadiusType_MetaData) }; // 1734423921
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::NewProp_RadiusConstant = { "RadiusConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBasicEdgeSolidificationDetails, RadiusConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusConstant_MetaData), NewProp_RadiusConstant_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::NewProp_RadiusScale = { "RadiusScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExBasicEdgeSolidificationDetails, RadiusScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusScale_MetaData), NewProp_RadiusScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::NewProp_SolidificationAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::NewProp_SolidificationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::NewProp_RadiusType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::NewProp_RadiusType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::NewProp_RadiusConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::NewProp_RadiusScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExBasicEdgeSolidificationDetails Property Definitions ***********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExBasicEdgeSolidificationDetails",
	Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::PropPointers),
	sizeof(FPCGExBasicEdgeSolidificationDetails),
	alignof(FPCGExBasicEdgeSolidificationDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExBasicEdgeSolidificationDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExBasicEdgeSolidificationDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExBasicEdgeSolidificationDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExBasicEdgeSolidificationDetails ********************************

// ********** Begin ScriptStruct FPCGExGraphBuilderDetails *****************************************
struct Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExGraphBuilderDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExGraphBuilderDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteEdgePosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Don't output Clusters if they have less points than a specified amount. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Don't output Clusters if they have less points than a specified amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgePosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Edge position interpolation between start and end point positions. */" },
		{ "EditCondition", "bWriteEdgePosition" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Edge position interpolation between start and end point positions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasicEdgeSolidification_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, does some basic solidification of the edges over the X axis as a default. If you need full control, use the Edge Properties node. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Solidification" },
		{ "EditCondition", "bWriteEdgePosition" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, does some basic solidification of the edges over the X axis as a default. If you need full control, use the Edge Properties node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveSmallClusters_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Don't output Clusters if they have less points than a specified amount. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Don't output Clusters if they have less points than a specified amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinVtxCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Minimum points threshold (per cluster) */" },
		{ "DisplayName", "\xe2\x94\x8c\xe2\x94\x80 Min Vtx Count" },
		{ "EditCondition", "bRemoveSmallClusters" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Minimum points threshold (per cluster)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinEdgeCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Minimum edges threshold (per cluster) */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Min Edge Count" },
		{ "EditCondition", "bRemoveSmallClusters" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Minimum edges threshold (per cluster)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveBigClusters_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Don't output Clusters if they have more points than a specified amount. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Don't output Clusters if they have more points than a specified amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxVtxCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Maximum points threshold (per cluster) */" },
		{ "DisplayName", "\xe2\x94\x8c\xe2\x94\x80 Max Vtx Count" },
		{ "EditCondition", "bRemoveBigClusters" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Maximum points threshold (per cluster)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEdgeCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum edges threshold (per cluster) */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Max Edge Count" },
		{ "EditCondition", "bRemoveBigClusters" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Maximum edges threshold (per cluster)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRefreshEdgeSeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Refresh Edge Seed. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Refresh Edge Seed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildAndCacheClusters_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If the use of cached clusters is enabled, output clusters along with the graph data. */" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If the use of cached clusters is enabled, output clusters along with the graph data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputEdgeLength_MetaData[] = {
		{ "Category", "Settings|Extra Data" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeLengthName_MetaData[] = {
		{ "Category", "Settings|Extra Data" },
		{ "Comment", "/** Whether to output edge length to a 'double' attribute. */" },
		{ "EditCondition", "bOutputEdgeLength" },
		{ "ModuleRelativePath", "Public/Graph/PCGExGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to output edge length to a 'double' attribute." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExGraphBuilderDetails constinit property declarations *********
	static void NewProp_bWriteEdgePosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteEdgePosition;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EdgePosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BasicEdgeSolidification;
	static void NewProp_bRemoveSmallClusters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveSmallClusters;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinVtxCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinEdgeCount;
	static void NewProp_bRemoveBigClusters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveBigClusters;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxVtxCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEdgeCount;
	static void NewProp_bRefreshEdgeSeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefreshEdgeSeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuildAndCacheClusters_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildAndCacheClusters;
	static void NewProp_bOutputEdgeLength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputEdgeLength;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EdgeLengthName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExGraphBuilderDetails constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExGraphBuilderDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExGraphBuilderDetails;
class UScriptStruct* FPCGExGraphBuilderDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExGraphBuilderDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExGraphBuilderDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExGraphBuilderDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExGraphBuilderDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExGraphBuilderDetails Property Definitions ********************
void Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bWriteEdgePosition_SetBit(void* Obj)
{
	((FPCGExGraphBuilderDetails*)Obj)->bWriteEdgePosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bWriteEdgePosition = { "bWriteEdgePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExGraphBuilderDetails), &Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bWriteEdgePosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteEdgePosition_MetaData), NewProp_bWriteEdgePosition_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_EdgePosition = { "EdgePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGraphBuilderDetails, EdgePosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgePosition_MetaData), NewProp_EdgePosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_BasicEdgeSolidification = { "BasicEdgeSolidification", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGraphBuilderDetails, BasicEdgeSolidification), Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasicEdgeSolidification_MetaData), NewProp_BasicEdgeSolidification_MetaData) }; // 1219696380
void Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bRemoveSmallClusters_SetBit(void* Obj)
{
	((FPCGExGraphBuilderDetails*)Obj)->bRemoveSmallClusters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bRemoveSmallClusters = { "bRemoveSmallClusters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExGraphBuilderDetails), &Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bRemoveSmallClusters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveSmallClusters_MetaData), NewProp_bRemoveSmallClusters_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_MinVtxCount = { "MinVtxCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGraphBuilderDetails, MinVtxCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinVtxCount_MetaData), NewProp_MinVtxCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_MinEdgeCount = { "MinEdgeCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGraphBuilderDetails, MinEdgeCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinEdgeCount_MetaData), NewProp_MinEdgeCount_MetaData) };
void Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bRemoveBigClusters_SetBit(void* Obj)
{
	((FPCGExGraphBuilderDetails*)Obj)->bRemoveBigClusters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bRemoveBigClusters = { "bRemoveBigClusters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExGraphBuilderDetails), &Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bRemoveBigClusters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveBigClusters_MetaData), NewProp_bRemoveBigClusters_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_MaxVtxCount = { "MaxVtxCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGraphBuilderDetails, MaxVtxCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxVtxCount_MetaData), NewProp_MaxVtxCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_MaxEdgeCount = { "MaxEdgeCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGraphBuilderDetails, MaxEdgeCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEdgeCount_MetaData), NewProp_MaxEdgeCount_MetaData) };
void Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bRefreshEdgeSeed_SetBit(void* Obj)
{
	((FPCGExGraphBuilderDetails*)Obj)->bRefreshEdgeSeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bRefreshEdgeSeed = { "bRefreshEdgeSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExGraphBuilderDetails), &Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bRefreshEdgeSeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRefreshEdgeSeed_MetaData), NewProp_bRefreshEdgeSeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_BuildAndCacheClusters_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_BuildAndCacheClusters = { "BuildAndCacheClusters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGraphBuilderDetails, BuildAndCacheClusters), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExOptionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildAndCacheClusters_MetaData), NewProp_BuildAndCacheClusters_MetaData) }; // 2151781571
void Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bOutputEdgeLength_SetBit(void* Obj)
{
	((FPCGExGraphBuilderDetails*)Obj)->bOutputEdgeLength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bOutputEdgeLength = { "bOutputEdgeLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExGraphBuilderDetails), &Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bOutputEdgeLength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputEdgeLength_MetaData), NewProp_bOutputEdgeLength_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_EdgeLengthName = { "EdgeLengthName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExGraphBuilderDetails, EdgeLengthName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeLengthName_MetaData), NewProp_EdgeLengthName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bWriteEdgePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_EdgePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_BasicEdgeSolidification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bRemoveSmallClusters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_MinVtxCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_MinEdgeCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bRemoveBigClusters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_MaxVtxCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_MaxEdgeCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bRefreshEdgeSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_BuildAndCacheClusters_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_BuildAndCacheClusters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_bOutputEdgeLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewProp_EdgeLengthName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExGraphBuilderDetails Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExGraphBuilderDetails",
	Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::PropPointers),
	sizeof(FPCGExGraphBuilderDetails),
	alignof(FPCGExGraphBuilderDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExGraphBuilderDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExGraphBuilderDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExGraphBuilderDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExGraphBuilderDetails *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExGraph_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExAdjacencyDirectionOrigin_StaticEnum, TEXT("EPCGExAdjacencyDirectionOrigin"), &Z_Registration_Info_UEnum_EPCGExAdjacencyDirectionOrigin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1941991347U) },
		{ EPCGExClusterElement_StaticEnum, TEXT("EPCGExClusterElement"), &Z_Registration_Info_UEnum_EPCGExClusterElement, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1423364254U) },
		{ EPCGExIntersectionType_StaticEnum, TEXT("EPCGExIntersectionType"), &Z_Registration_Info_UEnum_EPCGExIntersectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1103992609U) },
		{ EPCGExBasicEdgeRadius_StaticEnum, TEXT("EPCGExBasicEdgeRadius"), &Z_Registration_Info_UEnum_EPCGExBasicEdgeRadius, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1734423921U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExBasicEdgeSolidificationDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics::NewStructOps, TEXT("PCGExBasicEdgeSolidificationDetails"),&Z_Registration_Info_UScriptStruct_FPCGExBasicEdgeSolidificationDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExBasicEdgeSolidificationDetails), 1219696380U) },
		{ FPCGExGraphBuilderDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics::NewStructOps, TEXT("PCGExGraphBuilderDetails"),&Z_Registration_Info_UScriptStruct_FPCGExGraphBuilderDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExGraphBuilderDetails), 816765072U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExGraph_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExGraph_h__Script_PCGExtendedToolkit_3117744859{
	TEXT("/Script/PCGExtendedToolkit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExGraph_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExGraph_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExGraph_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExGraph_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
