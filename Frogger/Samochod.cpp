#include "Samochod.h"

using namespace std;

Uint32 Samochod::move(Uint32 interval, void *param) {
	
	Samochod *currentSamochod = reinterpret_cast<Samochod*>(param);
	int j = 300;
	while (j > 0) {
		this->image.x -= 2;
		SDL_RenderCopy(renderer, textureSDL, NULL, &this->image);

		SDL_RenderPresent(renderer);
		SDL_RenderClear(renderer);
		j--;

	}
	//currentSamochod->
	return NULL;
}



Samochod::Samochod(string filePath):Texture(filePath)
{
}


Samochod::Samochod()
{
}


Samochod::~Samochod()
{
}
