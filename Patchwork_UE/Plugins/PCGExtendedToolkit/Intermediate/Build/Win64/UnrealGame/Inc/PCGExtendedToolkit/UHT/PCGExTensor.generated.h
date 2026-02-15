// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transform/Tensors/PCGExTensor.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExTensor_generated_h
#error "PCGExTensor.generated.h already included, missing '#pragma once' in PCGExTensor.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExTensor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExTensorSamplingMutationsDetails ******************************
struct Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensor_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExTensorSamplingMutationsDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExTensorSamplingMutationsDetails;
// ********** End ScriptStruct FPCGExTensorSamplingMutationsDetails ********************************

// ********** Begin ScriptStruct FPCGExTensorConfigBase ********************************************
struct Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensor_h_96_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExTensorConfigBase_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExTensorConfigBase;
// ********** End ScriptStruct FPCGExTensorConfigBase **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensor_h

// ********** Begin Enum EPCGExTensorSamplingMode **************************************************
#define FOREACH_ENUM_EPCGEXTENSORSAMPLINGMODE(op) \
	op(EPCGExTensorSamplingMode::Weighted) \
	op(EPCGExTensorSamplingMode::OrderedInPlace) \
	op(EPCGExTensorSamplingMode::OrderedMutated) 

enum class EPCGExTensorSamplingMode : uint8;
template<> struct TIsUEnumClass<EPCGExTensorSamplingMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTensorSamplingMode>();
// ********** End Enum EPCGExTensorSamplingMode ****************************************************

// ********** Begin Enum EPCGExEffectorFlattenMode *************************************************
#define FOREACH_ENUM_EPCGEXEFFECTORFLATTENMODE(op) \
	op(EPCGExEffectorFlattenMode::Weighted) \
	op(EPCGExEffectorFlattenMode::Closest) \
	op(EPCGExEffectorFlattenMode::StrongestWeight) \
	op(EPCGExEffectorFlattenMode::StrongestPotency) 

enum class EPCGExEffectorFlattenMode : uint8;
template<> struct TIsUEnumClass<EPCGExEffectorFlattenMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEffectorFlattenMode>();
// ********** End Enum EPCGExEffectorFlattenMode ***************************************************

// ********** Begin Enum EPCGExEffectorInfluenceShape **********************************************
#define FOREACH_ENUM_EPCGEXEFFECTORINFLUENCESHAPE(op) \
	op(EPCGExEffectorInfluenceShape::Box) \
	op(EPCGExEffectorInfluenceShape::Sphere) 

enum class EPCGExEffectorInfluenceShape : uint8;
template<> struct TIsUEnumClass<EPCGExEffectorInfluenceShape> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEffectorInfluenceShape>();
// ********** End Enum EPCGExEffectorInfluenceShape ************************************************

// ********** Begin Enum EPCGExTensorStopConditionHandling *****************************************
#define FOREACH_ENUM_EPCGEXTENSORSTOPCONDITIONHANDLING(op) \
	op(EPCGExTensorStopConditionHandling::Exclude) \
	op(EPCGExTensorStopConditionHandling::Include) 

enum class EPCGExTensorStopConditionHandling : uint8;
template<> struct TIsUEnumClass<EPCGExTensorStopConditionHandling> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTensorStopConditionHandling>();
// ********** End Enum EPCGExTensorStopConditionHandling *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
