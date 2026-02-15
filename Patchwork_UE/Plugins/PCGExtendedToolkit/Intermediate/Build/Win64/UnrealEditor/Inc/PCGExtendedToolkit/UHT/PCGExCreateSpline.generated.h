// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Paths/PCGExCreateSpline.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExCreateSpline_generated_h
#error "PCGExCreateSpline.generated.h already included, missing '#pragma once' in PCGExCreateSpline.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExCreateSpline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExCreateSplineSettings ***********************************************
struct Z_Construct_UClass_UPCGExCreateSplineSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateSplineSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExCreateSpline_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExCreateSplineSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExCreateSplineSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExCreateSplineSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExCreateSplineSettings, UPCGExPathProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExCreateSplineSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExCreateSplineSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExCreateSpline_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExCreateSplineSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExCreateSplineSettings(UPCGExCreateSplineSettings&&) = delete; \
	UPCGExCreateSplineSettings(const UPCGExCreateSplineSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExCreateSplineSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExCreateSplineSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExCreateSplineSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExCreateSplineSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExCreateSpline_h_29_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExCreateSpline_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExCreateSpline_h_32_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExCreateSpline_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExCreateSplineSettings;

// ********** End Class UPCGExCreateSplineSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExCreateSpline_h

// ********** Begin Enum EPCGExSplinePointType *****************************************************
#define FOREACH_ENUM_EPCGEXSPLINEPOINTTYPE(op) \
	op(EPCGExSplinePointType::Linear) \
	op(EPCGExSplinePointType::Curve) \
	op(EPCGExSplinePointType::Constant) \
	op(EPCGExSplinePointType::CurveClamped) \
	op(EPCGExSplinePointType::CurveCustomTangent) 

enum class EPCGExSplinePointType : uint8;
template<> struct TIsUEnumClass<EPCGExSplinePointType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSplinePointType>();
// ********** End Enum EPCGExSplinePointType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
