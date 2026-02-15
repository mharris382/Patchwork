// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Relaxing/PCGExFittingRelaxBase.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExFittingRelaxBase() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFittingRelaxBase();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExFittingRelaxBase_NoRegister();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRelaxClusterOperation();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeFitting();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExRelaxEdgeFitting ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExRelaxEdgeFitting;
static UEnum* EPCGExRelaxEdgeFitting_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExRelaxEdgeFitting.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExRelaxEdgeFitting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeFitting, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExRelaxEdgeFitting"));
	}
	return Z_Registration_Info_UEnum_EPCGExRelaxEdgeFitting.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRelaxEdgeFitting>()
{
	return EPCGExRelaxEdgeFitting_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeFitting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attribute.DisplayName", "Attribute" },
		{ "Attribute.Name", "EPCGExRelaxEdgeFitting::Attribute" },
		{ "Attribute.ToolTip", "Uses an attribute on the edges as target length" },
		{ "Existing.DisplayName", "Existing" },
		{ "Existing.Name", "EPCGExRelaxEdgeFitting::Existing" },
		{ "Existing.ToolTip", "Attempts to preserve existing edge length" },
		{ "Fixed.DisplayName", "Fixed" },
		{ "Fixed.Name", "EPCGExRelaxEdgeFitting::Fixed" },
		{ "Fixed.ToolTip", "Aim for constant edge length while fitting" },
		{ "Ignore.DisplayName", "Ignore" },
		{ "Ignore.Name", "EPCGExRelaxEdgeFitting::Ignore" },
		{ "Ignore.ToolTip", "Ignore edges during fitting." },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExFittingRelaxBase.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExRelaxEdgeFitting::Ignore", (int64)EPCGExRelaxEdgeFitting::Ignore },
		{ "EPCGExRelaxEdgeFitting::Fixed", (int64)EPCGExRelaxEdgeFitting::Fixed },
		{ "EPCGExRelaxEdgeFitting::Existing", (int64)EPCGExRelaxEdgeFitting::Existing },
		{ "EPCGExRelaxEdgeFitting::Attribute", (int64)EPCGExRelaxEdgeFitting::Attribute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeFitting_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeFitting_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExRelaxEdgeFitting",
	"EPCGExRelaxEdgeFitting",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeFitting_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeFitting_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeFitting_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeFitting_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeFitting()
{
	if (!Z_Registration_Info_UEnum_EPCGExRelaxEdgeFitting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExRelaxEdgeFitting.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeFitting_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExRelaxEdgeFitting.InnerSingleton;
}
// ********** End Enum EPCGExRelaxEdgeFitting ******************************************************

// ********** Begin Class UPCGExFittingRelaxBase ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExFittingRelaxBase;
UClass* UPCGExFittingRelaxBase::GetPrivateStaticClass()
{
	using TClass = UPCGExFittingRelaxBase;
	if (!Z_Registration_Info_UClass_UPCGExFittingRelaxBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExFittingRelaxBase"),
			Z_Registration_Info_UClass_UPCGExFittingRelaxBase.InnerSingleton,
			StaticRegisterNativesUPCGExFittingRelaxBase,
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
	return Z_Registration_Info_UClass_UPCGExFittingRelaxBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExFittingRelaxBase_NoRegister()
{
	return UPCGExFittingRelaxBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExFittingRelaxBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Abstract Fitting" },
		{ "IncludePath", "Graph/Edges/Relaxing/PCGExFittingRelaxBase.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExFittingRelaxBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepulsionConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Amount of translation for a single step. Relative to other parameters. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExFittingRelaxBase.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Amount of translation for a single step. Relative to other parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeFitting_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which edge length should the computation attempt to preserve. */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExFittingRelaxBase.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Which edge length should the computation attempt to preserve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredEdgeLength_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The desired edge length. Low priority in the algorithm, but help keep edge topology more consistent. */" },
		{ "DisplayName", "Desired Edge Length" },
		{ "EditCondition", "EdgeFitting == EPCGExRelaxEdgeFitting::Fixed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExFittingRelaxBase.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The desired edge length. Low priority in the algorithm, but help keep edge topology more consistent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredEdgeLengthAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Per-edge attribute */" },
		{ "DisplayName", "Desired Edge Length" },
		{ "EditCondition", "EdgeFitting == EPCGExRelaxEdgeFitting::Attribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExFittingRelaxBase.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Per-edge attribute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Scale factor applied to the edge length. */" },
		{ "DisplayName", "\xe2\x94\x94\xe2\x94\x80 Scale" },
		{ "EditCondition", "EdgeFitting == EPCGExRelaxEdgeFitting::Attribute || EdgeFitting == EPCGExRelaxEdgeFitting::Existing" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExFittingRelaxBase.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Scale factor applied to the edge length." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringConstant_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Stiffness of the edges. Lower values yield better placement (less overlap), but edge topology may be affected. */" },
		{ "EditCondition", "EdgeFitting != EPCGExRelaxEdgeFitting::Ignore" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExFittingRelaxBase.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Stiffness of the edges. Lower values yield better placement (less overlap), but edge topology may be affected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStep_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If this was a physic simulation, represent the time advance each iteration */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExFittingRelaxBase.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If this was a physic simulation, represent the time advance each iteration" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExFittingRelaxBase constinit property declarations *******************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RepulsionConstant;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EdgeFitting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EdgeFitting;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DesiredEdgeLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredEdgeLengthAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Scale;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SpringConstant;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExFittingRelaxBase constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExFittingRelaxBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExFittingRelaxBase_Statics

// ********** Begin Class UPCGExFittingRelaxBase Property Definitions ******************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::NewProp_RepulsionConstant = { "RepulsionConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFittingRelaxBase, RepulsionConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepulsionConstant_MetaData), NewProp_RepulsionConstant_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::NewProp_EdgeFitting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::NewProp_EdgeFitting = { "EdgeFitting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFittingRelaxBase, EdgeFitting), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeFitting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeFitting_MetaData), NewProp_EdgeFitting_MetaData) }; // 337813937
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::NewProp_DesiredEdgeLength = { "DesiredEdgeLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFittingRelaxBase, DesiredEdgeLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredEdgeLength_MetaData), NewProp_DesiredEdgeLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::NewProp_DesiredEdgeLengthAttribute = { "DesiredEdgeLengthAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFittingRelaxBase, DesiredEdgeLengthAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredEdgeLengthAttribute_MetaData), NewProp_DesiredEdgeLengthAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFittingRelaxBase, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::NewProp_SpringConstant = { "SpringConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFittingRelaxBase, SpringConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringConstant_MetaData), NewProp_SpringConstant_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExFittingRelaxBase, TimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStep_MetaData), NewProp_TimeStep_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::NewProp_RepulsionConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::NewProp_EdgeFitting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::NewProp_EdgeFitting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::NewProp_DesiredEdgeLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::NewProp_DesiredEdgeLengthAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::NewProp_SpringConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::NewProp_TimeStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::PropPointers) < 2048);
// ********** End Class UPCGExFittingRelaxBase Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExRelaxClusterOperation,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::ClassParams = {
	&UPCGExFittingRelaxBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::PropPointers),
	0,
	0x002810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::Class_MetaDataParams)
};
void UPCGExFittingRelaxBase::StaticRegisterNativesUPCGExFittingRelaxBase()
{
}
UClass* Z_Construct_UClass_UPCGExFittingRelaxBase()
{
	if (!Z_Registration_Info_UClass_UPCGExFittingRelaxBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExFittingRelaxBase.OuterSingleton, Z_Construct_UClass_UPCGExFittingRelaxBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExFittingRelaxBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExFittingRelaxBase);
UPCGExFittingRelaxBase::~UPCGExFittingRelaxBase() {}
// ********** End Class UPCGExFittingRelaxBase *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExFittingRelaxBase_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExRelaxEdgeFitting_StaticEnum, TEXT("EPCGExRelaxEdgeFitting"), &Z_Registration_Info_UEnum_EPCGExRelaxEdgeFitting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 337813937U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExFittingRelaxBase, UPCGExFittingRelaxBase::StaticClass, TEXT("UPCGExFittingRelaxBase"), &Z_Registration_Info_UClass_UPCGExFittingRelaxBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExFittingRelaxBase), 2358477421U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExFittingRelaxBase_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExFittingRelaxBase_h__Script_PCGExtendedToolkit_643027702{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExFittingRelaxBase_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExFittingRelaxBase_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExFittingRelaxBase_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExFittingRelaxBase_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
