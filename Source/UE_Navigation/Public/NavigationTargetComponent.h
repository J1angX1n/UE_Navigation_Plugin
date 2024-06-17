// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Blueprint/UserWidget.h"

#include "NavigationTargetComponent.generated.h"


class UNavData;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UE_NAVIGATION_API UNavigationTargetComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UNavigationTargetComponent();
	~UNavigationTargetComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// 获取两条线段的交点（也可以求直线交点），如果交点在线段上返回true，否则返回false，平行也返回false
	static bool GetIntersectedPoint(const FVector2D& p1, const FVector2D& p2, const FVector2D& p3, const FVector2D& p4, FVector2D& res);

	//改自FSceneView::ProjectWorldToScreen
	bool ProjectWorldToScreen(const FVector& WorldPosition, const FIntRect& ViewRect, const FMatrix& ViewProjectionMatrix, FVector2D& out_ScreenPos, bool bShouldCalcOutsideViewPosition = false);

	// 移除所有导引图
	void RemoveNavWidgets();
	
	// 显示屏幕内用导引图
	void ShowInside();

	// 显示屏幕外用导引图
	void ShowOutside();
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//在UE基础上稍加修改的世界坐标转屏幕坐标函数，可以处理坐标在身后的情况
	bool DeprojectWorldToScreen(APlayerController const* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool bPlayerViewportRelative);

	bool UpdateNavData();

	UNavData* GetNavData();

	void SetEnable(bool value) { Enable = value; }
	bool GetEnable() { return Enable; }

	void SetDiff(double value) { Diff = value; }
	double GetDiff() { return Diff; }

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NavTarget")
	bool Enable;

	//用于修正距离，显示距离时会减去这个值，例如目标是颗巨大的星球时真正显示的距离要减去半径
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NavTarget")
	double Diff;

	//目标在屏幕内显示的导引图
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NavTarget")
	UUserWidget* WidgetInside;

	//目标在屏幕外显示的导引图
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NavTarget")
	UUserWidget* WidgetOutside;

	//导航数据
	UPROPERTY(Transient)
	UNavData* m_NavData;

	//当前所用UI的大小
	FVector2D m_UISize;

	//上个位置，用来判断坐标有没有发生突变
	FVector2D m_PrePos;
};
