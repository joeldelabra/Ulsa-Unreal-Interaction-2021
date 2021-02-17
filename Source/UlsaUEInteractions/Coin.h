// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Coin.generated.h"

UCLASS()
class ULSAUEINTERACTIONS_API ACoin : public AActor
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere)
		int points{};
	
public:	
	// Sets default values for this actor's properties
	ACoin();
	int GetPoints();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
