// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGExSorting.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExSorting_generated_h
#error "PCGExSorting.generated.h already included, missing '#pragma once' in PCGExSorting.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExSorting_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExSortRuleConfig **********************************************
struct Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExSortRuleConfig_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPCGExInputConfig Super;


struct FPCGExSortRuleConfig;
// ********** End ScriptStruct FPCGExSortRuleConfig ************************************************

// ********** Begin ScriptStruct FPCGExCollectionSortingDetails ************************************
struct Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExCollectionSortingDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExCollectionSortingDetails;
// ********** End ScriptStruct FPCGExCollectionSortingDetails **************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoSortRule ****************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoSortRule_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExDataTypeInfoSortRule_Statics; \
	PCGEXTENDEDTOOLKIT_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGExFactoryDataTypeInfo Super;


struct FPCGExDataTypeInfoSortRule;
// ********** End ScriptStruct FPCGExDataTypeInfoSortRule ******************************************

// ********** Begin Class UPCGExSortingRule ********************************************************
struct Z_Construct_UClass_UPCGExSortingRule_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSortingRule_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExSortingRule(); \
	friend struct ::Z_Construct_UClass_UPCGExSortingRule_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExSortingRule_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExSortingRule, UPCGExFactoryData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExSortingRule_NoRegister) \
	DECLARE_SERIALIZER(UPCGExSortingRule)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExSortingRule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExSortingRule(UPCGExSortingRule&&) = delete; \
	UPCGExSortingRule(const UPCGExSortingRule&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExSortingRule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExSortingRule); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExSortingRule) \
	NO_API virtual ~UPCGExSortingRule();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h_93_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h_96_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExSortingRule;

// ********** End Class UPCGExSortingRule **********************************************************

// ********** Begin Class UPCGExSortingRuleProviderSettings ****************************************
struct Z_Construct_UClass_UPCGExSortingRuleProviderSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSortingRuleProviderSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExSortingRuleProviderSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExSortingRuleProviderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExSortingRuleProviderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExSortingRuleProviderSettings, UPCGExFactoryProviderSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExSortingRuleProviderSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExSortingRuleProviderSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h_112_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExSortingRuleProviderSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExSortingRuleProviderSettings(UPCGExSortingRuleProviderSettings&&) = delete; \
	UPCGExSortingRuleProviderSettings(const UPCGExSortingRuleProviderSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExSortingRuleProviderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExSortingRuleProviderSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExSortingRuleProviderSettings) \
	NO_API virtual ~UPCGExSortingRuleProviderSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h_109_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h_112_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExSortingRuleProviderSettings;

// ********** End Class UPCGExSortingRuleProviderSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExSorting_h

// ********** Begin Enum EPCGExSortDirection *******************************************************
#define FOREACH_ENUM_EPCGEXSORTDIRECTION(op) \
	op(EPCGExSortDirection::Ascending) \
	op(EPCGExSortDirection::Descending) 

enum class EPCGExSortDirection : uint8;
template<> struct TIsUEnumClass<EPCGExSortDirection> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSortDirection>();
// ********** End Enum EPCGExSortDirection *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
