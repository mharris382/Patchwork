// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transform/Tensors/PCGExTensorFlow.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExTensorFlow_generated_h
#error "PCGExTensorFlow.generated.h already included, missing '#pragma once' in PCGExTensorFlow.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExTensorFlow_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExTensorFlowConfig ********************************************
struct Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExTensorFlowConfig_Statics; \
	PCGEXTENDEDTOOLKIT_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGExTensorConfigBase Super;


struct FPCGExTensorFlowConfig;
// ********** End ScriptStruct FPCGExTensorFlowConfig **********************************************

// ********** Begin Class UPCGExTensorFlowFactory **************************************************
struct Z_Construct_UClass_UPCGExTensorFlowFactory_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorFlowFactory_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExTensorFlowFactory(); \
	friend struct ::Z_Construct_UClass_UPCGExTensorFlowFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExTensorFlowFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExTensorFlowFactory, UPCGExTensorPointFactoryData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExTensorFlowFactory_NoRegister) \
	DECLARE_SERIALIZER(UPCGExTensorFlowFactory)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h_79_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExTensorFlowFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExTensorFlowFactory(UPCGExTensorFlowFactory&&) = delete; \
	UPCGExTensorFlowFactory(const UPCGExTensorFlowFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExTensorFlowFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExTensorFlowFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExTensorFlowFactory) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExTensorFlowFactory();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h_76_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h_79_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExTensorFlowFactory;

// ********** End Class UPCGExTensorFlowFactory ****************************************************

// ********** Begin Class UPCGExCreateTensorFlowSettings *******************************************
struct Z_Construct_UClass_UPCGExCreateTensorFlowSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorFlowSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExCreateTensorFlowSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExCreateTensorFlowSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExCreateTensorFlowSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExCreateTensorFlowSettings, UPCGExTensorPointFactoryProviderSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExCreateTensorFlowSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExCreateTensorFlowSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExCreateTensorFlowSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExCreateTensorFlowSettings(UPCGExCreateTensorFlowSettings&&) = delete; \
	UPCGExCreateTensorFlowSettings(const UPCGExCreateTensorFlowSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExCreateTensorFlowSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExCreateTensorFlowSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExCreateTensorFlowSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExCreateTensorFlowSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h_91_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h_94_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExCreateTensorFlowSettings;

// ********** End Class UPCGExCreateTensorFlowSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFlow_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
