// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGExHelpers.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExHelpers() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExComponentCallback();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExComponentCallback_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFunctionPrototypes();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFunctionPrototypes_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExManagedComponentInterface();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExManagedComponentInterface_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExManagedObjectInterface();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExManagedObjectInterface_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointNativeProperties();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointPropertyOutput();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExPointPropertyOutput *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPointPropertyOutput;
static UEnum* EPCGExPointPropertyOutput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPointPropertyOutput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPointPropertyOutput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointPropertyOutput, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPointPropertyOutput"));
	}
	return Z_Registration_Info_UEnum_EPCGExPointPropertyOutput.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPointPropertyOutput>()
{
	return EPCGExPointPropertyOutput_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointPropertyOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ColorA.DisplayName", "A Channel" },
		{ "ColorA.Name", "EPCGExPointPropertyOutput::ColorA" },
		{ "ColorA.Tooltip", "..." },
		{ "ColorB.DisplayName", "B Channel" },
		{ "ColorB.Name", "EPCGExPointPropertyOutput::ColorB" },
		{ "ColorB.Tooltip", "..." },
		{ "ColorG.DisplayName", "G Channel" },
		{ "ColorG.Name", "EPCGExPointPropertyOutput::ColorG" },
		{ "ColorG.Tooltip", "..." },
		{ "ColorR.DisplayName", "R Channel" },
		{ "ColorR.Name", "EPCGExPointPropertyOutput::ColorR" },
		{ "ColorR.Tooltip", "..." },
		{ "Density.DisplayName", "Density" },
		{ "Density.Name", "EPCGExPointPropertyOutput::Density" },
		{ "Density.Tooltip", "..." },
		{ "ModuleRelativePath", "Public/PCGExHelpers.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPCGExPointPropertyOutput::None" },
		{ "None.Tooltip", "..." },
		{ "Steepness.DisplayName", "Steepness" },
		{ "Steepness.Name", "EPCGExPointPropertyOutput::Steepness" },
		{ "Steepness.Tooltip", "..." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPointPropertyOutput::None", (int64)EPCGExPointPropertyOutput::None },
		{ "EPCGExPointPropertyOutput::Density", (int64)EPCGExPointPropertyOutput::Density },
		{ "EPCGExPointPropertyOutput::Steepness", (int64)EPCGExPointPropertyOutput::Steepness },
		{ "EPCGExPointPropertyOutput::ColorR", (int64)EPCGExPointPropertyOutput::ColorR },
		{ "EPCGExPointPropertyOutput::ColorG", (int64)EPCGExPointPropertyOutput::ColorG },
		{ "EPCGExPointPropertyOutput::ColorB", (int64)EPCGExPointPropertyOutput::ColorB },
		{ "EPCGExPointPropertyOutput::ColorA", (int64)EPCGExPointPropertyOutput::ColorA },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointPropertyOutput_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointPropertyOutput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPointPropertyOutput",
	"EPCGExPointPropertyOutput",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointPropertyOutput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointPropertyOutput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointPropertyOutput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointPropertyOutput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointPropertyOutput()
{
	if (!Z_Registration_Info_UEnum_EPCGExPointPropertyOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPointPropertyOutput.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointPropertyOutput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPointPropertyOutput.InnerSingleton;
}
// ********** End Enum EPCGExPointPropertyOutput ***************************************************

// ********** Begin Enum EPCGExPointNativeProperties ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExPointNativeProperties;
static UEnum* EPCGExPointNativeProperties_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExPointNativeProperties.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExPointNativeProperties.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointNativeProperties, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExPointNativeProperties"));
	}
	return Z_Registration_Info_UEnum_EPCGExPointNativeProperties.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExPointNativeProperties>()
{
	return EPCGExPointNativeProperties_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointNativeProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BoundsMax.DisplayName", "BoundsMax" },
		{ "BoundsMax.Name", "EPCGExPointNativeProperties::BoundsMax" },
		{ "BoundsMin.DisplayName", "BoundsMin" },
		{ "BoundsMin.Name", "EPCGExPointNativeProperties::BoundsMin" },
		{ "Color.DisplayName", "Color" },
		{ "Color.Name", "EPCGExPointNativeProperties::Color" },
		{ "Density.DisplayName", "Density" },
		{ "Density.Name", "EPCGExPointNativeProperties::Density" },
		{ "DisplayName", "[PCGEx] Native Point Properties" },
		{ "MetadataEntry.DisplayName", "MetadataEntry" },
		{ "MetadataEntry.Name", "EPCGExPointNativeProperties::MetadataEntry" },
		{ "ModuleRelativePath", "Public/PCGExHelpers.h" },
		{ "None.Name", "EPCGExPointNativeProperties::None" },
		{ "Seed.DisplayName", "Seed" },
		{ "Seed.Name", "EPCGExPointNativeProperties::Seed" },
		{ "Steepness.DisplayName", "Steepness" },
		{ "Steepness.Name", "EPCGExPointNativeProperties::Steepness" },
		{ "Transform.DisplayName", "Transform" },
		{ "Transform.Name", "EPCGExPointNativeProperties::Transform" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExPointNativeProperties::None", (int64)EPCGExPointNativeProperties::None },
		{ "EPCGExPointNativeProperties::Transform", (int64)EPCGExPointNativeProperties::Transform },
		{ "EPCGExPointNativeProperties::Density", (int64)EPCGExPointNativeProperties::Density },
		{ "EPCGExPointNativeProperties::BoundsMin", (int64)EPCGExPointNativeProperties::BoundsMin },
		{ "EPCGExPointNativeProperties::BoundsMax", (int64)EPCGExPointNativeProperties::BoundsMax },
		{ "EPCGExPointNativeProperties::Color", (int64)EPCGExPointNativeProperties::Color },
		{ "EPCGExPointNativeProperties::Steepness", (int64)EPCGExPointNativeProperties::Steepness },
		{ "EPCGExPointNativeProperties::Seed", (int64)EPCGExPointNativeProperties::Seed },
		{ "EPCGExPointNativeProperties::MetadataEntry", (int64)EPCGExPointNativeProperties::MetadataEntry },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointNativeProperties_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointNativeProperties_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExPointNativeProperties",
	"EPCGExPointNativeProperties",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointNativeProperties_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointNativeProperties_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointNativeProperties_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointNativeProperties_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointNativeProperties()
{
	if (!Z_Registration_Info_UEnum_EPCGExPointNativeProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExPointNativeProperties.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExPointNativeProperties_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExPointNativeProperties.InnerSingleton;
}
// ********** End Enum EPCGExPointNativeProperties *************************************************

// ********** Begin Class UPCGExComponentCallback Function Callback ********************************
struct Z_Construct_UFunction_UPCGExComponentCallback_Callback_Statics
{
	struct PCGExComponentCallback_eventCallback_Parms
	{
		UActorComponent* InComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PCGExHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function Callback constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Callback constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Callback Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPCGExComponentCallback_Callback_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExComponentCallback_eventCallback_Parms, InComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExComponentCallback_Callback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExComponentCallback_Callback_Statics::NewProp_InComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExComponentCallback_Callback_Statics::PropPointers) < 2048);
// ********** End Function Callback Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExComponentCallback_Callback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExComponentCallback, nullptr, "Callback", 	Z_Construct_UFunction_UPCGExComponentCallback_Callback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExComponentCallback_Callback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExComponentCallback_Callback_Statics::PCGExComponentCallback_eventCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExComponentCallback_Callback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExComponentCallback_Callback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExComponentCallback_Callback_Statics::PCGExComponentCallback_eventCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExComponentCallback_Callback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExComponentCallback_Callback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExComponentCallback::execCallback)
{
	P_GET_OBJECT(UActorComponent,Z_Param_InComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Callback(Z_Param_InComponent);
	P_NATIVE_END;
}
// ********** End Class UPCGExComponentCallback Function Callback **********************************

// ********** Begin Class UPCGExComponentCallback **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExComponentCallback;
UClass* UPCGExComponentCallback::GetPrivateStaticClass()
{
	using TClass = UPCGExComponentCallback;
	if (!Z_Registration_Info_UClass_UPCGExComponentCallback.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExComponentCallback"),
			Z_Registration_Info_UClass_UPCGExComponentCallback.InnerSingleton,
			StaticRegisterNativesUPCGExComponentCallback,
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
	return Z_Registration_Info_UClass_UPCGExComponentCallback.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExComponentCallback_NoRegister()
{
	return UPCGExComponentCallback::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExComponentCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PCGExHelpers.h" },
		{ "ModuleRelativePath", "Public/PCGExHelpers.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExComponentCallback constinit property declarations ******************
// ********** End Class UPCGExComponentCallback constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Callback"), .Pointer = &UPCGExComponentCallback::execCallback },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGExComponentCallback_Callback, "Callback" }, // 2058622079
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExComponentCallback>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExComponentCallback_Statics
UObject* (*const Z_Construct_UClass_UPCGExComponentCallback_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExComponentCallback_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExComponentCallback_Statics::ClassParams = {
	&UPCGExComponentCallback::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x011000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExComponentCallback_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExComponentCallback_Statics::Class_MetaDataParams)
};
void UPCGExComponentCallback::StaticRegisterNativesUPCGExComponentCallback()
{
	UClass* Class = UPCGExComponentCallback::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPCGExComponentCallback_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPCGExComponentCallback()
{
	if (!Z_Registration_Info_UClass_UPCGExComponentCallback.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExComponentCallback.OuterSingleton, Z_Construct_UClass_UPCGExComponentCallback_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExComponentCallback.OuterSingleton;
}
UPCGExComponentCallback::UPCGExComponentCallback(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExComponentCallback);
UPCGExComponentCallback::~UPCGExComponentCallback() {}
// ********** End Class UPCGExComponentCallback ****************************************************

// ********** Begin Interface UPCGExManagedObjectInterface *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExManagedObjectInterface;
UClass* UPCGExManagedObjectInterface::GetPrivateStaticClass()
{
	using TClass = UPCGExManagedObjectInterface;
	if (!Z_Registration_Info_UClass_UPCGExManagedObjectInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExManagedObjectInterface"),
			Z_Registration_Info_UClass_UPCGExManagedObjectInterface.InnerSingleton,
			StaticRegisterNativesUPCGExManagedObjectInterface,
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
	return Z_Registration_Info_UClass_UPCGExManagedObjectInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExManagedObjectInterface_NoRegister()
{
	return UPCGExManagedObjectInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExManagedObjectInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PCGExHelpers.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UPCGExManagedObjectInterface constinit property declarations *********
// ********** End Interface UPCGExManagedObjectInterface constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPCGExManagedObjectInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExManagedObjectInterface_Statics
UObject* (*const Z_Construct_UClass_UPCGExManagedObjectInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExManagedObjectInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExManagedObjectInterface_Statics::ClassParams = {
	&UPCGExManagedObjectInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExManagedObjectInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExManagedObjectInterface_Statics::Class_MetaDataParams)
};
void UPCGExManagedObjectInterface::StaticRegisterNativesUPCGExManagedObjectInterface()
{
}
UClass* Z_Construct_UClass_UPCGExManagedObjectInterface()
{
	if (!Z_Registration_Info_UClass_UPCGExManagedObjectInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExManagedObjectInterface.OuterSingleton, Z_Construct_UClass_UPCGExManagedObjectInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExManagedObjectInterface.OuterSingleton;
}
UPCGExManagedObjectInterface::UPCGExManagedObjectInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExManagedObjectInterface);
// ********** End Interface UPCGExManagedObjectInterface *******************************************

// ********** Begin Interface UPCGExManagedComponentInterface **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExManagedComponentInterface;
UClass* UPCGExManagedComponentInterface::GetPrivateStaticClass()
{
	using TClass = UPCGExManagedComponentInterface;
	if (!Z_Registration_Info_UClass_UPCGExManagedComponentInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExManagedComponentInterface"),
			Z_Registration_Info_UClass_UPCGExManagedComponentInterface.InnerSingleton,
			StaticRegisterNativesUPCGExManagedComponentInterface,
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
	return Z_Registration_Info_UClass_UPCGExManagedComponentInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExManagedComponentInterface_NoRegister()
{
	return UPCGExManagedComponentInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExManagedComponentInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PCGExHelpers.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UPCGExManagedComponentInterface constinit property declarations ******
// ********** End Interface UPCGExManagedComponentInterface constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPCGExManagedComponentInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExManagedComponentInterface_Statics
UObject* (*const Z_Construct_UClass_UPCGExManagedComponentInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExManagedComponentInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExManagedComponentInterface_Statics::ClassParams = {
	&UPCGExManagedComponentInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExManagedComponentInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExManagedComponentInterface_Statics::Class_MetaDataParams)
};
void UPCGExManagedComponentInterface::StaticRegisterNativesUPCGExManagedComponentInterface()
{
}
UClass* Z_Construct_UClass_UPCGExManagedComponentInterface()
{
	if (!Z_Registration_Info_UClass_UPCGExManagedComponentInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExManagedComponentInterface.OuterSingleton, Z_Construct_UClass_UPCGExManagedComponentInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExManagedComponentInterface.OuterSingleton;
}
UPCGExManagedComponentInterface::UPCGExManagedComponentInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExManagedComponentInterface);
// ********** End Interface UPCGExManagedComponentInterface ****************************************

// ********** Begin Class UPCGExFunctionPrototypes Function PrototypeWithNoParams ******************
struct Z_Construct_UFunction_UPCGExFunctionPrototypes_PrototypeWithNoParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PCGExHelpers.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PrototypeWithNoParams constinit property declarations *****************
// ********** End Function PrototypeWithNoParams constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExFunctionPrototypes_PrototypeWithNoParams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExFunctionPrototypes, nullptr, "PrototypeWithNoParams", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExFunctionPrototypes_PrototypeWithNoParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExFunctionPrototypes_PrototypeWithNoParams_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPCGExFunctionPrototypes_PrototypeWithNoParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExFunctionPrototypes_PrototypeWithNoParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExFunctionPrototypes::execPrototypeWithNoParams)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrototypeWithNoParams();
	P_NATIVE_END;
}
// ********** End Class UPCGExFunctionPrototypes Function PrototypeWithNoParams ********************

// ********** Begin Class UPCGExFunctionPrototypes *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFunctionPrototypes;
UClass* UPCGExFunctionPrototypes::GetPrivateStaticClass()
{
	using TClass = UPCGExFunctionPrototypes;
	if (!Z_Registration_Info_UClass_UPCGExFunctionPrototypes.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFunctionPrototypes"),
			Z_Registration_Info_UClass_UPCGExFunctionPrototypes.InnerSingleton,
			StaticRegisterNativesUPCGExFunctionPrototypes,
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
	return Z_Registration_Info_UClass_UPCGExFunctionPrototypes.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFunctionPrototypes_NoRegister()
{
	return UPCGExFunctionPrototypes::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFunctionPrototypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Holds function prototypes used to match against actor function signatures. */" },
		{ "IncludePath", "PCGExHelpers.h" },
		{ "ModuleRelativePath", "Public/PCGExHelpers.h" },
		{ "ToolTip", "Holds function prototypes used to match against actor function signatures." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFunctionPrototypes constinit property declarations *****************
// ********** End Class UPCGExFunctionPrototypes constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("PrototypeWithNoParams"), .Pointer = &UPCGExFunctionPrototypes::execPrototypeWithNoParams },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGExFunctionPrototypes_PrototypeWithNoParams, "PrototypeWithNoParams" }, // 3391799120
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFunctionPrototypes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFunctionPrototypes_Statics
UObject* (*const Z_Construct_UClass_UPCGExFunctionPrototypes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFunctionPrototypes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFunctionPrototypes_Statics::ClassParams = {
	&UPCGExFunctionPrototypes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFunctionPrototypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFunctionPrototypes_Statics::Class_MetaDataParams)
};
void UPCGExFunctionPrototypes::StaticRegisterNativesUPCGExFunctionPrototypes()
{
	UClass* Class = UPCGExFunctionPrototypes::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPCGExFunctionPrototypes_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPCGExFunctionPrototypes()
{
	if (!Z_Registration_Info_UClass_UPCGExFunctionPrototypes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFunctionPrototypes.OuterSingleton, Z_Construct_UClass_UPCGExFunctionPrototypes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFunctionPrototypes.OuterSingleton;
}
UPCGExFunctionPrototypes::UPCGExFunctionPrototypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFunctionPrototypes);
UPCGExFunctionPrototypes::~UPCGExFunctionPrototypes() {}
// ********** End Class UPCGExFunctionPrototypes ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExPointPropertyOutput_StaticEnum, TEXT("EPCGExPointPropertyOutput"), &Z_Registration_Info_UEnum_EPCGExPointPropertyOutput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4165579650U) },
		{ EPCGExPointNativeProperties_StaticEnum, TEXT("EPCGExPointNativeProperties"), &Z_Registration_Info_UEnum_EPCGExPointNativeProperties, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3268658861U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExComponentCallback, UPCGExComponentCallback::StaticClass, TEXT("UPCGExComponentCallback"), &Z_Registration_Info_UClass_UPCGExComponentCallback, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExComponentCallback), 2312725980U) },
		{ Z_Construct_UClass_UPCGExManagedObjectInterface, UPCGExManagedObjectInterface::StaticClass, TEXT("UPCGExManagedObjectInterface"), &Z_Registration_Info_UClass_UPCGExManagedObjectInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExManagedObjectInterface), 4290676775U) },
		{ Z_Construct_UClass_UPCGExManagedComponentInterface, UPCGExManagedComponentInterface::StaticClass, TEXT("UPCGExManagedComponentInterface"), &Z_Registration_Info_UClass_UPCGExManagedComponentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExManagedComponentInterface), 4192363565U) },
		{ Z_Construct_UClass_UPCGExFunctionPrototypes, UPCGExFunctionPrototypes::StaticClass, TEXT("UPCGExFunctionPrototypes"), &Z_Registration_Info_UClass_UPCGExFunctionPrototypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFunctionPrototypes), 3592853715U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h__Script_PCGExtendedToolkit_2499301940{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_PCGExHelpers_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
