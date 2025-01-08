// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class HELLO_API AMyActor : public AActor
{
	GENERATED_BODY()

private:
	FVector2D start = { 0, 0 };		// 시작 지점 설정
	int evCnt = 0;					// 이벤트 카운트 수 변수 선언
	float totDist;					// 총 이동거리 변수 선언
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	void move();					// 캐릭터의 움직임을 구현한 함수
	int step();						// 캐릭터가 한 번 이동하는 정도를 구현하는 함수
	float distance(FVector2D first, FVector2D second);	// 캐릭터가 이동한 거리를 계산하는 함수
	int createEvent();				// 이벤트가 발생할 때 작동하는 함수

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;;

};
