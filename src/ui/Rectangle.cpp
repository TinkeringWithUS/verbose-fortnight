#include "Rectangle.h"

Rectangle::Rectangle(int x, int y, int w, int h, SDL_Color Color)
    : Rect{x, y, w, h}, Color{Color} {}

void Rectangle::Render(SDL_Surface *Surface) {
  SDL_FillRect(Surface, &Rect,
               SDL_MapRGB(Surface->format, Color.r, Color.g, Color.b));
}

void Rectangle::SetColor(SDL_Color C) { Color = C; }

bool Rectangle::IsWithinBounds(int x, int y) const {
  // const int leftBound = Rect.x;
  // const int rightBound = Rect.x + Rect.w;
  // const int topBound = Rect.y;
  // const int bottomBound = Rect.y + Rect.h;

  // if (x < leftBound || rightBound > x || y < topBound || bottomBound > y) {
  //   return false;
  // }
  // return true;

  // Too far left
  if (x < Rect.x)
    return false;
  // Too far right
  if (x > Rect.x + Rect.w)
    return false;
  // Too high
  if (y < Rect.y)
    return false;
  // Too low
  if (y > Rect.y + Rect.h)
    return false;
  // Within bounds
  return true;
}
