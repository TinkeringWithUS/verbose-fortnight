#pragma once

#include <string>

#include <SDL2/SDL_surface.h>
class Image {
public:
  Image(std::string File) : ImageSurface{SDL_LoadBMP(File.c_str())} {}

  void Render(SDL_Surface *DestinationSurface) {
    SDL_LoadBMP("");

    SDL_BlitSurface(ImageSurface, nullptr, DestinationSurface, nullptr);
  }

  ~Image() {}

  Image(const Image &) = delete;
  Image &operator=(const Image &) = delete;

private:
  SDL_Surface *ImageSurface{nullptr};
};
