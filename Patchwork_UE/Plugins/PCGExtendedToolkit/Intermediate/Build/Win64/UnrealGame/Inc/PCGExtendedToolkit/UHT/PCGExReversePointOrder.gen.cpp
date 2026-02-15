// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExReversePointOrder.h"
#include "Geometry/PCGExGeo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExReversePointOrder() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExReversePointOrderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExReversePointOrderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointReverseMethod();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWinding();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExPointReverseMethod **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPointReverseMethod;
static UEnum* EPCGExPointReverseMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPointReverseMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPointReverseMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointReverseMethod, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPointReverseMethod"));
	}
	return Z_Registration_Info_UEnum_EPCGExPointReverseMethod.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPointReverseMethod>()
{
	return EPCGExPointReverseMethod_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointReverseMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/PCGExReversePointOrder.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExPointReverseMethod::None" },
		{ "None.ToolTip", "..." },
		{ "SortingRules.DisplayName", "Sorting Rules" },
		{ "SortingRules.Name", "EPCGExPointReverseMethod::SortingRules" },
		{ "SortingRules.ToolTip", "..." },
		{ "Winding.DisplayName", "Winding" },
		{ "Winding.Name", "EPCGExPointReverseMethod::Winding" },
		{ "Winding.ToolTip", "..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPointReverseMethod::None", (int64)EPCGExPointReverseMethod::None },
		{ "EPCGExPointReverseMethod::SortingRules", (int64)EPCGExPointReverseMethod::SortingRules },
		{ "EPCGExPointReverseMethod::Winding", (int64)EPCGExPointReverseMethod::Winding },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointReverseMethod_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointReverseMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPointReverseMethod",
	"EPCGExPointReverseMethod",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointReverseMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointReverseMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointReverseMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointReverseMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointReverseMethod()
{
	if (!Z_Registration_Info_UEnum_EPCGExPointReverseMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPointReverseMethod.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointReverseMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPointReverseMethod.InnerSingleton;
}
// ********** End Enum EPCGExPointReverseMethod ****************************************************

// ********** Begin ScriptStruct FPCGExSwapAttributePairDetails ************************************
struct Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExSwapAttributePairDetails); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExSwapAttributePairDetails); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReversePointOrder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReversePointOrder.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondAttributeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReversePointOrder.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMultiplyByMinusOne_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReversePointOrder.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExSwapAttributePairDetails constinit property declarations ****
	static const UECodeGen_Private::FNamePropertyParams NewProp_FirstAttributeName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SecondAttributeName;
	static void NewProp_bMultiplyByMinusOne_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiplyByMinusOne;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExSwapAttributePairDetails constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExSwapAttributePairDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExSwapAttributePairDetails;
class UScriptStruct* FPCGExSwapAttributePairDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSwapAttributePairDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExSwapAttributePairDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExSwapAttributePairDetails"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExSwapAttributePairDetails.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExSwapAttributePairDetails Property Definitions ***************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics::NewProp_FirstAttributeName = { "FirstAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSwapAttributePairDetails, FirstAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstAttributeName_MetaData), NewProp_FirstAttributeName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics::NewProp_SecondAttributeName = { "SecondAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExSwapAttributePairDetails, SecondAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondAttributeName_MetaData), NewProp_SecondAttributeName_MetaData) };
void Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics::NewProp_bMultiplyByMinusOne_SetBit(void* Obj)
{
	((FPCGExSwapAttributePairDetails*)Obj)->bMultiplyByMinusOne = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics::NewProp_bMultiplyByMinusOne = { "bMultiplyByMinusOne", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExSwapAttributePairDetails), &Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics::NewProp_bMultiplyByMinusOne_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMultiplyByMinusOne_MetaData), NewProp_bMultiplyByMinusOne_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics::NewProp_FirstAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics::NewProp_SecondAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics::NewProp_bMultiplyByMinusOne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExSwapAttributePairDetails Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExSwapAttributePairDetails",
	Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics::PropPointers),
	sizeof(FPCGExSwapAttributePairDetails),
	alignof(FPCGExSwapAttributePairDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExSwapAttributePairDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExSwapAttributePairDetails.InnerSingleton, Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExSwapAttributePairDetails.InnerSingleton);
}
// ********** End ScriptStruct FPCGExSwapAttributePairDetails **************************************

