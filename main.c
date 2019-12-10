#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <SDL2/SDL.h>
#include "test.h"

#define X 320
#define Y 200

int main(void) {
	short *mem = malloc(1000000 * sizeof(short));
    SDL_Event event;
    SDL_Renderer *renderer;
    SDL_Window *window;

    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(320, 200, 0, &window, &renderer);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
	

	//clock_t t;
    while (!getchar()) {
		
			//t = clock();
			//for(int y=0; y < Y; y++)
				//for(int x=0; x < X; x++)
					//SDL_RenderDrawPoint(renderer, x, y);
			//SDL_RenderPresent(renderer);
			//printf("%f", (float)(clock()-t)/CLOCKS_PER_SEC);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_SUCCESS;
}
/*
#include <stdlib.h>

#include <SDL2/SDL.h>

#define WINDOW_WIDTH 600

int main(void) {
    SDL_Event event;
    SDL_Renderer *renderer;
    SDL_Window *window;
    int i;

    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(320, 200, 0, &window, &renderer);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    for (i = 0; i < 320; ++i)
        SDL_RenderDrawPoint(renderer, i, i);
    SDL_RenderPresent(renderer);
    while (1) {
        if (SDL_PollEvent(&event) && event.type == SDL_QUIT)
            break;
    }
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_SUCCESS;
}
*/
