// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}


int AMyActor::step() {
	return FMath::RandRange(0, 1);	// 0과 1 중 하나를 랜덤으로 반환
}

float AMyActor::distance(FVector2D first, FVector2D second)
{
	float x = first.X - second.X;
	float y = second.Y - first.Y;

	return FMath::Sqrt(FMath::Pow(x, 2) + FMath::Pow(y, 2)); // 이동거리를 주어진 식에 따라 계산
}

int AMyActor::createEvent() {
	UE_LOG(LogTemp, Log, TEXT("이벤트가 발생되었습니다."));	// 이벤트 발생 시 출력
	return evCnt++;											// 이벤트 카운트 1 증가
}


void AMyActor::move() {
		int x = step();								// x축으로 이동시킬 값을 반환
		int y = step();								// y축으로 이동시킬 값을 반환
		start.X += x;								// 현재 위치에 x축에 반환된 값만큼 증가
		start.Y += y;								// 현재 위치의 y축에 반환된 값만큼 증가
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	for (int i = 1; i <= 10; i++) {					// 이동을 10회 반복
		FVector2D init = start;						// 초기의 위치값을 저장
		move();										// 이동 함수
		if (FMath::RandRange(0, 1))	createEvent();	// 50%의 확률로 작동하는 이벤트 함수
		totDist += distance(init, start);			// 총 이동량에 이동거리만큼 추가
		UE_LOG(LogTemp, Warning, TEXT("%d번째 행동: 현재 위치는: (%d, %d) 이동한 거리는 : %f"), i, (int)start.X, (int)start.Y, distance(init, start)); // 현재 위치와 이동거리를 출력
	}
	UE_LOG(LogTemp, Log, TEXT("총 %d회의 이벤트와 %f의 거리만큼 이동했습니다."), evCnt, totDist);	// 전체 이동을 마친 후 출력
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

