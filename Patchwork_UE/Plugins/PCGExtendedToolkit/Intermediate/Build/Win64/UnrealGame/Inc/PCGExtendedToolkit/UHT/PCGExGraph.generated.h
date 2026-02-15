// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/PCGExGraph.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExGraph_generated_h
#error "PCGExGraph.generated.h already included, missing '#pragma once' in PCGExGraph.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExBasicEdgeSolidificationDetails ******************************
struct Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExGraph_h_109_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExBasicEdgeSolidificationDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExBasicEdgeSolidificationDetails;
// ********** End ScriptStruct FPCGExBasicEdgeSolidificationDetails ********************************

// ********** Begin ScriptStruct FPCGExGraphBuilderDetails *****************************************
struct Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExGraph_h_135_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExGraphBuilderDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExGraphBuilderDetails;
// ********** End ScriptStruct FPCGExGraphBuilderDetails *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExGraph_h

// ********** Begin Enum EPCGExAdjacencyDirectionOrigin ********************************************
#define FOREACH_ENUM_EPCGEXADJACENCYDIRECTIONORIGIN(op) \
	op(EPCGExAdjacencyDirectionOrigin::FromNode) \
	op(EPCGExAdjacencyDirectionOrigin::FromNeighbor) 

enum class EPCGExAdjacencyDirectionOrigin : uint8;
template<> struct TIsUEnumClass<EPCGExAdjacencyDirectionOrigin> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAdjacencyDirectionOrigin>();
// ********** End Enum EPCGExAdjacencyDirectionOrigin **********************************************

// ********** Begin Enum EPCGExClusterElement ******************************************************
#define FOREACH_ENUM_EPCGEXCLUSTERELEMENT(op) \
	op(EPCGExClusterElement::Vtx) \
	op(EPCGExClusterElement::Edge) 

enum class EPCGExClusterElement : uint8;
template<> struct TIsUEnumClass<EPCGExClusterElement> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExClusterElement>();
// ********** End Enum EPCGExClusterElement ********************************************************

// ********** Begin Enum EPCGExIntersectionType ****************************************************
#define FOREACH_ENUM_EPCGEXINTERSECTIONTYPE(op) \
	op(EPCGExIntersectionType::Unknown) \
	op(EPCGExIntersectionType::PointEdge) \
	op(EPCGExIntersectionType::EdgeEdge) \
	op(EPCGExIntersectionType::FusedEdge) 

enum class EPCGExIntersectionType : uint8;
template<> struct TIsUEnumClass<EPCGExIntersectionType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExIntersectionType>();
// ********** End Enum EPCGExIntersectionType ******************************************************

// ********** Begin Enum EPCGExBasicEdgeRadius *****************************************************
#define FOREACH_ENUM_EPCGEXBASICEDGERADIUS(op) \
	op(EPCGExBasicEdgeRadius::Average) \
	op(EPCGExBasicEdgeRadius::Lerp) \
	op(EPCGExBasicEdgeRadius::Min) \
	op(EPCGExBasicEdgeRadius::Max) \
	op(EPCGExBasicEdgeRadius::Fixed) 

enum class EPCGExBasicEdgeRadius : uint8;
template<> struct TIsUEnumClass<EPCGExBasicEdgeRadius> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBasicEdgeRadius>();
// ********** End Enum EPCGExBasicEdgeRadius *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
