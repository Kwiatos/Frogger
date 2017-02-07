#include "Header.h"

int main(int argc, char* argv[]) {
	
	SDL_Init(SDL_INIT_EVERYTHING);

	const int SCREEN_WIDTH = 640;
	const int SCREEN_HEIGHT = 480;


	Plansza *plansza = new Plansza(SCREEN_WIDTH, SCREEN_HEIGHT);



	SDL_Delay(3000);

	
	SDL_Quit();

	return 0;
}