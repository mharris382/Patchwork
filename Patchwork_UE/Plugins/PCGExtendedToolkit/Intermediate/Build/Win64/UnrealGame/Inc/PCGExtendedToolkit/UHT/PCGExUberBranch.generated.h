// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/PCGExUberBranch.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExUberBranch_generated_h
#error "PCGExUberBranch.generated.h already included, missing '#pragma once' in PCGExUberBranch.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExUberBranch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExUberBranchSettings *************************************************
struct Z_Construct_UClass_UPCGExUberBranchSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExUberBranchSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberBranch_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExUberBranchSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExUberBranchSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExUberBranchSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExUberBranchSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExUberBranchSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExUberBranchSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberBranch_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExUberBranchSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExUberBranchSettings(UPCGExUberBranchSettings&&) = delete; \
	UPCGExUberBranchSettings(const UPCGExUberBranchSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExUberBranchSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExUberBranchSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExUberBranchSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExUberBranchSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberBranch_h_24_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberBranch_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberBranch_h_27_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberBranch_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExUberBranchSettings;

// ********** End Class UPCGExUberBranchSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberBranch_h

// ********** Begin Enum EPCGExUberBranchMode ******************************************************
#define FOREACH_ENUM_EPCGEXUBERBRANCHMODE(op) \
	op(EPCGExUberBranchMode::All) \
	op(EPCGExUberBranchMode::Any) \
	op(EPCGExUberBranchMode::Partial) 

enum class EPCGExUberBranchMode : uint8;
template<> struct TIsUEnumClass<EPCGExUberBranchMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExUberBranchMode>();
// ********** End Enum EPCGExUberBranchMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
