// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/FloodFill/FillControls/PCGExFillControlCount.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFillControlCount() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsCountProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsCountProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryCount();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryCount_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFillControlConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFillControlConfigCount();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExFillControlConfigCount **************************************
struct Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExFillControlConfigCount); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExFillControlConfigCount); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlCount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCountInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlCount.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCountAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Max Count Attribute */" },
		{ "DisplayName", "Max Count (Attr)" },
		{ "EditCondition", "MaxCountInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlCount.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max Count Attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Max Count Constant */" },
		{ "DisplayName", "Max Count" },
		{ "EditCondition", "MaxCountInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlCount.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max Count Constant" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExFillControlConfigCount constinit property declarations ******
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxCountInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaxCountInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaxCountAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExFillControlConfigCount constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExFillControlConfigCount>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics
static_assert(std::is_polymorphic<FPCGExFillControlConfigCount>() == std::is_polymorphic<FPCGExFillControlConfigBase>(), "USTRUCT FPCGExFillControlConfigCount cannot be polymorphic unless super FPCGExFillControlConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigCount;
class UScriptStruct* FPCGExFillControlConfigCount::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigCount.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigCount.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExFillControlConfigCount, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExFillControlConfigCount"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigCount.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExFillControlConfigCount Property Definitions *****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics::NewProp_MaxCountInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics::NewProp_MaxCountInput = { "MaxCountInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigCount, MaxCountInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCountInput_MetaData), NewProp_MaxCountInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics::NewProp_MaxCountAttribute = { "MaxCountAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigCount, MaxCountAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCountAttribute_MetaData), NewProp_MaxCountAttribute_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigCount, MaxCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCount_MetaData), NewProp_MaxCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics::NewProp_MaxCountInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics::NewProp_MaxCountInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics::NewProp_MaxCountAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics::NewProp_MaxCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExFillControlConfigCount Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFillControlConfigBase,
	&NewStructOps,
	"PCGExFillControlConfigCount",
	Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics::PropPointers),
	sizeof(FPCGExFillControlConfigCount),
	alignof(FPCGExFillControlConfigCount),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExFillControlConfigCount()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigCount.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigCount.InnerSingleton, Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigCount.InnerSingleton);
}
// ********** End ScriptStruct FPCGExFillControlConfigCount ****************************************

// ********** Begin Class UPCGExFillControlsFactoryCount *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFillControlsFactoryCount;
UClass* UPCGExFillControlsFactoryCount::GetPrivateStaticClass()
{
	using TClass = UPCGExFillControlsFactoryCount;
	if (!Z_Registration_Info_UClass_UPCGExFillControlsFactoryCount.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFillControlsFactoryCount"),
			Z_Registration_Info_UClass_UPCGExFillControlsFactoryCount.InnerSingleton,
			StaticRegisterNativesUPCGExFillControlsFactoryCount,
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
	return Z_Registration_Info_UClass_UPCGExFillControlsFactoryCount.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFillControlsFactoryCount_NoRegister()
{
	return UPCGExFillControlsFactoryCount::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFillControlsFactoryCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/FloodFill/FillControls/PCGExFillControlCount.h" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlCount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlCount.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFillControlsFactoryCount constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFillControlsFactoryCount constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFillControlsFactoryCount>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFillControlsFactoryCount_Statics

// ********** Begin Class UPCGExFillControlsFactoryCount Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFillControlsFactoryCount_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFillControlsFactoryCount, Config), Z_Construct_UScriptStruct_FPCGExFillControlConfigCount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1324560502
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFillControlsFactoryCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFillControlsFactoryCount_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryCount_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFillControlsFactoryCount Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExFillControlsFactoryCount_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFillControlsFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryCount_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFillControlsFactoryCount_Statics::ClassParams = {
	&UPCGExFillControlsFactoryCount::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFillControlsFactoryCount_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryCount_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryCount_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFillControlsFactoryCount_Statics::Class_MetaDataParams)
};
void UPCGExFillControlsFactoryCount::StaticRegisterNativesUPCGExFillControlsFactoryCount()
{
}
UClass* Z_Construct_UClass_UPCGExFillControlsFactoryCount()
{
	if (!Z_Registration_Info_UClass_UPCGExFillControlsFactoryCount.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFillControlsFactoryCount.OuterSingleton, Z_Construct_UClass_UPCGExFillControlsFactoryCount_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFillControlsFactoryCount.OuterSingleton;
}
UPCGExFillControlsFactoryCount::UPCGExFillControlsFactoryCount(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFillControlsFactoryCount);
UPCGExFillControlsFactoryCount::~UPCGExFillControlsFactoryCount() {}
// ********** End Class UPCGExFillControlsFactoryCount *********************************************

// ********** Begin Class UPCGExFillControlsCountProviderSettings **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFillControlsCountProviderSettings;
UClass* UPCGExFillControlsCountProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFillControlsCountProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExFillControlsCountProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFillControlsCountProviderSettings"),
			Z_Registration_Info_UClass_UPCGExFillControlsCountProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFillControlsCountProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExFillControlsCountProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFillControlsCountProviderSettings_NoRegister()
{
	return UPCGExFillControlsCountProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFillControlsCountProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/FloodFill/FillControls/PCGExFillControlCount.h" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlCount.h" },
		{ "PCGExNodeLibraryDoc", "clusters/flood-fill/fc-count" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Control Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlCount.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Control Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFillControlsCountProviderSettings constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFillControlsCountProviderSettings constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFillControlsCountProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFillControlsCountProviderSettings_Statics

// ********** Begin Class UPCGExFillControlsCountProviderSettings Property Definitions *************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFillControlsCountProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFillControlsCountProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExFillControlConfigCount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1324560502
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFillControlsCountProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFillControlsCountProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsCountProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFillControlsCountProviderSettings Property Definitions ***************
UObject* (*const Z_Construct_UClass_UPCGExFillControlsCountProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsCountProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFillControlsCountProviderSettings_Statics::ClassParams = {
	&UPCGExFillControlsCountProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFillControlsCountProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsCountProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsCountProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFillControlsCountProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExFillControlsCountProviderSettings::StaticRegisterNativesUPCGExFillControlsCountProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExFillControlsCountProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFillControlsCountProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFillControlsCountProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExFillControlsCountProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFillControlsCountProviderSettings.OuterSingleton;
}
UPCGExFillControlsCountProviderSettings::UPCGExFillControlsCountProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFillControlsCountProviderSettings);
UPCGExFillControlsCountProviderSettings::~UPCGExFillControlsCountProviderSettings() {}
// ********** End Class UPCGExFillControlsCountProviderSettings ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlCount_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExFillControlConfigCount::StaticStruct, Z_Construct_UScriptStruct_FPCGExFillControlConfigCount_Statics::NewStructOps, TEXT("PCGExFillControlConfigCount"),&Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigCount, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExFillControlConfigCount), 1324560502U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFillControlsFactoryCount, UPCGExFillControlsFactoryCount::StaticClass, TEXT("UPCGExFillControlsFactoryCount"), &Z_Registration_Info_UClass_UPCGExFillControlsFactoryCount, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFillControlsFactoryCount), 2815132264U) },
		{ Z_Construct_UClass_UPCGExFillControlsCountProviderSettings, UPCGExFillControlsCountProviderSettings::StaticClass, TEXT("UPCGExFillControlsCountProviderSettings"), &Z_Registration_Info_UClass_UPCGExFillControlsCountProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFillControlsCountProviderSettings), 3694210486U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlCount_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlCount_h__Script_PCGExtendedToolkit_1238632445{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlCount_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlCount_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlCount_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlCount_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
