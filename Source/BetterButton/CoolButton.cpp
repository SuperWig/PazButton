// Copyright (c) 2021 Daniel Marshall
// SPDX-License-Identifier: MIT

#include "CoolButton.h"

UCoolButton::UCoolButton()
{
	OnClicked.AddDynamic(this, &UCoolButton::OnCoolClicked);
}

void UCoolButton::OnCoolClicked()
{
	OnCoolButtonClickedEvent.Broadcast(this);
}
