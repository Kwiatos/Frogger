#include "Header.h"

int main(int argc, char* argv[]) {
	
	SDL_Init(SDL_INIT_EVERYTHING);

	const int SCREEN_WIDTH = 815;
	const int SCREEN_HEIGHT = 580;

	Plansza *plansza = new Plansza(SCREEN_WIDTH, SCREEN_HEIGHT);
	Board board(SCREEN_WIDTH, SCREEN_HEIGHT, "plansza.bmp");

	//plansza->renderTexture(board, 0, 0);

	Frogger frogger("frogger.bmp");

	//SDL_Rect sam = plansza->renderTexture(frogger, SCREEN_WIDTH/2 - 22, SCREEN_HEIGHT-55);

	Samochod samochod[4] = { Samochod("samochod.bmp"),
							 Samochod("samochod.bmp"), 
							 Samochod("samochod.bmp"),
							 Samochod("samochod.bmp") };
	int shift = 0;

	//SDL_TimerID SDL_AddTimer(Uint32 interval, void* move, void*  param);

	Uint32 delay = 1;  /* To round it down to the nearest 10 ms */
	


	for (int i = 0; i < 4; i++) {
		
		SDL_Rect sam = plansza->renderTexture(samochod[i], SCREEN_WIDTH-110, (SCREEN_HEIGHT/2+10) + shift);
		//SDL_AddTimer(delay, samochod[i].move(sam), NULL);
		//SDL_TimerID my_timer_id = SDL_AddTimer(delay, &samochod[i].move, &samochod[i]);]



		shift += 53;
	}
	



	SDL_Delay(10000);
	
	SDL_Quit();

	return 0;
}