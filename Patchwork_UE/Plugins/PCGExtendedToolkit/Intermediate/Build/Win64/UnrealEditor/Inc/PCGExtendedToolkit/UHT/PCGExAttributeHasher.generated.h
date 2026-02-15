// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/PCGExAttributeHasher.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExAttributeHasher_generated_h
#error "PCGExAttributeHasher.generated.h already included, missing '#pragma once' in PCGExAttributeHasher.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExAttributeHasher_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExAttributeHashConfig *****************************************
struct Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExAttributeHasher_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExAttributeHashConfig_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExAttributeHashConfig;
// ********** End ScriptStruct FPCGExAttributeHashConfig *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_PCGExAttributeHasher_h

// ********** Begin Enum EPCGExDataHashScope *******************************************************
#define FOREACH_ENUM_EPCGEXDATAHASHSCOPE(op) \
	op(EPCGExDataHashScope::All) \
	op(EPCGExDataHashScope::Uniques) \
	op(EPCGExDataHashScope::FirstAndLast) \
	op(EPCGExDataHashScope::First) \
	op(EPCGExDataHashScope::Last) 

enum class EPCGExDataHashScope : uint8;
template<> struct TIsUEnumClass<EPCGExDataHashScope> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDataHashScope>();
// ********** End Enum EPCGExDataHashScope *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
