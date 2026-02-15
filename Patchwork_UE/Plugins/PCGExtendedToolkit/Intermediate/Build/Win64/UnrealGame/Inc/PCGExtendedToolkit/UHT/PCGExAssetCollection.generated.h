// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Collections/PCGExAssetCollection.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExAssetCollection_generated_h
#error "PCGExAssetCollection.generated.h already included, missing '#pragma once' in PCGExAssetCollection.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExAssetCollection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExAssetStagingData ********************************************
struct Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h_140_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExAssetStagingData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExAssetStagingData;
// ********** End ScriptStruct FPCGExAssetStagingData **********************************************

// ********** Begin ScriptStruct FPCGExAssetCollectionEntryMisc ************************************
struct Z_Construct_UScriptStruct_FPCGExAssetCollectionEntryMisc_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h_172_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExAssetCollectionEntryMisc_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExAssetCollectionEntryMisc;
// ********** End ScriptStruct FPCGExAssetCollectionEntryMisc **************************************

// ********** Begin ScriptStruct FPCGExAssetCollectionEntry ****************************************
struct Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h_182_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExAssetCollectionEntry_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExAssetCollectionEntry;
// ********** End ScriptStruct FPCGExAssetCollectionEntry ******************************************

// ********** Begin Class UPCGExAssetCollection ****************************************************
#if WITH_EDITOR
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h_315_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execEDITOR_NormalizedWeightToSum); \
	DECLARE_FUNCTION(execEDITOR_WeightRandom); \
	DECLARE_FUNCTION(execEDITOR_WeightOne); \
	DECLARE_FUNCTION(execEDITOR_MultWeight10); \
	DECLARE_FUNCTION(execEDITOR_MultWeight2); \
	DECLARE_FUNCTION(execEDITOR_PadWeight); \
	DECLARE_FUNCTION(execEDITOR_SetWeightIndex); \
	DECLARE_FUNCTION(execEDITOR_SortByWeightDescending); \
	DECLARE_FUNCTION(execEDITOR_SortByWeightAscending); \
	DECLARE_FUNCTION(execEDITOR_RebuildStagingData_Project); \
	DECLARE_FUNCTION(execEDITOR_RebuildStagingData_Recursive); \
	DECLARE_FUNCTION(execEDITOR_RebuildStagingData); \
	DECLARE_FUNCTION(execEDITOR_AddBrowserSelection);
#else // WITH_EDITOR
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h_315_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UPCGExAssetCollection_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAssetCollection_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h_315_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExAssetCollection(); \
	friend struct ::Z_Construct_UClass_UPCGExAssetCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExAssetCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExAssetCollection, UDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExAssetCollection_NoRegister) \
	DECLARE_SERIALIZER(UPCGExAssetCollection)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h_315_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExAssetCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExAssetCollection(UPCGExAssetCollection&&) = delete; \
	UPCGExAssetCollection(const UPCGExAssetCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExAssetCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExAssetCollection); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExAssetCollection) \
	NO_API virtual ~UPCGExAssetCollection();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h_310_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h_315_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h_315_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h_315_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h_315_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExAssetCollection;

// ********** End Class UPCGExAssetCollection ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExAssetCollection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
