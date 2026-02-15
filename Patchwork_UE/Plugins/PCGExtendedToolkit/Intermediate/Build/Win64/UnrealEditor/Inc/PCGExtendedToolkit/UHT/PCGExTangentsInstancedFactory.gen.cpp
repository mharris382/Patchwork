// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paths/Tangents/PCGExTangentsInstancedFactory.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTangentsInstancedFactory() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTangentsInstancedFactory();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTangentsInstancedFactory_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTangentSource();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTangentsDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExTangentSource *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExTangentSource;
static UEnum* EPCGExTangentSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExTangentSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExTangentSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTangentSource, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExTangentSource"));
	}
	return Z_Registration_Info_UEnum_EPCGExTangentSource.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExTangentSource>()
{
	return EPCGExTangentSource_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTangentSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attribute.DisplayName", "Attribute" },
		{ "Attribute.Name", "EPCGExTangentSource::Attribute" },
		{ "Attribute.Tooltip", "Tangents are read from attributes" },
		{ "InPlace.DisplayName", "In-place" },
		{ "InPlace.Name", "EPCGExTangentSource::InPlace" },
		{ "InPlace.Tooltip", "Tangents are calculated in-place using a custom module" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsInstancedFactory.h" },
		{ "None.DisplayName", "No Tangents" },
		{ "None.Name", "EPCGExTangentSource::None" },
		{ "None.Tooltip", "No tangents" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExTangentSource::None", (int64)EPCGExTangentSource::None },
		{ "EPCGExTangentSource::Attribute", (int64)EPCGExTangentSource::Attribute },
		{ "EPCGExTangentSource::InPlace", (int64)EPCGExTangentSource::InPlace },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTangentSource_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTangentSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExTangentSource",
	"EPCGExTangentSource",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTangentSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTangentSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTangentSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTangentSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTangentSource()
{
	if (!Z_Registration_Info_UEnum_EPCGExTangentSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExTangentSource.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTangentSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExTangentSource.InnerSingleton;
}
// ********** End Enum EPCGExTangentSource *********************************************************

// ********** Begin Class UPCGExTangentsInstancedFactory *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTangentsInstancedFactory;
UClass* UPCGExTangentsInstancedFactory::GetPrivateStaticClass()
{
	using TClass = UPCGExTangentsInstancedFactory;
	if (!Z_Registration_Info_UClass_UPCGExTangentsInstancedFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTangentsInstancedFactory"),
			Z_Registration_Info_UClass_UPCGExTangentsInstancedFactory.InnerSingleton,
			StaticRegisterNativesUPCGExTangentsInstancedFactory,
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
	return Z_Registration_Info_UClass_UPCGExTangentsInstancedFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTangentsInstancedFactory_NoRegister()
{
	return UPCGExTangentsInstancedFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTangentsInstancedFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Paths/Tangents/PCGExTangentsInstancedFactory.h" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsInstancedFactory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTangentsInstancedFactory constinit property declarations ***********
// ********** End Class UPCGExTangentsInstancedFactory constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTangentsInstancedFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTangentsInstancedFactory_Statics
UObject* (*const Z_Construct_UClass_UPCGExTangentsInstancedFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExInstancedFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTangentsInstancedFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTangentsInstancedFactory_Statics::ClassParams = {
	&UPCGExTangentsInstancedFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTangentsInstancedFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTangentsInstancedFactory_Statics::Class_MetaDataParams)
};
void UPCGExTangentsInstancedFactory::StaticRegisterNativesUPCGExTangentsInstancedFactory()
{
}
UClass* Z_Construct_UClass_UPCGExTangentsInstancedFactory()
{
	if (!Z_Registration_Info_UClass_UPCGExTangentsInstancedFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTangentsInstancedFactory.OuterSingleton, Z_Construct_UClass_UPCGExTangentsInstancedFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTangentsInstancedFactory.OuterSingleton;
}
UPCGExTangentsInstancedFactory::UPCGExTangentsInstancedFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTangentsInstancedFactory);
UPCGExTangentsInstancedFactory::~UPCGExTangentsInstancedFactory() {}
// ********** End Class UPCGExTangentsInstancedFactory *********************************************

// ********** Begin ScriptStruct FPCGExTangentsScalingDetails **************************************
struct Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTangentsScalingDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTangentsScalingDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsInstancedFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveScaleInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsInstancedFactory.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveScaleAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Arrive Scale (Attr)" },
		{ "EditCondition", "ArriveScaleInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsInstancedFactory.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveScaleConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Arrive Scale" },
		{ "EditCondition", "ArriveScaleInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsInstancedFactory.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveScaleInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsInstancedFactory.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveScaleAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Leave Scale (Attr)" },
		{ "EditCondition", "LeaveScaleInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsInstancedFactory.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveScaleConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Leave Scale" },
		{ "EditCondition", "LeaveScaleInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsInstancedFactory.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTangentsScalingDetails constinit property declarations ******
	static const UECodeGen_Private::FBytePropertyParams NewProp_ArriveScaleInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ArriveScaleInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArriveScaleAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ArriveScaleConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeaveScaleInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LeaveScaleInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaveScaleAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LeaveScaleConstant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTangentsScalingDetails constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTangentsScalingDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTangentsScalingDetails;
class UScriptStruct* FPCGExTangentsScalingDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTangentsScalingDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTangentsScalingDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTangentsScalingDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTangentsScalingDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTangentsScalingDetails Property Definitions *****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::NewProp_ArriveScaleInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::NewProp_ArriveScaleInput = { "ArriveScaleInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTangentsScalingDetails, ArriveScaleInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveScaleInput_MetaData), NewProp_ArriveScaleInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::NewProp_ArriveScaleAttribute = { "ArriveScaleAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTangentsScalingDetails, ArriveScaleAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveScaleAttribute_MetaData), NewProp_ArriveScaleAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::NewProp_ArriveScaleConstant = { "ArriveScaleConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTangentsScalingDetails, ArriveScaleConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveScaleConstant_MetaData), NewProp_ArriveScaleConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::NewProp_LeaveScaleInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::NewProp_LeaveScaleInput = { "LeaveScaleInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTangentsScalingDetails, LeaveScaleInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveScaleInput_MetaData), NewProp_LeaveScaleInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::NewProp_LeaveScaleAttribute = { "LeaveScaleAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTangentsScalingDetails, LeaveScaleAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveScaleAttribute_MetaData), NewProp_LeaveScaleAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::NewProp_LeaveScaleConstant = { "LeaveScaleConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTangentsScalingDetails, LeaveScaleConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveScaleConstant_MetaData), NewProp_LeaveScaleConstant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::NewProp_ArriveScaleInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::NewProp_ArriveScaleInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::NewProp_ArriveScaleAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::NewProp_ArriveScaleConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::NewProp_LeaveScaleInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::NewProp_LeaveScaleInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::NewProp_LeaveScaleAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::NewProp_LeaveScaleConstant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTangentsScalingDetails Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExTangentsScalingDetails",
	Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::PropPointers),
	sizeof(FPCGExTangentsScalingDetails),
	alignof(FPCGExTangentsScalingDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTangentsScalingDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTangentsScalingDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTangentsScalingDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTangentsScalingDetails ****************************************

// ********** Begin ScriptStruct FPCGExTangentsDetails *********************************************
struct Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExTangentsDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExTangentsDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsInstancedFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsInstancedFactory.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "Source == EPCGExTangentSource::Attribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsInstancedFactory.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "Source == EPCGExTangentSource::Attribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsInstancedFactory.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "EditCondition", "Source == EPCGExTangentSource::InPlace" },
		{ "EditConditionHides", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsInstancedFactory.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTangents_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Optional module for the start point specifically */" },
		{ "DisplayName", "\xe2\x94\x9c\xe2\x94\x80 Start Override (Opt.)" },
		{ "EditCondition", "Source == EPCGExTangentSource::InPlace" },
		{ "EditConditionHides", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsInstancedFactory.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Optional module for the start point specifically" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTangents_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Optional module for the end point specifically */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 End Override (Opt.)" },
		{ "EditCondition", "Source == EPCGExTangentSource::InPlace" },
		{ "EditConditionHides", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsInstancedFactory.h" },
		{ "NoResetToDefault", "" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Optional module for the end point specifically" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsInstancedFactory.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeprecationApplied_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Paths/Tangents/PCGExTangentsInstancedFactory.h" },
		{ "PCG_NotOverridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExTangentsDetails constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArriveTangentAttribute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LeaveTangentAttribute;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tangents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartTangents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndTangents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scaling;
	static void NewProp_bDeprecationApplied_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeprecationApplied;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExTangentsDetails constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExTangentsDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExTangentsDetails;
class UScriptStruct* FPCGExTangentsDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTangentsDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExTangentsDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExTangentsDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExTangentsDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExTangentsDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExTangentsDetails Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTangentsDetails, Source), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExTangentSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 289462052
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_ArriveTangentAttribute = { "ArriveTangentAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTangentsDetails, ArriveTangentAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveTangentAttribute_MetaData), NewProp_ArriveTangentAttribute_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_LeaveTangentAttribute = { "LeaveTangentAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTangentsDetails, LeaveTangentAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveTangentAttribute_MetaData), NewProp_LeaveTangentAttribute_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTangentsDetails, Tangents), Z_Construct_UClass_UPCGExTangentsInstancedFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangents_MetaData), NewProp_Tangents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_StartTangents = { "StartTangents", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTangentsDetails, StartTangents), Z_Construct_UClass_UPCGExTangentsInstancedFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTangents_MetaData), NewProp_StartTangents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_EndTangents = { "EndTangents", nullptr, (EPropertyFlags)0x011600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTangentsDetails, EndTangents), Z_Construct_UClass_UPCGExTangentsInstancedFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTangents_MetaData), NewProp_EndTangents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_Scaling = { "Scaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExTangentsDetails, Scaling), Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scaling_MetaData), NewProp_Scaling_MetaData) }; // 3852904702
void Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_bDeprecationApplied_SetBit(void* Obj)
{
	((FPCGExTangentsDetails*)Obj)->bDeprecationApplied = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_bDeprecationApplied = { "bDeprecationApplied", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExTangentsDetails), &Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_bDeprecationApplied_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeprecationApplied_MetaData), NewProp_bDeprecationApplied_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_ArriveTangentAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_LeaveTangentAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_Tangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_StartTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_EndTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_Scaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewProp_bDeprecationApplied,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExTangentsDetails Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExTangentsDetails",
	Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::PropPointers),
	sizeof(FPCGExTangentsDetails),
	alignof(FPCGExTangentsDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExTangentsDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExTangentsDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExTangentsDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExTangentsDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExTangentsDetails ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsInstancedFactory_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExTangentSource_StaticEnum, TEXT("EPCGExTangentSource"), &Z_Registration_Info_UEnum_EPCGExTangentSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 289462052U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExTangentsScalingDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExTangentsScalingDetails_Statics::NewStructOps, TEXT("PCGExTangentsScalingDetails"),&Z_Registration_Info_UScriptStruct_FPCGExTangentsScalingDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTangentsScalingDetails), 3852904702U) },
		{ FPCGExTangentsDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExTangentsDetails_Statics::NewStructOps, TEXT("PCGExTangentsDetails"),&Z_Registration_Info_UScriptStruct_FPCGExTangentsDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExTangentsDetails), 2695381813U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTangentsInstancedFactory, UPCGExTangentsInstancedFactory::StaticClass, TEXT("UPCGExTangentsInstancedFactory"), &Z_Registration_Info_UClass_UPCGExTangentsInstancedFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTangentsInstancedFactory), 4216963185U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsInstancedFactory_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsInstancedFactory_h__Script_PCGExtendedToolkit_1609387651{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsInstancedFactory_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsInstancedFactory_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsInstancedFactory_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsInstancedFactory_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsInstancedFactory_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Paths_Tangents_PCGExTangentsInstancedFactory_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
