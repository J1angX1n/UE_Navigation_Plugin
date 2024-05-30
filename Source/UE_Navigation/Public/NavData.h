// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NavData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UE_NAVIGATION_API UNavData : public UObject
{
	GENERATED_BODY()
	
public:
	UNavData();
	virtual ~UNavData();
	
public:

	double pos_x;
	double pos_y;
	double angle;
	double distance;

	bool behind;
	bool outsideScreen;

	FVector2D realPos;
};
