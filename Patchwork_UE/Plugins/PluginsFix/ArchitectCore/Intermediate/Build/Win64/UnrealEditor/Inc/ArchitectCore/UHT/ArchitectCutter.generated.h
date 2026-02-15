// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArchitectCutter.h"

#ifdef ARCHITECTCORE_ArchitectCutter_generated_h
#error "ArchitectCutter.generated.h already included, missing '#pragma once' in ArchitectCutter.h"
#endif
#define ARCHITECTCORE_ArchitectCutter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AArchitectCutter *********************************************************
struct Z_Construct_UClass_AArchitectCutter_Statics;
ARCHITECTCORE_API UClass* Z_Construct_UClass_AArchitectCutter_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArchitectCutter(); \
	friend struct ::Z_Construct_UClass_AArchitectCutter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCHITECTCORE_API UClass* ::Z_Construct_UClass_AArchitectCutter_NoRegister(); \
public: \
	DECLARE_CLASS2(AArchitectCutter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectCore"), Z_Construct_UClass_AArchitectCutter_NoRegister) \
	DECLARE_SERIALIZER(AArchitectCutter)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AArchitectCutter(AArchitectCutter&&) = delete; \
	AArchitectCutter(const AArchitectCutter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArchitectCutter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArchitectCutter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArchitectCutter) \
	NO_API virtual ~AArchitectCutter();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h_24_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h_27_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AArchitectCutter;

// ********** End Class AArchitectCutter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_v2_ArchitectCore_HostProject_Plugins_ArchitectCore_Source_ArchitectCore_Public_ArchitectCutter_h

// ********** Begin Enum EArchitectCutterMode ******************************************************
#define FOREACH_ENUM_EARCHITECTCUTTERMODE(op) \
	op(EArchitectCutterMode::Modify) \
	op(EArchitectCutterMode::Erase) \
	op(EArchitectCutterMode::Additive) 

enum class EArchitectCutterMode : uint8;
template<> struct TIsUEnumClass<EArchitectCutterMode> { enum { Value = true }; };
template<> ARCHITECTCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EArchitectCutterMode>();
// ********** End Enum EArchitectCutterMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
