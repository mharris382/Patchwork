// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/PCGExAttributesToTags.h"

#ifdef PCGEXTENDEDTOOLKIT_PCGExAttributesToTags_generated_h
#error "PCGExAttributesToTags.generated.h already included, missing '#pragma once' in PCGExAttributesToTags.h"
#endif
#define PCGEXTENDEDTOOLKIT_PCGExAttributesToTags_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGExAttributesToTagsSettings *******************************************
struct Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics;
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExAttributesToTagsSettings_NoRegister();

#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributesToTags_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExAttributesToTagsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGExAttributesToTagsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEXTENDEDTOOLKIT_API UClass* ::Z_Construct_UClass_UPCGExAttributesToTagsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExAttributesToTagsSettings, UPCGExPointsProcessorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGExtendedToolkit"), Z_Construct_UClass_UPCGExAttributesToTagsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGExAttributesToTagsSettings)


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributesToTags_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGEXTENDEDTOOLKIT_API UPCGExAttributesToTagsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExAttributesToTagsSettings(UPCGExAttributesToTagsSettings&&) = delete; \
	UPCGExAttributesToTagsSettings(const UPCGExAttributesToTagsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGEXTENDEDTOOLKIT_API, UPCGExAttributesToTagsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExAttributesToTagsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExAttributesToTagsSettings) \
	PCGEXTENDEDTOOLKIT_API virtual ~UPCGExAttributesToTagsSettings();


#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributesToTags_h_43_PROLOG
#define FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributesToTags_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributesToTags_h_46_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributesToTags_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExAttributesToTagsSettings;

// ********** End Class UPCGExAttributesToTagsSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExAttributesToTags_h

// ********** Begin Enum EPCGExAttributeToTagsAction ***********************************************
#define FOREACH_ENUM_EPCGEXATTRIBUTETOTAGSACTION(op) \
	op(EPCGExAttributeToTagsAction::AddTags) \
	op(EPCGExAttributeToTagsAction::Attribute) \
	op(EPCGExAttributeToTagsAction::Data) 

enum class EPCGExAttributeToTagsAction : uint8;
template<> struct TIsUEnumClass<EPCGExAttributeToTagsAction> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAttributeToTagsAction>();
// ********** End Enum EPCGExAttributeToTagsAction *************************************************

// ********** Begin Enum EPCGExAttributeToTagsResolution *******************************************
#define FOREACH_ENUM_EPCGEXATTRIBUTETOTAGSRESOLUTION(op) \
	op(EPCGExAttributeToTagsResolution::Self) \
	op(EPCGExAttributeToTagsResolution::EntryToCollection) \
	op(EPCGExAttributeToTagsResolution::CollectionToCollection) 

enum class EPCGExAttributeToTagsResolution : uint8;
template<> struct TIsUEnumClass<EPCGExAttributeToTagsResolution> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExAttributeToTagsResolution>();
// ********** End Enum EPCGExAttributeToTagsResolution *********************************************

// ********** Begin Enum EPCGExCollectionEntrySelection ********************************************
#define FOREACH_ENUM_EPCGEXCOLLECTIONENTRYSELECTION(op) \
	op(EPCGExCollectionEntrySelection::FirstIndex) \
	op(EPCGExCollectionEntrySelection::LastIndex) \
	op(EPCGExCollectionEntrySelection::RandomIndex) \
	op(EPCGExCollectionEntrySelection::Picker) \
	op(EPCGExCollectionEntrySelection::PickerFirst) \
	op(EPCGExCollectionEntrySelection::PickerLast) 

enum class EPCGExCollectionEntrySelection : uint8;
template<> struct TIsUEnumClass<EPCGExCollectionEntrySelection> { enum { Value = true }; };
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExCollectionEntrySelection>();
// ********** End Enum EPCGExCollectionEntrySelection **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
