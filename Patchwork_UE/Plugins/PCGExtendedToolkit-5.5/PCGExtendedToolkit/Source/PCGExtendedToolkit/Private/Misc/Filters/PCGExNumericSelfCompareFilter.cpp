﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#include "Misc/Filters/PCGExNumericSelfCompareFilter.h"


#define LOCTEXT_NAMESPACE "PCGExCompareFilterDefinition"
#define PCGEX_NAMESPACE CompareFilterDefinition

TSharedPtr<PCGExPointFilter::FFilter> UPCGExNumericSelfCompareFilterFactory::CreateFilter() const
{
	return MakeShared<PCGExPointsFilter::TNumericSelfComparisonFilter>(this);
}

void UPCGExNumericSelfCompareFilterFactory::RegisterConsumableAttributes(FPCGExContext* InContext) const
{
	Super::RegisterConsumableAttributes(InContext);
	//TODO : Implement Consumable
}

bool PCGExPointsFilter::TNumericSelfComparisonFilter::Init(FPCGExContext* InContext, const TSharedPtr<PCGExData::FFacade> InPointDataFacade)
{
	if (!FFilter::Init(InContext, InPointDataFacade)) { return false; }

	bOffset = TypedFilterFactory->Config.IndexMode == EPCGExIndexMode::Offset;
	MaxIndex = PointDataFacade->Source->GetNum() - 1;

	if (MaxIndex < 0) { return false; }

	OperandA = MakeShared<PCGEx::TAttributeBroadcaster<double>>();

	if (!OperandA->Prepare(TypedFilterFactory->Config.OperandA, PointDataFacade->Source))
	{
		PCGE_LOG_C(Error, GraphAndLog, InContext, FText::Format(FTEXT("Invalid Operand A attribute: \"{0}\"."), FText::FromName(TypedFilterFactory->Config.OperandA.GetName())));
		return false;
	}

	if (TypedFilterFactory->Config.CompareAgainst == EPCGExInputValueType::Attribute)
	{
		Index = PointDataFacade->GetScopedBroadcaster<int32>(TypedFilterFactory->Config.IndexAttribute);

		if (!Index)
		{
			PCGE_LOG_C(Error, GraphAndLog, InContext, FText::Format(FTEXT("Invalid Index attribute: \"{0}\"."), FText::FromName(TypedFilterFactory->Config.IndexAttribute.GetName())));
			return false;
		}
	}

	return true;
}

PCGEX_CREATE_FILTER_FACTORY(NumericSelfCompare)

#if WITH_EDITOR
FString UPCGExNumericSelfCompareFilterProviderSettings::GetDisplayName() const
{
	FString DisplayName = PCGEx::GetSelectorDisplayName(Config.OperandA) + PCGExCompare::ToString(Config.Comparison);

	if (Config.IndexMode == EPCGExIndexMode::Pick) { DisplayName += TEXT(" @ "); }
	else { DisplayName += TEXT(" i+ "); }

	if (Config.CompareAgainst == EPCGExInputValueType::Attribute) { DisplayName += PCGEx::GetSelectorDisplayName(Config.IndexAttribute); }
	else { DisplayName += FString::Printf(TEXT("%d"), Config.IndexConstant); }

	return DisplayName;
}
#endif

#undef LOCTEXT_NAMESPACE
#undef PCGEX_NAMESPACE
