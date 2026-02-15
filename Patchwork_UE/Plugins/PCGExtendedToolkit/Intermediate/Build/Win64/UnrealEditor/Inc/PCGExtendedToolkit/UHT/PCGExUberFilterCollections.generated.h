// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/PCGExUberFilterCollections.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExUberFilterCollections_generated_h
#error "PCGExUberFilterCollections.generated.h already included, missing '#pragma once' in PCGExUberFilterCollections.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExUberFilterCollections_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExUberFilterCollectionsSettings **************************************
struct Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilterCollections_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExUberFilterCollectionsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExUberFilterCollectionsSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExUberFilterCollectionsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExUberFilterCollectionsSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilterCollections_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExUberFilterCollectionsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExUberFilterCollectionsSettings(UPCGExUberFilterCollectionsSettings&&) = delete; \
	UPCGExUberFilterCollectionsSettings(const UPCGExUberFilterCollectionsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExUberFilterCollectionsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExUberFilterCollectionsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExUberFilterCollectionsSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExUberFilterCollectionsSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilterCollections_h_25_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilterCollections_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilterCollections_h_28_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilterCollections_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExUberFilterCollectionsSettings;

// ********** End Class UPCGExUberFilterCollectionsSettings ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilterCollections_h

// ********** Begin Enum EPCGExUberFilterCollectionsMode *******************************************
#define FOREACH_ENUM_EPCGEXUBERFILTERCOLLECTIONSMODE(op) \
	op(EPCGExUberFilterCollectionsMode::All) \
	op(EPCGExUberFilterCollectionsMode::Any) \
	op(EPCGExUberFilterCollectionsMode::Partial) 

enum class EPCGExUberFilterCollectionsMode : uint8;
template<> struct TIsUEnumClass<EPCGExUberFilterCollectionsMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExUberFilterCollectionsMode>();
// ********** End Enum EPCGExUberFilterCollectionsMode *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
