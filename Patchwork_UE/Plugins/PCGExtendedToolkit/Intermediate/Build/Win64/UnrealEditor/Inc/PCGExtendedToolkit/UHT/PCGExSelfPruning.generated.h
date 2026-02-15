// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sampling/PCGExSelfPruning.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExSelfPruning_generated_h
#error "PCGExSelfPruning.generated.h already included, missing '#pragma once' in PCGExSelfPruning.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExSelfPruning_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExSelfPruningSettings ************************************************
struct Z_Construct_UClass_UPCGExSelfPruningSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSelfPruningSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSelfPruning_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExSelfPruningSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExSelfPruningSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExSelfPruningSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExSelfPruningSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExSelfPruningSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExSelfPruningSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSelfPruning_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExSelfPruningSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExSelfPruningSettings(UPCGExSelfPruningSettings&&) = delete; \
	UPCGExSelfPruningSettings(const UPCGExSelfPruningSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExSelfPruningSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExSelfPruningSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExSelfPruningSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExSelfPruningSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSelfPruning_h_40_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSelfPruning_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSelfPruning_h_43_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSelfPruning_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExSelfPruningSettings;

// ********** End Class UPCGExSelfPruningSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSelfPruning_h

// ********** Begin Enum EPCGExSelfPruningMode *****************************************************
#define FOREACH_ENUM_EPCGEXSELFPRUNINGMODE(op) \
	op(EPCGExSelfPruningMode::Prune) \
	op(EPCGExSelfPruningMode::WriteResult) 

enum class EPCGExSelfPruningMode : uint8;
template<> struct TIsUEnumClass<EPCGExSelfPruningMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSelfPruningMode>();
// ********** End Enum EPCGExSelfPruningMode *******************************************************

// ********** Begin Enum EPCGExSelfPruningExpandOrder **********************************************
#define FOREACH_ENUM_EPCGEXSELFPRUNINGEXPANDORDER(op) \
	op(EPCGExSelfPruningExpandOrder::None) \
	op(EPCGExSelfPruningExpandOrder::Before) \
	op(EPCGExSelfPruningExpandOrder::After) 

enum class EPCGExSelfPruningExpandOrder : uint8;
template<> struct TIsUEnumClass<EPCGExSelfPruningExpandOrder> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSelfPruningExpandOrder>();
// ********** End Enum EPCGExSelfPruningExpandOrder ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
