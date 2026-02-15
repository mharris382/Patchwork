// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sampling/PCGExSampleNearestBounds.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExSampleNearestBounds_generated_h
#error "PCGExSampleNearestBounds.generated.h already included, missing '#pragma once' in PCGExSampleNearestBounds.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExSampleNearestBounds_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExSampleNearestBoundsSettings ****************************************
struct Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestBounds_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExSampleNearestBoundsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExSampleNearestBoundsSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExSampleNearestBoundsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExSampleNearestBoundsSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestBounds_h_61_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExSampleNearestBoundsSettings(UPCGExSampleNearestBoundsSettings&&) = delete; \
	UPCGExSampleNearestBoundsSettings(const UPCGExSampleNearestBoundsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExSampleNearestBoundsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExSampleNearestBoundsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExSampleNearestBoundsSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExSampleNearestBoundsSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestBounds_h_58_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestBounds_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestBounds_h_61_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestBounds_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExSampleNearestBoundsSettings;

// ********** End Class UPCGExSampleNearestBoundsSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExSampleNearestBounds_h

// ********** Begin Enum EPCGExBoundsSampleMethod **************************************************
#define FOREACH_ENUM_EPCGEXBOUNDSSAMPLEMETHOD(op) \
	op(EPCGExBoundsSampleMethod::WithinRange) \
	op(EPCGExBoundsSampleMethod::ClosestBounds) \
	op(EPCGExBoundsSampleMethod::FarthestBounds) \
	op(EPCGExBoundsSampleMethod::LargestBounds) \
	op(EPCGExBoundsSampleMethod::SmallestBounds) \
	op(EPCGExBoundsSampleMethod::BestCandidate) 

enum class EPCGExBoundsSampleMethod : uint8;
template<> struct TIsUEnumClass<EPCGExBoundsSampleMethod> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBoundsSampleMethod>();
// ********** End Enum EPCGExBoundsSampleMethod ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
