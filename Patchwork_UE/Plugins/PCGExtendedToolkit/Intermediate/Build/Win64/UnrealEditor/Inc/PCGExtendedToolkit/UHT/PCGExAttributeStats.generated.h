// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/PCGExAttributeStats.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExAttributeStats_generated_h
#error "PCGExAttributeStats.generated.h already included, missing '#pragma once' in PCGExAttributeStats.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExAttributeStats_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExAttributeStatsSettings *********************************************
struct Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAttributeStatsSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeStats_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExAttributeStatsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExAttributeStatsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExAttributeStatsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExAttributeStatsSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExAttributeStatsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExAttributeStatsSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeStats_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExAttributeStatsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExAttributeStatsSettings(UPCGExAttributeStatsSettings&&) = delete; \
	UPCGExAttributeStatsSettings(const UPCGExAttributeStatsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExAttributeStatsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExAttributeStatsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExAttributeStatsSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExAttributeStatsSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeStats_h_30_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeStats_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeStats_h_33_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeStats_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExAttributeStatsSettings;

// ********** End Class UPCGExAttributeStatsSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributeStats_h

// ********** Begin Enum EPCGExStatsOutputToPoints *************************************************
#define FOREACH_ENUM_EPCGEXSTATSOUTPUTTOPOINTS(op) \
	op(EPCGExStatsOutputToPoints::None) \
	op(EPCGExStatsOutputToPoints::Prefix) \
	op(EPCGExStatsOutputToPoints::Suffix) 

enum class EPCGExStatsOutputToPoints : uint8;
template<> struct TIsUEnumClass<EPCGExStatsOutputToPoints> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExStatsOutputToPoints>();
// ********** End Enum EPCGExStatsOutputToPoints ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