// ********** Begin Class UPCGExReversePointOrderSettings ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExReversePointOrderSettings;
UClass* UPCGExReversePointOrderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExReversePointOrderSettings;
	if (!Z_Registration_Info_UClass_UPCGExReversePointOrderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExReversePointOrderSettings"),
			Z_Registration_Info_UClass_UPCGExReversePointOrderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExReversePointOrderSettings,
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
	return Z_Registration_Info_UClass_UPCGExReversePointOrderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExReversePointOrderSettings_NoRegister()
{
	return UPCGExReversePointOrderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExReversePointOrder.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReversePointOrder.h" },
		{ "PCGExNodeLibraryDoc", "misc/reverse-point-order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReversePointOrder.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sort direction */" },
		{ "EditCondition", "Method == EPCGExPointReverseMethod::SortingRules" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReversePointOrder.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Sort direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Winding_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Winding */" },
		{ "EditCondition", "Method == EPCGExPointReverseMethod::Winding" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReversePointOrder.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Winding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDetails_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Projection settings. Winding is computed on a 2D plane. */" },
		{ "EditCondition", "Method == EPCGExPointReverseMethod::Winding" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReversePointOrder.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Projection settings. Winding is computed on a 2D plane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwapAttributesValues_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReversePointOrder.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfReversed_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReversePointOrder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsReversedTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** ... */" },
		{ "EditCondition", "bTagIfReversed" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReversePointOrder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTagIfNotReversed_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReversePointOrder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsNotReversedTag_MetaData[] = {
		{ "Category", "Settings|Tagging" },
		{ "Comment", "/** ... */" },
		{ "EditCondition", "bTagIfNotReversed" },
		{ "ModuleRelativePath", "Public/Misc/PCGExReversePointOrder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExReversePointOrderSettings constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Winding_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Winding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionDetails;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwapAttributesValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SwapAttributesValues;
	static void NewProp_bTagIfReversed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfReversed;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IsReversedTag;
	static void NewProp_bTagIfNotReversed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTagIfNotReversed;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IsNotReversedTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExReversePointOrderSettings constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExReversePointOrderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics

// ********** Begin Class UPCGExReversePointOrderSettings Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExReversePointOrderSettings, Method), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointReverseMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Method_MetaData), NewProp_Method_MetaData) }; // 3903809477
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_SortDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_SortDirection = { "SortDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExReversePointOrderSettings, SortDirection), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExSortDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortDirection_MetaData), NewProp_SortDirection_MetaData) }; // 477201674
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_Winding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_Winding = { "Winding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExReversePointOrderSettings, Winding), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExWinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Winding_MetaData), NewProp_Winding_MetaData) }; // 57580146
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_ProjectionDetails = { "ProjectionDetails", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExReversePointOrderSettings, ProjectionDetails), Z_Construct_UScriptStruct_FPCGExGeo2DProjectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDetails_MetaData), NewProp_ProjectionDetails_MetaData) }; // 1019281773
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_SwapAttributesValues_Inner = { "SwapAttributesValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails, METADATA_PARAMS(0, nullptr) }; // 2399098082
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_SwapAttributesValues = { "SwapAttributesValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExReversePointOrderSettings, SwapAttributesValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwapAttributesValues_MetaData), NewProp_SwapAttributesValues_MetaData) }; // 2399098082
void Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_bTagIfReversed_SetBit(void* Obj)
{
	((UPCGExReversePointOrderSettings*)Obj)->bTagIfReversed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_bTagIfReversed = { "bTagIfReversed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExReversePointOrderSettings), &Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_bTagIfReversed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfReversed_MetaData), NewProp_bTagIfReversed_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_IsReversedTag = { "IsReversedTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExReversePointOrderSettings, IsReversedTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsReversedTag_MetaData), NewProp_IsReversedTag_MetaData) };
void Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_bTagIfNotReversed_SetBit(void* Obj)
{
	((UPCGExReversePointOrderSettings*)Obj)->bTagIfNotReversed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_bTagIfNotReversed = { "bTagIfNotReversed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExReversePointOrderSettings), &Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_bTagIfNotReversed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTagIfNotReversed_MetaData), NewProp_bTagIfNotReversed_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_IsNotReversedTag = { "IsNotReversedTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExReversePointOrderSettings, IsNotReversedTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsNotReversedTag_MetaData), NewProp_IsNotReversedTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_Method_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_Method,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_SortDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_SortDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_Winding_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_Winding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_ProjectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_SwapAttributesValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_SwapAttributesValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_bTagIfReversed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_IsReversedTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_bTagIfNotReversed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::NewProp_IsNotReversedTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExReversePointOrderSettings Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::ClassParams = {
	&UPCGExReversePointOrderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::Class_MetaDataParams)
};
void UPCGExReversePointOrderSettings::StaticRegisterNativesUPCGExReversePointOrderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExReversePointOrderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExReversePointOrderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExReversePointOrderSettings.OuterSingleton, Z_Construct_UClass_UPCGExReversePointOrderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExReversePointOrderSettings.OuterSingleton;
}
UPCGExReversePointOrderSettings::UPCGExReversePointOrderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExReversePointOrderSettings);
UPCGExReversePointOrderSettings::~UPCGExReversePointOrderSettings() {}
// ********** End Class UPCGExReversePointOrderSettings ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReversePointOrder_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExPointReverseMethod_StaticEnum, TEXT("EPCGExPointReverseMethod"), &Z_Registration_Info_UEnum_EPCGExPointReverseMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3903809477U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExSwapAttributePairDetails::StaticStruct, Z_Construct_UScriptStruct_FPCGExSwapAttributePairDetails_Statics::NewStructOps, TEXT("PCGExSwapAttributePairDetails"),&Z_Registration_Info_UScriptStruct_FPCGExSwapAttributePairDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExSwapAttributePairDetails), 2399098082U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExReversePointOrderSettings, UPCGExReversePointOrderSettings::StaticClass, TEXT("UPCGExReversePointOrderSettings"), &Z_Registration_Info_UClass_UPCGExReversePointOrderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExReversePointOrderSettings), 3563290085U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReversePointOrder_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReversePointOrder_h__Script_PCGExtendedToolkit_1724344833{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReversePointOrder_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReversePointOrder_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReversePointOrder_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReversePointOrder_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReversePointOrder_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExReversePointOrder_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
