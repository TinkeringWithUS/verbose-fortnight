#include <SDL2/SDL_video.h>

class Window {
private:
  SDL_Window *SDLWindow;

public:
  Window(); 

  void Render(); 
  void Update(); 

  SDL_Surface *GetSurface(); 

  ~Window(); 
};