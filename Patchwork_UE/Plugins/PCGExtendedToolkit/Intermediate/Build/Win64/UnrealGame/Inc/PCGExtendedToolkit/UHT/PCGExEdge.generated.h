// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/PCGExEdge.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExEdge_generated_h
#error "PCGExEdge.generated.h already included, missing '#pragma once' in PCGExEdge.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExEdge_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExEdge_h

// ********** Begin Enum EPCGExEdgeDirectionMethod *************************************************
#define FOREACH_ENUM_EPCGEXEDGEDIRECTIONMETHOD(op) \
	op(EPCGExEdgeDirectionMethod::EndpointsOrder) \
	op(EPCGExEdgeDirectionMethod::EndpointsIndices) \
	op(EPCGExEdgeDirectionMethod::EndpointsSort) \
	op(EPCGExEdgeDirectionMethod::EdgeDotAttribute) 

enum class EPCGExEdgeDirectionMethod : uint8;
template<> struct TIsUEnumClass<EPCGExEdgeDirectionMethod> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEdgeDirectionMethod>();
// ********** End Enum EPCGExEdgeDirectionMethod ***************************************************

// ********** Begin Enum EPCGExEdgeDirectionChoice *************************************************
#define FOREACH_ENUM_EPCGEXEDGEDIRECTIONCHOICE(op) \
	op(EPCGExEdgeDirectionChoice::SmallestToGreatest) \
	op(EPCGExEdgeDirectionChoice::GreatestToSmallest) 

enum class EPCGExEdgeDirectionChoice : uint8;
template<> struct TIsUEnumClass<EPCGExEdgeDirectionChoice> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEdgeDirectionChoice>();
// ********** End Enum EPCGExEdgeDirectionChoice ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
