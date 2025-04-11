// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCArchitectBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHITECTCORE_PCArchitectBase_generated_h
#error "PCArchitectBase.generated.h already included, missing '#pragma once' in PCArchitectBase.h"
#endif
#define ARCHITECTCORE_PCArchitectBase_generated_h

#define FID_Users_Admin_Documents_UE_Projects_Patchwork_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArchitectMaterialOverride_Statics; \
	ARCHITECTCORE_API static class UScriptStruct* StaticStruct();


template<> ARCHITECTCORE_API UScriptStruct* StaticStruct<struct FArchitectMaterialOverride>();

#define FID_Users_Admin_Documents_UE_Projects_Patchwork_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArchitectMaterialOptions_Statics; \
	ARCHITECTCORE_API static class UScriptStruct* StaticStruct();


template<> ARCHITECTCORE_API UScriptStruct* StaticStruct<struct FArchitectMaterialOptions>();

#define FID_Users_Admin_Documents_UE_Projects_Patchwork_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArchitectOverrides_Statics; \
	ARCHITECTCORE_API static class UScriptStruct* StaticStruct();


template<> ARCHITECTCORE_API UScriptStruct* StaticStruct<struct FArchitectOverrides>();

#define FID_Users_Admin_Documents_UE_Projects_Patchwork_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPCArchitectBase(); \
	friend struct Z_Construct_UClass_APCArchitectBase_Statics; \
public: \
	DECLARE_CLASS(APCArchitectBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectCore"), NO_API) \
	DECLARE_SERIALIZER(APCArchitectBase)


#define FID_Users_Admin_Documents_UE_Projects_Patchwork_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_126_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APCArchitectBase(APCArchitectBase&&); \
	APCArchitectBase(const APCArchitectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APCArchitectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APCArchitectBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APCArchitectBase) \
	NO_API virtual ~APCArchitectBase();


#define FID_Users_Admin_Documents_UE_Projects_Patchwork_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_123_PROLOG
#define FID_Users_Admin_Documents_UE_Projects_Patchwork_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Admin_Documents_UE_Projects_Patchwork_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_126_INCLASS_NO_PURE_DECLS \
	FID_Users_Admin_Documents_UE_Projects_Patchwork_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTCORE_API UClass* StaticClass<class APCArchitectBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Admin_Documents_UE_Projects_Patchwork_Patchwork_UE_Plugins_ArchitectCore_Source_ArchitectCore_Public_PCArchitectBase_h


#define FOREACH_ENUM_EARCHITECTOVERIDEMODES(op) \
	op(None) \
	op(DataAsset) \
	op(SpecificSettings) 

enum EArchitectOverideModes : uint8;
template<> ARCHITECTCORE_API UEnum* StaticEnum<EArchitectOverideModes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
