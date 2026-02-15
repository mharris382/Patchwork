// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transform/PCGExBestMatchAxis.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExBestMatchAxis_generated_h
#error "PCGExBestMatchAxis.generated.h already included, missing '#pragma once' in PCGExBestMatchAxis.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExBestMatchAxis_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExBestMatchAxisSettings **********************************************
struct Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBestMatchAxisSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBestMatchAxis_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExBestMatchAxisSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExBestMatchAxisSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExBestMatchAxisSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExBestMatchAxisSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExBestMatchAxisSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExBestMatchAxisSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBestMatchAxis_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExBestMatchAxisSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExBestMatchAxisSettings(UPCGExBestMatchAxisSettings&&) = delete; \
	UPCGExBestMatchAxisSettings(const UPCGExBestMatchAxisSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExBestMatchAxisSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExBestMatchAxisSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExBestMatchAxisSettings) \
	NO_API virtual ~UPCGExBestMatchAxisSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBestMatchAxis_h_29_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBestMatchAxis_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBestMatchAxis_h_32_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBestMatchAxis_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExBestMatchAxisSettings;

// ********** End Class UPCGExBestMatchAxisSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExBestMatchAxis_h

// ********** Begin Enum EPCGExBestMatchAxisTargetMode *********************************************
#define FOREACH_ENUM_EPCGEXBESTMATCHAXISTARGETMODE(op) \
	op(EPCGExBestMatchAxisTargetMode::Direction) \
	op(EPCGExBestMatchAxisTargetMode::LookAtWorldPosition) \
	op(EPCGExBestMatchAxisTargetMode::LookAtRelativePosition) \
	op(EPCGExBestMatchAxisTargetMode::ClosestTarget) 

enum class EPCGExBestMatchAxisTargetMode : uint8;
template<> struct TIsUEnumClass<EPCGExBestMatchAxisTargetMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBestMatchAxisTargetMode>();
// ********** End Enum EPCGExBestMatchAxisTargetMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
