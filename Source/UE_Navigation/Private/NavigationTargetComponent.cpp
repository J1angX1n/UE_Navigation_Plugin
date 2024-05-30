// Fill out your copyright notice in the Description page of Project Settings.


#include "NavigationTargetComponent.h"
#include "NavigationComponent.h"
#include "NavGameInstanceSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Containers/Array.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "NavData.h"
#include "GameFramework/PlayerController.h"
#include "NavMacros.h"
#include "Components/TextBlock.h"
#include "Math/UnrealMathUtility.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Engine/World.h"
#include "Engine/LocalPlayer.h"
#include "Engine/GameViewportClient.h"
#include "SceneView.h"

// Sets default values for this component's properties
UNavigationTargetComponent::UNavigationTargetComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	m_NavData = NULL;
	Enable = true;
	Diff = 0.0;

	WidgetInside = NULL;
	WidgetOutside = NULL;

	m_UISize = FVector2D::ZeroVector;
	// ...
}

UNavigationTargetComponent::~UNavigationTargetComponent()
{
	UWorld* world = GetWorld();

	if (world)
	{
		UGameInstance* ins = UGameplayStatics::GetGameInstance(world);
		UNavGameInstanceSubsystem* sys = ins->GetSubsystem<UNavGameInstanceSubsystem>();

		sys->RemoveTarget((AActor*)this);
	}
}

// Called when the game starts
void UNavigationTargetComponent::BeginPlay()
{
	Super::BeginPlay();

	UWorld* world = GetWorld();

	if (world)
	{
		UGameInstance* gameIns = UGameplayStatics::GetGameInstance(world);
		UNavGameInstanceSubsystem* subsystem = gameIns->GetSubsystem<UNavGameInstanceSubsystem>();
		
		AActor* target = GetOwner();
		subsystem->AddTarget(target);
	}
}

bool UNavigationTargetComponent::GetIntersectedPoint(const FVector2D& p1, const FVector2D& p2, const FVector2D& p3, const FVector2D& p4, FVector2D& res)
{
	FVector2D vec1 = p2 - p1, vec2 = p4 - p3;
	
	double cross = UKismetMathLibrary::CrossProduct2D(vec1, vec2);

	//平行
	if (cross == 0)
	{
		return false;
	}

	double t = UKismetMathLibrary::CrossProduct2D(p3 - p1, vec2) / cross;
	double u = UKismetMathLibrary::CrossProduct2D(vec1, p1 - p3) / cross;

	
	//线段不共线但不相交
	if (t < 0 || t > 1 || u < 0 || u > 1)
	{
		return false;
	}

	res = p1 + t * vec1;
	
	return true;
}

bool UNavigationTargetComponent::ProjectWorldToScreen(const FVector& WorldPosition, const FIntRect& ViewRect, const FMatrix& ViewProjectionMatrix, FVector2D& out_ScreenPos, bool bShouldCalcOutsideViewPosition /*= false*/)
{
	FPlane Result = ViewProjectionMatrix.TransformFVector4(FVector4(WorldPosition, 1.f));
	bool bIsInsideView = Result.W > 0.0f;
	double W = Result.W;

	if (Result.W < 0)
	{
		Result.W = -Result.W;
	}
	else if (Result.W == 0)
	{
		Result.W = -FZero;
	}

	// Tweak our W value to allow the outside view position calcs if the variable is enabled.
	if (bShouldCalcOutsideViewPosition)
	{
		W = FMath::Abs(Result.W);
	}

	// the result of this will be x and y coords in -1..1 projection space
	const float RHW = 1.0f / W;
	FPlane PosInScreenSpace = FPlane(Result.X * RHW, Result.Y * RHW, Result.Z * RHW, W);

	// Move from projection space to normalized 0..1 UI space
	const float NormalizedX = (PosInScreenSpace.X / 2.f) + 0.5f;
	const float NormalizedY = 1.f - (PosInScreenSpace.Y / 2.f) - 0.5f;

	FVector2D RayStartViewRectSpace(
		(NormalizedX * (float)ViewRect.Width()),
		(NormalizedY * (float)ViewRect.Height())
	);

	out_ScreenPos = RayStartViewRectSpace + FVector2D(static_cast<float>(ViewRect.Min.X), static_cast<float>(ViewRect.Min.Y));

	return bIsInsideView;
}

void UNavigationTargetComponent::RemoveNavWidgets()
{
	if (WidgetInside && WidgetInside->IsInViewport())
	{
		WidgetInside->RemoveFromParent();
	}

	if (WidgetOutside && WidgetOutside->IsInViewport())
	{
		WidgetOutside->RemoveFromParent();
	}
}

