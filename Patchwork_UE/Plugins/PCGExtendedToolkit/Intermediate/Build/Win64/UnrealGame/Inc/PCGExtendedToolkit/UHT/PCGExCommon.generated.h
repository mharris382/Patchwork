// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGExCommon.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExCommon_generated_h
#error "PCGExCommon.generated.h already included, missing '#pragma once' in PCGExCommon.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExCommon_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExCommon_h

// ********** Begin Enum EPCGExAsyncPriority *******************************************************
#define FOREACH_ENUM_EPCGEXASYNCPRIORITY(op) \
	op(EPCGExAsyncPriority::Default) \
	op(EPCGExAsyncPriority::Normal) \
	op(EPCGExAsyncPriority::High) \
	op(EPCGExAsyncPriority::BackgroundHigh) \
	op(EPCGExAsyncPriority::BackgroundNormal) \
	op(EPCGExAsyncPriority::BackgroundLow) 

enum class EPCGExAsyncPriority : uint8;
template<> struct TIsUEnumClass<EPCGExAsyncPriority> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAsyncPriority>();
// ********** End Enum EPCGExAsyncPriority *********************************************************

// ********** Begin Enum EPCGExInputValueType ******************************************************
#define FOREACH_ENUM_EPCGEXINPUTVALUETYPE(op) \
	op(EPCGExInputValueType::Constant) \
	op(EPCGExInputValueType::Attribute) 

enum class EPCGExInputValueType : uint8;
template<> struct TIsUEnumClass<EPCGExInputValueType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExInputValueType>();
// ********** End Enum EPCGExInputValueType ********************************************************

// ********** Begin Enum EPCGExInputValueToggle ****************************************************
#define FOREACH_ENUM_EPCGEXINPUTVALUETOGGLE(op) \
	op(EPCGExInputValueToggle::Constant) \
	op(EPCGExInputValueToggle::Attribute) \
	op(EPCGExInputValueToggle::Disabled) 

enum class EPCGExInputValueToggle : uint8;
template<> struct TIsUEnumClass<EPCGExInputValueToggle> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExInputValueToggle>();
// ********** End Enum EPCGExInputValueToggle ******************************************************

// ********** Begin Enum EPCGExDataInputValueType **************************************************
#define FOREACH_ENUM_EPCGEXDATAINPUTVALUETYPE(op) \
	op(EPCGExDataInputValueType::Constant) \
	op(EPCGExDataInputValueType::Attribute) 

enum class EPCGExDataInputValueType : uint8;
template<> struct TIsUEnumClass<EPCGExDataInputValueType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDataInputValueType>();
// ********** End Enum EPCGExDataInputValueType ****************************************************

// ********** Begin Enum EPCGExPointBoundsSource ***************************************************
#define FOREACH_ENUM_EPCGEXPOINTBOUNDSSOURCE(op) \
	op(EPCGExPointBoundsSource::ScaledBounds) \
	op(EPCGExPointBoundsSource::DensityBounds) \
	op(EPCGExPointBoundsSource::Bounds) \
	op(EPCGExPointBoundsSource::Center) 

enum class EPCGExPointBoundsSource : uint8;
template<> struct TIsUEnumClass<EPCGExPointBoundsSource> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPointBoundsSource>();
// ********** End Enum EPCGExPointBoundsSource *****************************************************

// ********** Begin Enum EPCGExDistance ************************************************************
#define FOREACH_ENUM_EPCGEXDISTANCE(op) \
	op(EPCGExDistance::Center) \
	op(EPCGExDistance::SphereBounds) \
	op(EPCGExDistance::BoxBounds) \
	op(EPCGExDistance::None) 

enum class EPCGExDistance : uint8;
template<> struct TIsUEnumClass<EPCGExDistance> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDistance>();
// ********** End Enum EPCGExDistance **************************************************************

// ********** Begin Enum EPCGExSplineMeshAxis ******************************************************
#define FOREACH_ENUM_EPCGEXSPLINEMESHAXIS(op) \
	op(EPCGExSplineMeshAxis::Default) \
	op(EPCGExSplineMeshAxis::X) \
	op(EPCGExSplineMeshAxis::Y) \
	op(EPCGExSplineMeshAxis::Z) 

enum class EPCGExSplineMeshAxis : uint8;
template<> struct TIsUEnumClass<EPCGExSplineMeshAxis> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSplineMeshAxis>();
// ********** End Enum EPCGExSplineMeshAxis ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
