#include<SDL2/SDL.h>
#include<stdio.h>

// Crate a window using sdl

int main(int argc, char *argv[]) {
    SDL_Window *window = 0;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("%s\n", "SDL VIDEO failed to init");
        printf("%s\n", SDL_GetError());
        return 1;
    }

    window = SDL_CreateWindow("Window Title", SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
    if (window == 0) {
        printf("%s\n", "SDL window failed to create");
        printf("%s\n", SDL_GetError());
        return 1;
    }

    SDL_UpdateWindowSurface(window);
    SDL_Delay(5000);

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}