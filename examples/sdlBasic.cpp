#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>

#include <SDL2/SDL_mixer.h>

#include <SDL2/SDL_keycode.h>
#include <iostream>

int main(int argc, char *argv[]) {

  const int SCREEN_WIDTH = 640;
  const int SCREEN_HEIGHT = 480;

  SDL_Init(SDL_INIT_VIDEO);

  SDL_Window *window =
      SDL_CreateWindow("SDL2Test", SDL_WINDOWPOS_UNDEFINED,
                       SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT,
                       0);

  SDL_Renderer *renderer =
      SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
  SDL_RenderClear(renderer);
  SDL_RenderPresent(renderer);

  while (true) {
    SDL_Event event;
    if(SDL_WaitEvent(&event)) {
      if(event.type == SDL_KEYDOWN) {
        if(event.key.keysym.sym == SDLK_w) {

        }
        std::cout << "event type is keydown\n";
        break;
      }
    }
  }

  // SDL_Delay(5000);

  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}