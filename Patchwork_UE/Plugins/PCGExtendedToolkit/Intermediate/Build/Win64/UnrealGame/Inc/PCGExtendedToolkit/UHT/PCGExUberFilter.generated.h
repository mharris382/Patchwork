// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/PCGExUberFilter.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExUberFilter_generated_h
#error "PCGExUberFilter.generated.h already included, missing '#pragma once' in PCGExUberFilter.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExUberFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExUberFilterSettings *************************************************
struct Z_Construct_UClass_UPCGExUberFilterSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExUberFilterSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilter_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExUberFilterSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExUberFilterSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExUberFilterSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExUberFilterSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExUberFilterSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExUberFilterSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilter_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExUberFilterSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExUberFilterSettings(UPCGExUberFilterSettings&&) = delete; \
	UPCGExUberFilterSettings(const UPCGExUberFilterSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExUberFilterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExUberFilterSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExUberFilterSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExUberFilterSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilter_h_31_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilter_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilter_h_34_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilter_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExUberFilterSettings;

// ********** End Class UPCGExUberFilterSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilter_h

// ********** Begin Enum EPCGExUberFilterMode ******************************************************
#define FOREACH_ENUM_EPCGEXUBERFILTERMODE(op) \
	op(EPCGExUberFilterMode::Partition) \
	op(EPCGExUberFilterMode::Write) 

enum class EPCGExUberFilterMode : uint8;
template<> struct TIsUEnumClass<EPCGExUberFilterMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExUberFilterMode>();
// ********** End Enum EPCGExUberFilterMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
