// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sampling/Neighbors/PCGExNeighborSampleFactoryProvider.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExNeighborSampleFactoryProvider_generated_h
#error "PCGExNeighborSampleFactoryProvider.generated.h already included, missing '#pragma once' in PCGExNeighborSampleFactoryProvider.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExNeighborSampleFactoryProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExDataTypeInfoNeighborSampler *********************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoNeighborSampler_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExDataTypeInfoNeighborSampler_Statics; \
	PCGEXTENDEDTOOLKIT_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGExFactoryDataTypeInfo Super;


struct FPCGExDataTypeInfoNeighborSampler;
// ********** End ScriptStruct FPCGExDataTypeInfoNeighborSampler ***********************************

// ********** Begin ScriptStruct FPCGExSamplingConfig **********************************************
struct Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExSamplingConfig_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExSamplingConfig;
// ********** End ScriptStruct FPCGExSamplingConfig ************************************************

// ********** Begin Class UPCGExNeighborSamplerFactoryData *****************************************
struct Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h_144_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExNeighborSamplerFactoryData(); \
	friend struct ::Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExNeighborSamplerFactoryData, UPCGExFactoryData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExNeighborSamplerFactoryData_NoRegister) \
	DECLARE_SERIALIZER(UPCGExNeighborSamplerFactoryData)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h_144_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExNeighborSamplerFactoryData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExNeighborSamplerFactoryData(UPCGExNeighborSamplerFactoryData&&) = delete; \
	UPCGExNeighborSamplerFactoryData(const UPCGExNeighborSamplerFactoryData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExNeighborSamplerFactoryData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExNeighborSamplerFactoryData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExNeighborSamplerFactoryData) \
	NO_API virtual ~UPCGExNeighborSamplerFactoryData();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h_141_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h_144_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h_144_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h_144_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExNeighborSamplerFactoryData;

// ********** End Class UPCGExNeighborSamplerFactoryData *******************************************

// ********** Begin Class UPCGExNeighborSampleProviderSettings *************************************
struct Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExNeighborSampleProviderSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExNeighborSampleProviderSettings, UPCGExFactoryProviderSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExNeighborSampleProviderSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExNeighborSampleProviderSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h_173_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExNeighborSampleProviderSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExNeighborSampleProviderSettings(UPCGExNeighborSampleProviderSettings&&) = delete; \
	UPCGExNeighborSampleProviderSettings(const UPCGExNeighborSampleProviderSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExNeighborSampleProviderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExNeighborSampleProviderSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExNeighborSampleProviderSettings) \
	NO_API virtual ~UPCGExNeighborSampleProviderSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h_170_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h_173_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h_173_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExNeighborSampleProviderSettings;

// ********** End Class UPCGExNeighborSampleProviderSettings ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_Neighbors_PCGExNeighborSampleFactoryProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
