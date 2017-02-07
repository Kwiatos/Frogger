#pragma once
#include "SDL.h"
#include <iostream>

class Plansza
{
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
public:
	void renderTexture(SDL_Texture *tex,  int x, int y);
	SDL_Texture* loadTexture();
	Plansza(const int screenWidth, const int screenHeight);
	Plansza();
	~Plansza();
};

