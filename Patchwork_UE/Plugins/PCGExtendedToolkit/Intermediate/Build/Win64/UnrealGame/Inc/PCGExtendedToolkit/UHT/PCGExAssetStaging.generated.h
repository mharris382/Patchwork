// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetStaging/PCGExAssetStaging.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExAssetStaging_generated_h
#error "PCGExAssetStaging.generated.h already included, missing '#pragma once' in PCGExAssetStaging.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExAssetStaging_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExAssetStagingSettings ***********************************************
struct Z_Construct_UClass_UPCGExAssetStagingSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAssetStagingSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetStaging_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExAssetStagingSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExAssetStagingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExAssetStagingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExAssetStagingSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExAssetStagingSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExAssetStagingSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetStaging_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExAssetStagingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExAssetStagingSettings(UPCGExAssetStagingSettings&&) = delete; \
	UPCGExAssetStagingSettings(const UPCGExAssetStagingSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExAssetStagingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExAssetStagingSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExAssetStagingSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExAssetStagingSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetStaging_h_49_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetStaging_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetStaging_h_52_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetStaging_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExAssetStagingSettings;

// ********** End Class UPCGExAssetStagingSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_AssetStaging_PCGExAssetStaging_h

// ********** Begin Enum EPCGExStagingOutputMode ***************************************************
#define FOREACH_ENUM_EPCGEXSTAGINGOUTPUTMODE(op) \
	op(EPCGExStagingOutputMode::Attributes) \
	op(EPCGExStagingOutputMode::CollectionMap) 

enum class EPCGExStagingOutputMode : uint8;
template<> struct TIsUEnumClass<EPCGExStagingOutputMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExStagingOutputMode>();
// ********** End Enum EPCGExStagingOutputMode *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
