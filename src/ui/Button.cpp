#include "Button.h"
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_mouse.h>
#include <SDL2/SDL_stdinc.h>

Button::Button(int x, int y, int w, int h) : Rectangle{x, y, w, h} {}

void Button::HandleEvent(const SDL_Event &E) {
  if (isDisabled)
    return;
  if (E.type == SDL_MOUSEMOTION) {
    HandleMouseMotion(E.motion);
  } else if (E.type == SDL_MOUSEBUTTONDOWN) {
    HandleMouseButton(E.button);
  }
}

void Button::HandleMouseMotion(const SDL_MouseMotionEvent &E) {
  if (IsWithinBounds(E.x, E.y)) {
    HandleMouseEnter();
  } else {
    HandleMouseExit();
  }
}

void Button::HandleMouseButton(const SDL_MouseButtonEvent &E) {
  if (IsWithinBounds(E.x, E.y)) {
    const Uint8 Button{E.button};

    if (Button == SDL_BUTTON_LEFT) {
      HandleLeftClick();
    } else if (Button == SDL_BUTTON_RIGHT) {
      HandleRightClick();
    }
  }
}

void Button::HandleMouseEnter() {
  SetColor({255, 0, 0});
}
void Button::HandleMouseExit() {
  SetColor({255, 0, 0});
}

void Button::SetIsDisabled(bool newValue) { isDisabled = true; }

void Button::HandleLeftClick() {}
void Button::HandleRightClick() {}