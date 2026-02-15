// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Sharing/PCGExBeacon.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExBeacon_generated_h
#error "PCGExBeacon.generated.h already included, missing '#pragma once' in PCGExBeacon.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExBeacon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnBeaconContentAdded *************************************************
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExBeacon_h_17_DELEGATE \
PCGEXTENDEDTOOLKIT_API void FOnBeaconContentAdded_DelegateWrapper(const FMulticastScriptDelegate& OnBeaconContentAdded, uint32 Id);


// ********** End Delegate FOnBeaconContentAdded ***************************************************

// ********** Begin Class UPCGExBeacon *************************************************************
struct Z_Construct_UClass_UPCGExBeacon_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBeacon_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExBeacon_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExBeacon(); \
	friend struct ::Z_Construct_UClass_UPCGExBeacon_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExBeacon_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExBeacon, UDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExBeacon_NoRegister) \
	DECLARE_SERIALIZER(UPCGExBeacon)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExBeacon_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExBeacon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExBeacon(UPCGExBeacon&&) = delete; \
	UPCGExBeacon(const UPCGExBeacon&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExBeacon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExBeacon); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExBeacon) \
	NO_API virtual ~UPCGExBeacon();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExBeacon_h_19_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExBeacon_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExBeacon_h_25_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExBeacon_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExBeacon;

// ********** End Class UPCGExBeacon ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Data_Sharing_PCGExBeacon_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
