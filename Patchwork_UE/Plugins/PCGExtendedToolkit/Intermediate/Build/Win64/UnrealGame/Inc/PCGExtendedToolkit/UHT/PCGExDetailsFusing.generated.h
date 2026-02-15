// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Details/PCGExDetailsFusing.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExDetailsFusing_generated_h
#error "PCGExDetailsFusing.generated.h already included, missing '#pragma once' in PCGExDetailsFusing.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExDetailsFusing_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExFuseDetailsBase *********************************************
struct Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsFusing_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExFuseDetailsBase_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExFuseDetailsBase;
// ********** End ScriptStruct FPCGExFuseDetailsBase ***********************************************

// ********** Begin ScriptStruct FPCGExSourceFuseDetails *******************************************
struct Z_Construct_UScriptStruct_FPCGExSourceFuseDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsFusing_h_83_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExSourceFuseDetails_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPCGExFuseDetailsBase Super;


struct FPCGExSourceFuseDetails;
// ********** End ScriptStruct FPCGExSourceFuseDetails *********************************************

// ********** Begin ScriptStruct FPCGExFuseDetails *************************************************
struct Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsFusing_h_97_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExFuseDetails_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPCGExSourceFuseDetails Super;


struct FPCGExFuseDetails;
// ********** End ScriptStruct FPCGExFuseDetails ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsFusing_h

// ********** Begin Enum EPCGExFuseMethod **********************************************************
#define FOREACH_ENUM_EPCGEXFUSEMETHOD(op) \
	op(EPCGExFuseMethod::Voxel) \
	op(EPCGExFuseMethod::Octree) 

enum class EPCGExFuseMethod : uint8;
template<> struct TIsUEnumClass<EPCGExFuseMethod> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExFuseMethod>();
// ********** End Enum EPCGExFuseMethod ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
