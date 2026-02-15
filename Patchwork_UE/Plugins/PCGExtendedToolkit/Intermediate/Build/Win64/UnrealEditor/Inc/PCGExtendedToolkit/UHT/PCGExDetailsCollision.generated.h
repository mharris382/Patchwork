// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Details/PCGExDetailsCollision.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExDetailsCollision_generated_h
#error "PCGExDetailsCollision.generated.h already included, missing '#pragma once' in PCGExDetailsCollision.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExDetailsCollision_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExCollisionDetails ********************************************
struct Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsCollision_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExCollisionDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExCollisionDetails;
// ********** End ScriptStruct FPCGExCollisionDetails **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsCollision_h

// ********** Begin Enum EPCGExCollisionFilterType *************************************************
#define FOREACH_ENUM_EPCGEXCOLLISIONFILTERTYPE(op) \
	op(EPCGExCollisionFilterType::Channel) \
	op(EPCGExCollisionFilterType::ObjectType) \
	op(EPCGExCollisionFilterType::Profile) 

enum class EPCGExCollisionFilterType : uint8;
template<> struct TIsUEnumClass<EPCGExCollisionFilterType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCollisionFilterType>();
// ********** End Enum EPCGExCollisionFilterType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
