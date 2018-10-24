#include <SDL.h>

int main(int argCount, char * args[])
{
	SDL_Window * window = SDL_CreateWindow("SDL!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 400, SDL_WindowFlags::SDL_WINDOW_ALLOW_HIGHDPI);

	SDL_Delay(1000);

	SDL_DestroyWindow(window);
	return 0;
}