﻿// Copyright Timothé Lapetite 2024
// Released under the MIT license https://opensource.org/license/MIT/

#pragma once

#include "CoreMinimal.h"

#include "PCGEx.h"
#include "PCGExPointsProcessor.h"

#include "PCGExFlushDebug.generated.h"

UCLASS(MinimalAPI, BlueprintType, ClassGroup = (Procedural))
class /*PCGEXTENDEDTOOLKIT_API*/ UPCGExDebugSettings : public UPCGSettings
{
	GENERATED_BODY()

	friend class FPCGExDebugElement;

public:
	//~Begin UPCGSettings
#if WITH_EDITOR
	bool bCacheResult = false;
	PCGEX_NODE_INFOS(FlushDebug, "Flush Debug", "Flush persistent debug lines.");
	virtual EPCGSettingsType GetType() const override { return EPCGSettingsType::Debug; }
	virtual FLinearColor GetNodeTitleColor() const override { return CustomColor; }
#endif

protected:
	virtual TArray<FPCGPinProperties> InputPinProperties() const override;
	virtual TArray<FPCGPinProperties> OutputPinProperties() const override;
	virtual FPCGElementPtr CreateElement() const override;
	//~End UPCGSettings

	/** Debug drawing toggle. Exposed to have more control on debug draw in sub-graph. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Debug, meta=(PCG_Overridable))
	bool bPCGExDebug = true;

	/** Debug drawing toggle. Exposed to have more control on debug draw in sub-graph. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Debug, meta=(PCG_Overridable))
	FLinearColor CustomColor = FLinearColor(1.0f, 0.0f, 0.0f, 1.0f);
};

struct /*PCGEXTENDEDTOOLKIT_API*/ FPCGExDebugContext final : FPCGContext
{
	friend class FPCGExDebugElement;
	bool bWait = true;
};

class /*PCGEXTENDEDTOOLKIT_API*/ FPCGExDebugElement final : public IPCGElement
{
public:
	virtual FPCGContext* Initialize(const FPCGDataCollection& InputData, TWeakObjectPtr<UPCGComponent> SourceComponent, const UPCGNode* Node) override;
	virtual bool IsCacheable(const UPCGSettings* InSettings) const override { return false; }
	virtual bool CanExecuteOnlyOnMainThread(FPCGContext* Context) const override { return true; }

	//virtual void DisabledPassThroughData(FPCGContext* Context) const override;

protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
};
