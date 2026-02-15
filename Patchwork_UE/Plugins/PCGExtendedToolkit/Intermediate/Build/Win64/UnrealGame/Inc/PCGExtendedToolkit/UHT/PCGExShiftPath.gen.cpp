// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/PCGExShiftPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExShiftPath() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPathProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShiftPathSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExShiftPathSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftPathMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExShiftType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExShiftType;
static UEnum* EPCGExShiftType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExShiftType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExShiftType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftType, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExShiftType"));
	}
	return Z_Registration_Info_UEnum_EPCGExShiftType.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExShiftType>()
{
	return EPCGExShiftType_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CherryPick.DisplayName", "CherryPick" },
		{ "CherryPick.Name", "EPCGExShiftType::CherryPick" },
		{ "CherryPick.ToolTip", "..." },
		{ "Index.DisplayName", "Index" },
		{ "Index.Name", "EPCGExShiftType::Index" },
		{ "Index.ToolTip", "..." },
		{ "Metadata.DisplayName", "Metadata" },
		{ "Metadata.Name", "EPCGExShiftType::Metadata" },
		{ "Metadata.ToolTip", "..." },
		{ "MetadataAndProperties.DisplayName", "Metadata and Properties" },
		{ "MetadataAndProperties.Name", "EPCGExShiftType::MetadataAndProperties" },
		{ "MetadataAndProperties.ToolTip", "..." },
		{ "ModuleRelativePath", "Public/Paths/PCGExShiftPath.h" },
		{ "Properties.DisplayName", "Properties" },
		{ "Properties.Name", "EPCGExShiftType::Properties" },
		{ "Properties.ToolTip", "..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExShiftType::Index", (int64)EPCGExShiftType::Index },
		{ "EPCGExShiftType::Metadata", (int64)EPCGExShiftType::Metadata },
		{ "EPCGExShiftType::Properties", (int64)EPCGExShiftType::Properties },
		{ "EPCGExShiftType::MetadataAndProperties", (int64)EPCGExShiftType::MetadataAndProperties },
		{ "EPCGExShiftType::CherryPick", (int64)EPCGExShiftType::CherryPick },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExShiftType",
	"EPCGExShiftType",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftType()
{
	if (!Z_Registration_Info_UEnum_EPCGExShiftType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExShiftType.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExShiftType.InnerSingleton;
}
// ********** End Enum EPCGExShiftType *************************************************************

// ********** Begin Enum EPCGExShiftPathMode *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExShiftPathMode;
static UEnum* EPCGExShiftPathMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExShiftPathMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExShiftPathMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftPathMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExShiftPathMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExShiftPathMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExShiftPathMode>()
{
	return EPCGExShiftPathMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftPathMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Discrete.DisplayName", "Discrete" },
		{ "Discrete.Name", "EPCGExShiftPathMode::Discrete" },
		{ "Discrete.ToolTip", "Shift point is selected using a discrete value" },
		{ "Filter.DisplayName", "Filter" },
		{ "Filter.Name", "EPCGExShiftPathMode::Filter" },
		{ "Filter.ToolTip", "Shift point using the first point that passes the provided filters" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShiftPath.h" },
		{ "Relative.DisplayName", "Relative" },
		{ "Relative.Name", "EPCGExShiftPathMode::Relative" },
		{ "Relative.ToolTip", "Shift point is selected using a value relative to the input size" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExShiftPathMode::Discrete", (int64)EPCGExShiftPathMode::Discrete },
		{ "EPCGExShiftPathMode::Relative", (int64)EPCGExShiftPathMode::Relative },
		{ "EPCGExShiftPathMode::Filter", (int64)EPCGExShiftPathMode::Filter },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftPathMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftPathMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExShiftPathMode",
	"EPCGExShiftPathMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftPathMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftPathMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftPathMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftPathMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftPathMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExShiftPathMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExShiftPathMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftPathMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExShiftPathMode.InnerSingleton;
}
// ********** End Enum EPCGExShiftPathMode *********************************************************

// ********** Begin Class UPCGExShiftPathSettings **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExShiftPathSettings;
UClass* UPCGExShiftPathSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExShiftPathSettings;
	if (!Z_Registration_Info_UClass_UPCGExShiftPathSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExShiftPathSettings"),
			Z_Registration_Info_UClass_UPCGExShiftPathSettings.InnerSingleton,
			StaticRegisterNativesUPCGExShiftPathSettings,
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
	return Z_Registration_Info_UClass_UPCGExShiftPathSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExShiftPathSettings_NoRegister()
{
	return UPCGExShiftPathSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExShiftPathSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Path" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/PCGExShiftPath.h" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShiftPath.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "paths/shift" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShiftType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShiftPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShiftPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "InputMode == EPCGExShiftPathMode::Relative" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShiftPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Truncate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "InputMode == EPCGExShiftPathMode::Relative" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShiftPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiscreteConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "InputMode == EPCGExShiftPathMode::Discrete" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShiftPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexSafety_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "InputMode != EPCGExShiftPathMode::Filter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShiftPath.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverseShift_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Reverse shift order */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShiftPath.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Reverse shift order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CherryPickedProperties_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExPointNativeProperties" },
		{ "Category", "Settings" },
		{ "Comment", "/** Point properties to be shifted */" },
		{ "EditCondition", "ShiftType == EPCGExShiftType::CherryPick" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShiftPath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Point properties to be shifted" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CherryPickedAttributes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExPointNativeProperties" },
		{ "Category", "Settings" },
		{ "Comment", "/** Attributes to be shifted */" },
		{ "EditCondition", "ShiftType == EPCGExShiftType::CherryPick" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShiftPath.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Attributes to be shifted" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuietDoubleShiftWarning_MetaData[] = {
		{ "Category", "Warnings and Errors" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Paths/PCGExShiftPath.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExShiftPathSettings constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShiftType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShiftType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RelativeConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Truncate_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Truncate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DiscreteConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IndexSafety_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IndexSafety;
	static void NewProp_bReverseShift_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseShift;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CherryPickedProperties;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CherryPickedAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CherryPickedAttributes;
	static void NewProp_bQuietDoubleShiftWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuietDoubleShiftWarning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExShiftPathSettings constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExShiftPathSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExShiftPathSettings_Statics

// ********** Begin Class UPCGExShiftPathSettings Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_ShiftType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_ShiftType = { "ShiftType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShiftPathSettings, ShiftType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShiftType_MetaData), NewProp_ShiftType_MetaData) }; // 3790273656
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShiftPathSettings, InputMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExShiftPathMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMode_MetaData), NewProp_InputMode_MetaData) }; // 2572960732
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_RelativeConstant = { "RelativeConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShiftPathSettings, RelativeConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeConstant_MetaData), NewProp_RelativeConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_Truncate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_Truncate = { "Truncate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShiftPathSettings, Truncate), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTruncateMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Truncate_MetaData), NewProp_Truncate_MetaData) }; // 3854127603
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_DiscreteConstant = { "DiscreteConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShiftPathSettings, DiscreteConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiscreteConstant_MetaData), NewProp_DiscreteConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_IndexSafety_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_IndexSafety = { "IndexSafety", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShiftPathSettings, IndexSafety), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexSafety_MetaData), NewProp_IndexSafety_MetaData) }; // 122057320
void Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_bReverseShift_SetBit(void* Obj)
{
	((UPCGExShiftPathSettings*)Obj)->bReverseShift = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_bReverseShift = { "bReverseShift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExShiftPathSettings), &Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_bReverseShift_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverseShift_MetaData), NewProp_bReverseShift_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_CherryPickedProperties = { "CherryPickedProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShiftPathSettings, CherryPickedProperties), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CherryPickedProperties_MetaData), NewProp_CherryPickedProperties_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_CherryPickedAttributes_Inner = { "CherryPickedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_CherryPickedAttributes = { "CherryPickedAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExShiftPathSettings, CherryPickedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CherryPickedAttributes_MetaData), NewProp_CherryPickedAttributes_MetaData) };
void Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_bQuietDoubleShiftWarning_SetBit(void* Obj)
{
	((UPCGExShiftPathSettings*)Obj)->bQuietDoubleShiftWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_bQuietDoubleShiftWarning = { "bQuietDoubleShiftWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExShiftPathSettings), &Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_bQuietDoubleShiftWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuietDoubleShiftWarning_MetaData), NewProp_bQuietDoubleShiftWarning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExShiftPathSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_ShiftType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_ShiftType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_InputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_InputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_RelativeConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_Truncate_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_Truncate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_DiscreteConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_IndexSafety_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_IndexSafety,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_bReverseShift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_CherryPickedProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_CherryPickedAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_CherryPickedAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExShiftPathSettings_Statics::NewProp_bQuietDoubleShiftWarning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShiftPathSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExShiftPathSettings Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExShiftPathSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPathProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShiftPathSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExShiftPathSettings_Statics::ClassParams = {
	&UPCGExShiftPathSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExShiftPathSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShiftPathSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExShiftPathSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExShiftPathSettings_Statics::Class_MetaDataParams)
};
void UPCGExShiftPathSettings::StaticRegisterNativesUPCGExShiftPathSettings()
{
}
UClass* Z_Construct_UClass_UPCGExShiftPathSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExShiftPathSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExShiftPathSettings.OuterSingleton, Z_Construct_UClass_UPCGExShiftPathSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExShiftPathSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExShiftPathSettings);
UPCGExShiftPathSettings::~UPCGExShiftPathSettings() {}
// ********** End Class UPCGExShiftPathSettings ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShiftPath_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExShiftType_StaticEnum, TEXT("EPCGExShiftType"), &Z_Registration_Info_UEnum_EPCGExShiftType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3790273656U) },
		{ EPCGExShiftPathMode_StaticEnum, TEXT("EPCGExShiftPathMode"), &Z_Registration_Info_UEnum_EPCGExShiftPathMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2572960732U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExShiftPathSettings, UPCGExShiftPathSettings::StaticClass, TEXT("UPCGExShiftPathSettings"), &Z_Registration_Info_UClass_UPCGExShiftPathSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExShiftPathSettings), 3468468528U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShiftPath_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShiftPath_h__Script_PCGExtendedToolkit_452348015{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShiftPath_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShiftPath_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShiftPath_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_PCGExShiftPath_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
