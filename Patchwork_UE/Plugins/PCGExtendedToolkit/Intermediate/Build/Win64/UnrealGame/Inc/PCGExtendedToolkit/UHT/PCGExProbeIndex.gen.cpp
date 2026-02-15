// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Probes/PCGExProbeIndex.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExProbeIndex() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryIndex();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryIndex_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeIndexProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExProbeIndexProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeTargetMode();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExProbeConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExProbeConfigIndex();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExProbeTargetMode *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExProbeTargetMode;
static UEnum* EPCGExProbeTargetMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExProbeTargetMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExProbeTargetMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeTargetMode, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExProbeTargetMode"));
	}
	return Z_Registration_Info_UEnum_EPCGExProbeTargetMode.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExProbeTargetMode>()
{
	return EPCGExProbeTargetMode_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeTargetMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeIndex.h" },
		{ "OneWayOffset.DisplayName", "One-way Offset" },
		{ "OneWayOffset.Name", "EPCGExProbeTargetMode::OneWayOffset" },
		{ "OneWayOffset.ToolTip", "Target index is used as an offset value from the current point' index" },
		{ "Target.DisplayName", "Target" },
		{ "Target.Name", "EPCGExProbeTargetMode::Target" },
		{ "Target.ToolTip", "Target index is used as-is to create a connection" },
		{ "TwoWayOffset.DisplayName", "Two-way Offset" },
		{ "TwoWayOffset.Name", "EPCGExProbeTargetMode::TwoWayOffset" },
		{ "TwoWayOffset.ToolTip", "Target index is used as both a positive and negative offset value from the current point' index" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExProbeTargetMode::Target", (int64)EPCGExProbeTargetMode::Target },
		{ "EPCGExProbeTargetMode::OneWayOffset", (int64)EPCGExProbeTargetMode::OneWayOffset },
		{ "EPCGExProbeTargetMode::TwoWayOffset", (int64)EPCGExProbeTargetMode::TwoWayOffset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeTargetMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeTargetMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExProbeTargetMode",
	"EPCGExProbeTargetMode",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeTargetMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeTargetMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeTargetMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeTargetMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeTargetMode()
{
	if (!Z_Registration_Info_UEnum_EPCGExProbeTargetMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExProbeTargetMode.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeTargetMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExProbeTargetMode.InnerSingleton;
}
// ********** End Enum EPCGExProbeTargetMode *******************************************************

// ********** Begin ScriptStruct FPCGExProbeConfigIndex ********************************************
struct Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExProbeConfigIndex); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExProbeConfigIndex); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeIndex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeIndex.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexSafety_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** TBD */" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeIndex.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "TBD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeIndex.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Index (Attr)" },
		{ "EditCondition", "IndexInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeIndex.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Index" },
		{ "EditCondition", "IndexInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeIndex.h" },
		{ "PCG_Overridable", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExProbeConfigIndex constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IndexSafety_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IndexSafety;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IndexInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IndexInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IndexAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexConstant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExProbeConfigIndex constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExProbeConfigIndex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics
static_assert(std::is_polymorphic<FPCGExProbeConfigIndex>() == std::is_polymorphic<FPCGExProbeConfigBase>(), "USTRUCT FPCGExProbeConfigIndex cannot be polymorphic unless super FPCGExProbeConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExProbeConfigIndex;
class UScriptStruct* FPCGExProbeConfigIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExProbeConfigIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExProbeConfigIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExProbeConfigIndex, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExProbeConfigIndex"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExProbeConfigIndex.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExProbeConfigIndex Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigIndex, Mode), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExProbeTargetMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 1297018145
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::NewProp_IndexSafety_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::NewProp_IndexSafety = { "IndexSafety", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigIndex, IndexSafety), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExIndexSafety, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexSafety_MetaData), NewProp_IndexSafety_MetaData) }; // 122057320
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::NewProp_IndexInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::NewProp_IndexInput = { "IndexInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigIndex, IndexInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexInput_MetaData), NewProp_IndexInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::NewProp_IndexAttribute = { "IndexAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigIndex, IndexAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexAttribute_MetaData), NewProp_IndexAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::NewProp_IndexConstant = { "IndexConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExProbeConfigIndex, IndexConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexConstant_MetaData), NewProp_IndexConstant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::NewProp_IndexSafety_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::NewProp_IndexSafety,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::NewProp_IndexInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::NewProp_IndexInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::NewProp_IndexAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::NewProp_IndexConstant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExProbeConfigIndex Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExProbeConfigBase,
	&NewStructOps,
	"PCGExProbeConfigIndex",
	Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::PropPointers),
	sizeof(FPCGExProbeConfigIndex),
	alignof(FPCGExProbeConfigIndex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExProbeConfigIndex()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExProbeConfigIndex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExProbeConfigIndex.InnerSingleton, Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExProbeConfigIndex.InnerSingleton);
}
// ********** End ScriptStruct FPCGExProbeConfigIndex **********************************************

