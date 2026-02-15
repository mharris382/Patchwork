// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/FloodFill/FillControls/PCGExFillControlLength.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFillControlLength() {}

// ********** Begin Cross Module References ********************************************************
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryData();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryLength();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryLength_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFillControlConfigBase();
PCGEXTENDEDTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FPCGExFillControlConfigLength();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPCGExFillControlConfigLength *************************************
struct Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPCGExFillControlConfigLength); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPCGExFillControlConfigLength); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlLength.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePathLength_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Path length is the accumulated length from the seed to the evaluated candidate, while regular length is the length of the edge. */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlLength.h" },
		{ "PCG_NotOverridable", "" },
		{ "ToolTip", "Path length is the accumulated length from the seed to the evaluated candidate, while regular length is the length of the edge." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLengthInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlLength.h" },
		{ "PCG_NotOverridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLengthAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Max Length Attribute */" },
		{ "DisplayName", "Max Length (Attr)" },
		{ "EditCondition", "MaxLengthInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlLength.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max Length Attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLength_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Max Length Constant */" },
		{ "DisplayName", "Max Length" },
		{ "EditCondition", "MaxLengthInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlLength.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Max Length Constant" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPCGExFillControlConfigLength constinit property declarations *****
	static void NewProp_bUsePathLength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePathLength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxLengthInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaxLengthInput;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaxLengthAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPCGExFillControlConfigLength constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPCGExFillControlConfigLength>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics
static_assert(std::is_polymorphic<FPCGExFillControlConfigLength>() == std::is_polymorphic<FPCGExFillControlConfigBase>(), "USTRUCT FPCGExFillControlConfigLength cannot be polymorphic unless super FPCGExFillControlConfigBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigLength;
class UScriptStruct* FPCGExFillControlConfigLength::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigLength.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigLength.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPCGExFillControlConfigLength, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("PCGExFillControlConfigLength"));
	}
	return Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigLength.OuterSingleton;
	}

// ********** Begin ScriptStruct FPCGExFillControlConfigLength Property Definitions ****************
void Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::NewProp_bUsePathLength_SetBit(void* Obj)
{
	((FPCGExFillControlConfigLength*)Obj)->bUsePathLength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::NewProp_bUsePathLength = { "bUsePathLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPCGExFillControlConfigLength), &Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::NewProp_bUsePathLength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePathLength_MetaData), NewProp_bUsePathLength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::NewProp_MaxLengthInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::NewProp_MaxLengthInput = { "MaxLengthInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigLength, MaxLengthInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLengthInput_MetaData), NewProp_MaxLengthInput_MetaData) }; // 504493006
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::NewProp_MaxLengthAttribute = { "MaxLengthAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigLength, MaxLengthAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLengthAttribute_MetaData), NewProp_MaxLengthAttribute_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::NewProp_MaxLength = { "MaxLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPCGExFillControlConfigLength, MaxLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLength_MetaData), NewProp_MaxLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::NewProp_bUsePathLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::NewProp_MaxLengthInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::NewProp_MaxLengthInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::NewProp_MaxLengthAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::NewProp_MaxLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPCGExFillControlConfigLength Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	Z_Construct_UScriptStruct_FPCGExFillControlConfigBase,
	&NewStructOps,
	"PCGExFillControlConfigLength",
	Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::PropPointers),
	sizeof(FPCGExFillControlConfigLength),
	alignof(FPCGExFillControlConfigLength),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPCGExFillControlConfigLength()
{
	if (!Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigLength.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigLength.InnerSingleton, Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigLength.InnerSingleton);
}
// ********** End ScriptStruct FPCGExFillControlConfigLength ***************************************

