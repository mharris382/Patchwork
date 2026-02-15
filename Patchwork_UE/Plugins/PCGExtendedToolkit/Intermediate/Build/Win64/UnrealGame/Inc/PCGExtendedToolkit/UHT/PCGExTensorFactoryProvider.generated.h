// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transform/Tensors/PCGExTensorFactoryProvider.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExTensorFactoryProvider_generated_h
#error "PCGExTensorFactoryProvider.generated.h already included, missing '#pragma once' in PCGExTensorFactoryProvider.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExTensorFactoryProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExDataTypeInfoTensor ******************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoTensor_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExDataTypeInfoTensor_Statics; \
	PCGEXTENDEDTOOLKIT_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGExFactoryDataTypeInfo Super;


struct FPCGExDataTypeInfoTensor;
// ********** End ScriptStruct FPCGExDataTypeInfoTensor ********************************************

// ********** Begin Class UPCGExTensorFactoryData **************************************************
struct Z_Construct_UClass_UPCGExTensorFactoryData_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorFactoryData_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExTensorFactoryData(); \
	friend struct ::Z_Construct_UClass_UPCGExTensorFactoryData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExTensorFactoryData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExTensorFactoryData, UPCGExFactoryData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExTensorFactoryData_NoRegister) \
	DECLARE_SERIALIZER(UPCGExTensorFactoryData)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExTensorFactoryData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExTensorFactoryData(UPCGExTensorFactoryData&&) = delete; \
	UPCGExTensorFactoryData(const UPCGExTensorFactoryData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExTensorFactoryData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExTensorFactoryData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExTensorFactoryData) \
	NO_API virtual ~UPCGExTensorFactoryData();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_41_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_44_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExTensorFactoryData;

// ********** End Class UPCGExTensorFactoryData ****************************************************

// ********** Begin Class UPCGExTensorFactoryProviderSettings **************************************
struct Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExTensorFactoryProviderSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExTensorFactoryProviderSettings, UPCGExFactoryProviderSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExTensorFactoryProviderSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExTensorFactoryProviderSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExTensorFactoryProviderSettings(UPCGExTensorFactoryProviderSettings&&) = delete; \
	UPCGExTensorFactoryProviderSettings(const UPCGExTensorFactoryProviderSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExTensorFactoryProviderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExTensorFactoryProviderSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExTensorFactoryProviderSettings) \
	NO_API virtual ~UPCGExTensorFactoryProviderSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_66_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_69_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExTensorFactoryProviderSettings;

// ********** End Class UPCGExTensorFactoryProviderSettings ****************************************

// ********** Begin Class UPCGExTensorPointFactoryData *********************************************
struct Z_Construct_UClass_UPCGExTensorPointFactoryData_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPointFactoryData_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExTensorPointFactoryData(); \
	friend struct ::Z_Construct_UClass_UPCGExTensorPointFactoryData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExTensorPointFactoryData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExTensorPointFactoryData, UPCGExTensorFactoryData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExTensorPointFactoryData_NoRegister) \
	DECLARE_SERIALIZER(UPCGExTensorPointFactoryData)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExTensorPointFactoryData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExTensorPointFactoryData(UPCGExTensorPointFactoryData&&) = delete; \
	UPCGExTensorPointFactoryData(const UPCGExTensorPointFactoryData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExTensorPointFactoryData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExTensorPointFactoryData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExTensorPointFactoryData) \
	NO_API virtual ~UPCGExTensorPointFactoryData();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_95_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_98_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExTensorPointFactoryData;

// ********** End Class UPCGExTensorPointFactoryData ***********************************************

// ********** Begin Class UPCGExTensorPointFactoryProviderSettings *********************************
struct Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExTensorPointFactoryProviderSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExTensorPointFactoryProviderSettings, UPCGExTensorFactoryProviderSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExTensorPointFactoryProviderSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExTensorPointFactoryProviderSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExTensorPointFactoryProviderSettings(UPCGExTensorPointFactoryProviderSettings&&) = delete; \
	UPCGExTensorPointFactoryProviderSettings(const UPCGExTensorPointFactoryProviderSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExTensorPointFactoryProviderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExTensorPointFactoryProviderSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExTensorPointFactoryProviderSettings) \
	NO_API virtual ~UPCGExTensorPointFactoryProviderSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_114_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_117_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExTensorPointFactoryProviderSettings;

// ********** End Class UPCGExTensorPointFactoryProviderSettings ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
