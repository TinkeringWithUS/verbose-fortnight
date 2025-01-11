#include "window.h"

Window::Window() {
  const int WIDTH = 200;
  const int HEIGHT = 200;
  SDLWindow = SDL_CreateWindow("My Program", SDL_WINDOWPOS_UNDEFINED,
                               SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, 0);
}

void Window::Render() {
  Uint32 color = SDL_MapRGB(GetSurface()->format, 50, 50, 50);

  SDL_FillRect(GetSurface(), nullptr, color);
}

void Window::Update() { SDL_UpdateWindowSurface(SDLWindow); }

SDL_Surface *Window::GetSurface() { return SDL_GetWindowSurface(SDLWindow); }

Window::~Window() { SDL_DestroyWindow(SDLWindow); }