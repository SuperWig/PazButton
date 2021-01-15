// Copyright (c) 2021 Daniel Marshall
// SPDX-License-Identifier: MIT

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "CoolButton.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCoolButtonClickedEvent, class UCoolButton*, Button);

/**
 * Same as UButton but passes `this` for OnClicked
 */
UCLASS()
class BETTERBUTTON_API UCoolButton : public UButton
{
	GENERATED_BODY()
	
	UCoolButton();
	UFUNCTION()
    void OnCoolClicked();
	
	UPROPERTY(BlueprintAssignable, Category="CoolButton|Event")
	FOnCoolButtonClickedEvent OnCoolButtonClickedEvent;

	
};
