// Fill out your copyright notice in the Description page of Project Settings.


#include "NavGameInstanceSubsystem.h"
#include "GameFramework/Actor.h"

UNavGameInstanceSubsystem::UNavGameInstanceSubsystem()
{
}

UNavGameInstanceSubsystem::~UNavGameInstanceSubsystem()
{
}

TArray<AActor*> UNavGameInstanceSubsystem::GetTargets()
{
	return targets;
}

bool UNavGameInstanceSubsystem::AddTarget(AActor* actor)
{
	size_t len = targets.Num();

	for (size_t i = 0; i < len; i++)
	{
		if (targets[i] == actor)
		{
			return false;
		}
	}

	targets.Add(actor);
	return true;
}

int32 UNavGameInstanceSubsystem::GetTargetNum()
{
	return targets.Num();
}

bool UNavGameInstanceSubsystem::RemoveTarget(AActor* actor)
{
	return targets.Remove(actor) != 0;
}

void UNavGameInstanceSubsystem::RemoveAllTargets()
{
	targets.Empty();
}