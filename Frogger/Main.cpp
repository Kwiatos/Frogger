#include "Header.h"

int main(int argc, char* argv[]) {
	
	SDL_Init(SDL_INIT_EVERYTHING);

	const int SCREEN_WIDTH = 815;
	const int SCREEN_HEIGHT = 580;

	Plansza *plansza = new Plansza(SCREEN_WIDTH, SCREEN_HEIGHT);
	Board board(SCREEN_WIDTH, SCREEN_HEIGHT, "plansza.bmp");

	plansza->renderTexture(board, 0, 0);

	//Frogger frogger;

	SDL_Delay(10000);
	
	SDL_Quit();

	return 0;
}