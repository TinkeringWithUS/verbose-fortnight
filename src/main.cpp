#include <SDL2/SDL_events.h>
#include <SDL2/SDL_mouse.h>
#include <SDL2/SDL_pixels.h>
#include <SDL2/SDL_stdinc.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_video.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <iostream>

#include "ui/UI.h"
#include "window/window.h"

namespace UserEvent {
  const inline Uint32 OPEN_SETTINGS{
    SDL_RegisterEvents(1)
  };
  
  const inline Uint32 CLOSE_SETTINGS{
    SDL_RegisterEvents(1)
  };

}

int main(int argc, char **argv) {

  SDL_Init(SDL_INIT_VIDEO);
  Window GameWindow;

  UI GameUI;

  SDL_Event Event;

  bool shouldQuit{false};

  SDL_Init(SDL_INIT_EVENTS);

  Uint32 OPEN_SETTINGS{SDL_RegisterEvents(1)};
  SDL_Event MyEvent{OPEN_SETTINGS};
  SDL_PushEvent(&MyEvent);

  while (!shouldQuit) {
    while (SDL_PollEvent(&Event)) {
      // GameUI.HandleEvent(Event);

      if(Event.type == OPEN_SETTINGS) {
        std::cout << "hi\n";
      }

      if(Event.type == SDL_QUIT) {
        shouldQuit = true;
      }
    }

    GameWindow.Render();
    GameUI.Render(GameWindow.GetSurface());
    GameWindow.Update();
  }

  SDL_Quit();

  return 0;
}
