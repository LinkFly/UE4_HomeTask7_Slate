// Fill out your copyright notice in the Description page of Project Settings.

#include "MyHUD.h"
#include "Engine.h"

void AMyHUD::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	SAssignNew(HealthBarUI, SHealthBar).SlateHud(this).Health(.7f).IsShowPercent(false);
	if (GEngine) {
		GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(HealthBarUI.ToSharedRef()));
	}
}
