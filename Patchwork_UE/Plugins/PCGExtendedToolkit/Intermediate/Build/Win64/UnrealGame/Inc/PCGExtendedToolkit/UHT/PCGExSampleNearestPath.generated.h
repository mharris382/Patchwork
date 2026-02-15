// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sampling/PCGExSampleNearestPath.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExSampleNearestPath_generated_h
#error "PCGExSampleNearestPath.generated.h already included, missing '#pragma once' in PCGExSampleNearestPath.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExSampleNearestPath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExSampleNearestPathSettings ******************************************
struct Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleNearestPathSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPath_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExSampleNearestPathSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExSampleNearestPathSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExSampleNearestPathSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExSampleNearestPathSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExSampleNearestPathSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExSampleNearestPathSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPath_h_75_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExSampleNearestPathSettings(UPCGExSampleNearestPathSettings&&) = delete; \
	UPCGExSampleNearestPathSettings(const UPCGExSampleNearestPathSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExSampleNearestPathSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExSampleNearestPathSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExSampleNearestPathSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExSampleNearestPathSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPath_h_72_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPath_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPath_h_75_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPath_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExSampleNearestPathSettings;

// ********** End Class UPCGExSampleNearestPathSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestPath_h

// ********** Begin Enum EPCGExPathSamplingIncludeMode *********************************************
#define FOREACH_ENUM_EPCGEXPATHSAMPLINGINCLUDEMODE(op) \
	op(EPCGExPathSamplingIncludeMode::All) \
	op(EPCGExPathSamplingIncludeMode::ClosedLoopOnly) \
	op(EPCGExPathSamplingIncludeMode::OpenLoopsOnly) 

enum class EPCGExPathSamplingIncludeMode : uint8;
template<> struct TIsUEnumClass<EPCGExPathSamplingIncludeMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathSamplingIncludeMode>();
// ********** End Enum EPCGExPathSamplingIncludeMode ***********************************************

// ********** Begin Enum EPCGExPathSampleAlphaMode *************************************************
#define FOREACH_ENUM_EPCGEXPATHSAMPLEALPHAMODE(op) \
	op(EPCGExPathSampleAlphaMode::Alpha) \
	op(EPCGExPathSampleAlphaMode::Time) \
	op(EPCGExPathSampleAlphaMode::Distance) 

enum class EPCGExPathSampleAlphaMode : uint8;
template<> struct TIsUEnumClass<EPCGExPathSampleAlphaMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPathSampleAlphaMode>();
// ********** End Enum EPCGExPathSampleAlphaMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
