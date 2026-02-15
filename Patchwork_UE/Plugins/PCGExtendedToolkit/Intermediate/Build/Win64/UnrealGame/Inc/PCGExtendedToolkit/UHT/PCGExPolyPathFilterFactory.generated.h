// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/Filters/PCGExPolyPathFilterFactory.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExPolyPathFilterFactory_generated_h
#error "PCGExPolyPathFilterFactory.generated.h already included, missing '#pragma once' in PCGExPolyPathFilterFactory.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExPolyPathFilterFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExPolyPathFilterFactory **********************************************
struct Z_Construct_UClass_UPCGExPolyPathFilterFactory_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPolyPathFilterFactory_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExPolyPathFilterFactory_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExPolyPathFilterFactory(); \
	friend struct ::Z_Construct_UClass_UPCGExPolyPathFilterFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExPolyPathFilterFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExPolyPathFilterFactory, UPCGExPointFilterFactoryData, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExPolyPathFilterFactory_NoRegister) \
	DECLARE_SERIALIZER(UPCGExPolyPathFilterFactory)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExPolyPathFilterFactory_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExPolyPathFilterFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExPolyPathFilterFactory(UPCGExPolyPathFilterFactory&&) = delete; \
	UPCGExPolyPathFilterFactory(const UPCGExPolyPathFilterFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExPolyPathFilterFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExPolyPathFilterFactory); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExPolyPathFilterFactory) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExPolyPathFilterFactory();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExPolyPathFilterFactory_h_49_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExPolyPathFilterFactory_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExPolyPathFilterFactory_h_52_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExPolyPathFilterFactory_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExPolyPathFilterFactory;

// ********** End Class UPCGExPolyPathFilterFactory ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Filters_PCGExPolyPathFilterFactory_h

// ********** Begin Enum EPCGExSplineSamplingIncludeMode *******************************************
#define FOREACH_ENUM_EPCGEXSPLINESAMPLINGINCLUDEMODE(op) \
	op(EPCGExSplineSamplingIncludeMode::All) \
	op(EPCGExSplineSamplingIncludeMode::ClosedLoopOnly) \
	op(EPCGExSplineSamplingIncludeMode::OpenSplineOnly) 

enum class EPCGExSplineSamplingIncludeMode : uint8;
template<> struct TIsUEnumClass<EPCGExSplineSamplingIncludeMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSplineSamplingIncludeMode>();
// ********** End Enum EPCGExSplineSamplingIncludeMode *********************************************

// ********** Begin Enum EPCGExSplineCheckType *****************************************************
#define FOREACH_ENUM_EPCGEXSPLINECHECKTYPE(op) \
	op(EPCGExSplineCheckType::IsInside) \
	op(EPCGExSplineCheckType::IsInsideOrOn) \
	op(EPCGExSplineCheckType::IsInsideAndOn) \
	op(EPCGExSplineCheckType::IsOutside) \
	op(EPCGExSplineCheckType::IsOutsideOrOn) \
	op(EPCGExSplineCheckType::IsOutsideAndOn) \
	op(EPCGExSplineCheckType::IsOn) \
	op(EPCGExSplineCheckType::IsNotOn) 

enum class EPCGExSplineCheckType : uint8;
template<> struct TIsUEnumClass<EPCGExSplineCheckType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSplineCheckType>();
// ********** End Enum EPCGExSplineCheckType *******************************************************

// ********** Begin Enum EPCGExSplineFilterPick ****************************************************
#define FOREACH_ENUM_EPCGEXSPLINEFILTERPICK(op) \
	op(EPCGExSplineFilterPick::Closest) \
	op(EPCGExSplineFilterPick::All) 

enum class EPCGExSplineFilterPick : uint8;
template<> struct TIsUEnumClass<EPCGExSplineFilterPick> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSplineFilterPick>();
// ********** End Enum EPCGExSplineFilterPick ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
