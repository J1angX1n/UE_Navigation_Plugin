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

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// ��ȡ�����߶εĽ��㣨Ҳ������ֱ�߽��㣩������������߶��Ϸ���true�����򷵻�false��ƽ��Ҳ����false
	static bool GetIntersectedPoint(const FVector2D& p1, const FVector2D& p2, const FVector2D& p3, const FVector2D& p4, FVector2D& res);

	//����FSceneView::ProjectWorldToScreen
	bool ProjectWorldToScreen(const FVector& WorldPosition, const FIntRect& ViewRect, const FMatrix& ViewProjectionMatrix, FVector2D& out_ScreenPos, bool bShouldCalcOutsideViewPosition = false);

	// �Ƴ����е���ͼ
	void RemoveNavWidgets();
	
	// ��ʾ��Ļ���õ���ͼ
	void ShowInside();

	// ��ʾ��Ļ���õ���ͼ
	void ShowOutside();
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//��UE�������Լ��޸ĵ���������ת��Ļ���꺯�������Դ����������������
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

	//�����������룬��ʾ����ʱ���ȥ���ֵ������Ŀ���ǿž޴������ʱ������ʾ�ľ���Ҫ��ȥ�뾶
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NavTarget")
	double Diff;

	//Ŀ������Ļ����ʾ�ĵ���ͼ
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NavTarget")
	UUserWidget* WidgetInside;

	//Ŀ������Ļ����ʾ�ĵ���ͼ
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NavTarget")
	UUserWidget* WidgetOutside;

	//��������
	UPROPERTY(Transient)
	UNavData* m_NavData;

	//��ǰ����UI�Ĵ�С
	FVector2D m_UISize;

	//�ϸ�λ�ã������ж�������û�з���ͻ��
	FVector2D m_PrePos;
};
