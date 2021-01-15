// Copyright (c) 2021 Daniel Marshall
// SPDX-License-Identifier: MIT


#include "OpenLevelButton.h"

#include "Kismet/GameplayStatics.h"

UOpenLevelButton::UOpenLevelButton()
{
	OnClicked.AddDynamic(this, &UOpenLevelButton::OpenLevel);
}

void UOpenLevelButton::OpenLevel()
{
	UGameplayStatics::OpenLevel(this, GetFName());
}
