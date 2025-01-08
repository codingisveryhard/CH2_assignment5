// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}


int AMyActor::step() {
	return FMath::RandRange(0, 1);
}

float AMyActor::distance(FVector2D first, FVector2D second)
{
	float x = first.X - second.X;
	float y = second.Y - first.Y;

	return FMath::Sqrt(FMath::Pow(x, 2) + FMath::Pow(y, 2));
}

int AMyActor::createEvent() {
	UE_LOG(LogTemp, Log, TEXT("이벤트가 발생되었습니다."));
	return evCnt++;
}


void AMyActor::move() {
	for (int i = 1; i <= 10; i++) {
	int x = step();
	int y = step();
	FVector2D init = start;
	if (FMath::RandRange(0, 1))	createEvent();

	start.X += x;
	start.Y += y;
	totDist += distance(init, start);
	
		UE_LOG(LogTemp, Warning, TEXT("%d번째 행동: 현재 위치는: (%d, %d) 이동한 거리는 : %f"), i, (int)start.X, (int)start.Y, distance(init, start));
	}
	UE_LOG(LogTemp, Log, TEXT("총 %d회의 이벤트와 %f의 거리만큼 이동했습니다."), evCnt, totDist);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	move();

}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

