﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#pragma once

#include "CoreMinimal.h"
#include "PCGExCompare.h"
#include "PCGExGlobalSettings.h"

#include "PCGExPointsProcessor.h"


#include "PCGExBitwiseOperation.generated.h"

UCLASS(MinimalAPI, BlueprintType, ClassGroup = (Procedural), Category="PCGEx|Misc")
class /*PCGEXTENDEDTOOLKIT_API*/ UPCGExBitwiseOperationSettings : public UPCGExPointsProcessorSettings
{
	GENERATED_BODY()

public:
	//~Begin UPCGSettings
#if WITH_EDITOR
	PCGEX_NODE_INFOS(BitwiseOperation, "Bitmask Operation", "Do a Bitmask operation on an attribute.");
	virtual FLinearColor GetNodeTitleColor() const override { return GetDefault<UPCGExGlobalSettings>()->NodeColorMiscWrite; }
#endif

protected:
	virtual FPCGElementPtr CreateElement() const override;
	//~End UPCGSettings

	//~Begin UPCGExPointsProcessorSettings
public:
	virtual PCGExData::EIOInit GetMainOutputInitMode() const override;
	//~End UPCGExPointsProcessorSettings

	/** Target attribute */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable))
	FName FlagAttribute;

	/** Target attribute */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable))
	EPCGExBitOp Operation;

	/** Type of Mask */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable))
	EPCGExInputValueType MaskInput = EPCGExInputValueType::Constant;

	/** Mask -- Must be int64. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable, DisplayName="Bitmask", EditCondition="MaskInput==EPCGExInputValueType::Attribute", EditConditionHides))
	FName MaskAttribute;

	/**  */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta=(PCG_Overridable, DisplayName="Bitmask", EditCondition="MaskInput==EPCGExInputValueType::Constant", EditConditionHides))
	int64 Bitmask;
};

struct /*PCGEXTENDEDTOOLKIT_API*/ FPCGExBitwiseOperationContext final : FPCGExPointsProcessorContext
{
	friend class FPCGExBitwiseOperationElement;
};

class /*PCGEXTENDEDTOOLKIT_API*/ FPCGExBitwiseOperationElement final : public FPCGExPointsProcessorElement
{
public:
	virtual FPCGContext* Initialize(
		const FPCGDataCollection& InputData,
		TWeakObjectPtr<UPCGComponent> SourceComponent,
		const UPCGNode* Node) override;

protected:
	virtual bool Boot(FPCGExContext* InContext) const override;
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
};

namespace PCGExBitwiseOperation
{
	class FProcessor final : public PCGExPointsMT::TPointsProcessor<FPCGExBitwiseOperationContext, UPCGExBitwiseOperationSettings>
	{
		TSharedPtr<PCGExData::TBuffer<int64>> Reader;
		TSharedPtr<PCGExData::TBuffer<int64>> Writer;

		int64 Mask = 0;
		EPCGExBitOp Op = EPCGExBitOp::Set;

	public:
		explicit FProcessor(const TSharedRef<PCGExData::FFacade>& InPointDataFacade):
			TPointsProcessor(InPointDataFacade)
		{
		}

		virtual ~FProcessor() override
		{
		}

		virtual bool Process(const TSharedPtr<PCGExMT::FTaskManager> InAsyncManager) override;
		virtual void ProcessSinglePoint(const int32 Index, FPCGPoint& Point, const int32 LoopIdx, const int32 Count) override;
		virtual void CompleteWork() override;
	};
}
