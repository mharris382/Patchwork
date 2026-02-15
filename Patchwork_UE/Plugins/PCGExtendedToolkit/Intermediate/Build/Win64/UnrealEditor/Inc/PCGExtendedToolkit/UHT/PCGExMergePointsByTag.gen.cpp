// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExMergePointsByTag.h"
#include "Data/PCGExDataFilter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExMergePointsByTag() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMergePointsByTagSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExMergePointsByTagSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagFallbackBehavior();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagOverlapResolutionMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCarryOverDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExNameFiltersDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExMergeByTagOverlapResolutionMode *************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExMergeByTagOverlapResolutionMode;
static UEnum* EPCGExMergeByTagOverlapResolutionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExMergeByTagOverlapResolutionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExMergeByTagOverlapResolutionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagOverlapResolutionMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExMergeByTagOverlapResolutionMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExMergeByTagOverlapResolutionMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMergeByTagOverlapResolutionMode>()
{
	return EPCGExMergeByTagOverlapResolutionMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagOverlapResolutionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Flatten.DisplayName", "Flatten" },
		{ "Flatten.Name", "EPCGExMergeByTagOverlapResolutionMode::Flatten" },
		{ "Flatten.ToolTip", "Flatten all tags into a unique identifier and match-merge based on that identifier." },
		{ "ImmediateOverlap.DisplayName", "Overlap" },
		{ "ImmediateOverlap.Name", "EPCGExMergeByTagOverlapResolutionMode::ImmediateOverlap" },
		{ "ImmediateOverlap.ToolTip", "Merge happens per-tag, overlapping data is merged entirely." },
		{ "ModuleRelativePath", "Public/Misc/PCGExMergePointsByTag.h" },
		{ "Strict.DisplayName", "Strict" },
		{ "Strict.Name", "EPCGExMergeByTagOverlapResolutionMode::Strict" },
		{ "Strict.ToolTip", "Merge happens per-tag, and higher priority tags are removed from lower priority overlaps." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExMergeByTagOverlapResolutionMode::Strict", (int64)EPCGExMergeByTagOverlapResolutionMode::Strict },
		{ "EPCGExMergeByTagOverlapResolutionMode::ImmediateOverlap", (int64)EPCGExMergeByTagOverlapResolutionMode::ImmediateOverlap },
		{ "EPCGExMergeByTagOverlapResolutionMode::Flatten", (int64)EPCGExMergeByTagOverlapResolutionMode::Flatten },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagOverlapResolutionMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagOverlapResolutionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExMergeByTagOverlapResolutionMode",
	"EPCGExMergeByTagOverlapResolutionMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagOverlapResolutionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagOverlapResolutionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagOverlapResolutionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagOverlapResolutionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagOverlapResolutionMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExMergeByTagOverlapResolutionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExMergeByTagOverlapResolutionMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagOverlapResolutionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExMergeByTagOverlapResolutionMode.InnerSingleton;
}
// ********** End Enum EPCGExMergeByTagOverlapResolutionMode ***************************************

// ********** Begin Enum EPCGExMergeByTagFallbackBehavior ******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExMergeByTagFallbackBehavior;
static UEnum* EPCGExMergeByTagFallbackBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExMergeByTagFallbackBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExMergeByTagFallbackBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagFallbackBehavior, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExMergeByTagFallbackBehavior"));
	}
	return Z_Registration_Info_UEnum_EPCGExMergeByTagFallbackBehavior.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExMergeByTagFallbackBehavior>()
{
	return EPCGExMergeByTagFallbackBehavior_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagFallbackBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Forward.DisplayName", "Forward" },
		{ "Forward.Name", "EPCGExMergeByTagFallbackBehavior::Forward" },
		{ "Forward.ToolTip", "Forward data that didn't pass filter without merging them" },
		{ "Merge.DisplayName", "Merge" },
		{ "Merge.Name", "EPCGExMergeByTagFallbackBehavior::Merge" },
		{ "Merge.ToolTip", "Merge all data that didn't pass filter in a single blob" },
		{ "ModuleRelativePath", "Public/Misc/PCGExMergePointsByTag.h" },
		{ "Omit.DisplayName", "Omit" },
		{ "Omit.Name", "EPCGExMergeByTagFallbackBehavior::Omit" },
		{ "Omit.ToolTip", "Do not output data that didn't pass filters" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExMergeByTagFallbackBehavior::Omit", (int64)EPCGExMergeByTagFallbackBehavior::Omit },
		{ "EPCGExMergeByTagFallbackBehavior::Merge", (int64)EPCGExMergeByTagFallbackBehavior::Merge },
		{ "EPCGExMergeByTagFallbackBehavior::Forward", (int64)EPCGExMergeByTagFallbackBehavior::Forward },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagFallbackBehavior_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagFallbackBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExMergeByTagFallbackBehavior",
	"EPCGExMergeByTagFallbackBehavior",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagFallbackBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagFallbackBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagFallbackBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagFallbackBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagFallbackBehavior()
{
	if (!Z_Registration_Info_UEnum_EPCGExMergeByTagFallbackBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExMergeByTagFallbackBehavior.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagFallbackBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExMergeByTagFallbackBehavior.InnerSingleton;
}
// ********** End Enum EPCGExMergeByTagFallbackBehavior ********************************************

// ********** Begin Class UPCGExMergePointsByTagSettings *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExMergePointsByTagSettings;
UClass* UPCGExMergePointsByTagSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExMergePointsByTagSettings;
	if (!Z_Registration_Info_UClass_UPCGExMergePointsByTagSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExMergePointsByTagSettings"),
			Z_Registration_Info_UClass_UPCGExMergePointsByTagSettings.InnerSingleton,
			StaticRegisterNativesUPCGExMergePointsByTagSettings,
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
	return Z_Registration_Info_UClass_UPCGExMergePointsByTagSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExMergePointsByTagSettings_NoRegister()
{
	return UPCGExMergePointsByTagSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExMergePointsByTag.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExMergePointsByTag.h" },
		{ "PCGExNodeLibraryDoc", "misc/merge-points-by-tag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExMergePointsByTag.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sorting direction */" },
		{ "EditCondition", "Mode != EPCGExMergeByTagOverlapResolutionMode::Flatten" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExMergePointsByTag.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Sorting direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackBehavior_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fallback behavior */" },
		{ "EditCondition", "Mode == EPCGExMergeByTagOverlapResolutionMode::Flatten" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExMergePointsByTag.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Fallback behavior" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagFilters_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tags to be processed or ignored. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExMergePointsByTag.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tags to be processed or ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionPriorities_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which tag has merging authority over another. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExMergePointsByTag.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which tag has merging authority over another." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarryOverDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Meta filter settings. */" },
		{ "DisplayName", "Carry Over Settings" },
		{ "ModuleRelativePath", "Public/Misc/PCGExMergePointsByTag.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Meta filter settings." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExMergePointsByTagSettings constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FallbackBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FallbackBehavior;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagFilters;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResolutionPriorities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResolutionPriorities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CarryOverDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExMergePointsByTagSettings constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExMergePointsByTagSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics

// ********** Begin Class UPCGExMergePointsByTagSettings Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMergePointsByTagSettings, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagOverlapResolutionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3233293357
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_SortDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_SortDirection = { "SortDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMergePointsByTagSettings, SortDirection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortDirection_MetaData), NewProp_SortDirection_MetaData) }; // 477201674
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_FallbackBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_FallbackBehavior = { "FallbackBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMergePointsByTagSettings, FallbackBehavior), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMergeByTagFallbackBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackBehavior_MetaData), NewProp_FallbackBehavior_MetaData) }; // 3953932867
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_TagFilters = { "TagFilters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMergePointsByTagSettings, TagFilters), Z_Construct_UScriptStruct_FPCGExNameFiltersDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagFilters_MetaData), NewProp_TagFilters_MetaData) }; // 1913362378
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_ResolutionPriorities_Inner = { "ResolutionPriorities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_ResolutionPriorities = { "ResolutionPriorities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMergePointsByTagSettings, ResolutionPriorities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionPriorities_MetaData), NewProp_ResolutionPriorities_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_CarryOverDetails = { "CarryOverDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExMergePointsByTagSettings, CarryOverDetails), Z_Construct_UScriptStruct_FPCGExCarryOverDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarryOverDetails_MetaData), NewProp_CarryOverDetails_MetaData) }; // 4041221405
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_SortDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_SortDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_FallbackBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_FallbackBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_TagFilters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_ResolutionPriorities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_ResolutionPriorities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::NewProp_CarryOverDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExMergePointsByTagSettings Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::ClassParams = {
	&UPCGExMergePointsByTagSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::Class_MetaDataParams)
};
void UPCGExMergePointsByTagSettings::StaticRegisterNativesUPCGExMergePointsByTagSettings()
{
}
UClass* Z_Construct_UClass_UPCGExMergePointsByTagSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExMergePointsByTagSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExMergePointsByTagSettings.OuterSingleton, Z_Construct_UClass_UPCGExMergePointsByTagSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExMergePointsByTagSettings.OuterSingleton;
}
UPCGExMergePointsByTagSettings::UPCGExMergePointsByTagSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExMergePointsByTagSettings);
UPCGExMergePointsByTagSettings::~UPCGExMergePointsByTagSettings() {}
// ********** End Class UPCGExMergePointsByTagSettings *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePointsByTag_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExMergeByTagOverlapResolutionMode_StaticEnum, TEXT("EPCGExMergeByTagOverlapResolutionMode"), &Z_Registration_Info_UEnum_EPCGExMergeByTagOverlapResolutionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3233293357U) },
		{ EPCGExMergeByTagFallbackBehavior_StaticEnum, TEXT("EPCGExMergeByTagFallbackBehavior"), &Z_Registration_Info_UEnum_EPCGExMergeByTagFallbackBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3953932867U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExMergePointsByTagSettings, UPCGExMergePointsByTagSettings::StaticClass, TEXT("UPCGExMergePointsByTagSettings"), &Z_Registration_Info_UClass_UPCGExMergePointsByTagSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExMergePointsByTagSettings), 2253602465U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePointsByTag_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePointsByTag_h__Script_PCGExtendedToolkit_1635409466{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePointsByTag_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePointsByTag_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePointsByTag_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExMergePointsByTag_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
