// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGExHelpers.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExHelpers_generated_h
#error "PCGExHelpers.generated.h already included, missing '#pragma once' in PCGExHelpers.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExHelpers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;

// ********** Begin Class UPCGExComponentCallback **************************************************
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCallback);


struct Z_Construct_UClass_UPCGExComponentCallback_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExComponentCallback_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExComponentCallback(); \
	friend struct ::Z_Construct_UClass_UPCGExComponentCallback_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExComponentCallback_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExComponentCallback, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExComponentCallback_NoRegister) \
	DECLARE_SERIALIZER(UPCGExComponentCallback)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExComponentCallback(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExComponentCallback(UPCGExComponentCallback&&) = delete; \
	UPCGExComponentCallback(const UPCGExComponentCallback&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExComponentCallback); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExComponentCallback); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExComponentCallback) \
	NO_API virtual ~UPCGExComponentCallback();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_56_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_59_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExComponentCallback;

// ********** End Class UPCGExComponentCallback ****************************************************

// ********** Begin Interface UPCGExManagedObjectInterface *****************************************
struct Z_Construct_UClass_UPCGExManagedObjectInterface_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExManagedObjectInterface_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExManagedObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExManagedObjectInterface(UPCGExManagedObjectInterface&&) = delete; \
	UPCGExManagedObjectInterface(const UPCGExManagedObjectInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExManagedObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExManagedObjectInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExManagedObjectInterface) \
	virtual ~UPCGExManagedObjectInterface() = default;


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_83_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPCGExManagedObjectInterface(); \
	friend struct ::Z_Construct_UClass_UPCGExManagedObjectInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExManagedObjectInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExManagedObjectInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExManagedObjectInterface_NoRegister) \
	DECLARE_SERIALIZER(UPCGExManagedObjectInterface)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_83_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_83_GENERATED_UINTERFACE_BODY() \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_83_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_83_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPCGExManagedObjectInterface() {} \
public: \
	typedef UPCGExManagedObjectInterface UClassType; \
	typedef IPCGExManagedObjectInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_80_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_83_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExManagedObjectInterface;

// ********** End Interface UPCGExManagedObjectInterface *******************************************

// ********** Begin Interface UPCGExManagedComponentInterface **************************************
struct Z_Construct_UClass_UPCGExManagedComponentInterface_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExManagedComponentInterface_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExManagedComponentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExManagedComponentInterface(UPCGExManagedComponentInterface&&) = delete; \
	UPCGExManagedComponentInterface(const UPCGExManagedComponentInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExManagedComponentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExManagedComponentInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExManagedComponentInterface) \
	virtual ~UPCGExManagedComponentInterface() = default;


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_97_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPCGExManagedComponentInterface(); \
	friend struct ::Z_Construct_UClass_UPCGExManagedComponentInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExManagedComponentInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExManagedComponentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExManagedComponentInterface_NoRegister) \
	DECLARE_SERIALIZER(UPCGExManagedComponentInterface)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_97_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_97_GENERATED_UINTERFACE_BODY() \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_97_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_97_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPCGExManagedComponentInterface() {} \
public: \
	typedef UPCGExManagedComponentInterface UClassType; \
	typedef IPCGExManagedComponentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_94_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_97_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExManagedComponentInterface;

// ********** End Interface UPCGExManagedComponentInterface ****************************************

// ********** Begin Class UPCGExFunctionPrototypes *************************************************
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_183_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPrototypeWithNoParams);


struct Z_Construct_UClass_UPCGExFunctionPrototypes_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFunctionPrototypes_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_183_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExFunctionPrototypes(); \
	friend struct ::Z_Construct_UClass_UPCGExFunctionPrototypes_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExFunctionPrototypes_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExFunctionPrototypes, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExFunctionPrototypes_NoRegister) \
	DECLARE_SERIALIZER(UPCGExFunctionPrototypes)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_183_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExFunctionPrototypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExFunctionPrototypes(UPCGExFunctionPrototypes&&) = delete; \
	UPCGExFunctionPrototypes(const UPCGExFunctionPrototypes&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExFunctionPrototypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExFunctionPrototypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExFunctionPrototypes) \
	NO_API virtual ~UPCGExFunctionPrototypes();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_180_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_183_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_183_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_183_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h_183_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExFunctionPrototypes;

// ********** End Class UPCGExFunctionPrototypes ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h

// ********** Begin Enum EPCGExPointPropertyOutput *************************************************
#define FOREACH_ENUM_EPCGEXPOINTPROPERTYOUTPUT(op) \
	op(EPCGExPointPropertyOutput::None) \
	op(EPCGExPointPropertyOutput::Density) \
	op(EPCGExPointPropertyOutput::Steepness) \
	op(EPCGExPointPropertyOutput::ColorR) \
	op(EPCGExPointPropertyOutput::ColorG) \
	op(EPCGExPointPropertyOutput::ColorB) \
	op(EPCGExPointPropertyOutput::ColorA) 

enum class EPCGExPointPropertyOutput : uint8;
template<> struct TIsUEnumClass<EPCGExPointPropertyOutput> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPointPropertyOutput>();
// ********** End Enum EPCGExPointPropertyOutput ***************************************************

// ********** Begin Enum EPCGExPointNativeProperties ***********************************************
#define FOREACH_ENUM_EPCGEXPOINTNATIVEPROPERTIES(op) \
	op(EPCGExPointNativeProperties::None) \
	op(EPCGExPointNativeProperties::Transform) \
	op(EPCGExPointNativeProperties::Density) \
	op(EPCGExPointNativeProperties::BoundsMin) \
	op(EPCGExPointNativeProperties::BoundsMax) \
	op(EPCGExPointNativeProperties::Color) \
	op(EPCGExPointNativeProperties::Steepness) \
	op(EPCGExPointNativeProperties::Seed) \
	op(EPCGExPointNativeProperties::MetadataEntry) 

enum class EPCGExPointNativeProperties : uint8;
template<> struct TIsUEnumClass<EPCGExPointNativeProperties> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPointNativeProperties>();
// ********** End Enum EPCGExPointNativeProperties *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
