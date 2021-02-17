// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UlsaUEInteractionsGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ULSAUEINTERACTIONS_API AUlsaUEInteractionsGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	int score{};
	
};
