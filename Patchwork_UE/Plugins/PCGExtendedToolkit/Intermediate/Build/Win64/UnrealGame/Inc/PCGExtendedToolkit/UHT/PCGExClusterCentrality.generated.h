// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/PCGExClusterCentrality.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExClusterCentrality_generated_h
#error "PCGExClusterCentrality.generated.h already included, missing '#pragma once' in PCGExClusterCentrality.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExClusterCentrality_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExClusterCentralitySettings ******************************************
struct Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExClusterCentralitySettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExClusterCentrality_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExClusterCentralitySettings(); \
	friend struct ::Z_Construct_UClass_UPCGExClusterCentralitySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExClusterCentralitySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExClusterCentralitySettings, UPCGExEdgesProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExClusterCentralitySettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExClusterCentralitySettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExClusterCentrality_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGExClusterCentralitySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExClusterCentralitySettings(UPCGExClusterCentralitySettings&&) = delete; \
	UPCGExClusterCentralitySettings(const UPCGExClusterCentralitySettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGExClusterCentralitySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExClusterCentralitySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExClusterCentralitySettings) \
	NO_API virtual ~UPCGExClusterCentralitySettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExClusterCentrality_h_34_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExClusterCentrality_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExClusterCentrality_h_37_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExClusterCentrality_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExClusterCentralitySettings;

// ********** End Class UPCGExClusterCentralitySettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_PCGExClusterCentrality_h

// ********** Begin Enum EPCGExCentralityDownsampling **********************************************
#define FOREACH_ENUM_EPCGEXCENTRALITYDOWNSAMPLING(op) \
	op(EPCGExCentralityDownsampling::None) \
	op(EPCGExCentralityDownsampling::Ratio) \
	op(EPCGExCentralityDownsampling::Filters) 

enum class EPCGExCentralityDownsampling : uint8;
template<> struct TIsUEnumClass<EPCGExCentralityDownsampling> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCentralityDownsampling>();
// ********** End Enum EPCGExCentralityDownsampling ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
