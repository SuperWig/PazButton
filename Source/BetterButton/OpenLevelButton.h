// Copyright (c) 2021 Daniel Marshall
// SPDX-License-Identifier: MIT

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "OpenLevelButton.generated.h"

/**
 * Calls OpenLevel with the button's name OnClicked
 */
UCLASS()
class BETTERBUTTON_API UOpenLevelButton : public UButton
{
	GENERATED_BODY()

	UOpenLevelButton();
	UFUNCTION()
	void OpenLevel();
};
