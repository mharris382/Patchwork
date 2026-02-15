// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Details/PCGExDetailsAxis.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExDetailsAxis_generated_h
#error "PCGExDetailsAxis.generated.h already included, missing '#pragma once' in PCGExDetailsAxis.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExDetailsAxis_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Details_PCGExDetailsAxis_h

// ********** Begin Enum EPCGExMinimalAxis *********************************************************
#define FOREACH_ENUM_EPCGEXMINIMALAXIS(op) \
	op(EPCGExMinimalAxis::None) \
	op(EPCGExMinimalAxis::X) \
	op(EPCGExMinimalAxis::Y) \
	op(EPCGExMinimalAxis::Z) 

enum class EPCGExMinimalAxis : uint8;
template<> struct TIsUEnumClass<EPCGExMinimalAxis> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMinimalAxis>();
// ********** End Enum EPCGExMinimalAxis ***********************************************************

// ********** Begin Enum EPCGExAxis ****************************************************************
#define FOREACH_ENUM_EPCGEXAXIS(op) \
	op(EPCGExAxis::Forward) \
	op(EPCGExAxis::Backward) \
	op(EPCGExAxis::Right) \
	op(EPCGExAxis::Left) \
	op(EPCGExAxis::Up) \
	op(EPCGExAxis::Down) 

enum class EPCGExAxis : uint8;
template<> struct TIsUEnumClass<EPCGExAxis> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAxis>();
// ********** End Enum EPCGExAxis ******************************************************************

// ********** Begin Enum EPCGExAxisOrder ***********************************************************
#define FOREACH_ENUM_EPCGEXAXISORDER(op) \
	op(EPCGExAxisOrder::XYZ) \
	op(EPCGExAxisOrder::YZX) \
	op(EPCGExAxisOrder::ZXY) \
	op(EPCGExAxisOrder::YXZ) \
	op(EPCGExAxisOrder::ZYX) \
	op(EPCGExAxisOrder::XZY) 

enum class EPCGExAxisOrder : uint8;
template<> struct TIsUEnumClass<EPCGExAxisOrder> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAxisOrder>();
// ********** End Enum EPCGExAxisOrder *************************************************************

// ********** Begin Enum EPCGExAxisAlign ***********************************************************
#define FOREACH_ENUM_EPCGEXAXISALIGN(op) \
	op(EPCGExAxisAlign::Forward) \
	op(EPCGExAxisAlign::Backward) \
	op(EPCGExAxisAlign::Right) \
	op(EPCGExAxisAlign::Left) \
	op(EPCGExAxisAlign::Up) \
	op(EPCGExAxisAlign::Down) 

enum class EPCGExAxisAlign : uint8;
template<> struct TIsUEnumClass<EPCGExAxisAlign> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAxisAlign>();
// ********** End Enum EPCGExAxisAlign *************************************************************

// ********** Begin Enum EPCGExMakeRotAxis *********************************************************
#define FOREACH_ENUM_EPCGEXMAKEROTAXIS(op) \
	op(EPCGExMakeRotAxis::X) \
	op(EPCGExMakeRotAxis::XY) \
	op(EPCGExMakeRotAxis::XZ) \
	op(EPCGExMakeRotAxis::Y) \
	op(EPCGExMakeRotAxis::YX) \
	op(EPCGExMakeRotAxis::YZ) \
	op(EPCGExMakeRotAxis::Z) \
	op(EPCGExMakeRotAxis::ZX) \
	op(EPCGExMakeRotAxis::ZY) 

enum class EPCGExMakeRotAxis : uint8;
template<> struct TIsUEnumClass<EPCGExMakeRotAxis> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMakeRotAxis>();
// ********** End Enum EPCGExMakeRotAxis ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
