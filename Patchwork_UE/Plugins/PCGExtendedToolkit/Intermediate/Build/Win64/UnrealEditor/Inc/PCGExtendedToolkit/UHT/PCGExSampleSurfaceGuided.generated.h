// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sampling/PCGExSampleSurfaceGuided.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExSampleSurfaceGuided_generated_h
#error "PCGExSampleSurfaceGuided.generated.h already included, missing '#pragma once' in PCGExSampleSurfaceGuided.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExSampleSurfaceGuided_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExSampleSurfaceGuidedSettings ****************************************
struct Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSurfaceGuided_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExSampleSurfaceGuidedSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExSampleSurfaceGuidedSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExSampleSurfaceGuidedSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExSampleSurfaceGuidedSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSurfaceGuided_h_54_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExSampleSurfaceGuidedSettings(UPCGExSampleSurfaceGuidedSettings&&) = delete; \
	UPCGExSampleSurfaceGuidedSettings(const UPCGExSampleSurfaceGuidedSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExSampleSurfaceGuidedSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExSampleSurfaceGuidedSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExSampleSurfaceGuidedSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExSampleSurfaceGuidedSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSurfaceGuided_h_51_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSurfaceGuided_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSurfaceGuided_h_54_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSurfaceGuided_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExSampleSurfaceGuidedSettings;

// ********** End Class UPCGExSampleSurfaceGuidedSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleSurfaceGuided_h

// ********** Begin Enum EPCGExTraceSampleDistanceInput ********************************************
#define FOREACH_ENUM_EPCGEXTRACESAMPLEDISTANCEINPUT(op) \
	op(EPCGExTraceSampleDistanceInput::DirectionLength) \
	op(EPCGExTraceSampleDistanceInput::Constant) \
	op(EPCGExTraceSampleDistanceInput::Attribute) 

enum class EPCGExTraceSampleDistanceInput : uint8;
template<> struct TIsUEnumClass<EPCGExTraceSampleDistanceInput> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTraceSampleDistanceInput>();
// ********** End Enum EPCGExTraceSampleDistanceInput **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
