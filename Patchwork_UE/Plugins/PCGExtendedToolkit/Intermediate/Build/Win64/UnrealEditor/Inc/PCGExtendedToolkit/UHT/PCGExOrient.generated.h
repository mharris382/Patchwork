// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Paths/PCGExOrient.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExOrient_generated_h
#error "PCGExOrient.generated.h already included, missing '#pragma once' in PCGExOrient.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExOrient_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExOrientSettings *****************************************************
struct Z_Construct_UClass_UPCGExOrientSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOrientSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOrient_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExOrientSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExOrientSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExOrientSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExOrientSettings, UPCGExPathProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExOrientSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExOrientSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOrient_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExOrientSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExOrientSettings(UPCGExOrientSettings&&) = delete; \
	UPCGExOrientSettings(const UPCGExOrientSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExOrientSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExOrientSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExOrientSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExOrientSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOrient_h_25_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOrient_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOrient_h_28_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOrient_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExOrientSettings;

// ********** End Class UPCGExOrientSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExOrient_h

// ********** Begin Enum EPCGExOrientUsage *********************************************************
#define FOREACH_ENUM_EPCGEXORIENTUSAGE(op) \
	op(EPCGExOrientUsage::ApplyToPoint) \
	op(EPCGExOrientUsage::OutputToAttribute) 

enum class EPCGExOrientUsage : uint8;
template<> struct TIsUEnumClass<EPCGExOrientUsage> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExOrientUsage>();
// ********** End Enum EPCGExOrientUsage ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
