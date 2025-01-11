#include "UI.h"

#include <SDL2/SDL_events.h>
#include <SDL2/SDL_surface.h>


void UI::HandleEvent(const SDL_Event& E) {
  // MyButton.HandleEvent(E);
  MyQuitButton.HandleEvent(E);
}

void UI::Render(SDL_Surface* Surface) {
  // MyButton.Render(Surface);
  MyQuitButton.Render(Surface);
}