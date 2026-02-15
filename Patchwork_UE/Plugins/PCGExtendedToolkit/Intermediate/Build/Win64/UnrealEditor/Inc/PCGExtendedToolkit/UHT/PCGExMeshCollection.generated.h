// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Collections/PCGExMeshCollection.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExMeshCollection_generated_h
#error "PCGExMeshCollection.generated.h already included, missing '#pragma once' in PCGExMeshCollection.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExMeshCollection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPCGExEntryVariationMode : uint8;

// ********** Begin ScriptStruct FPCGExMaterialOverrideEntry ***************************************
struct Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExMaterialOverrideEntry_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExMaterialOverrideEntry;
// ********** End ScriptStruct FPCGExMaterialOverrideEntry *****************************************

// ********** Begin ScriptStruct FPCGExMaterialOverrideCollection **********************************
struct Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExMaterialOverrideCollection_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExMaterialOverrideCollection;
// ********** End ScriptStruct FPCGExMaterialOverrideCollection ************************************

// ********** Begin ScriptStruct FPCGExMaterialOverrideSingleEntry *********************************
struct Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h_78_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExMaterialOverrideSingleEntry_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExMaterialOverrideSingleEntry;
// ********** End ScriptStruct FPCGExMaterialOverrideSingleEntry ***********************************

// ********** Begin ScriptStruct FPCGExMeshCollectionEntry *****************************************
struct Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h_134_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExMeshCollectionEntry_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPCGExAssetCollectionEntry Super;


struct FPCGExMeshCollectionEntry;
// ********** End ScriptStruct FPCGExMeshCollectionEntry *******************************************

// ********** Begin Class UPCGExMeshCollection *****************************************************
#if WITH_EDITOR
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h_227_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execEDITOR_SetDescriptorSourceAll); \
	DECLARE_FUNCTION(execEDITOR_DisableCollisions);
#else // WITH_EDITOR
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h_227_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UPCGExMeshCollection_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMeshCollection_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h_227_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExMeshCollection(); \
	friend struct ::Z_Construct_UClass_UPCGExMeshCollection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExMeshCollection_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExMeshCollection, UPCGExAssetCollection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExMeshCollection_NoRegister) \
	DECLARE_SERIALIZER(UPCGExMeshCollection)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h_227_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExMeshCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExMeshCollection(UPCGExMeshCollection&&) = delete; \
	UPCGExMeshCollection(const UPCGExMeshCollection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExMeshCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExMeshCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExMeshCollection) \
	NO_API virtual ~UPCGExMeshCollection();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h_224_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h_227_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h_227_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h_227_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h_227_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExMeshCollection;

// ********** End Class UPCGExMeshCollection *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Collections_PCGExMeshCollection_h

// ********** Begin Enum EPCGExMaterialVariantsMode ************************************************
#define FOREACH_ENUM_EPCGEXMATERIALVARIANTSMODE(op) \
	op(EPCGExMaterialVariantsMode::None) \
	op(EPCGExMaterialVariantsMode::Single) \
	op(EPCGExMaterialVariantsMode::Multi) 

enum class EPCGExMaterialVariantsMode : uint8;
template<> struct TIsUEnumClass<EPCGExMaterialVariantsMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMaterialVariantsMode>();
// ********** End Enum EPCGExMaterialVariantsMode **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