void UNavigationTargetComponent::ShowInside()
{
	if ((m_NavData->realPos - m_PrePos).Length() <= FZero)
	{
		return;
	}

	if (!WidgetInside->IsInViewport())
	{
		WidgetInside->AddToViewport();
	}

	if (WidgetOutside->IsInViewport())
	{
		WidgetOutside->RemoveFromParent();
	}

	m_NavData->outsideScreen = false;
	m_UISize = WidgetInside->GetCachedGeometry().GetAbsoluteSize();
	
	WidgetInside->SetPositionInViewport(m_NavData->realPos - m_UISize / 2);
	UTextBlock* textDistance = Cast<UTextBlock>(WidgetInside->GetWidgetFromName(TEXT(LabelDistance)));
	if (textDistance)
	{
		textDistance->SetText(FText::AsNumber(fmax(0, m_NavData->distance - Diff)));
	}
}

void UNavigationTargetComponent::ShowOutside()
{
	UWorld* world = GetWorld();
	if (!world)
	{
		return;
	}

	if ((m_NavData->realPos - m_PrePos).Length() <= FZero)
	{
		return;
	}

	FVector2D screenSize;
	world->GetGameViewport()->GetViewportSize(screenSize);
	double screenWidth = screenSize.X, screenHeight = screenSize.Y;
	double screenHalfWidth = screenSize.X / 2, screenHalfHeight = screenSize.Y / 2;

	if (WidgetInside->IsInViewport())
	{
		WidgetInside->RemoveFromParent();
	}

	if (!WidgetOutside->IsInViewport())
	{
		WidgetOutside->AddToViewport();
	}

	m_NavData->outsideScreen = true;
	float Scale = UWidgetLayoutLibrary::GetViewportScale(this);
	m_UISize = WidgetOutside->GetDesiredSize() * Scale;

	//修正坐标让过渡更平滑
	if (m_NavData->behind)
	{
		//if (abs(m_NavData->realPos.X - 0) <= 1e-6)
		//{
		//	m_NavData->realPos.Y = fmax(m_NavData->realPos.Y, screenHeight - abs(m_NavData->pos_x));
		//}
		//else if (abs(m_NavData->realPos.X - screenWidth) <= 1e-6)
		//{
		//	m_NavData->realPos.Y = fmax(m_NavData->realPos.Y, screenHeight - abs(screenWidth - m_NavData->pos_x));
		//}
		//else
		//{
		//	m_NavData->realPos.Y = screenHeight;
		//}

		if (abs(m_NavData->realPos.X - 0) <= 1e-6)
		{
			m_NavData->realPos.Y = fmax(m_NavData->realPos.Y, atan(abs(m_NavData->pos_x)) / PI * screenHeight);
		}
		else if (abs(m_NavData->realPos.X - screenWidth) <= 1e-6)
		{
			m_NavData->realPos.Y = fmax(m_NavData->realPos.Y, atan(abs(screenWidth - m_NavData->pos_x)) / PI * screenHeight);
		}
		else
		{
			m_NavData->realPos.Y = screenHeight;
		}
	}

	//如果计算出的新的坐标相比于上个坐标出现了跳变就限制新坐标变化使其慢慢过渡
	if (m_NavData->outsideScreen && m_PrePos != FVector2D::ZeroVector)
	{
		FVector2D dir = m_NavData->realPos - m_PrePos;

		if (dir.Length() >= DelayRangeMin && dir.Length() <= DelayRangeMax)
		{
			m_NavData->realPos = DelayCoefficient * dir + m_PrePos;
		}
	}

	//计算得到的真实位置是图片渲染的左上角，需要减去UI大小的一半将其居中
	FVector2D diff = m_UISize / 2;
	//真实位置处于屏幕边界时要稍微调整图片位置使其能完整显示，不能直接修改realPos的值，那样位置会发生变化
	if (m_NavData->realPos.X < m_UISize.X / 2)
	{
		diff.X -= m_UISize.X / 2 - m_NavData->realPos.X;
	}
	if (m_NavData->realPos.Y < m_UISize.Y / 2)
	{
		diff.Y -= m_UISize.Y / 2 - m_NavData->realPos.Y;
	}

	if (m_NavData->realPos.X > screenWidth - m_UISize.X / 2)
	{
		diff.X += m_UISize.X / 2 - (screenWidth - m_NavData->realPos.X);
	}
	if (m_NavData->realPos.Y > screenHeight - m_UISize.Y / 2)
	{
		diff.Y += m_UISize.Y / 2 - (screenHeight - m_NavData->realPos.Y);
	}
	
	FVector2D up(0, -1), dir = (m_NavData->realPos - diff) - FVector2D(screenHalfWidth, screenHalfHeight);
	m_NavData->angle = FMath::RadiansToDegrees(acos(FVector2D::DotProduct(up, dir) / (up.Length() * dir.Length())));
	if (dir.X < 0)
	{
		m_NavData->angle = -m_NavData->angle;
	}

	WidgetOutside->SetPositionInViewport(m_NavData->realPos - diff);
	WidgetOutside->SetRenderTransformAngle(m_NavData->angle);
	UTextBlock* textDistance = Cast<UTextBlock>(WidgetOutside->GetWidgetFromName(TEXT(LabelDistance)));
	if (textDistance)
	{
		textDistance->SetText(FText::AsNumber(fmax(0, m_NavData->distance - Diff)));
	}
}

