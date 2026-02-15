// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralPipeActor.h"

#ifdef PROCEDURALPIPES_ProceduralPipeActor_generated_h
#error "ProceduralPipeActor.generated.h already included, missing '#pragma once' in ProceduralPipeActor.h"
#endif
#define PROCEDURALPIPES_ProceduralPipeActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPipePartConfig ***************************************************
struct Z_Construct_UScriptStruct_FPipePartConfig_Statics;
#define FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPipePartConfig_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPipePartConfig;
// ********** End ScriptStruct FPipePartConfig *****************************************************

// ********** Begin Class AProceduralPipeActor *****************************************************
#define FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateBounds); \
	DECLARE_FUNCTION(execComputeBoundingBox);


#define FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h_93_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AProceduralPipeActor_Statics;
PROCEDURALPIPES_API UClass* Z_Construct_UClass_AProceduralPipeActor_NoRegister();

#define FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProceduralPipeActor(); \
	friend struct ::Z_Construct_UClass_AProceduralPipeActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCEDURALPIPES_API UClass* ::Z_Construct_UClass_AProceduralPipeActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AProceduralPipeActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralPipes"), Z_Construct_UClass_AProceduralPipeActor_NoRegister) \
	DECLARE_SERIALIZER(AProceduralPipeActor)


#define FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h_93_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProceduralPipeActor(AProceduralPipeActor&&) = delete; \
	AProceduralPipeActor(const AProceduralPipeActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProceduralPipeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceduralPipeActor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AProceduralPipeActor) \
	NO_API virtual ~AProceduralPipeActor();


#define FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h_90_PROLOG
#define FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h_93_CALLBACK_WRAPPERS \
	FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h_93_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProceduralPipeActor;

// ********** End Class AProceduralPipeActor *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects__repos5_Patchwork_Patchwork_Patchwork_UE_Plugins_ProceduralPipes_HostProject_Plugins_ProceduralPipes_Source_ProceduralPipes_Public_ProceduralPipeActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
