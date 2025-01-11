#pragma once

#include "Button.h"
#include "QuitButton.h"
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_surface.h>

class UI {
  public:
  void HandleEvent(const SDL_Event& E);
  void Render(SDL_Surface* Surface);

  Button MyButton{50,50,50,50};
  QuitButton MyQuitButton{150, 50, 50, 50};
};