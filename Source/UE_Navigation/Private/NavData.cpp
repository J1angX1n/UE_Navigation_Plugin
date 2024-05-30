// Fill out your copyright notice in the Description page of Project Settings.
#include "NavData.h"
#include "Engine/Engine.h"

UNavData::UNavData()
{
	pos_x = 0;
	pos_y = 0;
	angle = 0;
	distance = 0;

	realPos = FVector2D(0, 0);

	outsideScreen = false;
	behind = false;
}

UNavData::~UNavData()
{
}
