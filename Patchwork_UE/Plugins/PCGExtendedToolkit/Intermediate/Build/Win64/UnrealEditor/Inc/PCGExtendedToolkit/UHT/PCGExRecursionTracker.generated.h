// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/PCGExRecursionTracker.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExRecursionTracker_generated_h
#error "PCGExRecursionTracker.generated.h already included, missing '#pragma once' in PCGExRecursionTracker.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExRecursionTracker_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExRecursionTrackerSettings *******************************************
struct Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRecursionTrackerSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRecursionTracker_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExRecursionTrackerSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExRecursionTrackerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExRecursionTrackerSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExRecursionTrackerSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExRecursionTrackerSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRecursionTracker_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExRecursionTrackerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExRecursionTrackerSettings(UPCGExRecursionTrackerSettings&&) = delete; \
	UPCGExRecursionTrackerSettings(const UPCGExRecursionTrackerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExRecursionTrackerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExRecursionTrackerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExRecursionTrackerSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExRecursionTrackerSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRecursionTracker_h_42_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRecursionTracker_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRecursionTracker_h_45_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRecursionTracker_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExRecursionTrackerSettings;

// ********** End Class UPCGExRecursionTrackerSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRecursionTracker_h

// ********** Begin Enum EPCGExRecursionTrackerType ************************************************
#define FOREACH_ENUM_EPCGEXRECURSIONTRACKERTYPE(op) \
	op(EPCGExRecursionTrackerType::Simple) \
	op(EPCGExRecursionTrackerType::Branch) 

enum class EPCGExRecursionTrackerType : uint8;
template<> struct TIsUEnumClass<EPCGExRecursionTrackerType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRecursionTrackerType>();
// ********** End Enum EPCGExRecursionTrackerType **************************************************

// ********** Begin Enum EPCGExRecursionTrackerMode ************************************************
#define FOREACH_ENUM_EPCGEXRECURSIONTRACKERMODE(op) \
	op(EPCGExRecursionTrackerMode::Create) \
	op(EPCGExRecursionTrackerMode::Update) \
	op(EPCGExRecursionTrackerMode::CreateOrUpdate) 

enum class EPCGExRecursionTrackerMode : uint8;
template<> struct TIsUEnumClass<EPCGExRecursionTrackerMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRecursionTrackerMode>();
// ********** End Enum EPCGExRecursionTrackerMode **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
