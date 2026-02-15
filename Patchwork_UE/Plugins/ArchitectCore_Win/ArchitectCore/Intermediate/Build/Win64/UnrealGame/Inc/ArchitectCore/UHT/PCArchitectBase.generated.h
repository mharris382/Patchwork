// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCArchitectBase.h"

#ifdef ARCHITECTCORE_PCArchitectBase_generated_h
#error "PCArchitectBase.generated.h already included, missing '#pragma once' in PCArchitectBase.h"
#endif
#define ARCHITECTCORE_PCArchitectBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FArchitectMaterialOverride ****************************************
struct Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics; \
	ARCHITECTCORE_API static class UScriptStruct* StaticStruct();


struct FArchitectMaterialOverride;
// ********** End ScriptStruct FArchitectMaterialOverride ******************************************

// ********** Begin ScriptStruct FArchitectMaterialOptions *****************************************
struct Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics; \
	ARCHITECTCORE_API static class UScriptStruct* StaticStruct();


struct FArchitectMaterialOptions;
// ********** End ScriptStruct FArchitectMaterialOptions *******************************************

// ********** Begin ScriptStruct FArchitectOverrides ***********************************************
struct Z_Construct_UScriptStruct_FArchitectOverrides_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FArchitectOverrides_Statics; \
	ARCHITECTCORE_API static class UScriptStruct* StaticStruct();


struct FArchitectOverrides;
// ********** End ScriptStruct FArchitectOverrides *************************************************

// ********** Begin Class APCArchitectBase *********************************************************
struct Z_Construct_UClass_APCArchitectBase_Statics;
ARCHITECTCORE_API UClass* Z_Construct_UClass_APCArchitectBase_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPCArchitectBase(); \
	friend struct ::Z_Construct_UClass_APCArchitectBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCHITECTCORE_API UClass* ::Z_Construct_UClass_APCArchitectBase_NoRegister(); \
public: \
	DECLARE_CLASS2(APCArchitectBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectCore"), Z_Construct_UClass_APCArchitectBase_NoRegister) \
	DECLARE_SERIALIZER(APCArchitectBase)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_126_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APCArchitectBase(APCArchitectBase&&) = delete; \
	APCArchitectBase(const APCArchitectBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APCArchitectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APCArchitectBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APCArchitectBase) \
	NO_API virtual ~APCArchitectBase();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_123_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_126_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APCArchitectBase;

// ********** End Class APCArchitectBase ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h

// ********** Begin Enum EArchitectOverideModes ****************************************************
#define FOREACH_ENUM_EARCHITECTOVERIDEMODES(op) \
	op(None) \
	op(DataAsset) \
	op(SpecificSettings) 

enum EArchitectOverideModes : uint8;
template<> ARCHITECTCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EArchitectOverideModes>();
// ********** End Enum EArchitectOverideModes ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
