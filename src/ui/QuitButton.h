#pragma once

#include "Button.h"
#include <SDL2/SDL_events.h>
#include <iostream>

class QuitButton : public Button {
public:
  QuitButton(int x, int y, int w, int h) : Button{x, y, w, h} {}

protected:
  void HandleLeftClick() override {
    SDL_Event Quit{SDL_QUIT};
    SDL_PushEvent(&Quit);
  }
};