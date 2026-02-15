// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Paths/Orient/PCGExOrientLookAt.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExOrientLookAt_generated_h
#error "PCGExOrientLookAt.generated.h already included, missing '#pragma once' in PCGExOrientLookAt.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExOrientLookAt_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExOrientLookAt *******************************************************
struct Z_Construct_UClass_UPCGExOrientLookAt_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExOrientLookAt_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientLookAt_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExOrientLookAt(); \
	friend struct ::Z_Construct_UClass_UPCGExOrientLookAt_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExOrientLookAt_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExOrientLookAt, UPCGExOrientInstancedFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExOrientLookAt_NoRegister) \
	DECLARE_SERIALIZER(UPCGExOrientLookAt)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientLookAt_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExOrientLookAt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExOrientLookAt(UPCGExOrientLookAt&&) = delete; \
	UPCGExOrientLookAt(const UPCGExOrientLookAt&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExOrientLookAt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExOrientLookAt); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExOrientLookAt) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExOrientLookAt();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientLookAt_h_98_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientLookAt_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientLookAt_h_101_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientLookAt_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExOrientLookAt;

// ********** End Class UPCGExOrientLookAt *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Orient_PCGExOrientLookAt_h

// ********** Begin Enum EPCGExOrientLookAtMode ****************************************************
#define FOREACH_ENUM_EPCGEXORIENTLOOKATMODE(op) \
	op(EPCGExOrientLookAtMode::NextPoint) \
	op(EPCGExOrientLookAtMode::PreviousPoint) \
	op(EPCGExOrientLookAtMode::Direction) \
	op(EPCGExOrientLookAtMode::Position) 

enum class EPCGExOrientLookAtMode : uint8;
template<> struct TIsUEnumClass<EPCGExOrientLookAtMode> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExOrientLookAtMode>();
// ********** End Enum EPCGExOrientLookAtMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
