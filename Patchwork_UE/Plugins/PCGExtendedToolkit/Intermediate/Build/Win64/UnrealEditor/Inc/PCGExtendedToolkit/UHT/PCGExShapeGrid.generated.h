// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shapes/Builders/PCGExShapeGrid.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExShapeGrid_generated_h
#error "PCGExShapeGrid.generated.h already included, missing '#pragma once' in PCGExShapeGrid.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExShapeGrid_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExShapeGridConfig *********************************************
struct Z_Construct_UScriptStruct_FPCGExShapeGridConfig_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExShapeGridConfig_Statics; \
	PCGEXTENDEDTOOLKIT_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGExShapeConfigBase Super;


struct FPCGExShapeGridConfig;
// ********** End ScriptStruct FPCGExShapeGridConfig ***********************************************

// ********** Begin Class UPCGExShapeGridFactory ***************************************************
struct Z_Construct_UClass_UPCGExShapeGridFactory_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeGridFactory_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExShapeGridFactory(); \
	friend struct ::Z_Construct_UClass_UPCGExShapeGridFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExShapeGridFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExShapeGridFactory, UPCGExShapeBuilderFactoryData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExShapeGridFactory_NoRegister) \
	DECLARE_SERIALIZER(UPCGExShapeGridFactory)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExShapeGridFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExShapeGridFactory(UPCGExShapeGridFactory&&) = delete; \
	UPCGExShapeGridFactory(const UPCGExShapeGridFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExShapeGridFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExShapeGridFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExShapeGridFactory) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExShapeGridFactory();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h_63_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h_66_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExShapeGridFactory;

// ********** End Class UPCGExShapeGridFactory *****************************************************

// ********** Begin Class UPCGExCreateShapeGridSettings ********************************************
struct Z_Construct_UClass_UPCGExCreateShapeGridSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateShapeGridSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExCreateShapeGridSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExCreateShapeGridSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExCreateShapeGridSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExCreateShapeGridSettings, UPCGExShapeBuilderFactoryProviderSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExCreateShapeGridSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExCreateShapeGridSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExCreateShapeGridSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExCreateShapeGridSettings(UPCGExCreateShapeGridSettings&&) = delete; \
	UPCGExCreateShapeGridSettings(const UPCGExCreateShapeGridSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExCreateShapeGridSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExCreateShapeGridSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExCreateShapeGridSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExCreateShapeGridSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h_75_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h_78_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExCreateShapeGridSettings;

// ********** End Class UPCGExCreateShapeGridSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeGrid_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
