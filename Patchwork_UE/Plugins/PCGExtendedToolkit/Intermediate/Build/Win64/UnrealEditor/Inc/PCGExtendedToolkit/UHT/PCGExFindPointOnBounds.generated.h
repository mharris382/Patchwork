// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/PCGExFindPointOnBounds.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExFindPointOnBounds_generated_h
#error "PCGExFindPointOnBounds.generated.h already included, missing '#pragma once' in PCGExFindPointOnBounds.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExFindPointOnBounds_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExFindPointOnBoundsSettings ******************************************
struct Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFindPointOnBounds_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExFindPointOnBoundsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExFindPointOnBoundsSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExFindPointOnBoundsSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFindPointOnBounds_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExFindPointOnBoundsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExFindPointOnBoundsSettings(UPCGExFindPointOnBoundsSettings&&) = delete; \
	UPCGExFindPointOnBoundsSettings(const UPCGExFindPointOnBoundsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExFindPointOnBoundsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExFindPointOnBoundsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExFindPointOnBoundsSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExFindPointOnBoundsSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFindPointOnBounds_h_26_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFindPointOnBounds_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFindPointOnBounds_h_29_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFindPointOnBounds_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExFindPointOnBoundsSettings;

// ********** End Class UPCGExFindPointOnBoundsSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFindPointOnBounds_h

// ********** Begin Enum EPCGExPointOnBoundsOutputMode *********************************************
#define FOREACH_ENUM_EPCGEXPOINTONBOUNDSOUTPUTMODE(op) \
	op(EPCGExPointOnBoundsOutputMode::Merged) \
	op(EPCGExPointOnBoundsOutputMode::Individual) 

enum class EPCGExPointOnBoundsOutputMode : uint8;
template<> struct TIsUEnumClass<EPCGExPointOnBoundsOutputMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPointOnBoundsOutputMode>();
// ********** End Enum EPCGExPointOnBoundsOutputMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
