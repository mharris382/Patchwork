// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExFindPointOnBounds.h"
#include "Data/PCGExDataFilter.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFindPointOnBounds() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFindPointOnBoundsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointOnBoundsOutputMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExCarryOverDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExPointOnBoundsOutputMode *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPointOnBoundsOutputMode;
static UEnum* EPCGExPointOnBoundsOutputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPointOnBoundsOutputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPointOnBoundsOutputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointOnBoundsOutputMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPointOnBoundsOutputMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExPointOnBoundsOutputMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPointOnBoundsOutputMode>()
{
	return EPCGExPointOnBoundsOutputMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointOnBoundsOutputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Individual.DisplayName", "Per-point dataset" },
		{ "Individual.Name", "EPCGExPointOnBoundsOutputMode::Individual" },
		{ "Individual.Tooltip", "..." },
		{ "Merged.DisplayName", "Merged Points" },
		{ "Merged.Name", "EPCGExPointOnBoundsOutputMode::Merged" },
		{ "Merged.Tooltip", "..." },
		{ "ModuleRelativePath", "Public/Misc/PCGExFindPointOnBounds.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPointOnBoundsOutputMode::Merged", (int64)EPCGExPointOnBoundsOutputMode::Merged },
		{ "EPCGExPointOnBoundsOutputMode::Individual", (int64)EPCGExPointOnBoundsOutputMode::Individual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointOnBoundsOutputMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointOnBoundsOutputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPointOnBoundsOutputMode",
	"EPCGExPointOnBoundsOutputMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointOnBoundsOutputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointOnBoundsOutputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointOnBoundsOutputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointOnBoundsOutputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointOnBoundsOutputMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExPointOnBoundsOutputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPointOnBoundsOutputMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointOnBoundsOutputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPointOnBoundsOutputMode.InnerSingleton;
}
// ********** End Enum EPCGExPointOnBoundsOutputMode ***********************************************

// ********** Begin Class UPCGExFindPointOnBoundsSettings ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFindPointOnBoundsSettings;
UClass* UPCGExFindPointOnBoundsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFindPointOnBoundsSettings;
	if (!Z_Registration_Info_UClass_UPCGExFindPointOnBoundsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFindPointOnBoundsSettings"),
			Z_Registration_Info_UClass_UPCGExFindPointOnBoundsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFindPointOnBoundsSettings,
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
	return Z_Registration_Info_UClass_UPCGExFindPointOnBoundsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_NoRegister()
{
	return UPCGExFindPointOnBoundsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExFindPointOnBounds.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExFindPointOnBounds.h" },
		{ "PCGExNodeLibraryDoc", "misc/find-point-on-bounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Data output mode */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExFindPointOnBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Data output mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBestFitBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExFindPointOnBounds.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrder_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to use best fit plane bounds, and which axis ordering should be used. */" },
		{ "DisplayName", "Use Best Fit bounds axis" },
		{ "EditCondition", "bBestFitBounds" },
		{ "ModuleRelativePath", "Public/Misc/PCGExFindPointOnBounds.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Whether to use best fit plane bounds, and which axis ordering should be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVWInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of UVW value source */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExFindPointOnBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of UVW value source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalUVW_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fetch the UVW value from a @Data attribute.*/" },
		{ "DisplayName", "UVW (Attr)" },
		{ "EditCondition", "UVWInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExFindPointOnBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the UVW value from a @Data attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVW_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** UVW position of the target within bounds. */" },
		{ "DisplayName", "UVW" },
		{ "EditCondition", "UVWInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExFindPointOnBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "UVW position of the target within bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Offset to apply to the closest point, away from the bounds center. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExFindPointOnBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Offset to apply to the closest point, away from the bounds center." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarryOverDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Meta filter settings. */" },
		{ "DisplayName", "Carry Over Settings" },
		{ "ModuleRelativePath", "Public/Misc/PCGExFindPointOnBounds.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Meta filter settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietAttributeMismatchWarning_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExFindPointOnBounds.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFindPointOnBoundsSettings constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputMode;
	static void NewProp_bBestFitBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBestFitBounds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AxisOrder_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisOrder;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UVWInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UVWInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUVW;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVW;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CarryOverDetails;
	static void NewProp_bQuietAttributeMismatchWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietAttributeMismatchWarning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFindPointOnBoundsSettings constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFindPointOnBoundsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics

// ********** Begin Class UPCGExFindPointOnBoundsSettings Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_OutputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_OutputMode = { "OutputMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindPointOnBoundsSettings, OutputMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointOnBoundsOutputMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputMode_MetaData), NewProp_OutputMode_MetaData) }; // 1662251604
void Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_bBestFitBounds_SetBit(void* Obj)
{
	((UPCGExFindPointOnBoundsSettings*)Obj)->bBestFitBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_bBestFitBounds = { "bBestFitBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFindPointOnBoundsSettings), &Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_bBestFitBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBestFitBounds_MetaData), NewProp_bBestFitBounds_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_AxisOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_AxisOrder = { "AxisOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindPointOnBoundsSettings, AxisOrder), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExAxisOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrder_MetaData), NewProp_AxisOrder_MetaData) }; // 3484752427
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_UVWInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_UVWInput = { "UVWInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindPointOnBoundsSettings, UVWInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVWInput_MetaData), NewProp_UVWInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_LocalUVW = { "LocalUVW", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindPointOnBoundsSettings, LocalUVW), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalUVW_MetaData), NewProp_LocalUVW_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_UVW = { "UVW", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindPointOnBoundsSettings, UVW), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVW_MetaData), NewProp_UVW_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindPointOnBoundsSettings, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_CarryOverDetails = { "CarryOverDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFindPointOnBoundsSettings, CarryOverDetails), Z_Construct_UScriptStruct_FPCGExCarryOverDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarryOverDetails_MetaData), NewProp_CarryOverDetails_MetaData) }; // 4041221405
void Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_bQuietAttributeMismatchWarning_SetBit(void* Obj)
{
	((UPCGExFindPointOnBoundsSettings*)Obj)->bQuietAttributeMismatchWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_bQuietAttributeMismatchWarning = { "bQuietAttributeMismatchWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExFindPointOnBoundsSettings), &Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_bQuietAttributeMismatchWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietAttributeMismatchWarning_MetaData), NewProp_bQuietAttributeMismatchWarning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_OutputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_OutputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_bBestFitBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_AxisOrder_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_AxisOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_UVWInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_UVWInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_LocalUVW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_UVW,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_CarryOverDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::NewProp_bQuietAttributeMismatchWarning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFindPointOnBoundsSettings Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::ClassParams = {
	&UPCGExFindPointOnBoundsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::Class_MetaDataParams)
};
void UPCGExFindPointOnBoundsSettings::StaticRegisterNativesUPCGExFindPointOnBoundsSettings()
{
}
UClass* Z_Construct_UClass_UPCGExFindPointOnBoundsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFindPointOnBoundsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFindPointOnBoundsSettings.OuterSingleton, Z_Construct_UClass_UPCGExFindPointOnBoundsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFindPointOnBoundsSettings.OuterSingleton;
}
UPCGExFindPointOnBoundsSettings::UPCGExFindPointOnBoundsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFindPointOnBoundsSettings);
UPCGExFindPointOnBoundsSettings::~UPCGExFindPointOnBoundsSettings() {}
// ********** End Class UPCGExFindPointOnBoundsSettings ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFindPointOnBounds_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExPointOnBoundsOutputMode_StaticEnum, TEXT("EPCGExPointOnBoundsOutputMode"), &Z_Registration_Info_UEnum_EPCGExPointOnBoundsOutputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1662251604U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFindPointOnBoundsSettings, UPCGExFindPointOnBoundsSettings::StaticClass, TEXT("UPCGExFindPointOnBoundsSettings"), &Z_Registration_Info_UClass_UPCGExFindPointOnBoundsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFindPointOnBoundsSettings), 2233766283U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFindPointOnBounds_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFindPointOnBounds_h__Script_PCGExtendedToolkit_1506054888{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFindPointOnBounds_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFindPointOnBounds_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFindPointOnBounds_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExFindPointOnBounds_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
