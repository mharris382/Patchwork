// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sampling/PCGExSampleInsidePath.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExSampleInsidePath_generated_h
#error "PCGExSampleInsidePath.generated.h already included, missing '#pragma once' in PCGExSampleInsidePath.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExSampleInsidePath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExSampleInsidePathSettings *******************************************
struct Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleInsidePathSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleInsidePath_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExSampleInsidePathSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExSampleInsidePathSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExSampleInsidePathSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExSampleInsidePathSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExSampleInsidePathSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExSampleInsidePathSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleInsidePath_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExSampleInsidePathSettings(UPCGExSampleInsidePathSettings&&) = delete; \
	UPCGExSampleInsidePathSettings(const UPCGExSampleInsidePathSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExSampleInsidePathSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExSampleInsidePathSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExSampleInsidePathSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExSampleInsidePathSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleInsidePath_h_33_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleInsidePath_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleInsidePath_h_36_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleInsidePath_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExSampleInsidePathSettings;

// ********** End Class UPCGExSampleInsidePathSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleInsidePath_h

// ********** Begin Enum EPCGExSampleInsidePathOutput **********************************************
#define FOREACH_ENUM_EPCGEXSAMPLEINSIDEPATHOUTPUT(op) \
	op(EPCGExSampleInsidePathOutput::All) \
	op(EPCGExSampleInsidePathOutput::SuccessOnly) \
	op(EPCGExSampleInsidePathOutput::Split) 

enum class EPCGExSampleInsidePathOutput : uint8;
template<> struct TIsUEnumClass<EPCGExSampleInsidePathOutput> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSampleInsidePathOutput>();
// ********** End Enum EPCGExSampleInsidePathOutput ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
