// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/PCGExMergePointsByTag.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExMergePointsByTag_generated_h
#error "PCGExMergePointsByTag.generated.h already included, missing '#pragma once' in PCGExMergePointsByTag.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExMergePointsByTag_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExMergePointsByTagSettings *******************************************
struct Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMergePointsByTagSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePointsByTag_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExMergePointsByTagSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExMergePointsByTagSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExMergePointsByTagSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExMergePointsByTagSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExMergePointsByTagSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePointsByTag_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExMergePointsByTagSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExMergePointsByTagSettings(UPCGExMergePointsByTagSettings&&) = delete; \
	UPCGExMergePointsByTagSettings(const UPCGExMergePointsByTagSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExMergePointsByTagSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExMergePointsByTagSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExMergePointsByTagSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExMergePointsByTagSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePointsByTag_h_73_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePointsByTag_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePointsByTag_h_76_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePointsByTag_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExMergePointsByTagSettings;

// ********** End Class UPCGExMergePointsByTagSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePointsByTag_h

// ********** Begin Enum EPCGExMergeByTagOverlapResolutionMode *************************************
#define FOREACH_ENUM_EPCGEXMERGEBYTAGOVERLAPRESOLUTIONMODE(op) \
	op(EPCGExMergeByTagOverlapResolutionMode::Strict) \
	op(EPCGExMergeByTagOverlapResolutionMode::ImmediateOverlap) \
	op(EPCGExMergeByTagOverlapResolutionMode::Flatten) 

enum class EPCGExMergeByTagOverlapResolutionMode : uint8;
template<> struct TIsUEnumClass<EPCGExMergeByTagOverlapResolutionMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMergeByTagOverlapResolutionMode>();
// ********** End Enum EPCGExMergeByTagOverlapResolutionMode ***************************************

// ********** Begin Enum EPCGExMergeByTagFallbackBehavior ******************************************
#define FOREACH_ENUM_EPCGEXMERGEBYTAGFALLBACKBEHAVIOR(op) \
	op(EPCGExMergeByTagFallbackBehavior::Omit) \
	op(EPCGExMergeByTagFallbackBehavior::Merge) \
	op(EPCGExMergeByTagFallbackBehavior::Forward) 

enum class EPCGExMergeByTagFallbackBehavior : uint8;
template<> struct TIsUEnumClass<EPCGExMergeByTagFallbackBehavior> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMergeByTagFallbackBehavior>();
// ********** End Enum EPCGExMergeByTagFallbackBehavior ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
