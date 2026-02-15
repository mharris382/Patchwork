// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/FloodFill/FillControls/PCGExFillControlDepth.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFillControlDepth() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryDepth();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryDepth_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFillControlConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExFillControlConfigDepth **************************************
struct Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExFillControlConfigDepth); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExFillControlConfigDepth); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlDepth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDepthInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlDepth.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDepthAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Max depth Attribute */" },
		{ "DisplayName", "Max Depth (Attr)" },
		{ "EditCondition", "MaxDepthInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlDepth.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max depth Attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDepth_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Max depth Constant */" },
		{ "DisplayName", "Max Depth" },
		{ "EditCondition", "MaxDepthInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlDepth.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max depth Constant" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExFillControlConfigDepth constinit property declarations ******
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxDepthInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaxDepthInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaxDepthAttribute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExFillControlConfigDepth constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExFillControlConfigDepth>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics
static_assert(std::is_polymorphic<FPCGExFillControlConfigDepth>() == std::is_polymorphic<FPCGExFillControlConfigBase>(), "USTRUCT FPCGExFillControlConfigDepth cannot be polymorphic unless super FPCGExFillControlConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigDepth;
class UScriptStruct* FPCGExFillControlConfigDepth::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigDepth.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigDepth.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExFillControlConfigDepth"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigDepth.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExFillControlConfigDepth Property Definitions *****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics::NewProp_MaxDepthInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics::NewProp_MaxDepthInput = { "MaxDepthInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigDepth, MaxDepthInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDepthInput_MetaData), NewProp_MaxDepthInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics::NewProp_MaxDepthAttribute = { "MaxDepthAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigDepth, MaxDepthAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDepthAttribute_MetaData), NewProp_MaxDepthAttribute_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics::NewProp_MaxDepth = { "MaxDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigDepth, MaxDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDepth_MetaData), NewProp_MaxDepth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics::NewProp_MaxDepthInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics::NewProp_MaxDepthInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics::NewProp_MaxDepthAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics::NewProp_MaxDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExFillControlConfigDepth Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFillControlConfigBase,
	&NewStructOps,
	"PCGExFillControlConfigDepth",
	Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics::PropPointers),
	sizeof(FPCGExFillControlConfigDepth),
	alignof(FPCGExFillControlConfigDepth),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigDepth.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigDepth.InnerSingleton, Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigDepth.InnerSingleton);
}
// ********** End ScriptStruct FPCGExFillControlConfigDepth ****************************************

// ********** Begin Class UPCGExFillControlsFactoryDepth *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFillControlsFactoryDepth;
UClass* UPCGExFillControlsFactoryDepth::GetPrivateStaticClass()
{
	using TClass = UPCGExFillControlsFactoryDepth;
	if (!Z_Registration_Info_UClass_UPCGExFillControlsFactoryDepth.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFillControlsFactoryDepth"),
			Z_Registration_Info_UClass_UPCGExFillControlsFactoryDepth.InnerSingleton,
			StaticRegisterNativesUPCGExFillControlsFactoryDepth,
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
	return Z_Registration_Info_UClass_UPCGExFillControlsFactoryDepth.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFillControlsFactoryDepth_NoRegister()
{
	return UPCGExFillControlsFactoryDepth::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFillControlsFactoryDepth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/FloodFill/FillControls/PCGExFillControlDepth.h" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlDepth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlDepth.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFillControlsFactoryDepth constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFillControlsFactoryDepth constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFillControlsFactoryDepth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFillControlsFactoryDepth_Statics

// ********** Begin Class UPCGExFillControlsFactoryDepth Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFillControlsFactoryDepth_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFillControlsFactoryDepth, Config), Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 180147322
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFillControlsFactoryDepth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFillControlsFactoryDepth_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryDepth_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFillControlsFactoryDepth Property Definitions ************************
UObject* (*const Z_Construct_UClass_UPCGExFillControlsFactoryDepth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFillControlsFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryDepth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFillControlsFactoryDepth_Statics::ClassParams = {
	&UPCGExFillControlsFactoryDepth::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFillControlsFactoryDepth_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryDepth_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryDepth_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFillControlsFactoryDepth_Statics::Class_MetaDataParams)
};
void UPCGExFillControlsFactoryDepth::StaticRegisterNativesUPCGExFillControlsFactoryDepth()
{
}
UClass* Z_Construct_UClass_UPCGExFillControlsFactoryDepth()
{
	if (!Z_Registration_Info_UClass_UPCGExFillControlsFactoryDepth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFillControlsFactoryDepth.OuterSingleton, Z_Construct_UClass_UPCGExFillControlsFactoryDepth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFillControlsFactoryDepth.OuterSingleton;
}
UPCGExFillControlsFactoryDepth::UPCGExFillControlsFactoryDepth(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFillControlsFactoryDepth);
UPCGExFillControlsFactoryDepth::~UPCGExFillControlsFactoryDepth() {}
// ********** End Class UPCGExFillControlsFactoryDepth *********************************************

// ********** Begin Class UPCGExFillControlsDepthProviderSettings **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFillControlsDepthProviderSettings;
UClass* UPCGExFillControlsDepthProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFillControlsDepthProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExFillControlsDepthProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFillControlsDepthProviderSettings"),
			Z_Registration_Info_UClass_UPCGExFillControlsDepthProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFillControlsDepthProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExFillControlsDepthProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings_NoRegister()
{
	return UPCGExFillControlsDepthProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/FloodFill/FillControls/PCGExFillControlDepth.h" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlDepth.h" },
		{ "PCGExNodeLibraryDoc", "clusters/flood-fill/fc-depth" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Control Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlDepth.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Control Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFillControlsDepthProviderSettings constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFillControlsDepthProviderSettings constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFillControlsDepthProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings_Statics

// ********** Begin Class UPCGExFillControlsDepthProviderSettings Property Definitions *************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFillControlsDepthProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 180147322
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFillControlsDepthProviderSettings Property Definitions ***************
UObject* (*const Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings_Statics::ClassParams = {
	&UPCGExFillControlsDepthProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExFillControlsDepthProviderSettings::StaticRegisterNativesUPCGExFillControlsDepthProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFillControlsDepthProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFillControlsDepthProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFillControlsDepthProviderSettings.OuterSingleton;
}
UPCGExFillControlsDepthProviderSettings::UPCGExFillControlsDepthProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFillControlsDepthProviderSettings);
UPCGExFillControlsDepthProviderSettings::~UPCGExFillControlsDepthProviderSettings() {}
// ********** End Class UPCGExFillControlsDepthProviderSettings ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlDepth_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExFillControlConfigDepth::StaticStruct, Z_Construct_UScriptStruct_FPCGExFillControlConfigDepth_Statics::NewStructOps, TEXT("PCGExFillControlConfigDepth"),&Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigDepth, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExFillControlConfigDepth), 180147322U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFillControlsFactoryDepth, UPCGExFillControlsFactoryDepth::StaticClass, TEXT("UPCGExFillControlsFactoryDepth"), &Z_Registration_Info_UClass_UPCGExFillControlsFactoryDepth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFillControlsFactoryDepth), 1323692329U) },
		{ Z_Construct_UClass_UPCGExFillControlsDepthProviderSettings, UPCGExFillControlsDepthProviderSettings::StaticClass, TEXT("UPCGExFillControlsDepthProviderSettings"), &Z_Registration_Info_UClass_UPCGExFillControlsDepthProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFillControlsDepthProviderSettings), 717450924U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlDepth_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlDepth_h__Script_PCGExtendedToolkit_1397813314{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlDepth_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlDepth_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlDepth_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlDepth_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
