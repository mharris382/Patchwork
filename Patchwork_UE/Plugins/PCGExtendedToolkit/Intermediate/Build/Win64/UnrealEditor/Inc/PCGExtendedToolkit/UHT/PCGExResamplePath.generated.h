// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Paths/PCGExResamplePath.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExResamplePath_generated_h
#error "PCGExResamplePath.generated.h already included, missing '#pragma once' in PCGExResamplePath.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExResamplePath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExResamplePathSettings ***********************************************
struct Z_Construct_UClass_UPCGExResamplePathSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExResamplePathSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExResamplePath_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExResamplePathSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExResamplePathSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExResamplePathSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExResamplePathSettings, UPCGExPathProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExResamplePathSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExResamplePathSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExResamplePath_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExResamplePathSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExResamplePathSettings(UPCGExResamplePathSettings&&) = delete; \
	UPCGExResamplePathSettings(const UPCGExResamplePathSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExResamplePathSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExResamplePathSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExResamplePathSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExResamplePathSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExResamplePath_h_33_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExResamplePath_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExResamplePath_h_36_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExResamplePath_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExResamplePathSettings;

// ********** End Class UPCGExResamplePathSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExResamplePath_h

// ********** Begin Enum EPCGExResampleMode ********************************************************
#define FOREACH_ENUM_EPCGEXRESAMPLEMODE(op) \
	op(EPCGExResampleMode::Sweep) \
	op(EPCGExResampleMode::Redistribute) 

enum class EPCGExResampleMode : uint8;
template<> struct TIsUEnumClass<EPCGExResampleMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExResampleMode>();
// ********** End Enum EPCGExResampleMode **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
