// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExRecursionTracker.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExRecursionTracker() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRecursionTrackerSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRecursionTrackerSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerType();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExRecursionTrackerType ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExRecursionTrackerType;
static UEnum* EPCGExRecursionTrackerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExRecursionTrackerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExRecursionTrackerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExRecursionTrackerType"));
	}
	return Z_Registration_Info_UEnum_EPCGExRecursionTrackerType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRecursionTrackerType>()
{
	return EPCGExRecursionTrackerType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Branch.ActionIcon", "PCGEx.Pin.OUT_RecursionTracker" },
		{ "Branch.DisplayName", "Branch" },
		{ "Branch.Name", "EPCGExRecursionTrackerType::Branch" },
		{ "Branch.SearchHints", "Branch" },
		{ "Branch.ToolTip", "Branch recusion tracker. Can only work with a single tracker" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "Simple.ActionIcon", "PCGEx.Pin.OUT_RecursionTracker" },
		{ "Simple.DisplayName", "Simple" },
		{ "Simple.Name", "EPCGExRecursionTrackerType::Simple" },
		{ "Simple.ToolTip", "Simple recursion tracker. Can update multiple trackers at once." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExRecursionTrackerType::Simple", (int64)EPCGExRecursionTrackerType::Simple },
		{ "EPCGExRecursionTrackerType::Branch", (int64)EPCGExRecursionTrackerType::Branch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExRecursionTrackerType",
	"EPCGExRecursionTrackerType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerType()
{
	if (!Z_Registration_Info_UEnum_EPCGExRecursionTrackerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExRecursionTrackerType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExRecursionTrackerType.InnerSingleton;
}
// ********** End Enum EPCGExRecursionTrackerType **************************************************

// ********** Begin Enum EPCGExRecursionTrackerMode ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExRecursionTrackerMode;
static UEnum* EPCGExRecursionTrackerMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExRecursionTrackerMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExRecursionTrackerMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExRecursionTrackerMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExRecursionTrackerMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRecursionTrackerMode>()
{
	return EPCGExRecursionTrackerMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Create.DisplayName", "Create" },
		{ "Create.Name", "EPCGExRecursionTrackerMode::Create" },
		{ "Create.Tooltip", "Create a new tracker. This is for creating an initial tracker outside the subgraph." },
		{ "CreateOrUpdate.DisplayName", "Create or Update" },
		{ "CreateOrUpdate.Name", "EPCGExRecursionTrackerMode::CreateOrUpdate" },
		{ "CreateOrUpdate.Tooltip", "Create a new tracker if input is empty, otherwise fallback to mutate. Useful to create tracker directly inside the recursive subgraph." },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "Update.DisplayName", "Update" },
		{ "Update.Name", "EPCGExRecursionTrackerMode::Update" },
		{ "Update.Tooltip", "Process and update an existing tracker. This is for use inside the recursive subgraph." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExRecursionTrackerMode::Create", (int64)EPCGExRecursionTrackerMode::Create },
		{ "EPCGExRecursionTrackerMode::Update", (int64)EPCGExRecursionTrackerMode::Update },
		{ "EPCGExRecursionTrackerMode::CreateOrUpdate", (int64)EPCGExRecursionTrackerMode::CreateOrUpdate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExRecursionTrackerMode",
	"EPCGExRecursionTrackerMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExRecursionTrackerMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExRecursionTrackerMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExRecursionTrackerMode.InnerSingleton;
}
// ********** End Enum EPCGExRecursionTrackerMode **************************************************

// ********** Begin Class UPCGExRecursionTrackerSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExRecursionTrackerSettings;
UClass* UPCGExRecursionTrackerSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExRecursionTrackerSettings;
	if (!Z_Registration_Info_UClass_UPCGExRecursionTrackerSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExRecursionTrackerSettings"),
			Z_Registration_Info_UClass_UPCGExRecursionTrackerSettings.InnerSingleton,
			StaticRegisterNativesUPCGExRecursionTrackerSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPCGExRecursionTrackerSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExRecursionTrackerSettings_NoRegister()
{
	return UPCGExRecursionTrackerSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExRecursionTracker.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "PCGExNodeLibraryDoc", "quality-of-life/recursion-tracker" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How is this recursion tracker supposed to be used. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "How is this recursion tracker supposed to be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How is this recursion tracker supposed to be used. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "How is this recursion tracker supposed to be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinueAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Name of the bool attribute that will be set on the tracker. */" },
		{ "EditCondition", "Mode != EPCGExRecursionTrackerMode::Update" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Name of the bool attribute that will be set on the tracker." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Max count. */" },
		{ "EditCondition", "Mode != EPCGExRecursionTrackerMode::Update" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max count." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddTags_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** Tags to be added to the tracker */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tags to be added to the tracker" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveTags_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** Tags to be removed from the tracker(s) */" },
		{ "EditCondition", "Mode != EPCGExRecursionTrackerMode::Create" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tags to be removed from the tracker(s)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CounterUpdate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "Mode != EPCGExRecursionTrackerMode::Create" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputProgress_MetaData[] = {
		{ "Category", "Settings|Extra Outputs" },
		{ "Comment", "/** If enabled, will create a pin that outputs the normalized progress value. */" },
		{ "EditCondition", "Mode != EPCGExRecursionTrackerMode::Create" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, will create a pin that outputs the normalized progress value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputIndex_MetaData[] = {
		{ "Category", "Settings|Extra Outputs" },
		{ "Comment", "/** If enabled, will create a pin that outputs the current iteration index (Max - Remainder). */" },
		{ "EditCondition", "Mode != EPCGExRecursionTrackerMode::Create" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, will create a pin that outputs the current iteration index (Max - Remainder)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputRemainder_MetaData[] = {
		{ "Category", "Settings|Extra Outputs" },
		{ "Comment", "/** If enabled, will create a pin that outputs the current remainder. */" },
		{ "EditCondition", "Mode != EPCGExRecursionTrackerMode::Create" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, will create a pin that outputs the current remainder." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOneMinus_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 One Minus" },
		{ "EditCondition", "Mode != EPCGExRecursionTrackerMode::Create && bOutputProgress" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceOutputContinue_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, will override the value of the \"Continue\" attribute to a valid one. Use this is you give the tracker some attribute set that may already have a boolean with the same name and a wrong value. */" },
		{ "EditCondition", "Mode != EPCGExRecursionTrackerMode::Create" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, will override the value of the \"Continue\" attribute to a valid one. Use this is you give the tracker some attribute set that may already have a boolean with the same name and a wrong value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoAdditionalDataTesting_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, does additional collection-level filtering on a separate set of datas. If no data passes those filters, the tracker will return a single false value. */" },
		{ "EditCondition", "Mode != EPCGExRecursionTrackerMode::Create && Type == EPCGExRecursionTrackerType::Simple" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "If enabled, does additional collection-level filtering on a separate set of datas. If no data passes those filters, the tracker will return a single false value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddEntryWhenCreatingFromExistingData_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** . */" },
		{ "EditCondition", "Mode != EPCGExRecursionTrackerMode::Create" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainderOffsetWhenCreateInsteadOfUpdate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** An offset applied when creating a tracker in \"Create or Update\" mode. The default value assume the tracker is created from inside a subgraph and thus that one iteration passed already. */" },
		{ "EditCondition", "Mode == EPCGExRecursionTrackerMode::CreateOrUpdate" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "An offset applied when creating a tracker in \"Create or Update\" mode. The default value assume the tracker is created from inside a subgraph and thus that one iteration passed already." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroupBranchPins_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** For OCD purposes. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExRecursionTracker.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "For OCD purposes." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExRecursionTrackerSettings constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ContinueAttributeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AddTags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RemoveTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CounterUpdate;
	static void NewProp_bOutputProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputProgress;
	static void NewProp_bOutputIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputIndex;
	static void NewProp_bOutputRemainder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputRemainder;
	static void NewProp_bOneMinus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOneMinus;
	static void NewProp_bForceOutputContinue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceOutputContinue;
	static void NewProp_bDoAdditionalDataTesting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoAdditionalDataTesting;
	static void NewProp_bAddEntryWhenCreatingFromExistingData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddEntryWhenCreatingFromExistingData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainderOffsetWhenCreateInsteadOfUpdate;
	static void NewProp_bGroupBranchPins_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupBranchPins;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExRecursionTrackerSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExRecursionTrackerSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics

// ********** Begin Class UPCGExRecursionTrackerSettings Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRecursionTrackerSettings, Type), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 928191860
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRecursionTrackerSettings, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRecursionTrackerMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2138971713
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_ContinueAttributeName = { "ContinueAttributeName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRecursionTrackerSettings, ContinueAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinueAttributeName_MetaData), NewProp_ContinueAttributeName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRecursionTrackerSettings, MaxCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCount_MetaData), NewProp_MaxCount_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_AddTags = { "AddTags", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRecursionTrackerSettings, AddTags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddTags_MetaData), NewProp_AddTags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_RemoveTags = { "RemoveTags", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRecursionTrackerSettings, RemoveTags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveTags_MetaData), NewProp_RemoveTags_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_CounterUpdate = { "CounterUpdate", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRecursionTrackerSettings, CounterUpdate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CounterUpdate_MetaData), NewProp_CounterUpdate_MetaData) };
void Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bOutputProgress_SetBit(void* Obj)
{
	((UPCGExRecursionTrackerSettings*)Obj)->bOutputProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bOutputProgress = { "bOutputProgress", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExRecursionTrackerSettings), &Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bOutputProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputProgress_MetaData), NewProp_bOutputProgress_MetaData) };
void Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bOutputIndex_SetBit(void* Obj)
{
	((UPCGExRecursionTrackerSettings*)Obj)->bOutputIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bOutputIndex = { "bOutputIndex", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExRecursionTrackerSettings), &Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bOutputIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputIndex_MetaData), NewProp_bOutputIndex_MetaData) };
void Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bOutputRemainder_SetBit(void* Obj)
{
	((UPCGExRecursionTrackerSettings*)Obj)->bOutputRemainder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bOutputRemainder = { "bOutputRemainder", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExRecursionTrackerSettings), &Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bOutputRemainder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputRemainder_MetaData), NewProp_bOutputRemainder_MetaData) };
void Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bOneMinus_SetBit(void* Obj)
{
	((UPCGExRecursionTrackerSettings*)Obj)->bOneMinus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bOneMinus = { "bOneMinus", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExRecursionTrackerSettings), &Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bOneMinus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOneMinus_MetaData), NewProp_bOneMinus_MetaData) };
void Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bForceOutputContinue_SetBit(void* Obj)
{
	((UPCGExRecursionTrackerSettings*)Obj)->bForceOutputContinue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bForceOutputContinue = { "bForceOutputContinue", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExRecursionTrackerSettings), &Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bForceOutputContinue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceOutputContinue_MetaData), NewProp_bForceOutputContinue_MetaData) };
void Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bDoAdditionalDataTesting_SetBit(void* Obj)
{
	((UPCGExRecursionTrackerSettings*)Obj)->bDoAdditionalDataTesting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bDoAdditionalDataTesting = { "bDoAdditionalDataTesting", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExRecursionTrackerSettings), &Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bDoAdditionalDataTesting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoAdditionalDataTesting_MetaData), NewProp_bDoAdditionalDataTesting_MetaData) };
void Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bAddEntryWhenCreatingFromExistingData_SetBit(void* Obj)
{
	((UPCGExRecursionTrackerSettings*)Obj)->bAddEntryWhenCreatingFromExistingData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bAddEntryWhenCreatingFromExistingData = { "bAddEntryWhenCreatingFromExistingData", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExRecursionTrackerSettings), &Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bAddEntryWhenCreatingFromExistingData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddEntryWhenCreatingFromExistingData_MetaData), NewProp_bAddEntryWhenCreatingFromExistingData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_RemainderOffsetWhenCreateInsteadOfUpdate = { "RemainderOffsetWhenCreateInsteadOfUpdate", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRecursionTrackerSettings, RemainderOffsetWhenCreateInsteadOfUpdate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainderOffsetWhenCreateInsteadOfUpdate_MetaData), NewProp_RemainderOffsetWhenCreateInsteadOfUpdate_MetaData) };
void Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bGroupBranchPins_SetBit(void* Obj)
{
	((UPCGExRecursionTrackerSettings*)Obj)->bGroupBranchPins = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bGroupBranchPins = { "bGroupBranchPins", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExRecursionTrackerSettings), &Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bGroupBranchPins_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroupBranchPins_MetaData), NewProp_bGroupBranchPins_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_ContinueAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_MaxCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_AddTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_RemoveTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_CounterUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bOutputProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bOutputIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bOutputRemainder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bOneMinus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bForceOutputContinue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bDoAdditionalDataTesting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bAddEntryWhenCreatingFromExistingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_RemainderOffsetWhenCreateInsteadOfUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::NewProp_bGroupBranchPins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExRecursionTrackerSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::ClassParams = {
	&UPCGExRecursionTrackerSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::Class_MetaDataParams)
};
void UPCGExRecursionTrackerSettings::StaticRegisterNativesUPCGExRecursionTrackerSettings()
{
}
UClass* Z_Construct_UClass_UPCGExRecursionTrackerSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExRecursionTrackerSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExRecursionTrackerSettings.OuterSingleton, Z_Construct_UClass_UPCGExRecursionTrackerSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExRecursionTrackerSettings.OuterSingleton;
}
UPCGExRecursionTrackerSettings::UPCGExRecursionTrackerSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExRecursionTrackerSettings);
UPCGExRecursionTrackerSettings::~UPCGExRecursionTrackerSettings() {}
// ********** End Class UPCGExRecursionTrackerSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRecursionTracker_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExRecursionTrackerType_StaticEnum, TEXT("EPCGExRecursionTrackerType"), &Z_Registration_Info_UEnum_EPCGExRecursionTrackerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 928191860U) },
		{ EPCGExRecursionTrackerMode_StaticEnum, TEXT("EPCGExRecursionTrackerMode"), &Z_Registration_Info_UEnum_EPCGExRecursionTrackerMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2138971713U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExRecursionTrackerSettings, UPCGExRecursionTrackerSettings::StaticClass, TEXT("UPCGExRecursionTrackerSettings"), &Z_Registration_Info_UClass_UPCGExRecursionTrackerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExRecursionTrackerSettings), 4061194845U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRecursionTracker_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRecursionTracker_h__Script_PCGExtendedToolkit_3864969065{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRecursionTracker_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRecursionTracker_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRecursionTracker_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExRecursionTracker_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
