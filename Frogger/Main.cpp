#include "Header.h"

int main(int argc, char* argv[]) {
	
	SDL_Init(SDL_INIT_EVERYTHING);

	const int SCREEN_WIDTH = 815;
	const int SCREEN_HEIGHT = 580;


	Plansza *plansza = new Plansza(SCREEN_WIDTH, SCREEN_HEIGHT);

	SDL_Texture* tex = plansza->loadTexture();
	plansza->renderTexture(tex, 0, 0);

	SDL_Delay(10000);
	
	SDL_Quit();

	return 0;
}