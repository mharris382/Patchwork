// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Transform/Tensors/PCGExTensorFactoryProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExTensorFactoryProvider() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPointFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPointFactoryData_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoTensor();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExDataTypeInfoTensor ******************************************
struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoTensor_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExDataTypeInfoTensor); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExDataTypeInfoTensor); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorFactoryProvider.h" },
		{ "PCG_DataTypeDisplayName", "PCGEx | Tensor" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExDataTypeInfoTensor constinit property declarations **********
// ********** End ScriptStruct FPCGExDataTypeInfoTensor constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExDataTypeInfoTensor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExDataTypeInfoTensor_Statics
static_assert(std::is_polymorphic<FPCGExDataTypeInfoTensor>() == std::is_polymorphic<FPCGExFactoryDataTypeInfo>(), "USTRUCT FPCGExDataTypeInfoTensor cannot be polymorphic unless super FPCGExFactoryDataTypeInfo is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoTensor;
class UScriptStruct* FPCGExDataTypeInfoTensor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoTensor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoTensor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExDataTypeInfoTensor, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExDataTypeInfoTensor"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoTensor.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExDataTypeInfoTensor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFactoryDataTypeInfo,
	&NewStructOps,
	"PCGExDataTypeInfoTensor",
	nullptr,
	0,
	sizeof(FPCGExDataTypeInfoTensor),
	alignof(FPCGExDataTypeInfoTensor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExDataTypeInfoTensor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExDataTypeInfoTensor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExDataTypeInfoTensor()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoTensor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoTensor.InnerSingleton, Z_Construct_UScriptStruct_FPCGExDataTypeInfoTensor_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoTensor.InnerSingleton);
}
// ********** End ScriptStruct FPCGExDataTypeInfoTensor ********************************************

// ********** Begin Class UPCGExTensorFactoryData **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorFactoryData;
UClass* UPCGExTensorFactoryData::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorFactoryData;
	if (!Z_Registration_Info_UClass_UPCGExTensorFactoryData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorFactoryData"),
			Z_Registration_Info_UClass_UPCGExTensorFactoryData.InnerSingleton,
			StaticRegisterNativesUPCGExTensorFactoryData,
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
	return Z_Registration_Info_UClass_UPCGExTensorFactoryData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorFactoryData_NoRegister()
{
	return UPCGExTensorFactoryData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorFactoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorFactoryData constinit property declarations ******************
// ********** End Class UPCGExTensorFactoryData constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorFactoryData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorFactoryData_Statics
UObject* (*const Z_Construct_UClass_UPCGExTensorFactoryData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorFactoryData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorFactoryData_Statics::ClassParams = {
	&UPCGExTensorFactoryData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorFactoryData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorFactoryData_Statics::Class_MetaDataParams)
};
void UPCGExTensorFactoryData::StaticRegisterNativesUPCGExTensorFactoryData()
{
}
UClass* Z_Construct_UClass_UPCGExTensorFactoryData()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorFactoryData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorFactoryData.OuterSingleton, Z_Construct_UClass_UPCGExTensorFactoryData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorFactoryData.OuterSingleton;
}
UPCGExTensorFactoryData::UPCGExTensorFactoryData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorFactoryData);
UPCGExTensorFactoryData::~UPCGExTensorFactoryData() {}
// ********** End Class UPCGExTensorFactoryData ****************************************************

// ********** Begin Class UPCGExTensorFactoryProviderSettings **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorFactoryProviderSettings;
UClass* UPCGExTensorFactoryProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorFactoryProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExTensorFactoryProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorFactoryProviderSettings"),
			Z_Registration_Info_UClass_UPCGExTensorFactoryProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExTensorFactoryProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExTensorFactoryProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_NoRegister()
{
	return UPCGExTensorFactoryProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorFactoryProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tensor Priority, only accounted for by if sampler is in any Ordered- mode.*/" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorFactoryProvider.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Tensor Priority, only accounted for by if sampler is in any Ordered- mode." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorFactoryProviderSettings constinit property declarations ******
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExTensorFactoryProviderSettings constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorFactoryProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_Statics

// ********** Begin Class UPCGExTensorFactoryProviderSettings Property Definitions *****************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExTensorFactoryProviderSettings, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExTensorFactoryProviderSettings Property Definitions *******************
UObject* (*const Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_Statics::ClassParams = {
	&UPCGExTensorFactoryProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExTensorFactoryProviderSettings::StaticRegisterNativesUPCGExTensorFactoryProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExTensorFactoryProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorFactoryProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorFactoryProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExTensorFactoryProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorFactoryProviderSettings.OuterSingleton;
}
UPCGExTensorFactoryProviderSettings::UPCGExTensorFactoryProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorFactoryProviderSettings);
UPCGExTensorFactoryProviderSettings::~UPCGExTensorFactoryProviderSettings() {}
// ********** End Class UPCGExTensorFactoryProviderSettings ****************************************

// ********** Begin Class UPCGExTensorPointFactoryData *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorPointFactoryData;
UClass* UPCGExTensorPointFactoryData::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorPointFactoryData;
	if (!Z_Registration_Info_UClass_UPCGExTensorPointFactoryData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorPointFactoryData"),
			Z_Registration_Info_UClass_UPCGExTensorPointFactoryData.InnerSingleton,
			StaticRegisterNativesUPCGExTensorPointFactoryData,
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
	return Z_Registration_Info_UClass_UPCGExTensorPointFactoryData.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorPointFactoryData_NoRegister()
{
	return UPCGExTensorPointFactoryData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorPointFactoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorPointFactoryData constinit property declarations *************
// ********** End Class UPCGExTensorPointFactoryData constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorPointFactoryData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorPointFactoryData_Statics
UObject* (*const Z_Construct_UClass_UPCGExTensorPointFactoryData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorPointFactoryData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorPointFactoryData_Statics::ClassParams = {
	&UPCGExTensorPointFactoryData::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorPointFactoryData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorPointFactoryData_Statics::Class_MetaDataParams)
};
void UPCGExTensorPointFactoryData::StaticRegisterNativesUPCGExTensorPointFactoryData()
{
}
UClass* Z_Construct_UClass_UPCGExTensorPointFactoryData()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorPointFactoryData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorPointFactoryData.OuterSingleton, Z_Construct_UClass_UPCGExTensorPointFactoryData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorPointFactoryData.OuterSingleton;
}
UPCGExTensorPointFactoryData::UPCGExTensorPointFactoryData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorPointFactoryData);
UPCGExTensorPointFactoryData::~UPCGExTensorPointFactoryData() {}
// ********** End Class UPCGExTensorPointFactoryData ***********************************************

// ********** Begin Class UPCGExTensorPointFactoryProviderSettings *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExTensorPointFactoryProviderSettings;
UClass* UPCGExTensorPointFactoryProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExTensorPointFactoryProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExTensorPointFactoryProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExTensorPointFactoryProviderSettings"),
			Z_Registration_Info_UClass_UPCGExTensorPointFactoryProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExTensorPointFactoryProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExTensorPointFactoryProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings_NoRegister()
{
	return UPCGExTensorPointFactoryProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Transform/Tensors/PCGExTensorFactoryProvider.h" },
		{ "ModuleRelativePath", "Public/Transform/Tensors/PCGExTensorFactoryProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExTensorPointFactoryProviderSettings constinit property declarations *
// ********** End Class UPCGExTensorPointFactoryProviderSettings constinit property declarations ***
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExTensorPointFactoryProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings_Statics
UObject* (*const Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExTensorFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings_Statics::ClassParams = {
	&UPCGExTensorPointFactoryProviderSettings::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExTensorPointFactoryProviderSettings::StaticRegisterNativesUPCGExTensorPointFactoryProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExTensorPointFactoryProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExTensorPointFactoryProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExTensorPointFactoryProviderSettings.OuterSingleton;
}
UPCGExTensorPointFactoryProviderSettings::UPCGExTensorPointFactoryProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExTensorPointFactoryProviderSettings);
UPCGExTensorPointFactoryProviderSettings::~UPCGExTensorPointFactoryProviderSettings() {}
// ********** End Class UPCGExTensorPointFactoryProviderSettings ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExDataTypeInfoTensor::StaticStruct, Z_Construct_UScriptStruct_FPCGExDataTypeInfoTensor_Statics::NewStructOps, TEXT("PCGExDataTypeInfoTensor"),&Z_Registration_Info_UScriptStruct_FPCGExDataTypeInfoTensor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExDataTypeInfoTensor), 1166102046U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExTensorFactoryData, UPCGExTensorFactoryData::StaticClass, TEXT("UPCGExTensorFactoryData"), &Z_Registration_Info_UClass_UPCGExTensorFactoryData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorFactoryData), 3985497083U) },
		{ Z_Construct_UClass_UPCGExTensorFactoryProviderSettings, UPCGExTensorFactoryProviderSettings::StaticClass, TEXT("UPCGExTensorFactoryProviderSettings"), &Z_Registration_Info_UClass_UPCGExTensorFactoryProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorFactoryProviderSettings), 3601924327U) },
		{ Z_Construct_UClass_UPCGExTensorPointFactoryData, UPCGExTensorPointFactoryData::StaticClass, TEXT("UPCGExTensorPointFactoryData"), &Z_Registration_Info_UClass_UPCGExTensorPointFactoryData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorPointFactoryData), 2624052958U) },
		{ Z_Construct_UClass_UPCGExTensorPointFactoryProviderSettings, UPCGExTensorPointFactoryProviderSettings::StaticClass, TEXT("UPCGExTensorPointFactoryProviderSettings"), &Z_Registration_Info_UClass_UPCGExTensorPointFactoryProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExTensorPointFactoryProviderSettings), 1746491948U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h__Script_PCGExtendedToolkit_3998297442{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Transform_Tensors_PCGExTensorFactoryProvider_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
