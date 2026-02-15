// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/PCGExDiscardSame.h"
#include "Data/PCGExAttributeHasher.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExDiscardSame() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDiscardSameSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExDiscardSameSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPointsProcessorSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDiscardSameMode();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterGroupMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExAttributeHashConfig();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExDiscardSameMode *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExDiscardSameMode;
static UEnum* EPCGExDiscardSameMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExDiscardSameMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExDiscardSameMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDiscardSameMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExDiscardSameMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExDiscardSameMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExDiscardSameMode>()
{
	return EPCGExDiscardSameMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDiscardSameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All" },
		{ "All.Name", "EPCGExDiscardSameMode::All" },
		{ "All.ToolTip", "Discard all collections that have found duplicates (does not keep any)" },
		{ "FIFO.DisplayName", "FIFO" },
		{ "FIFO.Name", "EPCGExDiscardSameMode::FIFO" },
		{ "FIFO.ToolTip", "First in, first out" },
		{ "LIFO.DisplayName", "LIFO" },
		{ "LIFO.Name", "EPCGExDiscardSameMode::LIFO" },
		{ "LIFO.ToolTip", "Last in, first out" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardSame.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExDiscardSameMode::FIFO", (int64)EPCGExDiscardSameMode::FIFO },
		{ "EPCGExDiscardSameMode::LIFO", (int64)EPCGExDiscardSameMode::LIFO },
		{ "EPCGExDiscardSameMode::All", (int64)EPCGExDiscardSameMode::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDiscardSameMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDiscardSameMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExDiscardSameMode",
	"EPCGExDiscardSameMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDiscardSameMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDiscardSameMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDiscardSameMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDiscardSameMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDiscardSameMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExDiscardSameMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExDiscardSameMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDiscardSameMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExDiscardSameMode.InnerSingleton;
}
// ********** End Enum EPCGExDiscardSameMode *******************************************************

// ********** Begin Class UPCGExDiscardSameSettings ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExDiscardSameSettings;
UClass* UPCGExDiscardSameSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExDiscardSameSettings;
	if (!Z_Registration_Info_UClass_UPCGExDiscardSameSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExDiscardSameSettings"),
			Z_Registration_Info_UClass_UPCGExDiscardSameSettings.InnerSingleton,
			StaticRegisterNativesUPCGExDiscardSameSettings,
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
	return Z_Registration_Info_UClass_UPCGExDiscardSameSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExDiscardSameSettings_NoRegister()
{
	return UPCGExDiscardSameSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExDiscardSameSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Misc" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/PCGExDiscardSame.h" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardSame.h" },
		{ "PCGExNodeLibraryDoc", "filters/discard-same" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardSame.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardSame.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTestBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardSame.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestBoundsTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Test collection bounds equality, within tolerance */" },
		{ "EditCondition", "bTestBounds" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardSame.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Test collection bounds equality, within tolerance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTestPointCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardSame.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestPointCountTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Test collection point count equality, within tolerance */" },
		{ "EditCondition", "bTestPointCount" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardSame.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Test collection point count equality, within tolerance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTestPositions_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardSame.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestPositionTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Test point positions equality, within tolerance. Note that it computes space occupation, and does not account for point count. */" },
		{ "EditCondition", "bTestPositions" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardSame.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Test point positions equality, within tolerance. Note that it computes space occupation, and does not account for point count." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTestAttributeHash_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardSame.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeHashConfig_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Build a hash from a single attribute and test it against the others. */" },
		{ "EditCondition", "bTestAttributeHash" },
		{ "ModuleRelativePath", "Public/Misc/PCGExDiscardSame.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Build a hash from a single attribute and test it against the others." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExDiscardSameSettings constinit property declarations ****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TestMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TestMode;
	static void NewProp_bTestBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestBounds;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TestBoundsTolerance;
	static void NewProp_bTestPointCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestPointCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TestPointCountTolerance;
	static void NewProp_bTestPositions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestPositions;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TestPositionTolerance;
	static void NewProp_bTestAttributeHash_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestAttributeHash;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeHashConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExDiscardSameSettings constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExDiscardSameSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExDiscardSameSettings_Statics

// ********** Begin Class UPCGExDiscardSameSettings Property Definitions ***************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDiscardSameSettings, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExDiscardSameMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 2686851068
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_TestMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_TestMode = { "TestMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDiscardSameSettings, TestMode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFilterGroupMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestMode_MetaData), NewProp_TestMode_MetaData) }; // 3555833813
void Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_bTestBounds_SetBit(void* Obj)
{
	((UPCGExDiscardSameSettings*)Obj)->bTestBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_bTestBounds = { "bTestBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExDiscardSameSettings), &Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_bTestBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTestBounds_MetaData), NewProp_bTestBounds_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_TestBoundsTolerance = { "TestBoundsTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDiscardSameSettings, TestBoundsTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestBoundsTolerance_MetaData), NewProp_TestBoundsTolerance_MetaData) };
void Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_bTestPointCount_SetBit(void* Obj)
{
	((UPCGExDiscardSameSettings*)Obj)->bTestPointCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_bTestPointCount = { "bTestPointCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExDiscardSameSettings), &Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_bTestPointCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTestPointCount_MetaData), NewProp_bTestPointCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_TestPointCountTolerance = { "TestPointCountTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDiscardSameSettings, TestPointCountTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestPointCountTolerance_MetaData), NewProp_TestPointCountTolerance_MetaData) };
void Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_bTestPositions_SetBit(void* Obj)
{
	((UPCGExDiscardSameSettings*)Obj)->bTestPositions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_bTestPositions = { "bTestPositions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExDiscardSameSettings), &Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_bTestPositions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTestPositions_MetaData), NewProp_bTestPositions_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_TestPositionTolerance = { "TestPositionTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDiscardSameSettings, TestPositionTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestPositionTolerance_MetaData), NewProp_TestPositionTolerance_MetaData) };
void Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_bTestAttributeHash_SetBit(void* Obj)
{
	((UPCGExDiscardSameSettings*)Obj)->bTestAttributeHash = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_bTestAttributeHash = { "bTestAttributeHash", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExDiscardSameSettings), &Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_bTestAttributeHash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTestAttributeHash_MetaData), NewProp_bTestAttributeHash_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_AttributeHashConfig = { "AttributeHashConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExDiscardSameSettings, AttributeHashConfig), Z_Construct_UScriptStruct_FPCGExAttributeHashConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeHashConfig_MetaData), NewProp_AttributeHashConfig_MetaData) }; // 1288571515
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_TestMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_TestMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_bTestBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_TestBoundsTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_bTestPointCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_TestPointCountTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_bTestPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_TestPositionTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_bTestAttributeHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::NewProp_AttributeHashConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExDiscardSameSettings Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExPointsProcessorSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::ClassParams = {
	&UPCGExDiscardSameSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::Class_MetaDataParams)
};
void UPCGExDiscardSameSettings::StaticRegisterNativesUPCGExDiscardSameSettings()
{
}
UClass* Z_Construct_UClass_UPCGExDiscardSameSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExDiscardSameSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExDiscardSameSettings.OuterSingleton, Z_Construct_UClass_UPCGExDiscardSameSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExDiscardSameSettings.OuterSingleton;
}
UPCGExDiscardSameSettings::UPCGExDiscardSameSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExDiscardSameSettings);
UPCGExDiscardSameSettings::~UPCGExDiscardSameSettings() {}
// ********** End Class UPCGExDiscardSameSettings **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardSame_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExDiscardSameMode_StaticEnum, TEXT("EPCGExDiscardSameMode"), &Z_Registration_Info_UEnum_EPCGExDiscardSameMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2686851068U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExDiscardSameSettings, UPCGExDiscardSameSettings::StaticClass, TEXT("UPCGExDiscardSameSettings"), &Z_Registration_Info_UClass_UPCGExDiscardSameSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExDiscardSameSettings), 845259914U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardSame_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardSame_h__Script_PCGExtendedToolkit_1740938223{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardSame_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardSame_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardSame_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_PCGExDiscardSame_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
