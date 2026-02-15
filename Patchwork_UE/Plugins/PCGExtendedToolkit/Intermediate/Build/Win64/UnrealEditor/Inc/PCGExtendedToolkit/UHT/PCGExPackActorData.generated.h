// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sampling/PCGExPackActorData.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExPackActorData_generated_h
#error "PCGExPackActorData.generated.h already included, missing '#pragma once' in PCGExPackActorData.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExPackActorData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UClass;
class UObject;
enum class EAttachmentRule : uint8;
struct FPCGPoint;
struct FSoftClassPath;
struct FSoftObjectPath;

// ********** Begin Class UPCGExCustomActorDataPacker **********************************************
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ProcessEntry_Implementation(AActor* InActor, FPCGPoint const& InPoint, const int32 InPointIndex, FPCGPoint& OutPoint); \
	virtual void Initialize_Implementation(bool& OutSuccess); \
	DECLARE_FUNCTION(execResolveObjectPath); \
	DECLARE_FUNCTION(execReadSoftClassPath); \
	DECLARE_FUNCTION(execReadSoftObjectPath); \
	DECLARE_FUNCTION(execReadName); \
	DECLARE_FUNCTION(execReadRotator); \
	DECLARE_FUNCTION(execReadBool); \
	DECLARE_FUNCTION(execReadString); \
	DECLARE_FUNCTION(execReadTransform); \
	DECLARE_FUNCTION(execReadQuat); \
	DECLARE_FUNCTION(execReadVector4); \
	DECLARE_FUNCTION(execReadVector); \
	DECLARE_FUNCTION(execReadVector2); \
	DECLARE_FUNCTION(execReadDouble); \
	DECLARE_FUNCTION(execReadFloat); \
	DECLARE_FUNCTION(execReadInt64); \
	DECLARE_FUNCTION(execReadInt32); \
	DECLARE_FUNCTION(execWriteSoftClassPath); \
	DECLARE_FUNCTION(execWriteSoftObjectPath); \
	DECLARE_FUNCTION(execWriteName); \
	DECLARE_FUNCTION(execWriteRotator); \
	DECLARE_FUNCTION(execWriteBool); \
	DECLARE_FUNCTION(execWriteString); \
	DECLARE_FUNCTION(execWriteTransform); \
	DECLARE_FUNCTION(execWriteQuat); \
	DECLARE_FUNCTION(execWriteVector4); \
	DECLARE_FUNCTION(execWriteVector); \
	DECLARE_FUNCTION(execWriteVector2); \
	DECLARE_FUNCTION(execWriteDouble); \
	DECLARE_FUNCTION(execWriteFloat); \
	DECLARE_FUNCTION(execWriteInt64); \
	DECLARE_FUNCTION(execWriteInt32); \
	DECLARE_FUNCTION(execPreloadObjectPaths); \
	DECLARE_FUNCTION(execInitSoftClassPath); \
	DECLARE_FUNCTION(execInitSoftObjectPath); \
	DECLARE_FUNCTION(execInitName); \
	DECLARE_FUNCTION(execInitRotator); \
	DECLARE_FUNCTION(execInitBool); \
	DECLARE_FUNCTION(execInitString); \
	DECLARE_FUNCTION(execInitTransform); \
	DECLARE_FUNCTION(execInitQuat); \
	DECLARE_FUNCTION(execInitVector4); \
	DECLARE_FUNCTION(execInitVector); \
	DECLARE_FUNCTION(execInitVector2); \
	DECLARE_FUNCTION(execInitDouble); \
	DECLARE_FUNCTION(execInitFloat); \
	DECLARE_FUNCTION(execInitInt64); \
	DECLARE_FUNCTION(execInitInt32); \
	DECLARE_FUNCTION(execAddComponent); \
	DECLARE_FUNCTION(execProcessEntry); \
	DECLARE_FUNCTION(execInitialize);


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h_28_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCustomActorDataPacker_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExCustomActorDataPacker(); \
	friend struct ::Z_Construct_UClass_UPCGExCustomActorDataPacker_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExCustomActorDataPacker_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExCustomActorDataPacker, UPCGExInstancedFactory, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExCustomActorDataPacker_NoRegister) \
	DECLARE_SERIALIZER(UPCGExCustomActorDataPacker)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExCustomActorDataPacker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExCustomActorDataPacker(UPCGExCustomActorDataPacker&&) = delete; \
	UPCGExCustomActorDataPacker(const UPCGExCustomActorDataPacker&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExCustomActorDataPacker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExCustomActorDataPacker); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExCustomActorDataPacker) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExCustomActorDataPacker();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h_25_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h_28_CALLBACK_WRAPPERS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h_28_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExCustomActorDataPacker;

// ********** End Class UPCGExCustomActorDataPacker ************************************************

// ********** Begin Class UPCGExPackActorDataSettings **********************************************
struct Z_Construct_UClass_UPCGExPackActorDataSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPackActorDataSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h_563_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExPackActorDataSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExPackActorDataSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExPackActorDataSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExPackActorDataSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExPackActorDataSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExPackActorDataSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h_563_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExPackActorDataSettings(UPCGExPackActorDataSettings&&) = delete; \
	UPCGExPackActorDataSettings(const UPCGExPackActorDataSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExPackActorDataSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExPackActorDataSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExPackActorDataSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExPackActorDataSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h_560_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h_563_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h_563_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h_563_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExPackActorDataSettings;

// ********** End Class UPCGExPackActorDataSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExPackActorData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
