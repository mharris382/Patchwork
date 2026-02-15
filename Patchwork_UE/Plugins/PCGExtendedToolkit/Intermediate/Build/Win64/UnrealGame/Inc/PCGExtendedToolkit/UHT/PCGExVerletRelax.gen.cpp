// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/Edges/Relaxing/PCGExVerletRelax.h"
#include "Metadata/PCGAttributePropertySelector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePCGExVerletRelax() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExRelaxClusterOperation();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVerletRelax();
PCGEXTENDEDTOOLKIT_API UClass* Z_Construct_UClass_UPCGExVerletRelax_NoRegister();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType();
PCGEXTENDEDTOOLKIT_API UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeRestLength();
UPackage* Z_Construct_UPackage__Script_PCGExtendedToolkit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPCGExRelaxEdgeRestLength *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGExRelaxEdgeRestLength;
static UEnum* EPCGExRelaxEdgeRestLength_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGExRelaxEdgeRestLength.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGExRelaxEdgeRestLength.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeRestLength, (UObject*)Z_Construct_UPackage__Script_PCGExtendedToolkit(), TEXT("EPCGExRelaxEdgeRestLength"));
	}
	return Z_Registration_Info_UEnum_EPCGExRelaxEdgeRestLength.OuterSingleton;
}
template<> PCGEXTENDEDTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGExRelaxEdgeRestLength>()
{
	return EPCGExRelaxEdgeRestLength_StaticEnum();
}
struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeRestLength_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attribute.DisplayName", "Attribute" },
		{ "Attribute.Name", "EPCGExRelaxEdgeRestLength::Attribute" },
		{ "Attribute.ToolTip", "Uses an attribute on the edges as target length" },
		{ "Existing.DisplayName", "Existing" },
		{ "Existing.Name", "EPCGExRelaxEdgeRestLength::Existing" },
		{ "Existing.ToolTip", "Attempts to preserve existing edge length" },
		{ "Fixed.DisplayName", "Fixed" },
		{ "Fixed.Name", "EPCGExRelaxEdgeRestLength::Fixed" },
		{ "Fixed.ToolTip", "Aim for constant edge length while fitting" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExVerletRelax.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGExRelaxEdgeRestLength::Fixed", (int64)EPCGExRelaxEdgeRestLength::Fixed },
		{ "EPCGExRelaxEdgeRestLength::Existing", (int64)EPCGExRelaxEdgeRestLength::Existing },
		{ "EPCGExRelaxEdgeRestLength::Attribute", (int64)EPCGExRelaxEdgeRestLength::Attribute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeRestLength_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeRestLength_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
	nullptr,
	"EPCGExRelaxEdgeRestLength",
	"EPCGExRelaxEdgeRestLength",
	Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeRestLength_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeRestLength_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeRestLength_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeRestLength_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeRestLength()
{
	if (!Z_Registration_Info_UEnum_EPCGExRelaxEdgeRestLength.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGExRelaxEdgeRestLength.InnerSingleton, Z_Construct_UEnum_PCGExtendedToolkit_EPCGExRelaxEdgeRestLength_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGExRelaxEdgeRestLength.InnerSingleton;
}
// ********** End Enum EPCGExRelaxEdgeRestLength ***************************************************

// ********** Begin Class UPCGExVerletRelax ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGExVerletRelax;
UClass* UPCGExVerletRelax::GetPrivateStaticClass()
{
	using TClass = UPCGExVerletRelax;
	if (!Z_Registration_Info_UClass_UPCGExVerletRelax.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PCGExVerletRelax"),
			Z_Registration_Info_UClass_UPCGExVerletRelax.InnerSingleton,
			StaticRegisterNativesUPCGExVerletRelax,
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
	return Z_Registration_Info_UClass_UPCGExVerletRelax.InnerSingleton;
}
UClass* Z_Construct_UClass_UPCGExVerletRelax_NoRegister()
{
	return UPCGExVerletRelax::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPCGExVerletRelax_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Verlet (Gravity)" },
		{ "IncludePath", "Graph/Edges/Relaxing/PCGExVerletRelax.h" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExVerletRelax.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PCGExNodeLibraryDoc", "clusters/relax-cluster/Gravity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Gravity */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExVerletRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Gravity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to read weight value from. */" },
		{ "DisplayName", "Gravity (Attr)" },
		{ "EditCondition", "GravityInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExVerletRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to read weight value from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant Gravity value. Think of it as gravity vector. */" },
		{ "DisplayName", "Gravity" },
		{ "EditCondition", "GravityInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExVerletRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant Gravity value. Think of it as gravity vector." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrictionInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Friction */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExVerletRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Friction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrictionAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to read friction value from. Expected to be in the [0..1] range. */" },
		{ "DisplayName", "Friction (Attr)" },
		{ "EditCondition", "FrictionInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExVerletRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to read friction value from. Expected to be in the [0..1] range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Constant friction value. Expected to be in the [0..1] range. */" },
		{ "DisplayName", "Friction" },
		{ "EditCondition", "FrictionInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExVerletRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant friction value. Expected to be in the [0..1] range." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeScalingInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Edge Scaling */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExVerletRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Edge Scaling" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeScalingAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to read edge scaling value from. */" },
		{ "DisplayName", "Edge Scaling (Attr)" },
		{ "EditCondition", "EdgeScalingInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExVerletRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to read edge scaling value from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeScaling_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Constant Edge scaling value. */" },
		{ "DisplayName", "Edge Scaling" },
		{ "EditCondition", "EdgeScalingInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExVerletRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant Edge scaling value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeStiffnessInput_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of Edge stiffness */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExVerletRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Type of Edge stiffness" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeStiffnessAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Attribute to read edge stiffness value from. Note that this value is expected to be in the [0..1] range and will be divided by 3 internally. */" },
		{ "DisplayName", "Edge Stiffness (Attr)" },
		{ "EditCondition", "EdgeStiffnessInput != EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExVerletRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Attribute to read edge stiffness value from. Note that this value is expected to be in the [0..1] range and will be divided by 3 internally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeStiffness_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Constant Edge stiffness value. Note that this value is expected to be in the [0..1] range and will be divided by 3 internally.  */" },
		{ "DisplayName", "Edge Stiffness" },
		{ "EditCondition", "EdgeStiffnessInput == EPCGExInputValueType::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExVerletRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Constant Edge stiffness value. Note that this value is expected to be in the [0..1] range and will be divided by 3 internally." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeStep_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If this was a physic simulation, represent the time advance each iteration */" },
		{ "ModuleRelativePath", "Public/Graph/Edges/Relaxing/PCGExVerletRelax.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "If this was a physic simulation, represent the time advance each iteration" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGExVerletRelax constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_GravityInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GravityInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GravityAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gravity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FrictionInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FrictionInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrictionAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Friction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EdgeScalingInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EdgeScalingInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeScalingAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EdgeScaling;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EdgeStiffnessInput_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EdgeStiffnessInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeStiffnessAttribute;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EdgeStiffness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGExVerletRelax constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGExVerletRelax>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPCGExVerletRelax_Statics

// ********** Begin Class UPCGExVerletRelax Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_GravityInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_GravityInput = { "GravityInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExVerletRelax, GravityInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityInput_MetaData), NewProp_GravityInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_GravityAttribute = { "GravityAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExVerletRelax, GravityAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityAttribute_MetaData), NewProp_GravityAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExVerletRelax, Gravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gravity_MetaData), NewProp_Gravity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_FrictionInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_FrictionInput = { "FrictionInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExVerletRelax, FrictionInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrictionInput_MetaData), NewProp_FrictionInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_FrictionAttribute = { "FrictionAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExVerletRelax, FrictionAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrictionAttribute_MetaData), NewProp_FrictionAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExVerletRelax, Friction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Friction_MetaData), NewProp_Friction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_EdgeScalingInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_EdgeScalingInput = { "EdgeScalingInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExVerletRelax, EdgeScalingInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeScalingInput_MetaData), NewProp_EdgeScalingInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_EdgeScalingAttribute = { "EdgeScalingAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExVerletRelax, EdgeScalingAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeScalingAttribute_MetaData), NewProp_EdgeScalingAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_EdgeScaling = { "EdgeScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExVerletRelax, EdgeScaling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeScaling_MetaData), NewProp_EdgeScaling_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_EdgeStiffnessInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_EdgeStiffnessInput = { "EdgeStiffnessInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExVerletRelax, EdgeStiffnessInput), Z_Construct_UEnum_PCGExtendedToolkit_EPCGExInputValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeStiffnessInput_MetaData), NewProp_EdgeStiffnessInput_MetaData) }; // 504493006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_EdgeStiffnessAttribute = { "EdgeStiffnessAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExVerletRelax, EdgeStiffnessAttribute), Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeStiffnessAttribute_MetaData), NewProp_EdgeStiffnessAttribute_MetaData) }; // 3844583698
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_EdgeStiffness = { "EdgeStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExVerletRelax, EdgeStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeStiffness_MetaData), NewProp_EdgeStiffness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGExVerletRelax, TimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeStep_MetaData), NewProp_TimeStep_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGExVerletRelax_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_GravityInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_GravityInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_GravityAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_Gravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_FrictionInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_FrictionInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_FrictionAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_Friction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_EdgeScalingInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_EdgeScalingInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_EdgeScalingAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_EdgeScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_EdgeStiffnessInput_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_EdgeStiffnessInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_EdgeStiffnessAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_EdgeStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGExVerletRelax_Statics::NewProp_TimeStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVerletRelax_Statics::PropPointers) < 2048);
// ********** End Class UPCGExVerletRelax Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UPCGExVerletRelax_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGExRelaxClusterOperation,
	(UObject* (*)())Z_Construct_UPackage__Script_PCGExtendedToolkit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVerletRelax_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGExVerletRelax_Statics::ClassParams = {
	&UPCGExVerletRelax::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGExVerletRelax_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVerletRelax_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGExVerletRelax_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGExVerletRelax_Statics::Class_MetaDataParams)
};
void UPCGExVerletRelax::StaticRegisterNativesUPCGExVerletRelax()
{
}
UClass* Z_Construct_UClass_UPCGExVerletRelax()
{
	if (!Z_Registration_Info_UClass_UPCGExVerletRelax.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGExVerletRelax.OuterSingleton, Z_Construct_UClass_UPCGExVerletRelax_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGExVerletRelax.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGExVerletRelax);
UPCGExVerletRelax::~UPCGExVerletRelax() {}
// ********** End Class UPCGExVerletRelax **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExVerletRelax_h__Script_PCGExtendedToolkit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGExRelaxEdgeRestLength_StaticEnum, TEXT("EPCGExRelaxEdgeRestLength"), &Z_Registration_Info_UEnum_EPCGExRelaxEdgeRestLength, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 401961575U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGExVerletRelax, UPCGExVerletRelax::StaticClass, TEXT("UPCGExVerletRelax"), &Z_Registration_Info_UClass_UPCGExVerletRelax, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGExVerletRelax), 1437690154U) },
	};
}; // Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExVerletRelax_h__Script_PCGExtendedToolkit_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExVerletRelax_h__Script_PCGExtendedToolkit_2830038918{
	TEXT("/Script/PCGExtendedToolkit"),
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExVerletRelax_h__Script_PCGExtendedToolkit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExVerletRelax_h__Script_PCGExtendedToolkit_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExVerletRelax_h__Script_PCGExtendedToolkit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5_Projects_PCGArchitect_pACKAGES_5_7_PCGEx_PCGExtendedToolkit_HostProject_Plugins_PCGExtendedToolkit_Source_PCGExtendedToolkit_Public_Graph_Edges_Relaxing_PCGExVerletRelax_h__Script_PCGExtendedToolkit_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
