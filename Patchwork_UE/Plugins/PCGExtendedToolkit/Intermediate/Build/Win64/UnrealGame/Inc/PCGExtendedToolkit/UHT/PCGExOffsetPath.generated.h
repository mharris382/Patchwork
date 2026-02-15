// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Paths/PCGExOffsetPath.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExOffsetPath_generated_h
#error "PCGExOffsetPath.generated.h already included, missing '#pragma once' in PCGExOffsetPath.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExOffsetPath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExOffsetPathSettings *************************************************
struct Z_Construct_UClass_UPCGExOffsetPathSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOffsetPathSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOffsetPath_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExOffsetPathSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExOffsetPathSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExOffsetPathSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExOffsetPathSettings, UPCGExPathProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExOffsetPathSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExOffsetPathSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOffsetPath_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExOffsetPathSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExOffsetPathSettings(UPCGExOffsetPathSettings&&) = delete; \
	UPCGExOffsetPathSettings(const UPCGExOffsetPathSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExOffsetPathSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExOffsetPathSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExOffsetPathSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExOffsetPathSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOffsetPath_h_42_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOffsetPath_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOffsetPath_h_45_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOffsetPath_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExOffsetPathSettings;

// ********** End Class UPCGExOffsetPathSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOffsetPath_h

// ********** Begin Enum EPCGExOffsetCleanupMode ***************************************************
#define FOREACH_ENUM_EPCGEXOFFSETCLEANUPMODE(op) \
	op(EPCGExOffsetCleanupMode::None) \
	op(EPCGExOffsetCleanupMode::CollapseFlipped) \
	op(EPCGExOffsetCleanupMode::SectionsFlipped) \
	op(EPCGExOffsetCleanupMode::Sections) 

enum class EPCGExOffsetCleanupMode : uint8;
template<> struct TIsUEnumClass<EPCGExOffsetCleanupMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExOffsetCleanupMode>();
// ********** End Enum EPCGExOffsetCleanupMode *****************************************************

// ********** Begin Enum EPCGExOffsetAdjustment ****************************************************
#define FOREACH_ENUM_EPCGEXOFFSETADJUSTMENT(op) \
	op(EPCGExOffsetAdjustment::None) \
	op(EPCGExOffsetAdjustment::SmoothCustom) \
	op(EPCGExOffsetAdjustment::SmoothAuto) \
	op(EPCGExOffsetAdjustment::Mitre) 

enum class EPCGExOffsetAdjustment : uint8;
template<> struct TIsUEnumClass<EPCGExOffsetAdjustment> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExOffsetAdjustment>();
// ********** End Enum EPCGExOffsetAdjustment ******************************************************

// ********** Begin Enum EPCGExOffsetMethod ********************************************************
#define FOREACH_ENUM_EPCGEXOFFSETMETHOD(op) \
	op(EPCGExOffsetMethod::Slide) \
	op(EPCGExOffsetMethod::LinePlane) 

enum class EPCGExOffsetMethod : uint8;
template<> struct TIsUEnumClass<EPCGExOffsetMethod> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExOffsetMethod>();
// ********** End Enum EPCGExOffsetMethod **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
