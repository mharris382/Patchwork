// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sampling/PCGExSampleNearestSpline.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExSampleNearestSpline_generated_h
#error "PCGExSampleNearestSpline.generated.h already included, missing '#pragma once' in PCGExSampleNearestSpline.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExSampleNearestSpline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExSampleNearestSplineSettings ****************************************
struct Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleNearestSplineSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSpline_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExSampleNearestSplineSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExSampleNearestSplineSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExSampleNearestSplineSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExSampleNearestSplineSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExSampleNearestSplineSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExSampleNearestSplineSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSpline_h_110_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExSampleNearestSplineSettings(UPCGExSampleNearestSplineSettings&&) = delete; \
	UPCGExSampleNearestSplineSettings(const UPCGExSampleNearestSplineSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExSampleNearestSplineSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExSampleNearestSplineSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExSampleNearestSplineSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExSampleNearestSplineSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSpline_h_107_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSpline_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSpline_h_110_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSpline_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExSampleNearestSplineSettings;

// ********** End Class UPCGExSampleNearestSplineSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestSpline_h

// ********** Begin Enum EPCGExSplineDepthMode *****************************************************
#define FOREACH_ENUM_EPCGEXSPLINEDEPTHMODE(op) \
	op(EPCGExSplineDepthMode::Min) \
	op(EPCGExSplineDepthMode::Max) \
	op(EPCGExSplineDepthMode::Average) 

enum class EPCGExSplineDepthMode : uint8;
template<> struct TIsUEnumClass<EPCGExSplineDepthMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSplineDepthMode>();
// ********** End Enum EPCGExSplineDepthMode *******************************************************

// ********** Begin Enum EPCGExSplineSampleAlphaMode ***********************************************
#define FOREACH_ENUM_EPCGEXSPLINESAMPLEALPHAMODE(op) \
	op(EPCGExSplineSampleAlphaMode::Alpha) \
	op(EPCGExSplineSampleAlphaMode::Time) \
	op(EPCGExSplineSampleAlphaMode::Distance) 

enum class EPCGExSplineSampleAlphaMode : uint8;
template<> struct TIsUEnumClass<EPCGExSplineSampleAlphaMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSplineSampleAlphaMode>();
// ********** End Enum EPCGExSplineSampleAlphaMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
