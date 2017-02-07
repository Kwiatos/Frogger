#pragma once
#include "SDL.h"
#include <iostream>

class Plansza
{
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
public:
	Plansza(const int screenWidth, const int screenHeight);
	Plansza();
	~Plansza();
};

