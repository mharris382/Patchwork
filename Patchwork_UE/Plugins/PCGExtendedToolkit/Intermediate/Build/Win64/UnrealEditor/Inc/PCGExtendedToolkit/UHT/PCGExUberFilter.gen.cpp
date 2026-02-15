// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExUberFilter.h"
#include "Details/PCGExDetailsFiltering.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExUberFilter() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExUberFilterSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExUberFilterSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterFallback();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFilterResultDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExUberFilterMode ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExUberFilterMode;
static UEnum* EPCGExUberFilterMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExUberFilterMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExUberFilterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExUberFilterMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExUberFilterMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExUberFilterMode>()
{
	return EPCGExUberFilterMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilter.h" },
		{ "Partition.DisplayName", "Partition points" },
		{ "Partition.Name", "EPCGExUberFilterMode::Partition" },
		{ "Partition.ToolTip", "Create inside/outside dataset from the filter results." },
		{ "Write.DisplayName", "Write result" },
		{ "Write.Name", "EPCGExUberFilterMode::Write" },
		{ "Write.ToolTip", "Simply write filter result to an attribute but doesn't change point structure." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExUberFilterMode::Partition", (int64)EPCGExUberFilterMode::Partition },
		{ "EPCGExUberFilterMode::Write", (int64)EPCGExUberFilterMode::Write },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExUberFilterMode",
	"EPCGExUberFilterMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExUberFilterMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExUberFilterMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExUberFilterMode.InnerSingleton;
}
// ********** End Enum EPCGExUberFilterMode ********************************************************

// ********** Begin Class UPCGExUberFilterSettings *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExUberFilterSettings;
UClass* UPCGExUberFilterSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExUberFilterSettings;
	if (!Z_Registration_Info_UClass_UPCGExUberFilterSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExUberFilterSettings"),
			Z_Registration_Info_UClass_UPCGExUberFilterSettings.InnerSingleton,
			StaticRegisterNativesUPCGExUberFilterSettings,
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
	return Z_Registration_Info_UClass_UPCGExUberFilterSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExUberFilterSettings_NoRegister()
{
	return UPCGExUberFilterSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExUberFilterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExUberFilter.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilter.h" },
		{ "PCGExNodeLibraryDoc", "filters/uber-filter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Write result to point instead of split outputs */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Write result to point instead of split outputs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Result" },
		{ "EditCondition", "Mode == EPCGExUberFilterMode::Write" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilter.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultAttributeName_MetaData[] = {
		{ "Comment", "/** Name of the attribute to write result to */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilter.h" },
		{ "ToolTip", "Name of the attribute to write result to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSwap_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Invert the filter result */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Invert the filter result" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputDiscardedElements_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If enabled, will output discarded elements, otherwise omit creating the data entirely. */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilter.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If enabled, will output discarded elements, otherwise omit creating the data entirely." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfAnyPointPassed_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasAnyPointPassedTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** ... */" },
		{ "EditCondition", "bTagIfAnyPointPassed" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfAllPointsPassed_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllPointsPassedTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** ... */" },
		{ "EditCondition", "bTagIfAllPointsPassed" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfNoPointPassed_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoPointPassedTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** ... */" },
		{ "EditCondition", "bTagIfNoPointPassed" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnpickedFallback_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How should point that aren't picked be considered? */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExUberFilter.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "How should point that aren't picked be considered?" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExUberFilterSettings constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResultDetails;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ResultAttributeName;
	static void NewProp_bSwap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwap;
	static void NewProp_bOutputDiscardedElements_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputDiscardedElements;
	static void NewProp_bTagIfAnyPointPassed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfAnyPointPassed;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HasAnyPointPassedTag;
	static void NewProp_bTagIfAllPointsPassed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfAllPointsPassed;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AllPointsPassedTag;
	static void NewProp_bTagIfNoPointPassed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfNoPointPassed;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NoPointPassedTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UnpickedFallback_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UnpickedFallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExUberFilterSettings constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExUberFilterSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExUberFilterSettings_Statics

// ********** Begin Class UPCGExUberFilterSettings Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExUberFilterSettings, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExUberFilterMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2087590514
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_ResultDetails = { "ResultDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExUberFilterSettings, ResultDetails), Z_Construct_UScriptStruct_FPCGExFilterResultDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultDetails_MetaData), NewProp_ResultDetails_MetaData) }; // 3268313030
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_ResultAttributeName = { "ResultAttributeName", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExUberFilterSettings, ResultAttributeName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultAttributeName_MetaData), NewProp_ResultAttributeName_MetaData) };
void Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bSwap_SetBit(void* Obj)
{
	((UPCGExUberFilterSettings*)Obj)->bSwap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bSwap = { "bSwap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExUberFilterSettings), &Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bSwap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSwap_MetaData), NewProp_bSwap_MetaData) };
void Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bOutputDiscardedElements_SetBit(void* Obj)
{
	((UPCGExUberFilterSettings*)Obj)->bOutputDiscardedElements = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bOutputDiscardedElements = { "bOutputDiscardedElements", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExUberFilterSettings), &Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bOutputDiscardedElements_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputDiscardedElements_MetaData), NewProp_bOutputDiscardedElements_MetaData) };
void Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bTagIfAnyPointPassed_SetBit(void* Obj)
{
	((UPCGExUberFilterSettings*)Obj)->bTagIfAnyPointPassed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bTagIfAnyPointPassed = { "bTagIfAnyPointPassed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExUberFilterSettings), &Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bTagIfAnyPointPassed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfAnyPointPassed_MetaData), NewProp_bTagIfAnyPointPassed_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_HasAnyPointPassedTag = { "HasAnyPointPassedTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExUberFilterSettings, HasAnyPointPassedTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasAnyPointPassedTag_MetaData), NewProp_HasAnyPointPassedTag_MetaData) };
void Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bTagIfAllPointsPassed_SetBit(void* Obj)
{
	((UPCGExUberFilterSettings*)Obj)->bTagIfAllPointsPassed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bTagIfAllPointsPassed = { "bTagIfAllPointsPassed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExUberFilterSettings), &Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bTagIfAllPointsPassed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfAllPointsPassed_MetaData), NewProp_bTagIfAllPointsPassed_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_AllPointsPassedTag = { "AllPointsPassedTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExUberFilterSettings, AllPointsPassedTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllPointsPassedTag_MetaData), NewProp_AllPointsPassedTag_MetaData) };
void Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bTagIfNoPointPassed_SetBit(void* Obj)
{
	((UPCGExUberFilterSettings*)Obj)->bTagIfNoPointPassed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bTagIfNoPointPassed = { "bTagIfNoPointPassed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExUberFilterSettings), &Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bTagIfNoPointPassed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfNoPointPassed_MetaData), NewProp_bTagIfNoPointPassed_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_NoPointPassedTag = { "NoPointPassedTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExUberFilterSettings, NoPointPassedTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoPointPassedTag_MetaData), NewProp_NoPointPassedTag_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_UnpickedFallback_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_UnpickedFallback = { "UnpickedFallback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExUberFilterSettings, UnpickedFallback), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterFallback, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnpickedFallback_MetaData), NewProp_UnpickedFallback_MetaData) }; // 3927627996
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExUberFilterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_ResultDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_ResultAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bSwap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bOutputDiscardedElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bTagIfAnyPointPassed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_HasAnyPointPassedTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bTagIfAllPointsPassed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_AllPointsPassedTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_bTagIfNoPointPassed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_NoPointPassedTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_UnpickedFallback_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExUberFilterSettings_Statics::NewProp_UnpickedFallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExUberFilterSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExUberFilterSettings Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExUberFilterSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExUberFilterSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExUberFilterSettings_Statics::ClassParams = {
	&UPCGExUberFilterSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExUberFilterSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExUberFilterSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExUberFilterSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExUberFilterSettings_Statics::Class_MetaDataParams)
};
void UPCGExUberFilterSettings::StaticRegisterNativesUPCGExUberFilterSettings()
{
}
UClass* Z_Construct_UClass_UPCGExUberFilterSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExUberFilterSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExUberFilterSettings.OuterSingleton, Z_Construct_UClass_UPCGExUberFilterSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExUberFilterSettings.OuterSingleton;
}
UPCGExUberFilterSettings::UPCGExUberFilterSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExUberFilterSettings);
UPCGExUberFilterSettings::~UPCGExUberFilterSettings() {}
// ********** End Class UPCGExUberFilterSettings ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilter_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExUberFilterMode_StaticEnum, TEXT("EPCGExUberFilterMode"), &Z_Registration_Info_UEnum_EPCGExUberFilterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2087590514U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExUberFilterSettings, UPCGExUberFilterSettings::StaticClass, TEXT("UPCGExUberFilterSettings"), &Z_Registration_Info_UClass_UPCGExUberFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExUberFilterSettings), 2293767290U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilter_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilter_h__Script_PCGExtendedToolkit_3246221842{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilter_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExUberFilter_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
