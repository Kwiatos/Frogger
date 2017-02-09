#pragma once
#include "SDL.h"
#include <iostream>
#include <string>
#include "Frogger.h"
#include "Board.h"

class Plansza
{
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
	Frogger frogger;
	Board board;
public:
	SDL_Window* getWindow();
	SDL_Renderer* getRenderer();
	void renderTexture(Texture & texture, int x, int y);
	Plansza(const int screenWidth, const int screenHeight);
	Plansza();
	~Plansza();
};

