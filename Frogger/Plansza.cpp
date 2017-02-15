#include "Plansza.h"

using namespace std;

int** Plansza::getTablica() {
	return this->tablica;
}

SDL_Window* Plansza::getWindow() 
{
	if (this->window != NULL) {
		return this->window;
	}
	else {
		return NULL;
	}
}

SDL_Renderer* Plansza::getRenderer()
{
	if (this->renderer != NULL) {
		return this->renderer;
	}
	else {
		return NULL;
	}
}

SDL_Rect Plansza::renderTexture(Texture & texture, int x, int y) {

	SDL_Texture *textureSDL = nullptr;
	SDL_Surface* loadedImage = texture.prepareToTexture(texture.getFilePath());
	if (loadedImage != nullptr) {
		textureSDL = SDL_CreateTextureFromSurface(this->renderer, loadedImage);
		SDL_FreeSurface(loadedImage);
	}
		if (textureSDL == nullptr) {
			cout << "trealalalall";
			//	logSDLError(std::cout, "CreateTextureFromSurface");
		}
		
		SDL_Rect texture_rect;
		texture_rect.x = x;
		texture_rect.y = y;
		texture_rect.w = loadedImage->w;
		texture_rect.h = loadedImage->h;


		texture.image.x = x;
		texture.image.y = y;
		texture.image.w = loadedImage->w;
		texture.image.h = loadedImage->h;
//		SDL_RenderClear(renderer);

		SDL_RenderCopy(renderer, textureSDL, NULL, &texture.image);

		SDL_RenderPresent(renderer);


		return texture_rect;
}

Plansza::Plansza(const int screenWidth, const int screenHeight)
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		cout << "SDL could not initialize! SDL_Error: %s\n" <<  SDL_GetError();
		SDL_Quit();
	}
	else {
		this->window = SDL_CreateWindow("Frogger", 100, 100, screenWidth,
			screenHeight, 0);
		if (this->window == nullptr) {
			//logSDLError(std::cout, "CreateWindow");
			SDL_Quit();
		}
		this->renderer = SDL_CreateRenderer(this->window, -1,
			SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
		if (this->renderer == nullptr) {
			//logSDLError(std::cout, "CreateRenderer");
			SDL_Quit();
		}
	}

	this->tablica = new int*[11];

	for (int i = 0; i < 13; i++) {
		this->tablica[i] = new int[13];
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
