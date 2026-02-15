// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Paths/PCGExPathStitch.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExPathStitch_generated_h
#error "PCGExPathStitch.generated.h already included, missing '#pragma once' in PCGExPathStitch.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExPathStitch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExPathStitchSettings *************************************************
struct Z_Construct_UClass_UPCGExPathStitchSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathStitchSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathStitch_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExPathStitchSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExPathStitchSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExPathStitchSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExPathStitchSettings, UPCGExPathProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExPathStitchSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExPathStitchSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathStitch_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExPathStitchSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExPathStitchSettings(UPCGExPathStitchSettings&&) = delete; \
	UPCGExPathStitchSettings(const UPCGExPathStitchSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExPathStitchSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExPathStitchSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExPathStitchSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExPathStitchSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathStitch_h_42_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathStitch_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathStitch_h_45_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathStitch_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExPathStitchSettings;

// ********** End Class UPCGExPathStitchSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathStitch_h

// ********** Begin Enum EPCGExStitchMethod ********************************************************
#define FOREACH_ENUM_EPCGEXSTITCHMETHOD(op) \
	op(EPCGExStitchMethod::Connect) \
	op(EPCGExStitchMethod::Fuse) 

enum class EPCGExStitchMethod : uint8;
template<> struct TIsUEnumClass<EPCGExStitchMethod> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExStitchMethod>();
// ********** End Enum EPCGExStitchMethod **********************************************************

// ********** Begin Enum EPCGExStitchFuseMethod ****************************************************
#define FOREACH_ENUM_EPCGEXSTITCHFUSEMETHOD(op) \
	op(EPCGExStitchFuseMethod::KeepStart) \
	op(EPCGExStitchFuseMethod::KeepEnd) 

enum class EPCGExStitchFuseMethod : uint8;
template<> struct TIsUEnumClass<EPCGExStitchFuseMethod> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExStitchFuseMethod>();
// ********** End Enum EPCGExStitchFuseMethod ******************************************************

// ********** Begin Enum EPCGExStitchFuseOperation *************************************************
#define FOREACH_ENUM_EPCGEXSTITCHFUSEOPERATION(op) \
	op(EPCGExStitchFuseOperation::None) \
	op(EPCGExStitchFuseOperation::Average) \
	op(EPCGExStitchFuseOperation::LineIntersection) 

enum class EPCGExStitchFuseOperation : uint8;
template<> struct TIsUEnumClass<EPCGExStitchFuseOperation> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExStitchFuseOperation>();
// ********** End Enum EPCGExStitchFuseOperation ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
