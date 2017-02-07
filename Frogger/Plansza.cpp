#include "Plansza.h"

using namespace std;

Plansza::Plansza(const int screenWidth, const int screenHeight)
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		cout << "SDL could not initialize! SDL_Error: %s\n" <<  SDL_GetError();
	}
	else {
		int winAndRen = SDL_CreateWindowAndRenderer(screenWidth, screenHeight, 0, &(this->window), &(this->renderer));

		if (winAndRen != 0) {
			cout << "SDL could not initialize! SDL_Error: %s\n" << SDL_GetError();
		}

	}
}

Plansza::Plansza()
{
	this->window = NULL;
	this->renderer = NULL;
}


Plansza::~Plansza()
{
	SDL_DestroyWindow(window);
}
