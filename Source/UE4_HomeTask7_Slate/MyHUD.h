// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SHealthBar.h"
#include "MyHUD.generated.h"

/**
 * 
 */
UCLASS()
class UE4_HOMETASK7_SLATE_API AMyHUD : public AHUD
{
	GENERATED_BODY()

protected:

	virtual void PostInitializeComponents() override;
	TSharedPtr<class SHealthBar> HealthBarUI;
	

};
