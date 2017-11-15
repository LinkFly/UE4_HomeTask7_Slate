// Fill out your copyright notice in the Description page of Project Settings.

#include "SHealthBar.h"
//#include "SlateOptMacros.h"
#include "Engine.h"
//#include "Runtime/SlateCore/Public/Styling/ISlateStyle.h"
#include "Runtime/Engine/Public/Slate/SlateGameResources.h"
#include "Runtime/Slate/Public/Widgets/Notifications/SProgressBar.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SHealthBar::Construct(const SHealthBar::FArguments& args)
{
	SlateHud = args._SlateHud;
	Health = args._Health;
	IsShowPercent = args._IsShowPercent;
	ChildSlot
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
		/*.HAlign(HAlign_Center)*/
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Bottom)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.HAlign(HAlign_Fill)

			/*.HAlign(HAlign_Center)
			.VAlign(VAlign_Bottom)*/
			/*.FillWidth(.5)*/
			//.HAlign(HAlign_Left)
			//.VAlign(VAlign_Bottom)
			+SHorizontalBox::Slot()
			.HAlign(HAlign_Fill)
			[
				SNew(SProgressBar)
				.Percent(Health)
			]
			+ SHorizontalBox::Slot()
			.Padding(FMargin(20, 5, 0, 5))
			/*.HAlign(HAlign_Left)
			.VAlign(VAlign_Bottom)*/
			[
				SNew(STextBlock)
				.ColorAndOpacity(FLinearColor::White)
				.Font(FSlateFontInfo("Arial", 30))
				.Text(FText::FromString(FString::FromInt((int32)(Health * 100)) + (IsShowPercent ? "%" : "")))
			]
		]
	];
	
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION


