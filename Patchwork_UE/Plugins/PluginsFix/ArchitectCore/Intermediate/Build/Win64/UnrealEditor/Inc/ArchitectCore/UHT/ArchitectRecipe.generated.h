// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAssets/ArchitectRecipe.h"

#ifdef ARCHITECTCORE_ArchitectRecipe_generated_h
#error "ArchitectRecipe.generated.h already included, missing '#pragma once' in ArchitectRecipe.h"
#endif
#define ARCHITECTCORE_ArchitectRecipe_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FArchitectAsset_AssemblyOptions ***********************************
struct Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FArchitectAsset_AssemblyOptions_Statics; \
	ARCHITECTCORE_API static class UScriptStruct* StaticStruct();


struct FArchitectAsset_AssemblyOptions;
// ********** End ScriptStruct FArchitectAsset_AssemblyOptions *************************************

// ********** Begin ScriptStruct FArchitectAsset_TransformationOptions *****************************
struct Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FArchitectAsset_TransformationOptions_Statics; \
	ARCHITECTCORE_API static class UScriptStruct* StaticStruct();


struct FArchitectAsset_TransformationOptions;
// ********** End ScriptStruct FArchitectAsset_TransformationOptions *******************************

// ********** Begin ScriptStruct FArchitectAsset ***************************************************
struct Z_Construct_UScriptStruct_FArchitectAsset_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_135_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FArchitectAsset_Statics; \
	ARCHITECTCORE_API static class UScriptStruct* StaticStruct();


struct FArchitectAsset;
// ********** End ScriptStruct FArchitectAsset *****************************************************

// ********** Begin ScriptStruct FArchitectCornerAsset *********************************************
struct Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_185_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FArchitectCornerAsset_Statics; \
	ARCHITECTCORE_API static class UScriptStruct* StaticStruct();


struct FArchitectCornerAsset;
// ********** End ScriptStruct FArchitectCornerAsset ***********************************************

// ********** Begin Class UArchitectRecipe *********************************************************
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_260_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAutoCalculateFootprint);


struct Z_Construct_UClass_UArchitectRecipe_Statics;
ARCHITECTCORE_API UClass* Z_Construct_UClass_UArchitectRecipe_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_260_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArchitectRecipe(); \
	friend struct ::Z_Construct_UClass_UArchitectRecipe_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCHITECTCORE_API UClass* ::Z_Construct_UClass_UArchitectRecipe_NoRegister(); \
public: \
	DECLARE_CLASS2(UArchitectRecipe, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArchitectCore"), Z_Construct_UClass_UArchitectRecipe_NoRegister) \
	DECLARE_SERIALIZER(UArchitectRecipe)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_260_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchitectRecipe(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UArchitectRecipe(UArchitectRecipe&&) = delete; \
	UArchitectRecipe(const UArchitectRecipe&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchitectRecipe); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchitectRecipe); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchitectRecipe) \
	NO_API virtual ~UArchitectRecipe();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_257_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_260_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_260_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_260_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h_260_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UArchitectRecipe;

// ********** End Class UArchitectRecipe ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_DataAssets_ArchitectRecipe_h

// ********** Begin Enum EAssetSpawnMode ***********************************************************
#define FOREACH_ENUM_EASSETSPAWNMODE(op) \
	op(DoNotSpawn) \
	op(MeshOnly) \
	op(AssemblyOnly) \
	op(Combined) \
	op(MeshCollection) 

enum EAssetSpawnMode : uint8;
template<> ARCHITECTCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAssetSpawnMode>();
// ********** End Enum EAssetSpawnMode *************************************************************

// ********** Begin Enum ECornerSpawnMode **********************************************************
#define FOREACH_ENUM_ECORNERSPAWNMODE(op) \
	op(NoCorner) \
	op(EdgeCorner) \
	op(FullCorner) \
	op(SplitCorner) 

enum ECornerSpawnMode : uint8;
template<> ARCHITECTCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECornerSpawnMode>();
// ********** End Enum ECornerSpawnMode ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
