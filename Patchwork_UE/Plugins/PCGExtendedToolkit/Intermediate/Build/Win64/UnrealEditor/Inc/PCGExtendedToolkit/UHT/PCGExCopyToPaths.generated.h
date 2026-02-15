// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transform/PCGExCopyToPaths.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExCopyToPaths_generated_h
#error "PCGExCopyToPaths.generated.h already included, missing '#pragma once' in PCGExCopyToPaths.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExCopyToPaths_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExCopyToPathsSettings ************************************************
struct Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExCopyToPathsSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExCopyToPaths_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExCopyToPathsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExCopyToPathsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExCopyToPathsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExCopyToPathsSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExCopyToPathsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExCopyToPathsSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExCopyToPaths_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExCopyToPathsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExCopyToPathsSettings(UPCGExCopyToPathsSettings&&) = delete; \
	UPCGExCopyToPathsSettings(const UPCGExCopyToPathsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExCopyToPathsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExCopyToPathsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExCopyToPathsSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExCopyToPathsSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExCopyToPaths_h_26_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExCopyToPaths_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExCopyToPaths_h_29_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExCopyToPaths_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExCopyToPathsSettings;

// ********** End Class UPCGExCopyToPathsSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_PCGExCopyToPaths_h

// ********** Begin Enum EPCGExCopyToPathsUnit *****************************************************
#define FOREACH_ENUM_EPCGEXCOPYTOPATHSUNIT(op) \
	op(EPCGExCopyToPathsUnit::Alpha) \
	op(EPCGExCopyToPathsUnit::Distance) 

enum class EPCGExCopyToPathsUnit : uint8;
template<> struct TIsUEnumClass<EPCGExCopyToPathsUnit> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCopyToPathsUnit>();
// ********** End Enum EPCGExCopyToPathsUnit *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
