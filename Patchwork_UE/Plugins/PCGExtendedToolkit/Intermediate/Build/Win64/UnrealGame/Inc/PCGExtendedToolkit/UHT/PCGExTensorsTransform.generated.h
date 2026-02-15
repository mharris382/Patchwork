// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transform/PCGExTensorsTransform.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExTensorsTransform_generated_h
#error "PCGExTensorsTransform.generated.h already included, missing '#pragma once' in PCGExTensorsTransform.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExTensorsTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExTensorsTransformSettings *******************************************
struct Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorsTransformSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTensorsTransform_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExTensorsTransformSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExTensorsTransformSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExTensorsTransformSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExTensorsTransformSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExTensorsTransformSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExTensorsTransformSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTensorsTransform_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExTensorsTransformSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExTensorsTransformSettings(UPCGExTensorsTransformSettings&&) = delete; \
	UPCGExTensorsTransformSettings(const UPCGExTensorsTransformSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExTensorsTransformSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExTensorsTransformSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExTensorsTransformSettings) \
	NO_API virtual ~UPCGExTensorsTransformSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTensorsTransform_h_37_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTensorsTransform_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTensorsTransform_h_40_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTensorsTransform_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExTensorsTransformSettings;

// ********** End Class UPCGExTensorsTransformSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExTensorsTransform_h

// ********** Begin Enum EPCGExTensorTransformMode *************************************************
#define FOREACH_ENUM_EPCGEXTENSORTRANSFORMMODE(op) \
	op(EPCGExTensorTransformMode::Absolute) \
	op(EPCGExTensorTransformMode::Relative) \
	op(EPCGExTensorTransformMode::Align) 

enum class EPCGExTensorTransformMode : uint8;
template<> struct TIsUEnumClass<EPCGExTensorTransformMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTensorTransformMode>();
// ********** End Enum EPCGExTensorTransformMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
