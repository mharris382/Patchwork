// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Sharing/PCGExDataSharing.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExDataSharing_generated_h
#error "PCGExDataSharing.generated.h already included, missing '#pragma once' in PCGExDataSharing.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExDataSharing_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExSharedDataPin ***********************************************
struct Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExDataSharing_h_72_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExSharedDataPin_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExSharedDataPin;
// ********** End ScriptStruct FPCGExSharedDataPin *************************************************

// ********** Begin ScriptStruct FPCGExSharedDataLookup ********************************************
struct Z_Construct_UScriptStruct_FPCGExSharedDataLookup_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExDataSharing_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExSharedDataLookup_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExSharedDataLookup;
// ********** End ScriptStruct FPCGExSharedDataLookup **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExDataSharing_h

// ********** Begin Enum EPCGExDataSharingPushType *************************************************
#define FOREACH_ENUM_EPCGEXDATASHARINGPUSHTYPE(op) \
	op(EPCGExDataSharingPushType::Replace) \
	op(EPCGExDataSharingPushType::Append) \
	op(EPCGExDataSharingPushType::Remove) 

enum class EPCGExDataSharingPushType : uint8;
template<> struct TIsUEnumClass<EPCGExDataSharingPushType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDataSharingPushType>();
// ********** End Enum EPCGExDataSharingPushType ***************************************************

// ********** Begin Enum EPCGExPinStatus ***********************************************************
#define FOREACH_ENUM_EPCGEXPINSTATUS(op) \
	op(EPCGExPinStatus::Normal) \
	op(EPCGExPinStatus::Required) 

enum class EPCGExPinStatus : uint8;
template<> struct TIsUEnumClass<EPCGExPinStatus> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPinStatus>();
// ********** End Enum EPCGExPinStatus *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
