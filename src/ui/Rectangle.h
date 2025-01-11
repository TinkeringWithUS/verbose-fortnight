#pragma once

#include <SDL2/SDL_pixels.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_surface.h>

class Rectangle {
public:
  Rectangle(int x, int y, int w, int h, SDL_Color Color = {0, 0, 0, 255});

  void Render(SDL_Surface *Surface);
  void SetColor(SDL_Color C);
  bool IsWithinBounds(int x, int y) const;

private:
  SDL_Rect Rect{0, 0, 0, 0};
  SDL_Color Color{0, 0, 0, 0};
};
