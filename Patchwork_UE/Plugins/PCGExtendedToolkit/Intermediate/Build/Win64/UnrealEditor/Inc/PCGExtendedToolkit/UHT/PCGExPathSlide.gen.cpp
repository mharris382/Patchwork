// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExPathSlide.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPathSlide() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathSlideSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathSlideSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideDirection();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideMode();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExSlideMode ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSlideMode;
static UEnum* EPCGExSlideMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSlideMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSlideMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSlideMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExSlideMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSlideMode>()
{
	return EPCGExSlideMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSlide.h" },
		{ "Restore.DisplayName", "Restore" },
		{ "Restore.Name", "EPCGExSlideMode::Restore" },
		{ "Restore.ToolTip", "Restore the original position from an attribute and deletes it." },
		{ "Slide.DisplayName", "Slide" },
		{ "Slide.Name", "EPCGExSlideMode::Slide" },
		{ "Slide.ToolTip", "Slide points and optional store the original position to an attribute" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSlideMode::Slide", (int64)EPCGExSlideMode::Slide },
		{ "EPCGExSlideMode::Restore", (int64)EPCGExSlideMode::Restore },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSlideMode",
	"EPCGExSlideMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExSlideMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSlideMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSlideMode.InnerSingleton;
}
// ********** End Enum EPCGExSlideMode *************************************************************

// ********** Begin Enum EPCGExSlideDirection ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExSlideDirection;
static UEnum* EPCGExSlideDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExSlideDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExSlideDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideDirection, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExSlideDirection"));
	}
	return Z_Registration_Info_UEnum_EPCGExSlideDirection.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExSlideDirection>()
{
	return EPCGExSlideDirection_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSlide.h" },
		{ "Next.DisplayName", "Next" },
		{ "Next.Name", "EPCGExSlideDirection::Next" },
		{ "Next.ToolTip", "Slide toward next point" },
		{ "Previous.DisplayName", "Previous" },
		{ "Previous.Name", "EPCGExSlideDirection::Previous" },
		{ "Previous.ToolTip", "Slide toward previous point" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExSlideDirection::Next", (int64)EPCGExSlideDirection::Next },
		{ "EPCGExSlideDirection::Previous", (int64)EPCGExSlideDirection::Previous },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideDirection_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExSlideDirection",
	"EPCGExSlideDirection",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideDirection()
{
	if (!Z_Registration_Info_UEnum_EPCGExSlideDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExSlideDirection.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExSlideDirection.InnerSingleton;
}
// ********** End Enum EPCGExSlideDirection ********************************************************

// ********** Begin Class UPCGExPathSlideSettings **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPathSlideSettings;
UClass* UPCGExPathSlideSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPathSlideSettings;
	if (!Z_Registration_Info_UClass_UPCGExPathSlideSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPathSlideSettings"),
			Z_Registration_Info_UClass_UPCGExPathSlideSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPathSlideSettings,
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
	return Z_Registration_Info_UClass_UPCGExPathSlideSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPathSlideSettings_NoRegister()
{
	return UPCGExPathSlideSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPathSlideSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExPathSlide.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSlide.h" },
		{ "PCGExNodeLibraryDoc", "paths/slide" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to slide or restore position */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSlide.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to slide or restore position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "Mode != EPCGExSlideMode::Restore" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSlide.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountMeasure_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Discrete means actual distance, relative means a percentage of the segment length */" },
		{ "EditCondition", "Mode != EPCGExSlideMode::Restore" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSlide.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Discrete means actual distance, relative means a percentage of the segment length" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlideAmountInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Mode != EPCGExSlideMode::Restore" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSlide.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlideAmountAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Slide amount. */" },
		{ "DisplayName", "Slide Amount (Attr)" },
		{ "EditCondition", "SlideAmountInput == EPCGExInputValueType::Attribute && Mode != EPCGExSlideMode::Restore" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSlide.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Slide amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlideAmountConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Slide amount. */" },
		{ "DisplayName", "Slide Amount" },
		{ "EditCondition", "SlideAmountInput == EPCGExInputValueType::Constant && Mode != EPCGExSlideMode::Restore" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSlide.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Slide amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteOldPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to store the old position */" },
		{ "EditCondition", "Mode != EPCGExSlideMode::Restore" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSlide.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Whether to store the old position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestorePositionAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to write to or restore from */" },
		{ "EditCondition", "bWriteOldPosition || Mode == EPCGExSlideMode::Restore" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExPathSlide.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to write to or restore from" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPathSlideSettings constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AmountMeasure_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AmountMeasure;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SlideAmountInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SlideAmountInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlideAmountAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SlideAmountConstant;
	static void NewProp_bWriteOldPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteOldPosition;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RestorePositionAttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPathSlideSettings constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPathSlideSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPathSlideSettings_Statics

// ********** Begin Class UPCGExPathSlideSettings Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSlideSettings, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2411887364
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSlideSettings, Direction), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSlideDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 1291841899
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_AmountMeasure_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_AmountMeasure = { "AmountMeasure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSlideSettings, AmountMeasure), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExMeanMeasure, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountMeasure_MetaData), NewProp_AmountMeasure_MetaData) }; // 356721050
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_SlideAmountInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_SlideAmountInput = { "SlideAmountInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSlideSettings, SlideAmountInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlideAmountInput_MetaData), NewProp_SlideAmountInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_SlideAmountAttribute = { "SlideAmountAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSlideSettings, SlideAmountAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlideAmountAttribute_MetaData), NewProp_SlideAmountAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_SlideAmountConstant = { "SlideAmountConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSlideSettings, SlideAmountConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlideAmountConstant_MetaData), NewProp_SlideAmountConstant_MetaData) };
void Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_bWriteOldPosition_SetBit(void* Obj)
{
	((UPCGExPathSlideSettings*)Obj)->bWriteOldPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_bWriteOldPosition = { "bWriteOldPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExPathSlideSettings), &Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_bWriteOldPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteOldPosition_MetaData), NewProp_bWriteOldPosition_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_RestorePositionAttributeName = { "RestorePositionAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPathSlideSettings, RestorePositionAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestorePositionAttributeName_MetaData), NewProp_RestorePositionAttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPathSlideSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_AmountMeasure_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_AmountMeasure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_SlideAmountInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_SlideAmountInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_SlideAmountAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_SlideAmountConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_bWriteOldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPathSlideSettings_Statics::NewProp_RestorePositionAttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathSlideSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPathSlideSettings Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExPathSlideSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathSlideSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPathSlideSettings_Statics::ClassParams = {
	&UPCGExPathSlideSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPathSlideSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathSlideSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPathSlideSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPathSlideSettings_Statics::Class_MetaDataParams)
};
void UPCGExPathSlideSettings::StaticRegisterNativesUPCGExPathSlideSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPathSlideSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPathSlideSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPathSlideSettings.OuterSingleton, Z_Construct_UClass_UPCGExPathSlideSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPathSlideSettings.OuterSingleton;
}
UPCGExPathSlideSettings::UPCGExPathSlideSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPathSlideSettings);
UPCGExPathSlideSettings::~UPCGExPathSlideSettings() {}
// ********** End Class UPCGExPathSlideSettings ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSlide_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExSlideMode_StaticEnum, TEXT("EPCGExSlideMode"), &Z_Registration_Info_UEnum_EPCGExSlideMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2411887364U) },
		{ EPCGExSlideDirection_StaticEnum, TEXT("EPCGExSlideDirection"), &Z_Registration_Info_UEnum_EPCGExSlideDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1291841899U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPathSlideSettings, UPCGExPathSlideSettings::StaticClass, TEXT("UPCGExPathSlideSettings"), &Z_Registration_Info_UClass_UPCGExPathSlideSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPathSlideSettings), 2868916962U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSlide_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSlide_h__Script_PCGExtendedToolkit_3871683713{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSlide_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSlide_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSlide_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExPathSlide_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
