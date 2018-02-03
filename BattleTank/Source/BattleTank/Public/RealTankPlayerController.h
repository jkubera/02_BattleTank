// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "RealTankPlayerController.generated.h"

UCLASS()
class BATTLETANK_API ARealTankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	
	ATank* GetControlledTank() const;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	void AimTowardsCrosshair();
	
};
