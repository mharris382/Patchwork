// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Pathfinding/GoalPickers/PCGExGoalPickerRandom.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExGoalPickerRandom() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGoalPicker();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGoalPickerRandom();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExGoalPickerRandom_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickRandomAmount();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExGoalPickRandomAmount ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExGoalPickRandomAmount;
static UEnum* EPCGExGoalPickRandomAmount_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExGoalPickRandomAmount.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExGoalPickRandomAmount.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickRandomAmount, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExGoalPickRandomAmount"));
	}
	return Z_Registration_Info_UEnum_EPCGExGoalPickRandomAmount.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExGoalPickRandomAmount>()
{
	return EPCGExGoalPickRandomAmount_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickRandomAmount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Fixed.DisplayName", "Multiple Fixed" },
		{ "Fixed.Name", "EPCGExGoalPickRandomAmount::Fixed" },
		{ "Fixed.Tooltip", "A fixed number of random goals is picked" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/GoalPickers/PCGExGoalPickerRandom.h" },
		{ "Random.DisplayName", "Multiple Random" },
		{ "Random.Name", "EPCGExGoalPickRandomAmount::Random" },
		{ "Random.Tooltip", "A random number of random goals is picked." },
		{ "Single.DisplayName", "Single" },
		{ "Single.Name", "EPCGExGoalPickRandomAmount::Single" },
		{ "Single.Tooltip", "A single random goal is picked" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExGoalPickRandomAmount::Single", (int64)EPCGExGoalPickRandomAmount::Single },
		{ "EPCGExGoalPickRandomAmount::Fixed", (int64)EPCGExGoalPickRandomAmount::Fixed },
		{ "EPCGExGoalPickRandomAmount::Random", (int64)EPCGExGoalPickRandomAmount::Random },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickRandomAmount_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickRandomAmount_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExGoalPickRandomAmount",
	"EPCGExGoalPickRandomAmount",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickRandomAmount_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickRandomAmount_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickRandomAmount_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickRandomAmount_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickRandomAmount()
{
	if (!Z_Registration_Info_UEnum_EPCGExGoalPickRandomAmount.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExGoalPickRandomAmount.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickRandomAmount_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExGoalPickRandomAmount.InnerSingleton;
}
// ********** End Enum EPCGExGoalPickRandomAmount **************************************************

// ********** Begin Class UPCGExGoalPickerRandom ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExGoalPickerRandom;
UClass* UPCGExGoalPickerRandom::GetPrivateStaticClass()
{
	using TClass = UPCGExGoalPickerRandom;
	if (!Z_Registration_Info_UClass_UPCGExGoalPickerRandom.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExGoalPickerRandom"),
			Z_Registration_Info_UClass_UPCGExGoalPickerRandom.InnerSingleton,
			StaticRegisterNativesUPCGExGoalPickerRandom,
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
	return Z_Registration_Info_UClass_UPCGExGoalPickerRandom.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExGoalPickerRandom_NoRegister()
{
	return UPCGExGoalPickerRandom::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExGoalPickerRandom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Random" },
		{ "IncludePath", "Graph/Pathfinding/GoalPickers/PCGExGoalPickerRandom.h" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/GoalPickers/PCGExGoalPickerRandom.h" },
		{ "PCGExNodeLibraryDoc", "pathfinding/pathfinding-edges/goal-picker-random" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalSeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/GoalPickers/PCGExGoalPickerRandom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/GoalPickers/PCGExGoalPickerRandom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumGoalsType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Fetch the smoothing from a local attribute.*/" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/GoalPickers/PCGExGoalPickerRandom.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Fetch the smoothing from a local attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumGoalAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Num Goals (Attr)" },
		{ "EditCondition", "GoalCount != EPCGExGoalPickRandomAmount::Single && NumGoalsType != EPCGExInputValueType::Constant" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/GoalPickers/PCGExGoalPickerRandom.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumGoals_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Num Goals" },
		{ "EditCondition", "GoalCount != EPCGExGoalPickRandomAmount::Single && NumGoalsType == EPCGExInputValueType::Constant" },
		{ "ModuleRelativePath", "Public/Graph/Pathfinding/GoalPickers/PCGExGoalPickerRandom.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExGoalPickerRandom constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalSeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GoalCount_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GoalCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NumGoalsType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NumGoalsType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NumGoalAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumGoals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExGoalPickerRandom constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExGoalPickerRandom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExGoalPickerRandom_Statics

// ********** Begin Class UPCGExGoalPickerRandom Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::NewProp_LocalSeed = { "LocalSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGoalPickerRandom, LocalSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalSeed_MetaData), NewProp_LocalSeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::NewProp_GoalCount_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::NewProp_GoalCount = { "GoalCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGoalPickerRandom, GoalCount), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExGoalPickRandomAmount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalCount_MetaData), NewProp_GoalCount_MetaData) }; // 3365412145
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::NewProp_NumGoalsType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::NewProp_NumGoalsType = { "NumGoalsType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGoalPickerRandom, NumGoalsType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumGoalsType_MetaData), NewProp_NumGoalsType_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::NewProp_NumGoalAttribute = { "NumGoalAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGoalPickerRandom, NumGoalAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumGoalAttribute_MetaData), NewProp_NumGoalAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::NewProp_NumGoals = { "NumGoals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExGoalPickerRandom, NumGoals), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumGoals_MetaData), NewProp_NumGoals_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::NewProp_LocalSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::NewProp_GoalCount_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::NewProp_GoalCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::NewProp_NumGoalsType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::NewProp_NumGoalsType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::NewProp_NumGoalAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::NewProp_NumGoals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::PropPointers) < 2048);
// ********** End Class UPCGExGoalPickerRandom Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExGoalPicker,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::ClassParams = {
	&UPCGExGoalPickerRandom::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::Class_MetaDataParams)
};
void UPCGExGoalPickerRandom::StaticRegisterNativesUPCGExGoalPickerRandom()
{
}
UClass* Z_Construct_UClass_UPCGExGoalPickerRandom()
{
	if (!Z_Registration_Info_UClass_UPCGExGoalPickerRandom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExGoalPickerRandom.OuterSingleton, Z_Construct_UClass_UPCGExGoalPickerRandom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExGoalPickerRandom.OuterSingleton;
}
UPCGExGoalPickerRandom::UPCGExGoalPickerRandom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExGoalPickerRandom);
UPCGExGoalPickerRandom::~UPCGExGoalPickerRandom() {}
// ********** End Class UPCGExGoalPickerRandom *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerRandom_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExGoalPickRandomAmount_StaticEnum, TEXT("EPCGExGoalPickRandomAmount"), &Z_Registration_Info_UEnum_EPCGExGoalPickRandomAmount, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3365412145U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExGoalPickerRandom, UPCGExGoalPickerRandom::StaticClass, TEXT("UPCGExGoalPickerRandom"), &Z_Registration_Info_UClass_UPCGExGoalPickerRandom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExGoalPickerRandom), 1463734935U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerRandom_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerRandom_h__Script_PCGExtendedToolkit_1241203145{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerRandom_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerRandom_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerRandom_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Pathfinding_GoalPickers_PCGExGoalPickerRandom_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
