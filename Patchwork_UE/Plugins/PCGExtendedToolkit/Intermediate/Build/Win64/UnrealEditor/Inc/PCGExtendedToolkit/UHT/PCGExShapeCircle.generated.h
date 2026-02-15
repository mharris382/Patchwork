// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shapes/Builders/PCGExShapeCircle.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExShapeCircle_generated_h
#error "PCGExShapeCircle.generated.h already included, missing '#pragma once' in PCGExShapeCircle.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExShapeCircle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExShapeCircleConfig *******************************************
struct Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExShapeCircleConfig_Statics; \
	PCGEXTENDEDTOOLKIT_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGExShapeConfigBase Super;


struct FPCGExShapeCircleConfig;
// ********** End ScriptStruct FPCGExShapeCircleConfig *********************************************

// ********** Begin Class UPCGExShapeCircleFactory *************************************************
struct Z_Construct_UClass_UPCGExShapeCircleFactory_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShapeCircleFactory_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExShapeCircleFactory(); \
	friend struct ::Z_Construct_UClass_UPCGExShapeCircleFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExShapeCircleFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExShapeCircleFactory, UPCGExShapeBuilderFactoryData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExShapeCircleFactory_NoRegister) \
	DECLARE_SERIALIZER(UPCGExShapeCircleFactory)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h_95_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExShapeCircleFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExShapeCircleFactory(UPCGExShapeCircleFactory&&) = delete; \
	UPCGExShapeCircleFactory(const UPCGExShapeCircleFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExShapeCircleFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExShapeCircleFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExShapeCircleFactory) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExShapeCircleFactory();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h_92_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h_95_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExShapeCircleFactory;

// ********** End Class UPCGExShapeCircleFactory ***************************************************

// ********** Begin Class UPCGExCreateShapeCircleSettings ******************************************
struct Z_Construct_UClass_UPCGExCreateShapeCircleSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCreateShapeCircleSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExCreateShapeCircleSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExCreateShapeCircleSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExCreateShapeCircleSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExCreateShapeCircleSettings, UPCGExShapeBuilderFactoryProviderSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExCreateShapeCircleSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExCreateShapeCircleSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h_107_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExCreateShapeCircleSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExCreateShapeCircleSettings(UPCGExCreateShapeCircleSettings&&) = delete; \
	UPCGExCreateShapeCircleSettings(const UPCGExCreateShapeCircleSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExCreateShapeCircleSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExCreateShapeCircleSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExCreateShapeCircleSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExCreateShapeCircleSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h_104_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h_107_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExCreateShapeCircleSettings;

// ********** End Class UPCGExCreateShapeCircleSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Shapes_Builders_PCGExShapeCircle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
