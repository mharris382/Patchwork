// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Geometry/PCGExGeoPointBox.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExGeoPointBox_generated_h
#error "PCGExGeoPointBox.generated.h already included, missing '#pragma once' in PCGExGeoPointBox.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExGeoPointBox_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Geometry_PCGExGeoPointBox_h

// ********** Begin Enum EPCGExBoxCheckMode ********************************************************
#define FOREACH_ENUM_EPCGEXBOXCHECKMODE(op) \
	op(EPCGExBoxCheckMode::Box) \
	op(EPCGExBoxCheckMode::ExpandedBox) \
	op(EPCGExBoxCheckMode::Sphere) \
	op(EPCGExBoxCheckMode::ExpandedSphere) 

enum class EPCGExBoxCheckMode : uint8;
template<> struct TIsUEnumClass<EPCGExBoxCheckMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBoxCheckMode>();
// ********** End Enum EPCGExBoxCheckMode **********************************************************

// ********** Begin Enum EPCGExCutType *************************************************************
#define FOREACH_ENUM_EPCGEXCUTTYPE(op) \
	op(EPCGExCutType::Undefined) \
	op(EPCGExCutType::Entry) \
	op(EPCGExCutType::EntryNoExit) \
	op(EPCGExCutType::Exit) \
	op(EPCGExCutType::ExitNoEntry) 

enum class EPCGExCutType : uint8;
template<> struct TIsUEnumClass<EPCGExCutType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCutType>();
// ********** End Enum EPCGExCutType ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
