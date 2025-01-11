#pragma once

#include "Rectangle.h"
#include <SDL2/SDL_events.h>
class Button : public Rectangle {
public:
  Button(int x, int y, int w, int h);

  void HandleEvent(const SDL_Event &E);

protected:
  virtual void HandleLeftClick();
  virtual void HandleRightClick();

  virtual void HandleMouseEnter();
  virtual void HandleMouseExit();

  void SetIsDisabled(bool newValue);

private:
  void HandleMouseMotion(const SDL_MouseMotionEvent &E);
  void HandleMouseButton(const SDL_MouseButtonEvent &E);

  bool isDisabled{false};
};