#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>

int main(int, char**) {
    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO | SDL_INIT_AUDIO ) < 0 )
    {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    //Initialize SDL_mixer
    if( Mix_OpenAudio( 44100, MIX_DEFAULT_FORMAT, 2, 2048 ) < 0 )
    {
        std::cout << "SDL_mixer could not initialize! SDL_mixer Error: " << Mix_GetError() << std::endl;
        return 2;
    }

    int flags = MIX_INIT_MP3;
    int initializedFlags = Mix_Init(flags);
     if ((initializedFlags & flags) != flags) {
        std::cout << "SDL_mixer could not initialize! SDL_mixer Error: " << Mix_GetError() << std::endl;
        return 2;
    }

    std::cout << "Successfully init SDL and SDL_Mixer" << std::endl;
    return 0;
}
