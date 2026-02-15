// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/PCGExIterations.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExIterations_generated_h
#error "PCGExIterations.generated.h already included, missing '#pragma once' in PCGExIterations.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExIterations_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExIterationsSettings *************************************************
struct Z_Construct_UClass_UPCGExIterationsSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExIterationsSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExIterations_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExIterationsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExIterationsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExIterationsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExIterationsSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExIterationsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExIterationsSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExIterations_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExIterationsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExIterationsSettings(UPCGExIterationsSettings&&) = delete; \
	UPCGExIterationsSettings(const UPCGExIterationsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExIterationsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExIterationsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExIterationsSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExIterationsSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExIterations_h_24_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExIterations_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExIterations_h_27_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExIterations_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExIterationsSettings;

// ********** End Class UPCGExIterationsSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExIterations_h

// ********** Begin Enum EPCGExIterationDataType ***************************************************
#define FOREACH_ENUM_EPCGEXITERATIONDATATYPE(op) \
	op(EPCGExIterationDataType::Any) \
	op(EPCGExIterationDataType::Params) \
	op(EPCGExIterationDataType::Points) \
	op(EPCGExIterationDataType::Spline) \
	op(EPCGExIterationDataType::Texture) 

enum class EPCGExIterationDataType : uint8;
template<> struct TIsUEnumClass<EPCGExIterationDataType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExIterationDataType>();
// ********** End Enum EPCGExIterationDataType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
