// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transform/Tensors/PCGExTensorPole.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExTensorPole_generated_h
#error "PCGExTensorPole.generated.h already included, missing '#pragma once' in PCGExTensorPole.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExTensorPole_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExTensorPoleConfig ********************************************
struct Z_Construct_UScriptStruct_FPCGExTensorPoleConfig_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExTensorPoleConfig_Statics; \
	PCGEXTENDEDTOOLKIT_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGExTensorConfigBase Super;


struct FPCGExTensorPoleConfig;
// ********** End ScriptStruct FPCGExTensorPoleConfig **********************************************

// ********** Begin Class UPCGExTensorPoleFactory **************************************************
struct Z_Construct_UClass_UPCGExTensorPoleFactory_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPoleFactory_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExTensorPoleFactory(); \
	friend struct ::Z_Construct_UClass_UPCGExTensorPoleFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExTensorPoleFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExTensorPoleFactory, UPCGExTensorPointFactoryData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExTensorPoleFactory_NoRegister) \
	DECLARE_SERIALIZER(UPCGExTensorPoleFactory)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExTensorPoleFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExTensorPoleFactory(UPCGExTensorPoleFactory&&) = delete; \
	UPCGExTensorPoleFactory(const UPCGExTensorPoleFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExTensorPoleFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExTensorPoleFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExTensorPoleFactory) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExTensorPoleFactory();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h_38_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h_41_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExTensorPoleFactory;

// ********** End Class UPCGExTensorPoleFactory ****************************************************

// ********** Begin Class UPCGExCreateTensorPoleSettings *******************************************
struct Z_Construct_UClass_UPCGExCreateTensorPoleSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateTensorPoleSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExCreateTensorPoleSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExCreateTensorPoleSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExCreateTensorPoleSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExCreateTensorPoleSettings, UPCGExTensorPointFactoryProviderSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExCreateTensorPoleSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExCreateTensorPoleSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExCreateTensorPoleSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExCreateTensorPoleSettings(UPCGExCreateTensorPoleSettings&&) = delete; \
	UPCGExCreateTensorPoleSettings(const UPCGExCreateTensorPoleSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExCreateTensorPoleSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExCreateTensorPoleSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExCreateTensorPoleSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExCreateTensorPoleSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h_50_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h_53_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExCreateTensorPoleSettings;

// ********** End Class UPCGExCreateTensorPoleSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorPole_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
