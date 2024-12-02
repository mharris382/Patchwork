// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAssets/ArchitectRecipe.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHITECTCORE_ArchitectRecipe_generated_h
#error "ArchitectRecipe.generated.h already included, missing '#pragma once' in ArchitectRecipe.h"
#endif
#define ARCHITECTCORE_ArchitectRecipe_generated_h

#define FID_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics; \
	ARCHITECTCORE_API static class UScriptStruct* StaticStruct();


template<> ARCHITECTCORE_API UScriptStruct* StaticStruct<struct FArchitectAsset_AssemblyOptions>();

#define FID_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics; \
	ARCHITECTCORE_API static class UScriptStruct* StaticStruct();


template<> ARCHITECTCORE_API UScriptStruct* StaticStruct<struct FArchitectAsset_TransformationOptions>();

#define FID_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArchitectAsset_Statics; \
	ARCHITECTCORE_API static class UScriptStruct* StaticStruct();


template<> ARCHITECTCORE_API UScriptStruct* StaticStruct<struct FArchitectAsset>();

#define FID_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_194_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArchitectRecipe(); \
	friend struct Z_Construct_UClass_UArchitectRecipe_Statics; \
public: \
	DECLARE_CLASS(UArchitectRecipe, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArchitectCore"), NO_API) \
	DECLARE_SERIALIZER(UArchitectRecipe)


#define FID_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_194_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchitectRecipe(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArchitectRecipe(UArchitectRecipe&&); \
	UArchitectRecipe(const UArchitectRecipe&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchitectRecipe); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchitectRecipe); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchitectRecipe) \
	NO_API virtual ~UArchitectRecipe();


#define FID_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_191_PROLOG
#define FID_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_194_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_194_INCLASS_NO_PURE_DECLS \
	FID_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_194_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTCORE_API UClass* StaticClass<class UArchitectRecipe>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h


#define FOREACH_ENUM_EASSETSPAWNMODE(op) \
	op(MeshOnly) \
	op(AssemblyOnly) \
	op(Combined) \
	op(DoNotSpawn) 

enum EAssetSpawnMode : uint8;
template<> ARCHITECTCORE_API UEnum* StaticEnum<EAssetSpawnMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
