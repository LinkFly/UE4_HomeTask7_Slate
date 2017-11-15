// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyHUD.h"
#include "Widgets/SCompoundWidget.h"


/**
 * 
 */
class UE4_HOMETASK7_SLATE_API SHealthBar : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SHealthBar)
	{}
	SLATE_ARGUMENT(TWeakObjectPtr<class AMyHUD>, SlateHud)
	SLATE_ARGUMENT(float, Health)
	SLATE_ARGUMENT(bool, IsShowPercent)
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const SHealthBar::FArguments& args);

	TWeakObjectPtr<class AMyHUD>  SlateHud;
	float Health = .3f;
	bool IsShowPercent = true;
};