// ********** Begin Class UPCGExProbeFactoryIndex **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExProbeFactoryIndex;
UClass* UPCGExProbeFactoryIndex::GetPrivateStaticClass()
{
	using TClass = UPCGExProbeFactoryIndex;
	if (!Z_Registration_Info_UClass_UPCGExProbeFactoryIndex.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExProbeFactoryIndex"),
			Z_Registration_Info_UClass_UPCGExProbeFactoryIndex.InnerSingleton,
			StaticRegisterNativesUPCGExProbeFactoryIndex,
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
	return Z_Registration_Info_UClass_UPCGExProbeFactoryIndex.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExProbeFactoryIndex_NoRegister()
{
	return UPCGExProbeFactoryIndex::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExProbeFactoryIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "////\n" },
		{ "IncludePath", "Graph/Probes/PCGExProbeIndex.h" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeIndex.h" },
		{ "PCGExNodeLibraryDoc", "clusters/connect-points/probe-index" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeIndex.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExProbeFactoryIndex constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExProbeFactoryIndex constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExProbeFactoryIndex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExProbeFactoryIndex_Statics

// ********** Begin Class UPCGExProbeFactoryIndex Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExProbeFactoryIndex_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExProbeFactoryIndex, Config), Z_Construct_UScriptStruct_FPCGExProbeConfigIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4287110229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExProbeFactoryIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExProbeFactoryIndex_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryIndex_Statics::PropPointers) < 2048);
// ********** End Class UPCGExProbeFactoryIndex Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExProbeFactoryIndex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExProbeFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryIndex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExProbeFactoryIndex_Statics::ClassParams = {
	&UPCGExProbeFactoryIndex::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExProbeFactoryIndex_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryIndex_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeFactoryIndex_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExProbeFactoryIndex_Statics::Class_MetaDataParams)
};
void UPCGExProbeFactoryIndex::StaticRegisterNativesUPCGExProbeFactoryIndex()
{
}
UClass* Z_Construct_UClass_UPCGExProbeFactoryIndex()
{
	if (!Z_Registration_Info_UClass_UPCGExProbeFactoryIndex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExProbeFactoryIndex.OuterSingleton, Z_Construct_UClass_UPCGExProbeFactoryIndex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExProbeFactoryIndex.OuterSingleton;
}
UPCGExProbeFactoryIndex::UPCGExProbeFactoryIndex(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExProbeFactoryIndex);
UPCGExProbeFactoryIndex::~UPCGExProbeFactoryIndex() {}
// ********** End Class UPCGExProbeFactoryIndex ****************************************************

// ********** Begin Class UPCGExProbeIndexProviderSettings *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExProbeIndexProviderSettings;
UClass* UPCGExProbeIndexProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExProbeIndexProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExProbeIndexProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExProbeIndexProviderSettings"),
			Z_Registration_Info_UClass_UPCGExProbeIndexProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExProbeIndexProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExProbeIndexProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExProbeIndexProviderSettings_NoRegister()
{
	return UPCGExProbeIndexProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExProbeIndexProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/Probes/PCGExProbeIndex.h" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeIndex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Filter Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/Probes/PCGExProbeIndex.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Filter Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExProbeIndexProviderSettings constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExProbeIndexProviderSettings constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExProbeIndexProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExProbeIndexProviderSettings_Statics

// ********** Begin Class UPCGExProbeIndexProviderSettings Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExProbeIndexProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExProbeIndexProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExProbeConfigIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4287110229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExProbeIndexProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExProbeIndexProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeIndexProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExProbeIndexProviderSettings Property Definitions **********************
UObject* (*const Z_Construct_UClass_UPCGExProbeIndexProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExProbeFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeIndexProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExProbeIndexProviderSettings_Statics::ClassParams = {
	&UPCGExProbeIndexProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExProbeIndexProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeIndexProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExProbeIndexProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExProbeIndexProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExProbeIndexProviderSettings::StaticRegisterNativesUPCGExProbeIndexProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExProbeIndexProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExProbeIndexProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExProbeIndexProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExProbeIndexProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExProbeIndexProviderSettings.OuterSingleton;
}
UPCGExProbeIndexProviderSettings::UPCGExProbeIndexProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExProbeIndexProviderSettings);
UPCGExProbeIndexProviderSettings::~UPCGExProbeIndexProviderSettings() {}
// ********** End Class UPCGExProbeIndexProviderSettings *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeIndex_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExProbeTargetMode_StaticEnum, TEXT("EPCGExProbeTargetMode"), &Z_Registration_Info_UEnum_EPCGExProbeTargetMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1297018145U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExProbeConfigIndex::StaticStruct, Z_Construct_UScriptStruct_FPCGExProbeConfigIndex_Statics::NewStructOps, TEXT("PCGExProbeConfigIndex"),&Z_Registration_Info_UScriptStruct_FPCGExProbeConfigIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExProbeConfigIndex), 4287110229U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExProbeFactoryIndex, UPCGExProbeFactoryIndex::StaticClass, TEXT("UPCGExProbeFactoryIndex"), &Z_Registration_Info_UClass_UPCGExProbeFactoryIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExProbeFactoryIndex), 1409640858U) },
		{ Z_Construct_UClass_UPCGExProbeIndexProviderSettings, UPCGExProbeIndexProviderSettings::StaticClass, TEXT("UPCGExProbeIndexProviderSettings"), &Z_Registration_Info_UClass_UPCGExProbeIndexProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExProbeIndexProviderSettings), 831503327U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeIndex_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeIndex_h__Script_PCGExtendedToolkit_1677587222{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeIndex_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeIndex_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeIndex_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeIndex_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeIndex_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Probes_PCGExProbeIndex_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
