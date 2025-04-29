#ifndef SETUP_H
#define SETUP_H

#include <SDL3/SDL.h>

extern const int BOARD_WIDTH;
extern const int BOARD_HEIGHT;

void setup(SDL_Window *window,SDL_Renderer *renderer);

#endif // SETUP_H