// Called every frame
void UNavigationTargetComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateNavData();
	// ...
}

bool UNavigationTargetComponent::DeprojectWorldToScreen(APlayerController const* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool bPlayerViewportRelative)
{
	ULocalPlayer* const LP = Player ? Player->GetLocalPlayer() : nullptr;
	if (LP && LP->ViewportClient)
	{
		// get the projection data
		FSceneViewProjectionData ProjectionData;
		if (LP->GetProjectionData(LP->ViewportClient->Viewport, /*out*/ ProjectionData))
		{
			FMatrix const ViewProjectionMatrix = ProjectionData.ComputeViewProjectionMatrix();
			bool bResult = ProjectWorldToScreen(WorldPosition, ProjectionData.GetConstrainedViewRect(), ViewProjectionMatrix, ScreenPosition);

			if (bPlayerViewportRelative)
			{
				ScreenPosition -= FVector2D(ProjectionData.GetConstrainedViewRect().Min);
			}

			Player->PostProcessWorldToScreen(WorldPosition, ScreenPosition, bPlayerViewportRelative);
			
			return bResult;
		}
	}

	ScreenPosition = FVector2D::ZeroVector;
	return false;
}

bool UNavigationTargetComponent::UpdateNavData()
{
	if (!WidgetInside || !WidgetOutside || !Enable)
	{
		RemoveNavWidgets();
		return false;
	}
	
	UWorld* world = GetWorld();

	if (world)
	{
		APawn* pawn = UGameplayStatics::GetPlayerPawn(world, 0);
		if (!pawn)
		{
			RemoveNavWidgets();
			return false;
		}
		
		APlayerController* pc = UGameplayStatics::GetPlayerController(world, 0);
		UNavigationComponent* navCom = pawn->GetComponentByClass<UNavigationComponent>();
		if (!navCom || !navCom->GetEnable())
		{
			RemoveNavWidgets();
			return false;
		}

		FVector worldPos;
		FVector2D screenPos, screenSize;

		worldPos = GetOwner()->GetActorLocation();
		bool behind = !DeprojectWorldToScreen(pc, worldPos, screenPos, false);

		if (!world->GetGameViewport())
		{
			return false;
		}

		world->GetGameViewport()->GetViewportSize(screenSize);
		double screenWidth = screenSize.X, screenHeight = screenSize.Y;
		double screenHalfWidth = screenSize.X / 2, screenHalfHeight = screenSize.Y / 2;

		if (!m_NavData)
		{
			m_NavData = NewObject<UNavData>(/*this*/);
		}

		if (behind)
		{
			m_NavData->pos_x = screenWidth - screenPos.X;

			//取二者较大值可以防止绝大部分情况下坐标出现跳变
			m_NavData->pos_y = fmax(screenPos.Y, screenHeight - screenPos.Y);
		}
		else
		{
			m_NavData->pos_x = screenPos.X;
			m_NavData->pos_y = screenPos.Y;
		}

		m_NavData->behind = behind;

		//计算真实位置
		FVector2D originPos = FVector2D(m_NavData->pos_x, m_NavData->pos_y);
		FVector2D center(screenHalfWidth, screenHalfHeight);
		m_PrePos = m_NavData->realPos;
		FVector distance = pawn->GetActorLocation() - GetOwner()->GetActorLocation();
		m_NavData->distance = distance.Length();
		m_NavData->realPos = FVector2D(m_NavData->pos_x, m_NavData->pos_y);

		if (m_NavData->pos_x >= 0 && m_NavData->pos_x <= screenHalfWidth * 2 && m_NavData->pos_y >= 0 && m_NavData->pos_y <= screenHalfHeight * 2)
		{
			//在屏幕中
			if (!m_NavData->behind)
			{
				ShowInside();
				return true;
			}
		}
		
		if (GetIntersectedPoint(center, originPos, FVector2D(0, 0), FVector2D(screenWidth, 0), m_NavData->realPos))
		{
			//上方
		}
		else if (GetIntersectedPoint(center, originPos, FVector2D(0, 0), FVector2D(0, screenHeight), m_NavData->realPos))
		{
			//左侧
		}
		else if (GetIntersectedPoint(center, originPos, FVector2D(screenWidth, 0), FVector2D(screenWidth, screenHeight), m_NavData->realPos))
		{
			//右侧
		}
		else
		{
			//下方
			GetIntersectedPoint(center, originPos, FVector2D(0, screenHeight), FVector2D(screenWidth, screenHeight), m_NavData->realPos);
		}

		ShowOutside();
	}

	return true;
}

UNavData* UNavigationTargetComponent::GetNavData()
{
	return m_NavData;
}
