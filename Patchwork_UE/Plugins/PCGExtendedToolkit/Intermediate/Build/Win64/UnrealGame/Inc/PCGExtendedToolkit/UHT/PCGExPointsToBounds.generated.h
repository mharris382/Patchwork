// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/PCGExPointsToBounds.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExPointsToBounds_generated_h
#error "PCGExPointsToBounds.generated.h already included, missing '#pragma once' in PCGExPointsToBounds.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExPointsToBounds_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExPointsToBoundsDataDetails ***********************************
struct Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPointsToBounds_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExPointsToBoundsDataDetails_Statics; \
	PCGEXTENDEDTOOLKIT_API static class UScriptStruct* StaticStruct();


struct FPCGExPointsToBoundsDataDetails;
// ********** End ScriptStruct FPCGExPointsToBoundsDataDetails *************************************

// ********** Begin Class UPCGExPointsToBoundsSettings *********************************************
struct Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsToBoundsSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPointsToBounds_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExPointsToBoundsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExPointsToBoundsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExPointsToBoundsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExPointsToBoundsSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExPointsToBoundsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExPointsToBoundsSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPointsToBounds_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExPointsToBoundsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExPointsToBoundsSettings(UPCGExPointsToBoundsSettings&&) = delete; \
	UPCGExPointsToBoundsSettings(const UPCGExPointsToBoundsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExPointsToBoundsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExPointsToBoundsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExPointsToBoundsSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExPointsToBoundsSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPointsToBounds_h_97_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPointsToBounds_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPointsToBounds_h_100_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPointsToBounds_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExPointsToBoundsSettings;

// ********** End Class UPCGExPointsToBoundsSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExPointsToBounds_h

// ********** Begin Enum EPCGExPointsToBoundsOutputMode ********************************************
#define FOREACH_ENUM_EPCGEXPOINTSTOBOUNDSOUTPUTMODE(op) \
	op(EPCGExPointsToBoundsOutputMode::Collapse) \
	op(EPCGExPointsToBoundsOutputMode::WriteData) 

enum class EPCGExPointsToBoundsOutputMode : uint8;
template<> struct TIsUEnumClass<EPCGExPointsToBoundsOutputMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPointsToBoundsOutputMode>();
// ********** End Enum EPCGExPointsToBoundsOutputMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
