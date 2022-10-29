// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DesignableUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class MAYBE_IWP_API UDesignableUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintNativeEvent, Category = "User Interface")
		void OnSynchronizeProperties();

public:
	virtual void SynchronizeProperties() override;
};
