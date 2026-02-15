// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/PCGExDiscardSame.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExDiscardSame_generated_h
#error "PCGExDiscardSame.generated.h already included, missing '#pragma once' in PCGExDiscardSame.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExDiscardSame_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExDiscardSameSettings ************************************************
struct Z_Construct_UClass_UPCGExDiscardSameSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDiscardSameSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardSame_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExDiscardSameSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExDiscardSameSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExDiscardSameSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExDiscardSameSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExDiscardSameSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExDiscardSameSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardSame_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExDiscardSameSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExDiscardSameSettings(UPCGExDiscardSameSettings&&) = delete; \
	UPCGExDiscardSameSettings(const UPCGExDiscardSameSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExDiscardSameSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExDiscardSameSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExDiscardSameSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExDiscardSameSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardSame_h_28_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardSame_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardSame_h_31_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardSame_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExDiscardSameSettings;

// ********** End Class UPCGExDiscardSameSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardSame_h

// ********** Begin Enum EPCGExDiscardSameMode *****************************************************
#define FOREACH_ENUM_EPCGEXDISCARDSAMEMODE(op) \
	op(EPCGExDiscardSameMode::FIFO) \
	op(EPCGExDiscardSameMode::LIFO) \
	op(EPCGExDiscardSameMode::All) 

enum class EPCGExDiscardSameMode : uint8;
template<> struct TIsUEnumClass<EPCGExDiscardSameMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDiscardSameMode>();
// ********** End Enum EPCGExDiscardSameMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
