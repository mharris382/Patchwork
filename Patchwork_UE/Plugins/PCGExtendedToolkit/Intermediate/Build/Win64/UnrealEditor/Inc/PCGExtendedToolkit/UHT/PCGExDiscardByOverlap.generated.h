// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/PCGExDiscardByOverlap.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExDiscardByOverlap_generated_h
#error "PCGExDiscardByOverlap.generated.h already included, missing '#pragma once' in PCGExDiscardByOverlap.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExDiscardByOverlap_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExOverlapScoresWeighting **************************************
struct Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByOverlap_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExOverlapScoresWeighting_Statics; \
	PCGEXTENDEDTOOLKIT_API static class UScriptStruct* StaticStruct();


struct FPCGExOverlapScoresWeighting;
// ********** End ScriptStruct FPCGExOverlapScoresWeighting ****************************************

// ********** Begin Class UPCGExDiscardByOverlapSettings *******************************************
struct Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDiscardByOverlapSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByOverlap_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExDiscardByOverlapSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExDiscardByOverlapSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExDiscardByOverlapSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExDiscardByOverlapSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExDiscardByOverlapSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExDiscardByOverlapSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByOverlap_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExDiscardByOverlapSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExDiscardByOverlapSettings(UPCGExDiscardByOverlapSettings&&) = delete; \
	UPCGExDiscardByOverlapSettings(const UPCGExDiscardByOverlapSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExDiscardByOverlapSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExDiscardByOverlapSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExDiscardByOverlapSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExDiscardByOverlapSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByOverlap_h_110_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByOverlap_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByOverlap_h_113_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByOverlap_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExDiscardByOverlapSettings;

// ********** End Class UPCGExDiscardByOverlapSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardByOverlap_h

// ********** Begin Enum EPCGExOverlapTestMode *****************************************************
#define FOREACH_ENUM_EPCGEXOVERLAPTESTMODE(op) \
	op(EPCGExOverlapTestMode::Fast) \
	op(EPCGExOverlapTestMode::Box) \
	op(EPCGExOverlapTestMode::Sphere) 

enum class EPCGExOverlapTestMode : uint8;
template<> struct TIsUEnumClass<EPCGExOverlapTestMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExOverlapTestMode>();
// ********** End Enum EPCGExOverlapTestMode *******************************************************

// ********** Begin Enum EPCGExOverlapPruningLogic *************************************************
#define FOREACH_ENUM_EPCGEXOVERLAPPRUNINGLOGIC(op) \
	op(EPCGExOverlapPruningLogic::LowFirst) \
	op(EPCGExOverlapPruningLogic::HighFirst) 

enum class EPCGExOverlapPruningLogic : uint8;
template<> struct TIsUEnumClass<EPCGExOverlapPruningLogic> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExOverlapPruningLogic>();
// ********** End Enum EPCGExOverlapPruningLogic ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
