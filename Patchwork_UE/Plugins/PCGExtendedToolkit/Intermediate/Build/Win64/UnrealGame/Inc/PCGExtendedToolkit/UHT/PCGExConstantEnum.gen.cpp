// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Constants/PCGExConstantEnum.h"
#include "Elements/ControlFlow/PCGControlFlow.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExConstantEnum() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UEnum_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FEnumSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExConstantEnumSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExConstantEnumSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantOutputType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantSourceType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumOutputMode();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExEnumConstantSourceType **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExEnumConstantSourceType;
static UEnum* EPCGExEnumConstantSourceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExEnumConstantSourceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExEnumConstantSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantSourceType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExEnumConstantSourceType"));
	}
	return Z_Registration_Info_UEnum_EPCGExEnumConstantSourceType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEnumConstantSourceType>()
{
	return EPCGExEnumConstantSourceType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantSourceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
		{ "Picker.DisplayName", "Picker" },
		{ "Picker.Name", "EPCGExEnumConstantSourceType::Picker" },
		{ "Picker.Tooltip", "Browse through Blueprint enums." },
		{ "Selector.DisplayName", "Selector" },
		{ "Selector.Name", "EPCGExEnumConstantSourceType::Selector" },
		{ "Selector.ToolTip", "Browse through CPP enums." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExEnumConstantSourceType::Picker", (int64)EPCGExEnumConstantSourceType::Picker },
		{ "EPCGExEnumConstantSourceType::Selector", (int64)EPCGExEnumConstantSourceType::Selector },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantSourceType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantSourceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExEnumConstantSourceType",
	"EPCGExEnumConstantSourceType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantSourceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantSourceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantSourceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantSourceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantSourceType()
{
	if (!Z_Registration_Info_UEnum_EPCGExEnumConstantSourceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExEnumConstantSourceType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantSourceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExEnumConstantSourceType.InnerSingleton;
}
// ********** End Enum EPCGExEnumConstantSourceType ************************************************

// ********** Begin Enum EPCGExEnumConstantOutputType **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExEnumConstantOutputType;
static UEnum* EPCGExEnumConstantOutputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExEnumConstantOutputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExEnumConstantOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantOutputType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExEnumConstantOutputType"));
	}
	return Z_Registration_Info_UEnum_EPCGExEnumConstantOutputType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEnumConstantOutputType>()
{
	return EPCGExEnumConstantOutputType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantOutputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EECOT_Attribute.DisplayName", "Attribute Set" },
		{ "EECOT_Attribute.Name", "EPCGExEnumConstantOutputType::EECOT_Attribute" },
		{ "EECOT_String.Hidden", "" },
		{ "EECOT_String.Name", "EPCGExEnumConstantOutputType::EECOT_String" },
		{ "EECOT_Tag.Comment", "// Unsure if this is needed since there's the option to output name and description\n" },
		{ "EECOT_Tag.Hidden", "" },
		{ "EECOT_Tag.Name", "EPCGExEnumConstantOutputType::EECOT_Tag" },
		{ "EECOT_Tag.ToolTip", "Unsure if this is needed since there's the option to output name and description" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExEnumConstantOutputType::EECOT_Attribute", (int64)EPCGExEnumConstantOutputType::EECOT_Attribute },
		{ "EPCGExEnumConstantOutputType::EECOT_String", (int64)EPCGExEnumConstantOutputType::EECOT_String },
		{ "EPCGExEnumConstantOutputType::EECOT_Tag", (int64)EPCGExEnumConstantOutputType::EECOT_Tag },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantOutputType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantOutputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExEnumConstantOutputType",
	"EPCGExEnumConstantOutputType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantOutputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantOutputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantOutputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantOutputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantOutputType()
{
	if (!Z_Registration_Info_UEnum_EPCGExEnumConstantOutputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExEnumConstantOutputType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantOutputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExEnumConstantOutputType.InnerSingleton;
}
// ********** End Enum EPCGExEnumConstantOutputType ************************************************

// ********** Begin Enum EPCGExEnumOutputMode ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExEnumOutputMode;
static UEnum* EPCGExEnumOutputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExEnumOutputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExEnumOutputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumOutputMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExEnumOutputMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExEnumOutputMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExEnumOutputMode>()
{
	return EPCGExEnumOutputMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumOutputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// TODO (perhaps) - 'Selection' and 'Selection to Multiple Pins'\n" },
		{ "EEOM_All.DisplayName", "All" },
		{ "EEOM_All.Name", "EPCGExEnumOutputMode::EEOM_All" },
		{ "EEOM_All.ToolTip", "Output a dataset containing all the enum names and values" },
		{ "EEOM_AllToMultiplePins.DisplayName", "All to Separate Outputs" },
		{ "EEOM_AllToMultiplePins.Name", "EPCGExEnumOutputMode::EEOM_AllToMultiplePins" },
		{ "EEOM_AllToMultiplePins.Tooltip", "Output all values in the enum to different pins" },
		{ "EEOM_Selection.DisplayName", "Selection" },
		{ "EEOM_Selection.Name", "EPCGExEnumOutputMode::EEOM_Selection" },
		{ "EEOM_Selection.Tooltip", "Select values to output as one dataset" },
		{ "EEOM_SelectionToMultiplePins.DisplayName", "Selection to Separate Outputs" },
		{ "EEOM_SelectionToMultiplePins.Name", "EPCGExEnumOutputMode::EEOM_SelectionToMultiplePins" },
		{ "EEOM_SelectionToMultiplePins.Tooltip", "Select values to output to multiple pins" },
		{ "EEOM_Single.DisplayName", "Single" },
		{ "EEOM_Single.Name", "EPCGExEnumOutputMode::EEOM_Single" },
		{ "EEOM_Single.Tooltip", "Output a single enum value" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
		{ "ToolTip", "TODO (perhaps) - 'Selection' and 'Selection to Multiple Pins'" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExEnumOutputMode::EEOM_Single", (int64)EPCGExEnumOutputMode::EEOM_Single },
		{ "EPCGExEnumOutputMode::EEOM_All", (int64)EPCGExEnumOutputMode::EEOM_All },
		{ "EPCGExEnumOutputMode::EEOM_AllToMultiplePins", (int64)EPCGExEnumOutputMode::EEOM_AllToMultiplePins },
		{ "EPCGExEnumOutputMode::EEOM_Selection", (int64)EPCGExEnumOutputMode::EEOM_Selection },
		{ "EPCGExEnumOutputMode::EEOM_SelectionToMultiplePins", (int64)EPCGExEnumOutputMode::EEOM_SelectionToMultiplePins },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumOutputMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumOutputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExEnumOutputMode",
	"EPCGExEnumOutputMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumOutputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumOutputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumOutputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumOutputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumOutputMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExEnumOutputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExEnumOutputMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumOutputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExEnumOutputMode.InnerSingleton;
}
// ********** End Enum EPCGExEnumOutputMode ********************************************************

// ********** Begin Class UPCGExConstantEnumSettings Function GetEnumName **************************
struct Z_Construct_UFunction_UPCGExConstantEnumSettings_GetEnumName_Statics
{
	struct PCGExConstantEnumSettings_eventGetEnumName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEnumName constinit property declarations ***************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEnumName constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEnumName Property Definitions **************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPCGExConstantEnumSettings_GetEnumName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExConstantEnumSettings_eventGetEnumName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExConstantEnumSettings_GetEnumName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExConstantEnumSettings_GetEnumName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExConstantEnumSettings_GetEnumName_Statics::PropPointers) < 2048);
// ********** End Function GetEnumName Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExConstantEnumSettings_GetEnumName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExConstantEnumSettings, nullptr, "GetEnumName", 	Z_Construct_UFunction_UPCGExConstantEnumSettings_GetEnumName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExConstantEnumSettings_GetEnumName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExConstantEnumSettings_GetEnumName_Statics::PCGExConstantEnumSettings_eventGetEnumName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExConstantEnumSettings_GetEnumName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExConstantEnumSettings_GetEnumName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExConstantEnumSettings_GetEnumName_Statics::PCGExConstantEnumSettings_eventGetEnumName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExConstantEnumSettings_GetEnumName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExConstantEnumSettings_GetEnumName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExConstantEnumSettings::execGetEnumName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetEnumName();
	P_NATIVE_END;
}
// ********** End Class UPCGExConstantEnumSettings Function GetEnumName ****************************

// ********** Begin Class UPCGExConstantEnumSettings ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExConstantEnumSettings;
UClass* UPCGExConstantEnumSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExConstantEnumSettings;
	if (!Z_Registration_Info_UClass_UPCGExConstantEnumSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExConstantEnumSettings"),
			Z_Registration_Info_UClass_UPCGExConstantEnumSettings.InnerSingleton,
			StaticRegisterNativesUPCGExConstantEnumSettings,
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
	return Z_Registration_Info_UClass_UPCGExConstantEnumSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExConstantEnumSettings_NoRegister()
{
	return UPCGExConstantEnumSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExConstantEnumSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Settings|Output Attributes" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Constants/PCGExConstantEnum.h" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
		{ "PCGExNodeLibraryDoc", "quality-of-life/enum" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickerEnum_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Source == EPCGExEnumConstantSourceType::Picker" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedEnum_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Source == EPCGExEnumConstantSourceType::Selector" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledExportValues_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "OutputMode == EPCGExEnumOutputMode::EEOM_Selection || OutputMode == EPCGExEnumOutputMode::EEOM_SelectionToMultiplePins" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
		{ "ReadOnlyKeys", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[] = {
		{ "Comment", "/*BlueprintReadWrite, EditAnywhere, Category=Settings*/" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
		{ "ToolTip", "BlueprintReadWrite, EditAnywhere, Category=Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputEnumKeys_MetaData[] = {
		{ "Category", "Settings|Output Attributes|Keys" },
		{ "Comment", "// Whether to output the enum value keys, which are the short names used in C++\n" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
		{ "ToolTip", "Whether to output the enum value keys, which are the short names used in C++" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StripEnumNamespaceFromKey_MetaData[] = {
		{ "Category", "Settings|Output Attributes|Keys" },
		{ "Comment", "// By default, most (but not all) enum value keys are returned as 'SomeEnum::SomeKey'. If this is true, the key will be output as just 'SomeKey' instead, without the 'SomeEnum::' part, if that is present.  \n" },
		{ "EditCondition", "OutputEnumKeys" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
		{ "ToolTip", "By default, most (but not all) enum value keys are returned as 'SomeEnum::SomeKey'. If this is true, the key will be output as just 'SomeKey' instead, without the 'SomeEnum::' part, if that is present." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyAttribute_MetaData[] = {
		{ "Category", "Settings|Output Attributes|Keys" },
		{ "EditCondition", "OutputEnumKeys" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputEnumDescriptions_MetaData[] = {
		{ "Category", "Settings|Output Attributes|Descriptions" },
		{ "Comment", "// Whether to output the enum value descriptions, which are the human-readable names for values shown by the UI\n" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
		{ "ToolTip", "Whether to output the enum value descriptions, which are the human-readable names for values shown by the UI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionAttribute_MetaData[] = {
		{ "Category", "Settings|Output Attributes|Descriptions" },
		{ "EditCondition", "OutputEnumDescriptions" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputEnumValues_MetaData[] = {
		{ "Category", "Settings|Output Attributes|Values" },
		{ "Comment", "// Whether to output the numeric enum values. Note: will be output as int64 to match behaviour in native PCG\n" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
		{ "ToolTip", "Whether to output the numeric enum values. Note: will be output as int64 to match behaviour in native PCG" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueOutputAttribute_MetaData[] = {
		{ "Category", "Settings|Output Attributes|Values" },
		{ "EditCondition", "OutputEnumValues" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputFlags_MetaData[] = {
		{ "Category", "Settings|Output Bitflags" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagsName_MetaData[] = {
		{ "Category", "Settings|Output Bitflags" },
		{ "Comment", "/** Whether to output the enum as a bitmask, and which name should the attribute have in the output attribute set. */" },
		{ "EditCondition", "bOutputFlags" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
		{ "ToolTip", "Whether to output the enum as a bitmask, and which name should the attribute have in the output attribute set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagBitOffset_MetaData[] = {
		{ "Category", "Settings|Output Bitflags" },
		{ "ClampMax", "63" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Bit to start writing the enum bits to. */" },
		{ "EditCondition", "bOutputFlags" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
		{ "ToolTip", "Bit to start writing the enum bits to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPinLabels_MetaData[] = {
		{ "Comment", "// Imitating behaviour in the native PCGSwitch.h\n" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstantEnum.h" },
		{ "ToolTip", "Imitating behaviour in the native PCGSwitch.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExConstantEnumSettings constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickerEnum;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedEnum;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnabledExportValues_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EnabledExportValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EnabledExportValues;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputType;
	static void NewProp_OutputEnumKeys_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutputEnumKeys;
	static void NewProp_StripEnumNamespaceFromKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StripEnumNamespaceFromKey;
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyAttribute;
	static void NewProp_OutputEnumDescriptions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutputEnumDescriptions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DescriptionAttribute;
	static void NewProp_OutputEnumValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutputEnumValues;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ValueOutputAttribute;
	static void NewProp_bOutputFlags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputFlags;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FlagsName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FlagBitOffset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CachedPinLabels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedPinLabels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExConstantEnumSettings constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetEnumName"), .Pointer = &UPCGExConstantEnumSettings::execGetEnumName },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGExConstantEnumSettings_GetEnumName, "GetEnumName" }, // 3229300374
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExConstantEnumSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExConstantEnumSettings_Statics

// ********** Begin Class UPCGExConstantEnumSettings Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConstantEnumSettings, Source), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantSourceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 194668694
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputMode = { "OutputMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConstantEnumSettings, OutputMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumOutputMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputMode_MetaData), NewProp_OutputMode_MetaData) }; // 3936198725
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_PickerEnum = { "PickerEnum", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConstantEnumSettings, PickerEnum), Z_Construct_UClass_UEnum_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickerEnum_MetaData), NewProp_PickerEnum_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_SelectedEnum = { "SelectedEnum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConstantEnumSettings, SelectedEnum), Z_Construct_UScriptStruct_FEnumSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedEnum_MetaData), NewProp_SelectedEnum_MetaData) }; // 2678093522
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_EnabledExportValues_ValueProp = { "EnabledExportValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_EnabledExportValues_Key_KeyProp = { "EnabledExportValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_EnabledExportValues = { "EnabledExportValues", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConstantEnumSettings, EnabledExportValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledExportValues_MetaData), NewProp_EnabledExportValues_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConstantEnumSettings, OutputType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExEnumConstantOutputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputType_MetaData), NewProp_OutputType_MetaData) }; // 690585348
void Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputEnumKeys_SetBit(void* Obj)
{
	((UPCGExConstantEnumSettings*)Obj)->OutputEnumKeys = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputEnumKeys = { "OutputEnumKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExConstantEnumSettings), &Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputEnumKeys_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputEnumKeys_MetaData), NewProp_OutputEnumKeys_MetaData) };
void Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_StripEnumNamespaceFromKey_SetBit(void* Obj)
{
	((UPCGExConstantEnumSettings*)Obj)->StripEnumNamespaceFromKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_StripEnumNamespaceFromKey = { "StripEnumNamespaceFromKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExConstantEnumSettings), &Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_StripEnumNamespaceFromKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StripEnumNamespaceFromKey_MetaData), NewProp_StripEnumNamespaceFromKey_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_KeyAttribute = { "KeyAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConstantEnumSettings, KeyAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyAttribute_MetaData), NewProp_KeyAttribute_MetaData) };
void Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputEnumDescriptions_SetBit(void* Obj)
{
	((UPCGExConstantEnumSettings*)Obj)->OutputEnumDescriptions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputEnumDescriptions = { "OutputEnumDescriptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExConstantEnumSettings), &Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputEnumDescriptions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputEnumDescriptions_MetaData), NewProp_OutputEnumDescriptions_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_DescriptionAttribute = { "DescriptionAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConstantEnumSettings, DescriptionAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptionAttribute_MetaData), NewProp_DescriptionAttribute_MetaData) };
void Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputEnumValues_SetBit(void* Obj)
{
	((UPCGExConstantEnumSettings*)Obj)->OutputEnumValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputEnumValues = { "OutputEnumValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExConstantEnumSettings), &Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputEnumValues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputEnumValues_MetaData), NewProp_OutputEnumValues_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_ValueOutputAttribute = { "ValueOutputAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConstantEnumSettings, ValueOutputAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueOutputAttribute_MetaData), NewProp_ValueOutputAttribute_MetaData) };
void Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_bOutputFlags_SetBit(void* Obj)
{
	((UPCGExConstantEnumSettings*)Obj)->bOutputFlags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_bOutputFlags = { "bOutputFlags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExConstantEnumSettings), &Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_bOutputFlags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputFlags_MetaData), NewProp_bOutputFlags_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_FlagsName = { "FlagsName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConstantEnumSettings, FlagsName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagsName_MetaData), NewProp_FlagsName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_FlagBitOffset = { "FlagBitOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConstantEnumSettings, FlagBitOffset), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagBitOffset_MetaData), NewProp_FlagBitOffset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_CachedPinLabels_Inner = { "CachedPinLabels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_CachedPinLabels = { "CachedPinLabels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConstantEnumSettings, CachedPinLabels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPinLabels_MetaData), NewProp_CachedPinLabels_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_PickerEnum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_SelectedEnum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_EnabledExportValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_EnabledExportValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_EnabledExportValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputEnumKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_StripEnumNamespaceFromKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_KeyAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputEnumDescriptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_DescriptionAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_OutputEnumValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_ValueOutputAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_bOutputFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_FlagsName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_FlagBitOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_CachedPinLabels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::NewProp_CachedPinLabels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExConstantEnumSettings Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::ClassParams = {
	&UPCGExConstantEnumSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::Class_MetaDataParams)
};
void UPCGExConstantEnumSettings::StaticRegisterNativesUPCGExConstantEnumSettings()
{
	UClass* Class = UPCGExConstantEnumSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPCGExConstantEnumSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExConstantEnumSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExConstantEnumSettings.OuterSingleton, Z_Construct_UClass_UPCGExConstantEnumSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExConstantEnumSettings.OuterSingleton;
}
UPCGExConstantEnumSettings::UPCGExConstantEnumSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExConstantEnumSettings);
UPCGExConstantEnumSettings::~UPCGExConstantEnumSettings() {}
// ********** End Class UPCGExConstantEnumSettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantEnum_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExEnumConstantSourceType_StaticEnum, TEXT("EPCGExEnumConstantSourceType"), &Z_Registration_Info_UEnum_EPCGExEnumConstantSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 194668694U) },
		{ EPCGExEnumConstantOutputType_StaticEnum, TEXT("EPCGExEnumConstantOutputType"), &Z_Registration_Info_UEnum_EPCGExEnumConstantOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 690585348U) },
		{ EPCGExEnumOutputMode_StaticEnum, TEXT("EPCGExEnumOutputMode"), &Z_Registration_Info_UEnum_EPCGExEnumOutputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3936198725U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExConstantEnumSettings, UPCGExConstantEnumSettings::StaticClass, TEXT("UPCGExConstantEnumSettings"), &Z_Registration_Info_UClass_UPCGExConstantEnumSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExConstantEnumSettings), 2277816524U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantEnum_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantEnum_h__Script_PCGExtendedToolkit_3412725523{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantEnum_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantEnum_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantEnum_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstantEnum_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
