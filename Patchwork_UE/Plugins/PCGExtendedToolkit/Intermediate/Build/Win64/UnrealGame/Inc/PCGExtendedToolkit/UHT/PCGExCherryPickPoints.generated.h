// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/PCGExCherryPickPoints.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExCherryPickPoints_generated_h
#error "PCGExCherryPickPoints.generated.h already included, missing '#pragma once' in PCGExCherryPickPoints.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExCherryPickPoints_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExCherryPickPointsSettings *******************************************
struct Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCherryPickPointsSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCherryPickPoints_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExCherryPickPointsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExCherryPickPointsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExCherryPickPointsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExCherryPickPointsSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExCherryPickPointsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExCherryPickPointsSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCherryPickPoints_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExCherryPickPointsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExCherryPickPointsSettings(UPCGExCherryPickPointsSettings&&) = delete; \
	UPCGExCherryPickPointsSettings(const UPCGExCherryPickPointsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExCherryPickPointsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExCherryPickPointsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExCherryPickPointsSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExCherryPickPointsSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCherryPickPoints_h_24_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCherryPickPoints_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCherryPickPoints_h_27_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCherryPickPoints_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExCherryPickPointsSettings;

// ********** End Class UPCGExCherryPickPointsSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExCherryPickPoints_h

// ********** Begin Enum EPCGExCherryPickSource ****************************************************
#define FOREACH_ENUM_EPCGEXCHERRYPICKSOURCE(op) \
	op(EPCGExCherryPickSource::Self) \
	op(EPCGExCherryPickSource::Sources) 

enum class EPCGExCherryPickSource : uint8;
template<> struct TIsUEnumClass<EPCGExCherryPickSource> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCherryPickSource>();
// ********** End Enum EPCGExCherryPickSource ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
