// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Containers/Array.h"

#include "NavGameInstanceSubsystem.generated.h"

class AActor;

/**
 * 
 */
UCLASS()
class UE_NAVIGATION_API UNavGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	UNavGameInstanceSubsystem();
	~UNavGameInstanceSubsystem();

	UFUNCTION(BlueprintCallable, Category = "NavSubsystem")
	TArray<AActor*> GetTargets();

	UFUNCTION(BlueprintCallable, Category = "NavSubsystem")
	bool AddTarget(AActor* actor);

	UFUNCTION(BlueprintCallable, Category = "NavSubsystem")
	int32 GetTargetNum();

	UFUNCTION(BlueprintCallable, Category = "NavSubsystem")
	bool RemoveTarget(AActor* actor);

	UFUNCTION(BlueprintCallable, Category = "NavSubsystem")
	void RemoveAllTargets();
	
protected:
	//存储指引目标
	TArray<AActor*> targets;
};
