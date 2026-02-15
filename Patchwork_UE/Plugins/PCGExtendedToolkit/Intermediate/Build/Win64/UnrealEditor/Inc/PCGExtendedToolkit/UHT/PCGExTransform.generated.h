// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transform/PCGExTransform.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExTransform_generated_h
#error "PCGExTransform.generated.h already included, missing '#pragma once' in PCGExTransform.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExAttachmentRules *********************************************
struct Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTransform_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExAttachmentRules_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExAttachmentRules;
// ********** End ScriptStruct FPCGExAttachmentRules ***********************************************

// ********** Begin ScriptStruct FPCGExSocket ******************************************************
struct Z_Construct_UScriptStruct_FPCGExSocket_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTransform_h_65_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExSocket_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExSocket;
// ********** End ScriptStruct FPCGExSocket ********************************************************

// ********** Begin ScriptStruct FPCGExSocketFitDetails ********************************************
struct Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTransform_h_88_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExSocketFitDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExSocketFitDetails;
// ********** End ScriptStruct FPCGExSocketFitDetails **********************************************

// ********** Begin ScriptStruct FPCGExUVW *********************************************************
struct Z_Construct_UScriptStruct_FPCGExUVW_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTransform_h_135_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExUVW_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExUVW;
// ********** End ScriptStruct FPCGExUVW ***********************************************************

// ********** Begin ScriptStruct FPCGExAxisDeformDetails *******************************************
struct Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTransform_h_221_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExAxisDeformDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExAxisDeformDetails;
// ********** End ScriptStruct FPCGExAxisDeformDetails *********************************************

// ********** Begin ScriptStruct FPCGExAxisTwistDetails ********************************************
struct Z_Construct_UScriptStruct_FPCGExAxisTwistDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTransform_h_278_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExAxisTwistDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExAxisTwistDetails;
// ********** End ScriptStruct FPCGExAxisTwistDetails **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTransform_h

// ********** Begin Enum EPCGExTransformMode *******************************************************
#define FOREACH_ENUM_EPCGEXTRANSFORMMODE(op) \
	op(EPCGExTransformMode::Absolute) \
	op(EPCGExTransformMode::Relative) 

enum class EPCGExTransformMode : uint8;
template<> struct TIsUEnumClass<EPCGExTransformMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTransformMode>();
// ********** End Enum EPCGExTransformMode *********************************************************

// ********** Begin Enum EPCGExTransformAlphaUsage *************************************************
#define FOREACH_ENUM_EPCGEXTRANSFORMALPHAUSAGE(op) \
	op(EPCGExTransformAlphaUsage::StartAndEnd) \
	op(EPCGExTransformAlphaUsage::StartAndSize) \
	op(EPCGExTransformAlphaUsage::CenterAndSize) 

enum class EPCGExTransformAlphaUsage : uint8;
template<> struct TIsUEnumClass<EPCGExTransformAlphaUsage> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTransformAlphaUsage>();
// ********** End Enum EPCGExTransformAlphaUsage ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
