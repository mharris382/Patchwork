// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sampling/PCGExGetTextureData.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExGetTextureData_generated_h
#error "PCGExGetTextureData.generated.h already included, missing '#pragma once' in PCGExGetTextureData.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExGetTextureData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExGetTextureDataSettings *********************************************
struct Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGetTextureDataSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExGetTextureData_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExGetTextureDataSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExGetTextureDataSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExGetTextureDataSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExGetTextureDataSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExGetTextureDataSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExGetTextureDataSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExGetTextureData_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExGetTextureDataSettings(UPCGExGetTextureDataSettings&&) = delete; \
	UPCGExGetTextureDataSettings(const UPCGExGetTextureDataSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExGetTextureDataSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExGetTextureDataSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExGetTextureDataSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExGetTextureDataSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExGetTextureData_h_35_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExGetTextureData_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExGetTextureData_h_38_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExGetTextureData_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExGetTextureDataSettings;

// ********** End Class UPCGExGetTextureDataSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Sampling_PCGExGetTextureData_h

// ********** Begin Enum EPCGExGetTexturePathType **************************************************
#define FOREACH_ENUM_EPCGEXGETTEXTUREPATHTYPE(op) \
	op(EPCGExGetTexturePathType::TexturePath) \
	op(EPCGExGetTexturePathType::MaterialPath) 

enum class EPCGExGetTexturePathType : uint8;
template<> struct TIsUEnumClass<EPCGExGetTexturePathType> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGetTexturePathType>();
// ********** End Enum EPCGExGetTexturePathType ****************************************************

// ********** Begin Enum EPCGExTextureFilter *******************************************************
#define FOREACH_ENUM_EPCGEXTEXTUREFILTER(op) \
	op(EPCGExTextureFilter::Point) \
	op(EPCGExTextureFilter::Bilinear) 

enum class EPCGExTextureFilter : uint8;
template<> struct TIsUEnumClass<EPCGExTextureFilter> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTextureFilter>();
// ********** End Enum EPCGExTextureFilter *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
