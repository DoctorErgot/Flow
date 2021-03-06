#pragma once

#include "Nodes/World/FlowNode_ComponentObserver.h"
#include "FlowNode_OnTriggerEvent.generated.h"

class UFlowComponent;

/**
 * On Trigger Event
 */
UCLASS(Abstract, NotBlueprintable)
class UFlowNode_OnTriggerEvent : public UFlowNode_ComponentObserver
{
	GENERATED_UCLASS_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Trigger")
	FGameplayTag OverlappedActorTag;

	bool bReactOnOverlapping;

	virtual void ExecuteInput(const FName& PinName) override;
	
	virtual void ObserveActor(TWeakObjectPtr<AActor> Actor, TWeakObjectPtr<UFlowComponent> Component) override;
	virtual void ForgetActor(TWeakObjectPtr<AActor> Actor, TWeakObjectPtr<UFlowComponent> Component) override;
};
