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
	FVector2D start = { 0, 0 };
	int evCnt = 0;
	float totDist;
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	void move();
	int step();
	float distance(FVector2D first, FVector2D second);
	int createEvent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;;

};
