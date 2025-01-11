#pragma once

#include "Button.h"

class DerivedButton : public Button {
public:
  DerivedButton(int x, int y, int w, int h); 

protected:
  void HandleLeftClick() override;
  void HandleRightClick() override;
};
