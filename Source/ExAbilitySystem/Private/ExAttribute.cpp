// Copyright by Chandler Cox 2022


#include "ExAttribute.h"
#include "ExAbilityComponent.h"
#include "ExAbilitySystem/ExAbilitySystemLogging.h"

UExAttribute::UExAttribute()
{
	// defaults
	MinimumValue = 0.f;
	MaximumValue = 100.f;
	CurrentValue = 100.f;
}

AActor* UExAttribute::GetOwningActor()
{
	return OwnerInfo.OwningActor.Get();
}

UExAbilityComponent* UExAttribute::GetOwningAbilityComponent()
{
	return OwnerInfo.OwningAbilityComponent.Get();
}

void UExAttribute::ChangeCurrentValue(float NewValue)
{
	// set value type and change current value in-between min and max values
	ChangedValue = EAttributeValueType::AVT_CurrentValue;
	PreAttributeChange(NewValue);
	OldCurrentValue = CurrentValue;
	CurrentValue = FMath::Clamp(NewValue, MinimumValue, MaximumValue);
	OnCurrentValueChanged.Broadcast(CurrentValue, OldCurrentValue);
	UE_EXABILITY_LOG("%s current value changed", *GetName());
	PostAttributeChange();
}

void UExAttribute::ChangeMinimumValue(float NewValue)
{
	// set value type and change minimum value
	ChangedValue = EAttributeValueType::AVT_MinimumValue;
	PreAttributeChange(NewValue);
	OldMinimumValue = MinimumValue;
	MinimumValue = NewValue;
	
	// adjust current value to be within minimum value range
	if (CurrentValue < MinimumValue)
	{
		ChangeCurrentValue(MinimumValue);
	}
	
	OnMinimumValueChanged.Broadcast(MinimumValue, OldMinimumValue);
	UE_EXABILITY_LOG("%s minimum value changed", *GetName());
	PostAttributeChange();
}

void UExAttribute::ChangeMaximumValue(float NewValue)
{
	// set value type and change maximum value
	ChangedValue = EAttributeValueType::AVT_MaximumValue;
	PreAttributeChange(NewValue);
	OldMaximumValue = MaximumValue;
	MaximumValue = NewValue;

	// adjust current value to be within maximum value range
	if (CurrentValue > MaximumValue)
	{
		ChangeCurrentValue(MaximumValue);
	}
	
	OnMaximumValueChanged.Broadcast(MaximumValue, OldMaximumValue);
	UE_EXABILITY_LOG("%s maximum value changed", *GetName());
	PostAttributeChange();
}

float UExAttribute::GetCurrentValue()
{
	return CurrentValue;
}

float UExAttribute::GetMinimumValue()
{
	return MinimumValue;
}

float UExAttribute::GetMaximumValue()
{
	return MaximumValue;
}

void UExAttribute::PostAttributeChange()
{
	PostAttributeChange_BP();
}

void UExAttribute::PostAttributeChange_BP_Implementation()
{
}

void UExAttribute::PreAttributeChange(float& Value)
{
	PreAttributeChange_BP(Value, Value);
}

void UExAttribute::PreAttributeChange_BP_Implementation(float NewValue, float& Value)
{
}


