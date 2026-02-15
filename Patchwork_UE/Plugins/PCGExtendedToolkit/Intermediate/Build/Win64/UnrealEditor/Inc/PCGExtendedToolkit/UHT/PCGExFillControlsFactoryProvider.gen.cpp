// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/FloodFill/FillControls/PCGExFillControlsFactoryProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFillControlsFactoryProvider() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillSettingSource();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoFillControl();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFillControlConfigBase();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExFillControlConfigBase ***************************************
struct Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExFillControlConfigBase); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExFillControlConfigBase); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlsFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlsFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportSteps_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlsFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Where to fetch the attribute from. Note that this may not be supported by all controls..*/" },
		{ "EditCondition", "bSupportSource" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlsFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Where to fetch the attribute from. Note that this may not be supported by all controls.." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steps_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PCGExtendedToolkit.EPCGExFloodFillControlStepsFlags" },
		{ "Category", "Settings" },
		{ "Comment", "/** At which diffusion step should this control be applied. Note that this may not be supported by all controls. */" },
		{ "EditCondition", "bSupportSteps" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlsFactoryProvider.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "At which diffusion step should this control be applied. Note that this may not be supported by all controls." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExFillControlConfigBase constinit property declarations *******
	static void NewProp_bSupportSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportSource;
	static void NewProp_bSupportSteps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportSteps;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Steps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExFillControlConfigBase constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExFillControlConfigBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigBase;
class UScriptStruct* FPCGExFillControlConfigBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExFillControlConfigBase, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExFillControlConfigBase"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigBase.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExFillControlConfigBase Property Definitions ******************
void Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::NewProp_bSupportSource_SetBit(void* Obj)
{
	((FPCGExFillControlConfigBase*)Obj)->bSupportSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::NewProp_bSupportSource = { "bSupportSource", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExFillControlConfigBase), &Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::NewProp_bSupportSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportSource_MetaData), NewProp_bSupportSource_MetaData) };
void Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::NewProp_bSupportSteps_SetBit(void* Obj)
{
	((FPCGExFillControlConfigBase*)Obj)->bSupportSteps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::NewProp_bSupportSteps = { "bSupportSteps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExFillControlConfigBase), &Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::NewProp_bSupportSteps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportSteps_MetaData), NewProp_bSupportSteps_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigBase, Source), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExFloodFillSettingSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 2380965155
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigBase, Steps), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steps_MetaData), NewProp_Steps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::NewProp_bSupportSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::NewProp_bSupportSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::NewProp_Steps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExFillControlConfigBase Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	&NewStructOps,
	"PCGExFillControlConfigBase",
	Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::PropPointers),
	sizeof(FPCGExFillControlConfigBase),
	alignof(FPCGExFillControlConfigBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExFillControlConfigBase()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigBase.InnerSingleton, Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigBase.InnerSingleton);
}
// ********** End ScriptStruct FPCGExFillControlConfigBase *****************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoFillControl *************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoFillControl_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDataTypeInfoFillControl); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDataTypeInfoFillControl); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlsFactoryProvider.h" },
		{ "PCG_DataTypeDisplayName", "PCGEx | Fill Control" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDataTypeInfoFillControl constinit property declarations *****
// ********** End ScriptStruct FPCGExDataTypeInfoFillControl constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDataTypeInfoFillControl>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoFillControl_Statics
static_assert(std::is_polymorphic<FPCGExDataTypeInfoFillControl>() == std::is_polymorphic<FPCGExFactoryDataTypeInfo>(), "USTRUCT FPCGExDataTypeInfoFillControl cannot be polymorphic unless super FPCGExFactoryDataTypeInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoFillControl;
class UScriptStruct* FPCGExDataTypeInfoFillControl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoFillControl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoFillControl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDataTypeInfoFillControl, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDataTypeInfoFillControl"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoFillControl.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDataTypeInfoFillControl_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo,
	&NewStructOps,
	"PCGExDataTypeInfoFillControl",
	nullptr,
	0,
	sizeof(FPCGExDataTypeInfoFillControl),
	alignof(FPCGExDataTypeInfoFillControl),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDataTypeInfoFillControl_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDataTypeInfoFillControl_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoFillControl()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoFillControl.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoFillControl.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDataTypeInfoFillControl_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoFillControl.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDataTypeInfoFillControl ***************************************

// ********** Begin Class UPCGExFillControlsFactoryData ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFillControlsFactoryData;
UClass* UPCGExFillControlsFactoryData::GetPrivateStaticClass()
{
	using TClass = UPCGExFillControlsFactoryData;
	if (!Z_Registration_Info_UClass_UPCGExFillControlsFactoryData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFillControlsFactoryData"),
			Z_Registration_Info_UClass_UPCGExFillControlsFactoryData.InnerSingleton,
			StaticRegisterNativesUPCGExFillControlsFactoryData,
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
	return Z_Registration_Info_UClass_UPCGExFillControlsFactoryData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFillControlsFactoryData_NoRegister()
{
	return UPCGExFillControlsFactoryData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFillControlsFactoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/FloodFill/FillControls/PCGExFillControlsFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlsFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFillControlsFactoryData constinit property declarations ************
// ********** End Class UPCGExFillControlsFactoryData constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFillControlsFactoryData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFillControlsFactoryData_Statics
UObject* (*const Z_Construct_UClass_UPCGExFillControlsFactoryData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFillControlsFactoryData_Statics::ClassParams = {
	&UPCGExFillControlsFactoryData::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFillControlsFactoryData_Statics::Class_MetaDataParams)
};
void UPCGExFillControlsFactoryData::StaticRegisterNativesUPCGExFillControlsFactoryData()
{
}
UClass* Z_Construct_UClass_UPCGExFillControlsFactoryData()
{
	if (!Z_Registration_Info_UClass_UPCGExFillControlsFactoryData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFillControlsFactoryData.OuterSingleton, Z_Construct_UClass_UPCGExFillControlsFactoryData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFillControlsFactoryData.OuterSingleton;
}
UPCGExFillControlsFactoryData::UPCGExFillControlsFactoryData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFillControlsFactoryData);
UPCGExFillControlsFactoryData::~UPCGExFillControlsFactoryData() {}
// ********** End Class UPCGExFillControlsFactoryData **********************************************

// ********** Begin Class UPCGExFillControlsFactoryProviderSettings ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFillControlsFactoryProviderSettings;
UClass* UPCGExFillControlsFactoryProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFillControlsFactoryProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExFillControlsFactoryProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFillControlsFactoryProviderSettings"),
			Z_Registration_Info_UClass_UPCGExFillControlsFactoryProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFillControlsFactoryProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExFillControlsFactoryProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings_NoRegister()
{
	return UPCGExFillControlsFactoryProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/FloodFill/FillControls/PCGExFillControlsFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlsFactoryProvider.h" },
		{ "PCGExNodeLibraryDoc", "TBD" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFillControlsFactoryProviderSettings constinit property declarations 
// ********** End Class UPCGExFillControlsFactoryProviderSettings constinit property declarations **
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFillControlsFactoryProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings_Statics
UObject* (*const Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings_Statics::ClassParams = {
	&UPCGExFillControlsFactoryProviderSettings::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExFillControlsFactoryProviderSettings::StaticRegisterNativesUPCGExFillControlsFactoryProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFillControlsFactoryProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFillControlsFactoryProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFillControlsFactoryProviderSettings.OuterSingleton;
}
UPCGExFillControlsFactoryProviderSettings::UPCGExFillControlsFactoryProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFillControlsFactoryProviderSettings);
UPCGExFillControlsFactoryProviderSettings::~UPCGExFillControlsFactoryProviderSettings() {}
// ********** End Class UPCGExFillControlsFactoryProviderSettings **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlsFactoryProvider_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExFillControlConfigBase::StaticStruct, Z_Construct_UScriptStruct_FPCGExFillControlConfigBase_Statics::NewStructOps, TEXT("PCGExFillControlConfigBase"),&Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExFillControlConfigBase), 3963073393U) },
		{ FPCGExDataTypeInfoFillControl::StaticStruct, Z_Construct_UScriptStruct_FPCGExDataTypeInfoFillControl_Statics::NewStructOps, TEXT("PCGExDataTypeInfoFillControl"),&Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoFillControl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDataTypeInfoFillControl), 3295256630U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFillControlsFactoryData, UPCGExFillControlsFactoryData::StaticClass, TEXT("UPCGExFillControlsFactoryData"), &Z_Registration_Info_UClass_UPCGExFillControlsFactoryData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFillControlsFactoryData), 7149129U) },
		{ Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings, UPCGExFillControlsFactoryProviderSettings::StaticClass, TEXT("UPCGExFillControlsFactoryProviderSettings"), &Z_Registration_Info_UClass_UPCGExFillControlsFactoryProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFillControlsFactoryProviderSettings), 404912343U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlsFactoryProvider_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlsFactoryProvider_h__Script_PCGExtendedToolkit_1887220093{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlsFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlsFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlsFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlsFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
