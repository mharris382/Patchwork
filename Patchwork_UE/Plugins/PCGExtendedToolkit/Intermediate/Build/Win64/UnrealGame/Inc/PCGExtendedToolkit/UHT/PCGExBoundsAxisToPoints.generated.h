// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transform/PCGExBoundsAxisToPoints.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExBoundsAxisToPoints_generated_h
#error "PCGExBoundsAxisToPoints.generated.h already included, missing '#pragma once' in PCGExBoundsAxisToPoints.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExBoundsAxisToPoints_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExBoundsAxisToPointsSettings *****************************************
struct Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsAxisToPoints_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExBoundsAxisToPointsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExBoundsAxisToPointsSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExBoundsAxisToPointsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExBoundsAxisToPointsSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsAxisToPoints_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExBoundsAxisToPointsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExBoundsAxisToPointsSettings(UPCGExBoundsAxisToPointsSettings&&) = delete; \
	UPCGExBoundsAxisToPointsSettings(const UPCGExBoundsAxisToPointsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExBoundsAxisToPointsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExBoundsAxisToPointsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExBoundsAxisToPointsSettings) \
	NO_API virtual ~UPCGExBoundsAxisToPointsSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsAxisToPoints_h_49_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsAxisToPoints_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsAxisToPoints_h_52_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsAxisToPoints_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExBoundsAxisToPointsSettings;

// ********** End Class UPCGExBoundsAxisToPointsSettings *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBoundsAxisToPoints_h

// ********** Begin Enum EPCGExBoundAxisPriority ***************************************************
#define FOREACH_ENUM_EPCGEXBOUNDAXISPRIORITY(op) \
	op(EPCGExBoundAxisPriority::Shortest) \
	op(EPCGExBoundAxisPriority::Longest) \
	op(EPCGExBoundAxisPriority::Median) 

enum class EPCGExBoundAxisPriority : uint8;
template<> struct TIsUEnumClass<EPCGExBoundAxisPriority> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBoundAxisPriority>();
// ********** End Enum EPCGExBoundAxisPriority *****************************************************

// ********** Begin Enum EPCGExAxisDirectionConstraint *********************************************
#define FOREACH_ENUM_EPCGEXAXISDIRECTIONCONSTRAINT(op) \
	op(EPCGExAxisDirectionConstraint::None) \
	op(EPCGExAxisDirectionConstraint::Avoid) \
	op(EPCGExAxisDirectionConstraint::Favor) 

enum class EPCGExAxisDirectionConstraint : uint8;
template<> struct TIsUEnumClass<EPCGExAxisDirectionConstraint> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAxisDirectionConstraint>();
// ********** End Enum EPCGExAxisDirectionConstraint ***********************************************

// ********** Begin Enum EPCGExAxisSizeConstraint **************************************************
#define FOREACH_ENUM_EPCGEXAXISSIZECONSTRAINT(op) \
	op(EPCGExAxisSizeConstraint::None) \
	op(EPCGExAxisSizeConstraint::Greater) \
	op(EPCGExAxisSizeConstraint::Smaller) 

enum class EPCGExAxisSizeConstraint : uint8;
template<> struct TIsUEnumClass<EPCGExAxisSizeConstraint> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAxisSizeConstraint>();
// ********** End Enum EPCGExAxisSizeConstraint ****************************************************

// ********** Begin Enum EPCGExAxisConstraintSorting ***********************************************
#define FOREACH_ENUM_EPCGEXAXISCONSTRAINTSORTING(op) \
	op(EPCGExAxisConstraintSorting::SizeMatters) \
	op(EPCGExAxisConstraintSorting::DirectionMatters) 

enum class EPCGExAxisConstraintSorting : uint8;
template<> struct TIsUEnumClass<EPCGExAxisConstraintSorting> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAxisConstraintSorting>();
// ********** End Enum EPCGExAxisConstraintSorting *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
