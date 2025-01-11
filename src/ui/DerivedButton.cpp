#include "DerivedButton.h"
#include <iostream>

DerivedButton::DerivedButton(int x, int y, int w, int h) : Button{x, y, w, h} {}

void DerivedButton::HandleLeftClick() {
  std::cout << "I have been left clicked\n";
}

void DerivedButton::HandleRightClick() {
  std::cout << "I have been right clicked\n";
}