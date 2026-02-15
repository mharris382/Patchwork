// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/PCGExReduceDataAttribute.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExReduceDataAttribute_generated_h
#error "PCGExReduceDataAttribute.generated.h already included, missing '#pragma once' in PCGExReduceDataAttribute.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExReduceDataAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExReduceDataAttributeSettings ****************************************
struct Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExReduceDataAttributeSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReduceDataAttribute_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExReduceDataAttributeSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExReduceDataAttributeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExReduceDataAttributeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExReduceDataAttributeSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExReduceDataAttributeSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExReduceDataAttributeSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReduceDataAttribute_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExReduceDataAttributeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExReduceDataAttributeSettings(UPCGExReduceDataAttributeSettings&&) = delete; \
	UPCGExReduceDataAttributeSettings(const UPCGExReduceDataAttributeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExReduceDataAttributeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExReduceDataAttributeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExReduceDataAttributeSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExReduceDataAttributeSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReduceDataAttribute_h_26_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReduceDataAttribute_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReduceDataAttribute_h_29_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReduceDataAttribute_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExReduceDataAttributeSettings;

// ********** End Class UPCGExReduceDataAttributeSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReduceDataAttribute_h

// ********** Begin Enum EPCGExReduceDataDomainMethod **********************************************
#define FOREACH_ENUM_EPCGEXREDUCEDATADOMAINMETHOD(op) \
	op(EPCGExReduceDataDomainMethod::Min) \
	op(EPCGExReduceDataDomainMethod::Max) \
	op(EPCGExReduceDataDomainMethod::Sum) \
	op(EPCGExReduceDataDomainMethod::Average) \
	op(EPCGExReduceDataDomainMethod::Join) 

enum class EPCGExReduceDataDomainMethod : uint8;
template<> struct TIsUEnumClass<EPCGExReduceDataDomainMethod> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExReduceDataDomainMethod>();
// ********** End Enum EPCGExReduceDataDomainMethod ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
