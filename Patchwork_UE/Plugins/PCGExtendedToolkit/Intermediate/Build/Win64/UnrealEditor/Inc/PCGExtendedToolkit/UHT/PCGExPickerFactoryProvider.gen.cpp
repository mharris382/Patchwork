// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/Pickers/PCGExPickerFactoryProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExPickerFactoryProvider() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickerFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickerFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickerFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExPickerFactoryProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoPicker();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoPicker ******************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoPicker_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDataTypeInfoPicker); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDataTypeInfoPicker); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerFactoryProvider.h" },
		{ "PCG_DataTypeDisplayName", "PCGEx | Picker" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDataTypeInfoPicker constinit property declarations **********
// ********** End ScriptStruct FPCGExDataTypeInfoPicker constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDataTypeInfoPicker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoPicker_Statics
static_assert(std::is_polymorphic<FPCGExDataTypeInfoPicker>() == std::is_polymorphic<FPCGExFactoryDataTypeInfo>(), "USTRUCT FPCGExDataTypeInfoPicker cannot be polymorphic unless super FPCGExFactoryDataTypeInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoPicker;
class UScriptStruct* FPCGExDataTypeInfoPicker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoPicker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoPicker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDataTypeInfoPicker, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDataTypeInfoPicker"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoPicker.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDataTypeInfoPicker_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo,
	&NewStructOps,
	"PCGExDataTypeInfoPicker",
	nullptr,
	0,
	sizeof(FPCGExDataTypeInfoPicker),
	alignof(FPCGExDataTypeInfoPicker),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDataTypeInfoPicker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDataTypeInfoPicker_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoPicker()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoPicker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoPicker.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDataTypeInfoPicker_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoPicker.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDataTypeInfoPicker ********************************************

// ********** Begin Class UPCGExPickerFactoryData **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPickerFactoryData;
UClass* UPCGExPickerFactoryData::GetPrivateStaticClass()
{
	using TClass = UPCGExPickerFactoryData;
	if (!Z_Registration_Info_UClass_UPCGExPickerFactoryData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPickerFactoryData"),
			Z_Registration_Info_UClass_UPCGExPickerFactoryData.InnerSingleton,
			StaticRegisterNativesUPCGExPickerFactoryData,
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
	return Z_Registration_Info_UClass_UPCGExPickerFactoryData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPickerFactoryData_NoRegister()
{
	return UPCGExPickerFactoryData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPickerFactoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/Pickers/PCGExPickerFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiscretePicks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativePicks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPickerFactoryData constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_DiscretePicks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DiscretePicks;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RelativePicks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RelativePicks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExPickerFactoryData constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPickerFactoryData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPickerFactoryData_Statics

// ********** Begin Class UPCGExPickerFactoryData Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExPickerFactoryData_Statics::NewProp_DiscretePicks_Inner = { "DiscretePicks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExPickerFactoryData_Statics::NewProp_DiscretePicks = { "DiscretePicks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPickerFactoryData, DiscretePicks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiscretePicks_MetaData), NewProp_DiscretePicks_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExPickerFactoryData_Statics::NewProp_RelativePicks_Inner = { "RelativePicks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGExPickerFactoryData_Statics::NewProp_RelativePicks = { "RelativePicks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExPickerFactoryData, RelativePicks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativePicks_MetaData), NewProp_RelativePicks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExPickerFactoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickerFactoryData_Statics::NewProp_DiscretePicks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickerFactoryData_Statics::NewProp_DiscretePicks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickerFactoryData_Statics::NewProp_RelativePicks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExPickerFactoryData_Statics::NewProp_RelativePicks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerFactoryData_Statics::PropPointers) < 2048);
// ********** End Class UPCGExPickerFactoryData Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExPickerFactoryData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerFactoryData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPickerFactoryData_Statics::ClassParams = {
	&UPCGExPickerFactoryData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExPickerFactoryData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerFactoryData_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerFactoryData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPickerFactoryData_Statics::Class_MetaDataParams)
};
void UPCGExPickerFactoryData::StaticRegisterNativesUPCGExPickerFactoryData()
{
}
UClass* Z_Construct_UClass_UPCGExPickerFactoryData()
{
	if (!Z_Registration_Info_UClass_UPCGExPickerFactoryData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPickerFactoryData.OuterSingleton, Z_Construct_UClass_UPCGExPickerFactoryData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPickerFactoryData.OuterSingleton;
}
UPCGExPickerFactoryData::UPCGExPickerFactoryData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPickerFactoryData);
UPCGExPickerFactoryData::~UPCGExPickerFactoryData() {}
// ********** End Class UPCGExPickerFactoryData ****************************************************

// ********** Begin Class UPCGExPickerFactoryProviderSettings **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExPickerFactoryProviderSettings;
UClass* UPCGExPickerFactoryProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExPickerFactoryProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExPickerFactoryProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExPickerFactoryProviderSettings"),
			Z_Registration_Info_UClass_UPCGExPickerFactoryProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExPickerFactoryProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExPickerFactoryProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExPickerFactoryProviderSettings_NoRegister()
{
	return UPCGExPickerFactoryProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExPickerFactoryProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Misc/Pickers/PCGExPickerFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Misc/Pickers/PCGExPickerFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExPickerFactoryProviderSettings constinit property declarations ******
// ********** End Class UPCGExPickerFactoryProviderSettings constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExPickerFactoryProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExPickerFactoryProviderSettings_Statics
UObject* (*const Z_Construct_UClass_UPCGExPickerFactoryProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerFactoryProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExPickerFactoryProviderSettings_Statics::ClassParams = {
	&UPCGExPickerFactoryProviderSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExPickerFactoryProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExPickerFactoryProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExPickerFactoryProviderSettings::StaticRegisterNativesUPCGExPickerFactoryProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExPickerFactoryProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExPickerFactoryProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExPickerFactoryProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExPickerFactoryProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExPickerFactoryProviderSettings.OuterSingleton;
}
UPCGExPickerFactoryProviderSettings::UPCGExPickerFactoryProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExPickerFactoryProviderSettings);
UPCGExPickerFactoryProviderSettings::~UPCGExPickerFactoryProviderSettings() {}
// ********** End Class UPCGExPickerFactoryProviderSettings ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerFactoryProvider_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExDataTypeInfoPicker::StaticStruct, Z_Construct_UScriptStruct_FPCGExDataTypeInfoPicker_Statics::NewStructOps, TEXT("PCGExDataTypeInfoPicker"),&Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoPicker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDataTypeInfoPicker), 1609419301U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExPickerFactoryData, UPCGExPickerFactoryData::StaticClass, TEXT("UPCGExPickerFactoryData"), &Z_Registration_Info_UClass_UPCGExPickerFactoryData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPickerFactoryData), 269371778U) },
		{ Z_Construct_UClass_UPCGExPickerFactoryProviderSettings, UPCGExPickerFactoryProviderSettings::StaticClass, TEXT("UPCGExPickerFactoryProviderSettings"), &Z_Registration_Info_UClass_UPCGExPickerFactoryProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExPickerFactoryProviderSettings), 1107288862U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerFactoryProvider_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerFactoryProvider_h__Script_PCGExtendedToolkit_1320979560{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Misc_Pickers_PCGExPickerFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
