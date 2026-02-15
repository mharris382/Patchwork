// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Constants/PCGExConstants.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExConstants() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExConstantsSettings();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExConstantsSettings_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantListID();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExNumericOutput();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExConstantsSettings Function GetOutputType ***************************
struct Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics
{
	struct PCGExConstantsSettings_eventGetOutputType_Parms
	{
		EPCGExConstantListID ListID;
		EPCGExConstantType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstants.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOutputType constinit property declarations *************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ListID_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ListID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOutputType constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOutputType Property Definitions ************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics::NewProp_ListID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics::NewProp_ListID = { "ListID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExConstantsSettings_eventGetOutputType_Parms, ListID), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantListID, METADATA_PARAMS(0, nullptr) }; // 1611283729
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PCGExConstantsSettings_eventGetOutputType_Parms, ReturnValue), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantType, METADATA_PARAMS(0, nullptr) }; // 2505068114
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics::NewProp_ListID_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics::NewProp_ListID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics::PropPointers) < 2048);
// ********** End Function GetOutputType Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPCGExConstantsSettings, nullptr, "GetOutputType", 	Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics::PCGExConstantsSettings_eventGetOutputType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics::PCGExConstantsSettings_eventGetOutputType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPCGExConstantsSettings::execGetOutputType)
{
	P_GET_ENUM(EPCGExConstantListID,Z_Param_ListID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EPCGExConstantType*)Z_Param__Result=UPCGExConstantsSettings::GetOutputType(EPCGExConstantListID(Z_Param_ListID));
	P_NATIVE_END;
}
// ********** End Class UPCGExConstantsSettings Function GetOutputType *****************************

// ********** Begin Class UPCGExConstantsSettings **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExConstantsSettings;
UClass* UPCGExConstantsSettings::GetPrivateStaticClass()
{
	using TClass = UPCGExConstantsSettings;
	if (!Z_Registration_Info_UClass_UPCGExConstantsSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExConstantsSettings"),
			Z_Registration_Info_UClass_UPCGExConstantsSettings.InnerSingleton,
			StaticRegisterNativesUPCGExConstantsSettings,
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
	return Z_Registration_Info_UClass_UPCGExConstantsSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExConstantsSettings_NoRegister()
{
	return UPCGExConstantsSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExConstantsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "Constants/PCGExConstants.h" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstants.h" },
		{ "PCGExNodeLibraryDoc", "quality-of-life/constants" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantList_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Used by the preconfigured settings to load the right constants\n" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstants.h" },
		{ "ToolTip", "Used by the preconfigured settings to load the right constants" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NegateOutput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Export the negative of the constant instead of the constant itself\n" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstants.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Export the negative of the constant instead of the constant itself" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputReciprocal_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Output 1/x instead of x (e.g. 2 becomes 1/2)\n" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstants.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Output 1/x instead of x (e.g. 2 becomes 1/2)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomMultiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Apply a custom (constant, numeric) multiplier to the output\n" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstants.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Apply a custom (constant, numeric) multiplier to the output" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumericOutputType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Cast to a specific type (double will be used by default, ignored for vectors)\n" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstants.h" },
		{ "ToolTip", "Cast to a specific type (double will be used by default, ignored for vectors)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeNameMap_MetaData[] = {
		{ "Category", "Settings" },
		{ "ForceInlineRow", "" },
		{ "ModuleRelativePath", "Public/Constants/PCGExConstants.h" },
		{ "ReadOnlyKeys", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExConstantsSettings constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConstantList_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConstantList;
	static void NewProp_NegateOutput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NegateOutput;
	static void NewProp_OutputReciprocal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutputReciprocal;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CustomMultiplier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NumericOutputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NumericOutputType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeNameMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeNameMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AttributeNameMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExConstantsSettings constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetOutputType"), .Pointer = &UPCGExConstantsSettings::execGetOutputType },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPCGExConstantsSettings_GetOutputType, "GetOutputType" }, // 1006462266
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExConstantsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExConstantsSettings_Statics

// ********** Begin Class UPCGExConstantsSettings Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_ConstantList_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_ConstantList = { "ConstantList", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConstantsSettings, ConstantList), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExConstantListID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantList_MetaData), NewProp_ConstantList_MetaData) }; // 1611283729
void Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_NegateOutput_SetBit(void* Obj)
{
	((UPCGExConstantsSettings*)Obj)->NegateOutput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_NegateOutput = { "NegateOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExConstantsSettings), &Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_NegateOutput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NegateOutput_MetaData), NewProp_NegateOutput_MetaData) };
void Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_OutputReciprocal_SetBit(void* Obj)
{
	((UPCGExConstantsSettings*)Obj)->OutputReciprocal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_OutputReciprocal = { "OutputReciprocal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGExConstantsSettings), &Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_OutputReciprocal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputReciprocal_MetaData), NewProp_OutputReciprocal_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_CustomMultiplier = { "CustomMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConstantsSettings, CustomMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomMultiplier_MetaData), NewProp_CustomMultiplier_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_NumericOutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_NumericOutputType = { "NumericOutputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConstantsSettings, NumericOutputType), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExNumericOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumericOutputType_MetaData), NewProp_NumericOutputType_MetaData) }; // 3660870052
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_AttributeNameMap_ValueProp = { "AttributeNameMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_AttributeNameMap_Key_KeyProp = { "AttributeNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_AttributeNameMap = { "AttributeNameMap", nullptr, (EPropertyFlags)0x0010000002000045, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExConstantsSettings, AttributeNameMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeNameMap_MetaData), NewProp_AttributeNameMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExConstantsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_ConstantList_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_ConstantList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_NegateOutput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_OutputReciprocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_CustomMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_NumericOutputType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_NumericOutputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_AttributeNameMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_AttributeNameMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExConstantsSettings_Statics::NewProp_AttributeNameMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExConstantsSettings_Statics::PropPointers) < 2048);
// ********** End Class UPCGExConstantsSettings Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UPCGExConstantsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExConstantsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExConstantsSettings_Statics::ClassParams = {
	&UPCGExConstantsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPCGExConstantsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExConstantsSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExConstantsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExConstantsSettings_Statics::Class_MetaDataParams)
};
void UPCGExConstantsSettings::StaticRegisterNativesUPCGExConstantsSettings()
{
	UClass* Class = UPCGExConstantsSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPCGExConstantsSettings_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPCGExConstantsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGExConstantsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExConstantsSettings.OuterSingleton, Z_Construct_UClass_UPCGExConstantsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExConstantsSettings.OuterSingleton;
}
UPCGExConstantsSettings::UPCGExConstantsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExConstantsSettings);
UPCGExConstantsSettings::~UPCGExConstantsSettings() {}
// ********** End Class UPCGExConstantsSettings ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstants_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExConstantsSettings, UPCGExConstantsSettings::StaticClass, TEXT("UPCGExConstantsSettings"), &Z_Registration_Info_UClass_UPCGExConstantsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExConstantsSettings), 2017089065U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstants_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstants_h__Script_PCGExtendedToolkit_2812901388{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstants_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Constants_PCGExConstants_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
