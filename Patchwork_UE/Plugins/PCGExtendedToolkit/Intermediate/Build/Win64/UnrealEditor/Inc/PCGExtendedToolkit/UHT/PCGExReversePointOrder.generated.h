// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/PCGExReversePointOrder.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExReversePointOrder_generated_h
#error "PCGExReversePointOrder.generated.h already included, missing '#pragma once' in PCGExReversePointOrder.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExReversePointOrder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGExSwapAttributePairDetails ************************************
struct Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics;
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReversePointOrder_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPCGExSwapAttributePairDetails;
// ********** End ScriptStruct FPCGExSwapAttributePairDetails **************************************

// ********** Begin Class UPCGExReversePointOrderSettings ******************************************
struct Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExReversePointOrderSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReversePointOrder_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExReversePointOrderSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExReversePointOrderSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExReversePointOrderSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExReversePointOrderSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExReversePointOrderSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReversePointOrder_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExReversePointOrderSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExReversePointOrderSettings(UPCGExReversePointOrderSettings&&) = delete; \
	UPCGExReversePointOrderSettings(const UPCGExReversePointOrderSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExReversePointOrderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExReversePointOrderSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExReversePointOrderSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExReversePointOrderSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReversePointOrder_h_62_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReversePointOrder_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReversePointOrder_h_65_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReversePointOrder_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExReversePointOrderSettings;

// ********** End Class UPCGExReversePointOrderSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReversePointOrder_h

// ********** Begin Enum EPCGExPointReverseMethod **************************************************
#define FOREACH_ENUM_EPCGEXPOINTREVERSEMETHOD(op) \
	op(EPCGExPointReverseMethod::None) \
	op(EPCGExPointReverseMethod::SortingRules) \
	op(EPCGExPointReverseMethod::Winding) 

enum class EPCGExPointReverseMethod : uint8;
template<> struct TIsUEnumClass<EPCGExPointReverseMethod> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPointReverseMethod>();
// ********** End Enum EPCGExPointReverseMethod ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