// ********** Begin Class UPCGExFillControlsFactoryLength ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFillControlsFactoryLength;
UClass* UPCGExFillControlsFactoryLength::GetPrivateStaticClass()
{
	using TClass = UPCGExFillControlsFactoryLength;
	if (!Z_Registration_Info_UClass_UPCGExFillControlsFactoryLength.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFillControlsFactoryLength"),
			Z_Registration_Info_UClass_UPCGExFillControlsFactoryLength.InnerSingleton,
			StaticRegisterNativesUPCGExFillControlsFactoryLength,
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
	return Z_Registration_Info_UClass_UPCGExFillControlsFactoryLength.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFillControlsFactoryLength_NoRegister()
{
	return UPCGExFillControlsFactoryLength::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFillControlsFactoryLength_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Data" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/FloodFill/FillControls/PCGExFillControlLength.h" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlLength.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlLength.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFillControlsFactoryLength constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFillControlsFactoryLength constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFillControlsFactoryLength>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFillControlsFactoryLength_Statics

// ********** Begin Class UPCGExFillControlsFactoryLength Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFillControlsFactoryLength_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFillControlsFactoryLength, Config), Z_Construct_UScriptStruct_FPCGExFillControlConfigLength, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 783724337
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFillControlsFactoryLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFillControlsFactoryLength_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryLength_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFillControlsFactoryLength Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UPCGExFillControlsFactoryLength_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFillControlsFactoryData,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryLength_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFillControlsFactoryLength_Statics::ClassParams = {
	&UPCGExFillControlsFactoryLength::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFillControlsFactoryLength_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryLength_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsFactoryLength_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFillControlsFactoryLength_Statics::Class_MetaDataParams)
};
void UPCGExFillControlsFactoryLength::StaticRegisterNativesUPCGExFillControlsFactoryLength()
{
}
UClass* Z_Construct_UClass_UPCGExFillControlsFactoryLength()
{
	if (!Z_Registration_Info_UClass_UPCGExFillControlsFactoryLength.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFillControlsFactoryLength.OuterSingleton, Z_Construct_UClass_UPCGExFillControlsFactoryLength_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFillControlsFactoryLength.OuterSingleton;
}
UPCGExFillControlsFactoryLength::UPCGExFillControlsFactoryLength(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFillControlsFactoryLength);
UPCGExFillControlsFactoryLength::~UPCGExFillControlsFactoryLength() {}
// ********** End Class UPCGExFillControlsFactoryLength ********************************************

// ********** Begin Class UPCGExFillControlsLengthProviderSettings *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFillControlsLengthProviderSettings;
UClass* UPCGExFillControlsLengthProviderSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExFillControlsLengthProviderSettings;
	if (!Z_Registration_Info_UClass_UPCGExFillControlsLengthProviderSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFillControlsLengthProviderSettings"),
			Z_Registration_Info_UClass_UPCGExFillControlsLengthProviderSettings.InnerSingleton,
			StaticRegisterNativesUPCGExFillControlsLengthProviderSettings,
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
	return Z_Registration_Info_UClass_UPCGExFillControlsLengthProviderSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings_NoRegister()
{
	return UPCGExFillControlsLengthProviderSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PCGEx|Graph|Params" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Graph/FloodFill/FillControls/PCGExFillControlLength.h" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlLength.h" },
		{ "PCGExNodeLibraryDoc", "clusters/flood-fill/fc-length" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Control Config.*/" },
		{ "ModuleRelativePath", "Public/Graph/FloodFill/FillControls/PCGExFillControlLength.h" },
		{ "PCG_Overridable", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Control Config." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFillControlsLengthProviderSettings constinit property declarations *
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFillControlsLengthProviderSettings constinit property declarations ***
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFillControlsLengthProviderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings_Statics

// ********** Begin Class UPCGExFillControlsLengthProviderSettings Property Definitions ************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFillControlsLengthProviderSettings, Config), Z_Construct_UScriptStruct_FPCGExFillControlConfigLength, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 783724337
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFillControlsLengthProviderSettings Property Definitions **************
UObject* (*const Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFillControlsFactoryProviderSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings_Statics::ClassParams = {
	&UPCGExFillControlsLengthProviderSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings_Statics::Class_MetaDataParams)
};
void UPCGExFillControlsLengthProviderSettings::StaticRegisterNativesUPCGExFillControlsLengthProviderSettings()
{
}
UClass* Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExFillControlsLengthProviderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFillControlsLengthProviderSettings.OuterSingleton, Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFillControlsLengthProviderSettings.OuterSingleton;
}
UPCGExFillControlsLengthProviderSettings::UPCGExFillControlsLengthProviderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFillControlsLengthProviderSettings);
UPCGExFillControlsLengthProviderSettings::~UPCGExFillControlsLengthProviderSettings() {}
// ********** End Class UPCGExFillControlsLengthProviderSettings ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlLength_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPCGExFillControlConfigLength::StaticStruct, Z_Construct_UScriptStruct_FPCGExFillControlConfigLength_Statics::NewStructOps, TEXT("PCGExFillControlConfigLength"),&Z_Registration_Info_UScriptStruct_FPCGExFillControlConfigLength, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPCGExFillControlConfigLength), 783724337U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFillControlsFactoryLength, UPCGExFillControlsFactoryLength::StaticClass, TEXT("UPCGExFillControlsFactoryLength"), &Z_Registration_Info_UClass_UPCGExFillControlsFactoryLength, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFillControlsFactoryLength), 2394011763U) },
		{ Z_Construct_UClass_UPCGExFillControlsLengthProviderSettings, UPCGExFillControlsLengthProviderSettings::StaticClass, TEXT("UPCGExFillControlsLengthProviderSettings"), &Z_Registration_Info_UClass_UPCGExFillControlsLengthProviderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFillControlsLengthProviderSettings), 1011243050U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlLength_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlLength_h__Script_PCGExtendedToolkit_1694990091{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlLength_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlLength_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlLength_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_FloodFill_FillControls_PCGExFillControlLength_h__Script_PCGExtendedToolkit_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
