// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "UObject/ObjectMacros.h"
#include "ExAbilityTask.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class EXABILITYSYSTEM_API UExAbilityTask : public UGameplayTask
{
	GENERATED_BODY()
	
public:
	UExAbilityTask(const FObjectInitializer& ObjectInitializer);
	
	UPROPERTY()
	TObjectPtr<UExAbility> Ability;

	UPROPERTY()
	TWeakObjectPtr<UExAbilityComponent> AbilitySystemComponent;
	
	void SetAbilityComponent(UExAbilityComponent* InAbilitySystemComponent);
	void SetAbility(UExAbility* InAbility);

	virtual void InitSimulatedTask(UGameplayTasksComponent& InGameplayTasksComponent) override;
	virtual void OnDestroy(bool bInOwnerFinished) override;

	template <class T>
	static T* NewAbilityTask(UExAbility* ThisAbility, FName InstanceName = FName())
	{
		check(ThisAbility);

		T* MyObj = NewObject<T>();
		MyObj->InitTask(*ThisAbility, ThisAbility->GetGameplayTaskDefaultPriority());

		MyObj->InstanceName = InstanceName;
		return MyObj;
	}
	
	// This should be called before broadcasting delegates to make sure the ability is still active
	bool ShouldBroadcastDelegates() const;
	
};
