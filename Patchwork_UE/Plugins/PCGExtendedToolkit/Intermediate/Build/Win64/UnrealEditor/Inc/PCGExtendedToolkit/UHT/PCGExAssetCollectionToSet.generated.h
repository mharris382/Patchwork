// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetStaging/PCGExAssetCollectionToSet.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExAssetCollectionToSet_generated_h
#error "PCGExAssetCollectionToSet.generated.h already included, missing '#pragma once' in PCGExAssetCollectionToSet.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExAssetCollectionToSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExAssetCollectionToSetSettings ***************************************
struct Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetCollectionToSet_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExAssetCollectionToSetSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExAssetCollectionToSetSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExAssetCollectionToSetSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExAssetCollectionToSetSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetCollectionToSet_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExAssetCollectionToSetSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExAssetCollectionToSetSettings(UPCGExAssetCollectionToSetSettings&&) = delete; \
	UPCGExAssetCollectionToSetSettings(const UPCGExAssetCollectionToSetSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExAssetCollectionToSetSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExAssetCollectionToSetSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExAssetCollectionToSetSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExAssetCollectionToSetSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetCollectionToSet_h_24_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetCollectionToSet_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetCollectionToSet_h_27_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetCollectionToSet_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExAssetCollectionToSetSettings;

// ********** End Class UPCGExAssetCollectionToSetSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetCollectionToSet_h

// ********** Begin Enum EPCGExSubCollectionToSet **************************************************
#define FOREACH_ENUM_EPCGEXSUBCOLLECTIONTOSET(op) \
	op(EPCGExSubCollectionToSet::Ignore) \
	op(EPCGExSubCollectionToSet::Expand) \
	op(EPCGExSubCollectionToSet::PickRandom) \
	op(EPCGExSubCollectionToSet::PickRandomWeighted) \
	op(EPCGExSubCollectionToSet::PickFirstItem) \
	op(EPCGExSubCollectionToSet::PickLastItem) 

enum class EPCGExSubCollectionToSet : uint8;
template<> struct TIsUEnumClass<EPCGExSubCollectionToSet> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSubCollectionToSet>();
// ********** End Enum EPCGExSubCollectionToSet ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
