// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArchitectCutter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHITECTCORE_ArchitectCutter_generated_h
#error "ArchitectCutter.generated.h already included, missing '#pragma once' in ArchitectCutter.h"
#endif
#define ARCHITECTCORE_ArchitectCutter_generated_h

#define FID_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArchitectCutter(); \
	friend struct Z_Construct_UClass_AArchitectCutter_Statics; \
public: \
	DECLARE_CLASS(AArchitectCutter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectCore"), NO_API) \
	DECLARE_SERIALIZER(AArchitectCutter)


#define FID_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AArchitectCutter(AArchitectCutter&&); \
	AArchitectCutter(const AArchitectCutter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArchitectCutter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArchitectCutter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArchitectCutter) \
	NO_API virtual ~AArchitectCutter();


#define FID_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h_24_PROLOG
#define FID_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h_27_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTCORE_API UClass* StaticClass<class AArchitectCutter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h


#define FOREACH_ENUM_EARCHITECTCUTTERMODE(op) \
	op(EArchitectCutterMode::Modify) \
	op(EArchitectCutterMode::Erase) \
	op(EArchitectCutterMode::Additive) 

enum class EArchitectCutterMode : uint8;
template<> struct TIsUEnumClass<EArchitectCutterMode> { enum { Value = true }; };
template<> ARCHITECTCORE_API UEnum* StaticEnum<EArchitectCutterMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
