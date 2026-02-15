// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Relaxing/PCGExRadiusFittingRelax.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExRadiusFittingRelax() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFittingRelaxBase();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRadiusFittingRelax();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRadiusFittingRelax_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPCGExRadiusFittingRelax *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExRadiusFittingRelax;
UClass* UPCGExRadiusFittingRelax::GetPrivateStaticClass()
{
	using TClass = UPCGExRadiusFittingRelax;
	if (!Z_Registration_Info_UClass_UPCGExRadiusFittingRelax.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExRadiusFittingRelax"),
			Z_Registration_Info_UClass_UPCGExRadiusFittingRelax.InnerSingleton,
			StaticRegisterNativesUPCGExRadiusFittingRelax,
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
	return Z_Registration_Info_UClass_UPCGExRadiusFittingRelax.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExRadiusFittingRelax_NoRegister()
{
	return UPCGExRadiusFittingRelax::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Radius Fitting" },
		{ "IncludePath", "Graph/Edges/Relaxing/PCGExRadiusFittingRelax.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExRadiusFittingRelax.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "clusters/relax-cluster/radius-fitting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Velocity */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExRadiusFittingRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Velocity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to read weight value from. */" },
		{ "DisplayName", "Radius (Attr)" },
		{ "EditCondition", "RadiusInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExRadiusFittingRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to read weight value from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant velocity value. Think of it as gravity vector. */" },
		{ "DisplayName", "Radius" },
		{ "EditCondition", "RadiusInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExRadiusFittingRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant velocity value. Think of it as gravity vector." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExRadiusFittingRelax constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_RadiusInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RadiusInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RadiusAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExRadiusFittingRelax constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExRadiusFittingRelax>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics

// ********** Begin Class UPCGExRadiusFittingRelax Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics::NewProp_RadiusInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics::NewProp_RadiusInput = { "RadiusInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRadiusFittingRelax, RadiusInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusInput_MetaData), NewProp_RadiusInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics::NewProp_RadiusAttribute = { "RadiusAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRadiusFittingRelax, RadiusAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusAttribute_MetaData), NewProp_RadiusAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExRadiusFittingRelax, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics::NewProp_RadiusInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics::NewProp_RadiusInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics::NewProp_RadiusAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics::PropPointers) < 2048);
// ********** End Class UPCGExRadiusFittingRelax Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExFittingRelaxBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics::ClassParams = {
	&UPCGExRadiusFittingRelax::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics::Class_MetaDataParams)
};
void UPCGExRadiusFittingRelax::StaticRegisterNativesUPCGExRadiusFittingRelax()
{
}
UClass* Z_Construct_UClass_UPCGExRadiusFittingRelax()
{
	if (!Z_Registration_Info_UClass_UPCGExRadiusFittingRelax.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExRadiusFittingRelax.OuterSingleton, Z_Construct_UClass_UPCGExRadiusFittingRelax_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExRadiusFittingRelax.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExRadiusFittingRelax);
UPCGExRadiusFittingRelax::~UPCGExRadiusFittingRelax() {}
// ********** End Class UPCGExRadiusFittingRelax ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExRadiusFittingRelax_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExRadiusFittingRelax, UPCGExRadiusFittingRelax::StaticClass, TEXT("UPCGExRadiusFittingRelax"), &Z_Registration_Info_UClass_UPCGExRadiusFittingRelax, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExRadiusFittingRelax), 1609860341U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExRadiusFittingRelax_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExRadiusFittingRelax_h__Script_PCGExtendedToolkit_1908646668{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExRadiusFittingRelax_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExRadiusFittingRelax_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
