// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/GoalPickers/PCGExGoalPickerAttribute.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExGoalPickerAttribute() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGoalPicker();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGoalPickerAttribute();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGoalPickerAttribute_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickAttributeAmount();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExGoalPickAttributeAmount *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExGoalPickAttributeAmount;
static UEnum* EPCGExGoalPickAttributeAmount_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExGoalPickAttributeAmount.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExGoalPickAttributeAmount.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickAttributeAmount, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExGoalPickAttributeAmount"));
	}
	return Z_Registration_Info_UEnum_EPCGExGoalPickAttributeAmount.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGoalPickAttributeAmount>()
{
	return EPCGExGoalPickAttributeAmount_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickAttributeAmount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "List.DisplayName", "Multiple Attributes" },
		{ "List.Name", "EPCGExGoalPickAttributeAmount::List" },
		{ "List.Tooltip", "Multiple attributes" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/GoalPickers/PCGExGoalPickerAttribute.h" },
		{ "Single.DisplayName", "Single Attribute" },
		{ "Single.Name", "EPCGExGoalPickAttributeAmount::Single" },
		{ "Single.Tooltip", "Single attribute" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExGoalPickAttributeAmount::Single", (int64)EPCGExGoalPickAttributeAmount::Single },
		{ "EPCGExGoalPickAttributeAmount::List", (int64)EPCGExGoalPickAttributeAmount::List },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickAttributeAmount_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickAttributeAmount_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExGoalPickAttributeAmount",
	"EPCGExGoalPickAttributeAmount",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickAttributeAmount_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickAttributeAmount_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickAttributeAmount_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickAttributeAmount_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickAttributeAmount()
{
	if (!Z_Registration_Info_UEnum_EPCGExGoalPickAttributeAmount.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExGoalPickAttributeAmount.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickAttributeAmount_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExGoalPickAttributeAmount.InnerSingleton;
}
// ********** End Enum EPCGExGoalPickAttributeAmount ***********************************************

// ********** Begin Class UPCGExGoalPickerAttribute ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExGoalPickerAttribute;
UClass* UPCGExGoalPickerAttribute::GetPrivateStaticClass()
{
	using TClass = UPCGExGoalPickerAttribute;
	if (!Z_Registration_Info_UClass_UPCGExGoalPickerAttribute.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExGoalPickerAttribute"),
			Z_Registration_Info_UClass_UPCGExGoalPickerAttribute.InnerSingleton,
			StaticRegisterNativesUPCGExGoalPickerAttribute,
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
	return Z_Registration_Info_UClass_UPCGExGoalPickerAttribute.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExGoalPickerAttribute_NoRegister()
{
	return UPCGExGoalPickerAttribute::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Index Attribute" },
		{ "IncludePath", "Graph/Pathfinding/GoalPickers/PCGExGoalPickerAttribute.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/GoalPickers/PCGExGoalPickerAttribute.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/pathfinding-edges/goal-picker-attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/GoalPickers/PCGExGoalPickerAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingleSelector_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "GoalCount == EPCGExGoalPickAttributeAmount::Single" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/GoalPickers/PCGExGoalPickerAttribute.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommaSeparatedNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** A list of attribute names separated by a comma, for easy overrides. They will be added to the in-place array of selectors. */" },
		{ "EditCondition", "GoalCount == EPCGExGoalPickAttributeAmount::List" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/GoalPickers/PCGExGoalPickerAttribute.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "A list of attribute names separated by a comma, for easy overrides. They will be added to the in-place array of selectors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSelectors_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "GoalCount == EPCGExGoalPickAttributeAmount::List" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/GoalPickers/PCGExGoalPickerAttribute.h" },
		{ "TitleProperty", "{TitlePropertyName}" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExGoalPickerAttribute constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_GoalCount_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GoalCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SingleSelector;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CommaSeparatedNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeSelectors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeSelectors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExGoalPickerAttribute constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExGoalPickerAttribute>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics

// ********** Begin Class UPCGExGoalPickerAttribute Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::NewProp_GoalCount_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::NewProp_GoalCount = { "GoalCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGoalPickerAttribute, GoalCount), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickAttributeAmount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalCount_MetaData), NewProp_GoalCount_MetaData) }; // 933010
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::NewProp_SingleSelector = { "SingleSelector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGoalPickerAttribute, SingleSelector), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingleSelector_MetaData), NewProp_SingleSelector_MetaData) }; // 3844583698
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::NewProp_CommaSeparatedNames = { "CommaSeparatedNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGoalPickerAttribute, CommaSeparatedNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommaSeparatedNames_MetaData), NewProp_CommaSeparatedNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::NewProp_AttributeSelectors_Inner = { "AttributeSelectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(0, nullptr) }; // 3844583698
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::NewProp_AttributeSelectors = { "AttributeSelectors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGoalPickerAttribute, AttributeSelectors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSelectors_MetaData), NewProp_AttributeSelectors_MetaData) }; // 3844583698
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::NewProp_GoalCount_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::NewProp_GoalCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::NewProp_SingleSelector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::NewProp_CommaSeparatedNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::NewProp_AttributeSelectors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::NewProp_AttributeSelectors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::PropPointers) < 2048);
// ********** End Class UPCGExGoalPickerAttribute Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExGoalPicker,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::ClassParams = {
	&UPCGExGoalPickerAttribute::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::Class_MetaDataParams)
};
void UPCGExGoalPickerAttribute::StaticRegisterNativesUPCGExGoalPickerAttribute()
{
}
UClass* Z_Construct_UClass_UPCGExGoalPickerAttribute()
{
	if (!Z_Registration_Info_UClass_UPCGExGoalPickerAttribute.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExGoalPickerAttribute.OuterSingleton, Z_Construct_UClass_UPCGExGoalPickerAttribute_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExGoalPickerAttribute.OuterSingleton;
}
UPCGExGoalPickerAttribute::UPCGExGoalPickerAttribute(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExGoalPickerAttribute);
UPCGExGoalPickerAttribute::~UPCGExGoalPickerAttribute() {}
// ********** End Class UPCGExGoalPickerAttribute **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerAttribute_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExGoalPickAttributeAmount_StaticEnum, TEXT("EPCGExGoalPickAttributeAmount"), &Z_Registration_Info_UEnum_EPCGExGoalPickAttributeAmount, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 933010U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExGoalPickerAttribute, UPCGExGoalPickerAttribute::StaticClass, TEXT("UPCGExGoalPickerAttribute"), &Z_Registration_Info_UClass_UPCGExGoalPickerAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExGoalPickerAttribute), 3785373735U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerAttribute_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerAttribute_h__Script_PCGExtendedToolkit_1612118298{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerAttribute_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerAttribute_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerAttribute_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerAttribute_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
