// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Layout/PCGExBinPacking.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExBinPacking() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBinPackingSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExBinPackingSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinFreeSpacePartitionMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinSeedMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPlacementFavor();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSpaceSplitMode();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExBinFreeSpacePartitionMode *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExBinFreeSpacePartitionMode;
static UEnum* EPCGExBinFreeSpacePartitionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExBinFreeSpacePartitionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExBinFreeSpacePartitionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinFreeSpacePartitionMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExBinFreeSpacePartitionMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExBinFreeSpacePartitionMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExBinFreeSpacePartitionMode>()
{
	return EPCGExBinFreeSpacePartitionMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinFreeSpacePartitionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "PositionAttribute.DisplayName", "Position (Attribute)" },
		{ "PositionAttribute.Name", "EPCGExBinFreeSpacePartitionMode::PositionAttribute" },
		{ "PositionAttribute.ToolTip", "A per-bin world position" },
		{ "PositionConstant.DisplayName", "Position (Constant)" },
		{ "PositionConstant.Name", "EPCGExBinFreeSpacePartitionMode::PositionConstant" },
		{ "PositionConstant.ToolTip", "A constant world position" },
		{ "UVWAttribute.DisplayName", "UVW" },
		{ "UVWAttribute.Name", "EPCGExBinFreeSpacePartitionMode::UVWAttribute" },
		{ "UVWAttribute.ToolTip", "A per-bin bound-relative position" },
		{ "UVWConstant.DisplayName", "UVW (Constant)" },
		{ "UVWConstant.Name", "EPCGExBinFreeSpacePartitionMode::UVWConstant" },
		{ "UVWConstant.ToolTip", "A constant bound-relative position" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExBinFreeSpacePartitionMode::UVWConstant", (int64)EPCGExBinFreeSpacePartitionMode::UVWConstant },
		{ "EPCGExBinFreeSpacePartitionMode::UVWAttribute", (int64)EPCGExBinFreeSpacePartitionMode::UVWAttribute },
		{ "EPCGExBinFreeSpacePartitionMode::PositionConstant", (int64)EPCGExBinFreeSpacePartitionMode::PositionConstant },
		{ "EPCGExBinFreeSpacePartitionMode::PositionAttribute", (int64)EPCGExBinFreeSpacePartitionMode::PositionAttribute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinFreeSpacePartitionMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinFreeSpacePartitionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExBinFreeSpacePartitionMode",
	"EPCGExBinFreeSpacePartitionMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinFreeSpacePartitionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinFreeSpacePartitionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinFreeSpacePartitionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinFreeSpacePartitionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinFreeSpacePartitionMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExBinFreeSpacePartitionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExBinFreeSpacePartitionMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinFreeSpacePartitionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExBinFreeSpacePartitionMode.InnerSingleton;
}
// ********** End Enum EPCGExBinFreeSpacePartitionMode *********************************************

// ********** Begin Enum EPCGExPlacementFavor ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPlacementFavor;
static UEnum* EPCGExPlacementFavor_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPlacementFavor.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPlacementFavor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPlacementFavor, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPlacementFavor"));
	}
	return Z_Registration_Info_UEnum_EPCGExPlacementFavor.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPlacementFavor>()
{
	return EPCGExPlacementFavor_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPlacementFavor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "SeedProximity.DisplayName", "Seed Proximity" },
		{ "SeedProximity.Name", "EPCGExPlacementFavor::SeedProximity" },
		{ "SeedProximity.ToolTip", "Favor seed proximity over space conservation" },
		{ "Space.DisplayName", "Space Conservation" },
		{ "Space.Name", "EPCGExPlacementFavor::Space" },
		{ "Space.ToolTip", "Favor space conservation over seed proximity" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPlacementFavor::SeedProximity", (int64)EPCGExPlacementFavor::SeedProximity },
		{ "EPCGExPlacementFavor::Space", (int64)EPCGExPlacementFavor::Space },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPlacementFavor_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPlacementFavor_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPlacementFavor",
	"EPCGExPlacementFavor",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPlacementFavor_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPlacementFavor_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPlacementFavor_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPlacementFavor_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPlacementFavor()
{
	if (!Z_Registration_Info_UEnum_EPCGExPlacementFavor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPlacementFavor.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPlacementFavor_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPlacementFavor.InnerSingleton;
}
// ********** End Enum EPCGExPlacementFavor ********************************************************

// ********** Begin Class UPCGExBinPackingSettings *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExBinPackingSettings;
UClass* UPCGExBinPackingSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExBinPackingSettings;
	if (!Z_Registration_Info_UClass_UPCGExBinPackingSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExBinPackingSettings"),
			Z_Registration_Info_UClass_UPCGExBinPackingSettings.InnerSingleton,
			StaticRegisterNativesUPCGExBinPackingSettings,
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
	return Z_Registration_Info_UClass_UPCGExBinPackingSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExBinPackingSettings_NoRegister()
{
	return UPCGExBinPackingSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExBinPackingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Layout/PCGExBinPacking.h" },
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "PCGExNodeLibraryDoc", "misc/layout/bin-packing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Controls the order in which points will be sorted, when using sorting rules. */" },
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Controls the order in which points will be sorted, when using sorting rules." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Per-bin seed. Represent a bound-relative location to start packing from. */" },
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Per-bin seed. Represent a bound-relative location to start packing from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedUVW_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "SeedMode == EPCGExBinSeedMode::UVWConstant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedUVWAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "SeedMode == EPCGExBinSeedMode::UVWAttribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "SeedMode == EPCGExBinSeedMode::PositionConstant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedPositionAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "SeedMode == EPCGExBinSeedMode::PositionAttribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInferSplitAxisFromSeed_MetaData[] = {
		{ "Category", "Settings|Fitting" },
		{ "Comment", "/** Will attempt to infer the split axis from relative seed positioning, and fall back to selected axis if it can't find one. */" },
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Will attempt to infer the split axis from relative seed positioning, and fall back to selected axis if it can't find one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitAxis_MetaData[] = {
		{ "Category", "Settings|Fitting" },
		{ "Comment", "/** The main stacking axis is the axis that will generate the smallest free space for further insertion. */" },
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The main stacking axis is the axis that will generate the smallest free space for further insertion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitMode_MetaData[] = {
		{ "Category", "Settings|Fitting" },
		{ "Comment", "/** The cross stacking axis is the axis that will generate the largest free space on the \"sides\" of the main axis. */" },
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The cross stacking axis is the axis that will generate the largest free space on the \"sides\" of the main axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAvoidWastedSpace_MetaData[] = {
		{ "Category", "Settings|Fitting" },
		{ "Comment", "/** If enabled, fitting will try to avoid wasted space by not creating free spaces that are below a certain threshold. */" },
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, fitting will try to avoid wasted space by not creating free spaces that are below a certain threshold." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementFavor_MetaData[] = {
		{ "Category", "Settings|Fitting" },
		{ "Comment", "/** If enabled, fitting will try to avoid wasted space by not creating free spaces that are below a certain threshold. */" },
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, fitting will try to avoid wasted space by not creating free spaces that are below a certain threshold." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OccupationPaddingInput_MetaData[] = {
		{ "Category", "Settings|Fitting" },
		{ "Comment", "/** Occupation padding source */" },
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Occupation padding source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OccupationPaddingAttribute_MetaData[] = {
		{ "Category", "Settings|Fitting" },
		{ "Comment", "/** Occupation padding attribute -- Will be broadcast to FVector. Occupation padding is an amount by which the bounds of a placed point will be expanded by after placement. This yield to greater fragmentation. */" },
		{ "DisplayName", "Occupation Padding (Attr)" },
		{ "EditCondition", "OccupationPaddingInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Occupation padding attribute -- Will be broadcast to FVector. Occupation padding is an amount by which the bounds of a placed point will be expanded by after placement. This yield to greater fragmentation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OccupationPadding_MetaData[] = {
		{ "Category", "Settings|Fitting" },
		{ "Comment", "/** Occupation padding. Occupation padding is an amount by which the bounds of a placed point will be expanded by after placement. This yield to greater fragmentation. */" },
		{ "DisplayName", "Occupation Padding" },
		{ "EditCondition", "OccupationPaddingInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Occupation padding. Occupation padding is an amount by which the bounds of a placed point will be expanded by after placement. This yield to greater fragmentation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbsolutePadding_MetaData[] = {
		{ "Category", "Settings|Fitting" },
		{ "Comment", "/** If enabled, the padding will not be relative (rotated) if the item is rotated. */" },
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, the padding will not be relative (rotated) if the item is rotated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietTooManyBinsWarning_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** If enabled, won't throw a warning if there are more bins than there are inputs. */" },
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "ToolTip", "If enabled, won't throw a warning if there are more bins than there are inputs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietTooFewBinsWarning_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** If enabled, won't throw a warning if there are fewer bins than there are inputs. */" },
		{ "ModuleRelativePath", "Public/Layout/PCGExBinPacking.h" },
		{ "ToolTip", "If enabled, won't throw a warning if there are fewer bins than there are inputs." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExBinPackingSettings constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SeedMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SeedMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeedUVW;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeedUVWAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeedPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeedPositionAttribute;
	static void NewProp_bInferSplitAxisFromSeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInferSplitAxisFromSeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplitAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SplitAxis;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplitMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SplitMode;
	static void NewProp_bAvoidWastedSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvoidWastedSpace;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlacementFavor_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlacementFavor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OccupationPaddingInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OccupationPaddingInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OccupationPaddingAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OccupationPadding;
	static void NewProp_bAbsolutePadding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsolutePadding;
	static void NewProp_bQuietTooManyBinsWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietTooManyBinsWarning;
	static void NewProp_bQuietTooFewBinsWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietTooFewBinsWarning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExBinPackingSettings constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExBinPackingSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExBinPackingSettings_Statics

// ********** Begin Class UPCGExBinPackingSettings Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SortDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SortDirection = { "SortDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBinPackingSettings, SortDirection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortDirection_MetaData), NewProp_SortDirection_MetaData) }; // 477201674
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SeedMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SeedMode = { "SeedMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBinPackingSettings, SeedMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExBinSeedMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedMode_MetaData), NewProp_SeedMode_MetaData) }; // 2451387701
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SeedUVW = { "SeedUVW", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBinPackingSettings, SeedUVW), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedUVW_MetaData), NewProp_SeedUVW_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SeedUVWAttribute = { "SeedUVWAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBinPackingSettings, SeedUVWAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedUVWAttribute_MetaData), NewProp_SeedUVWAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SeedPosition = { "SeedPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBinPackingSettings, SeedPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedPosition_MetaData), NewProp_SeedPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SeedPositionAttribute = { "SeedPositionAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBinPackingSettings, SeedPositionAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedPositionAttribute_MetaData), NewProp_SeedPositionAttribute_MetaData) }; // 3844583698
void Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bInferSplitAxisFromSeed_SetBit(void* Obj)
{
	((UPCGExBinPackingSettings*)Obj)->bInferSplitAxisFromSeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bInferSplitAxisFromSeed = { "bInferSplitAxisFromSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBinPackingSettings), &Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bInferSplitAxisFromSeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInferSplitAxisFromSeed_MetaData), NewProp_bInferSplitAxisFromSeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SplitAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SplitAxis = { "SplitAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBinPackingSettings, SplitAxis), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitAxis_MetaData), NewProp_SplitAxis_MetaData) }; // 1564008668
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SplitMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SplitMode = { "SplitMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBinPackingSettings, SplitMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSpaceSplitMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitMode_MetaData), NewProp_SplitMode_MetaData) }; // 3252117894
void Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bAvoidWastedSpace_SetBit(void* Obj)
{
	((UPCGExBinPackingSettings*)Obj)->bAvoidWastedSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bAvoidWastedSpace = { "bAvoidWastedSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBinPackingSettings), &Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bAvoidWastedSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAvoidWastedSpace_MetaData), NewProp_bAvoidWastedSpace_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_PlacementFavor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_PlacementFavor = { "PlacementFavor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBinPackingSettings, PlacementFavor), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPlacementFavor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementFavor_MetaData), NewProp_PlacementFavor_MetaData) }; // 2907324799
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_OccupationPaddingInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_OccupationPaddingInput = { "OccupationPaddingInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBinPackingSettings, OccupationPaddingInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OccupationPaddingInput_MetaData), NewProp_OccupationPaddingInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_OccupationPaddingAttribute = { "OccupationPaddingAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBinPackingSettings, OccupationPaddingAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OccupationPaddingAttribute_MetaData), NewProp_OccupationPaddingAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_OccupationPadding = { "OccupationPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExBinPackingSettings, OccupationPadding), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OccupationPadding_MetaData), NewProp_OccupationPadding_MetaData) };
void Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bAbsolutePadding_SetBit(void* Obj)
{
	((UPCGExBinPackingSettings*)Obj)->bAbsolutePadding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bAbsolutePadding = { "bAbsolutePadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBinPackingSettings), &Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bAbsolutePadding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsolutePadding_MetaData), NewProp_bAbsolutePadding_MetaData) };
void Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bQuietTooManyBinsWarning_SetBit(void* Obj)
{
	((UPCGExBinPackingSettings*)Obj)->bQuietTooManyBinsWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bQuietTooManyBinsWarning = { "bQuietTooManyBinsWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBinPackingSettings), &Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bQuietTooManyBinsWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietTooManyBinsWarning_MetaData), NewProp_bQuietTooManyBinsWarning_MetaData) };
void Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bQuietTooFewBinsWarning_SetBit(void* Obj)
{
	((UPCGExBinPackingSettings*)Obj)->bQuietTooFewBinsWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bQuietTooFewBinsWarning = { "bQuietTooFewBinsWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExBinPackingSettings), &Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bQuietTooFewBinsWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietTooFewBinsWarning_MetaData), NewProp_bQuietTooFewBinsWarning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExBinPackingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SortDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SortDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SeedMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SeedMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SeedUVW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SeedUVWAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SeedPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SeedPositionAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bInferSplitAxisFromSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SplitAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SplitAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SplitMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_SplitMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bAvoidWastedSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_PlacementFavor_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_PlacementFavor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_OccupationPaddingInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_OccupationPaddingInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_OccupationPaddingAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_OccupationPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bAbsolutePadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bQuietTooManyBinsWarning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExBinPackingSettings_Statics::NewProp_bQuietTooFewBinsWarning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBinPackingSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExBinPackingSettings Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExBinPackingSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBinPackingSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExBinPackingSettings_Statics::ClassParams = {
	&UPCGExBinPackingSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExBinPackingSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBinPackingSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExBinPackingSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExBinPackingSettings_Statics::Class_MetaDataParams)
};
void UPCGExBinPackingSettings::StaticRegisterNativesUPCGExBinPackingSettings()
{
}
UClass* Z_Construct_UClass_UPCGExBinPackingSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExBinPackingSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExBinPackingSettings.OuterSingleton, Z_Construct_UClass_UPCGExBinPackingSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExBinPackingSettings.OuterSingleton;
}
UPCGExBinPackingSettings::UPCGExBinPackingSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExBinPackingSettings);
UPCGExBinPackingSettings::~UPCGExBinPackingSettings() {}
// ********** End Class UPCGExBinPackingSettings ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExBinPacking_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExBinFreeSpacePartitionMode_StaticEnum, TEXT("EPCGExBinFreeSpacePartitionMode"), &Z_Registration_Info_UEnum_EPCGExBinFreeSpacePartitionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1762968727U) },
		{ EPCGExPlacementFavor_StaticEnum, TEXT("EPCGExPlacementFavor"), &Z_Registration_Info_UEnum_EPCGExPlacementFavor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2907324799U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExBinPackingSettings, UPCGExBinPackingSettings::StaticClass, TEXT("UPCGExBinPackingSettings"), &Z_Registration_Info_UClass_UPCGExBinPackingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExBinPackingSettings), 3871020835U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExBinPacking_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExBinPacking_h__Script_PCGExtendedToolkit_2467821301{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExBinPacking_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExBinPacking_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExBinPacking_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Layout_PCGExBinPacking_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
