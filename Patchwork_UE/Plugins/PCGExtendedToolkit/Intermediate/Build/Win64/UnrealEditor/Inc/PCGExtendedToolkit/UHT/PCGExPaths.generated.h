// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Paths/PCGExPaths.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExPaths_generated_h
#error "PCGExPaths.generated.h already included, missing '#pragma once' in PCGExPaths.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExPaths_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExPathOutputDetails *******************************************
struct Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPaths_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExPathOutputDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExPathOutputDetails;
// ********** End ScriptStruct FPCGExPathOutputDetails *********************************************

// ********** Begin ScriptStruct FPCGExPathEdgeIntersectionDetails *********************************
struct Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPaths_h_111_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExPathEdgeIntersectionDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExPathEdgeIntersectionDetails;
// ********** End ScriptStruct FPCGExPathEdgeIntersectionDetails ***********************************

// ********** Begin ScriptStruct FPCGExPathFilterSettings ******************************************
struct Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPaths_h_165_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExPathFilterSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExPathFilterSettings;
// ********** End ScriptStruct FPCGExPathFilterSettings ********************************************

// ********** Begin ScriptStruct FPCGExPathIntersectionDetails *************************************
struct Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPaths_h_191_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExPathIntersectionDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExPathIntersectionDetails;
// ********** End ScriptStruct FPCGExPathIntersectionDetails ***************************************

// ********** Begin ScriptStruct FPCGExSplineMeshMutationDetails ***********************************
struct Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPaths_h_809_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExSplineMeshMutationDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExSplineMeshMutationDetails;
// ********** End ScriptStruct FPCGExSplineMeshMutationDetails *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPaths_h

// ********** Begin Enum EPCGExSplinePointTypeRedux ************************************************
#define FOREACH_ENUM_EPCGEXSPLINEPOINTTYPEREDUX(op) \
	op(EPCGExSplinePointTypeRedux::Linear) \
	op(EPCGExSplinePointTypeRedux::Curve) \
	op(EPCGExSplinePointTypeRedux::Constant) \
	op(EPCGExSplinePointTypeRedux::CurveClamped) 

enum class EPCGExSplinePointTypeRedux : uint8;
template<> struct TIsUEnumClass<EPCGExSplinePointTypeRedux> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSplinePointTypeRedux>();
// ********** End Enum EPCGExSplinePointTypeRedux **************************************************

// ********** Begin Enum EPCGExInlinePathProcessingOrder *******************************************
#define FOREACH_ENUM_EPCGEXINLINEPATHPROCESSINGORDER(op) \
	op(EPCGExInlinePathProcessingOrder::FromStart) \
	op(EPCGExInlinePathProcessingOrder::EndpointCompare) \
	op(EPCGExInlinePathProcessingOrder::TaggedAny) \
	op(EPCGExInlinePathProcessingOrder::TaggedAll) 

enum class EPCGExInlinePathProcessingOrder : uint8;
template<> struct TIsUEnumClass<EPCGExInlinePathProcessingOrder> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExInlinePathProcessingOrder>();
// ********** End Enum EPCGExInlinePathProcessingOrder *********************************************

// ********** Begin Enum EPCGExInputScope **********************************************************
#define FOREACH_ENUM_EPCGEXINPUTSCOPE(op) \
	op(EPCGExInputScope::All) \
	op(EPCGExInputScope::AllButTagged) 

enum class EPCGExInputScope : uint8;
template<> struct TIsUEnumClass<EPCGExInputScope> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExInputScope>();
// ********** End Enum EPCGExInputScope ************************************************************

// ********** Begin Enum EPCGExPathNormalDirection *************************************************
#define FOREACH_ENUM_EPCGEXPATHNORMALDIRECTION(op) \
	op(EPCGExPathNormalDirection::Normal) \
	op(EPCGExPathNormalDirection::Binormal) \
	op(EPCGExPathNormalDirection::AverageNormal) 

enum class EPCGExPathNormalDirection : uint8;
template<> struct TIsUEnumClass<EPCGExPathNormalDirection> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathNormalDirection>();
// ********** End Enum EPCGExPathNormalDirection ***************************************************

// ********** Begin Enum EPCGExSplineMeshUpMode ****************************************************
#define FOREACH_ENUM_EPCGEXSPLINEMESHUPMODE(op) \
	op(EPCGExSplineMeshUpMode::Constant) \
	op(EPCGExSplineMeshUpMode::Attribute) \
	op(EPCGExSplineMeshUpMode::Tangents) 

enum class EPCGExSplineMeshUpMode : uint8;
template<> struct TIsUEnumClass<EPCGExSplineMeshUpMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSplineMeshUpMode>();
// ********** End Enum EPCGExSplineMeshUpMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
