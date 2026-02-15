// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Filters/PCGExClusterFilter.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExClusterFilter_generated_h
#error "PCGExClusterFilter.generated.h already included, missing '#pragma once' in PCGExClusterFilter.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExClusterFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExDataTypeInfoFilterCluster ***********************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoFilterCluster_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExDataTypeInfoFilterCluster_Statics; \
	PCGEXTENDEDTOOLKIT_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGExDataTypeInfoFilterPoint Super;


struct FPCGExDataTypeInfoFilterCluster;
// ********** End ScriptStruct FPCGExDataTypeInfoFilterCluster *************************************

// ********** Begin Class UPCGExClusterFilterFactoryData *******************************************
struct Z_Construct_UClass_UPCGExClusterFilterFactoryData_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterFilterFactoryData_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExClusterFilterFactoryData(); \
	friend struct ::Z_Construct_UClass_UPCGExClusterFilterFactoryData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExClusterFilterFactoryData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExClusterFilterFactoryData, UPCGExPointFilterFactoryData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExClusterFilterFactoryData_NoRegister) \
	DECLARE_SERIALIZER(UPCGExClusterFilterFactoryData)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExClusterFilterFactoryData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExClusterFilterFactoryData(UPCGExClusterFilterFactoryData&&) = delete; \
	UPCGExClusterFilterFactoryData(const UPCGExClusterFilterFactoryData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExClusterFilterFactoryData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExClusterFilterFactoryData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExClusterFilterFactoryData) \
	NO_API virtual ~UPCGExClusterFilterFactoryData();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_41_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_44_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExClusterFilterFactoryData;

// ********** End Class UPCGExClusterFilterFactoryData *********************************************

// ********** Begin Class UPCGExClusterFilterProviderSettings **************************************
struct Z_Construct_UClass_UPCGExClusterFilterProviderSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterFilterProviderSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExClusterFilterProviderSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExClusterFilterProviderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExClusterFilterProviderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExClusterFilterProviderSettings, UPCGExFilterProviderSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExClusterFilterProviderSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExClusterFilterProviderSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExClusterFilterProviderSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExClusterFilterProviderSettings(UPCGExClusterFilterProviderSettings&&) = delete; \
	UPCGExClusterFilterProviderSettings(const UPCGExClusterFilterProviderSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExClusterFilterProviderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExClusterFilterProviderSettings); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UPCGExClusterFilterProviderSettings) \
	NO_API virtual ~UPCGExClusterFilterProviderSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_52_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_55_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExClusterFilterProviderSettings;

// ********** End Class UPCGExClusterFilterProviderSettings ****************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoFilterVtx ***************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoFilterVtx_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExDataTypeInfoFilterVtx_Statics; \
	PCGEXTENDEDTOOLKIT_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGExDataTypeInfoFilterCluster Super;


struct FPCGExDataTypeInfoFilterVtx;
// ********** End ScriptStruct FPCGExDataTypeInfoFilterVtx *****************************************

// ********** Begin Class UPCGExNodeFilterFactoryData **********************************************
struct Z_Construct_UClass_UPCGExNodeFilterFactoryData_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExNodeFilterFactoryData_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExNodeFilterFactoryData(); \
	friend struct ::Z_Construct_UClass_UPCGExNodeFilterFactoryData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExNodeFilterFactoryData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExNodeFilterFactoryData, UPCGExClusterFilterFactoryData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExNodeFilterFactoryData_NoRegister) \
	DECLARE_SERIALIZER(UPCGExNodeFilterFactoryData)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExNodeFilterFactoryData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExNodeFilterFactoryData(UPCGExNodeFilterFactoryData&&) = delete; \
	UPCGExNodeFilterFactoryData(const UPCGExNodeFilterFactoryData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExNodeFilterFactoryData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExNodeFilterFactoryData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExNodeFilterFactoryData) \
	NO_API virtual ~UPCGExNodeFilterFactoryData();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_75_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_78_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExNodeFilterFactoryData;

// ********** End Class UPCGExNodeFilterFactoryData ************************************************

// ********** Begin Class UPCGExVtxFilterProviderSettings ******************************************
struct Z_Construct_UClass_UPCGExVtxFilterProviderSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVtxFilterProviderSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExVtxFilterProviderSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExVtxFilterProviderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExVtxFilterProviderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExVtxFilterProviderSettings, UPCGExClusterFilterProviderSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExVtxFilterProviderSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExVtxFilterProviderSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExVtxFilterProviderSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExVtxFilterProviderSettings(UPCGExVtxFilterProviderSettings&&) = delete; \
	UPCGExVtxFilterProviderSettings(const UPCGExVtxFilterProviderSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExVtxFilterProviderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExVtxFilterProviderSettings); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UPCGExVtxFilterProviderSettings) \
	NO_API virtual ~UPCGExVtxFilterProviderSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_86_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_89_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExVtxFilterProviderSettings;

// ********** End Class UPCGExVtxFilterProviderSettings ********************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoFilterEdge **************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoFilterEdge_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_102_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExDataTypeInfoFilterEdge_Statics; \
	PCGEXTENDEDTOOLKIT_API static class UScriptStruct* StaticStruct(); \
	typedef FPCGExDataTypeInfoFilterCluster Super;


struct FPCGExDataTypeInfoFilterEdge;
// ********** End ScriptStruct FPCGExDataTypeInfoFilterEdge ****************************************

// ********** Begin Class UPCGExEdgeFilterFactoryData **********************************************
struct Z_Construct_UClass_UPCGExEdgeFilterFactoryData_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeFilterFactoryData_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExEdgeFilterFactoryData(); \
	friend struct ::Z_Construct_UClass_UPCGExEdgeFilterFactoryData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExEdgeFilterFactoryData_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExEdgeFilterFactoryData, UPCGExClusterFilterFactoryData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExEdgeFilterFactoryData_NoRegister) \
	DECLARE_SERIALIZER(UPCGExEdgeFilterFactoryData)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_112_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExEdgeFilterFactoryData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExEdgeFilterFactoryData(UPCGExEdgeFilterFactoryData&&) = delete; \
	UPCGExEdgeFilterFactoryData(const UPCGExEdgeFilterFactoryData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExEdgeFilterFactoryData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExEdgeFilterFactoryData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExEdgeFilterFactoryData) \
	NO_API virtual ~UPCGExEdgeFilterFactoryData();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_109_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_112_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExEdgeFilterFactoryData;

// ********** End Class UPCGExEdgeFilterFactoryData ************************************************

// ********** Begin Class UPCGExEdgeFilterProviderSettings *****************************************
struct Z_Construct_UClass_UPCGExEdgeFilterProviderSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExEdgeFilterProviderSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExEdgeFilterProviderSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExEdgeFilterProviderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExEdgeFilterProviderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExEdgeFilterProviderSettings, UPCGExClusterFilterProviderSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExEdgeFilterProviderSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExEdgeFilterProviderSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExEdgeFilterProviderSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExEdgeFilterProviderSettings(UPCGExEdgeFilterProviderSettings&&) = delete; \
	UPCGExEdgeFilterProviderSettings(const UPCGExEdgeFilterProviderSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExEdgeFilterProviderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExEdgeFilterProviderSettings); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UPCGExEdgeFilterProviderSettings) \
	NO_API virtual ~UPCGExEdgeFilterProviderSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_120_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_123_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExEdgeFilterProviderSettings;

// ********** End Class UPCGExEdgeFilterProviderSettings *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Filters_PCGExClusterFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
