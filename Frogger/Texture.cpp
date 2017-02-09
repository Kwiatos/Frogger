#include "Texture.h"
#include <string>
#include <iostream>

using namespace std;

std::string Texture::getFilePath() {
	return this->filePath;
}

SDL_Surface* Texture::prepareToTexture(const string fileName) 
{
	//moze zabezpieczenie ze to ma byc bitmapa
	if (fileName != "") {

	/*	mo¿na u¿yæ zamiast c_str();
	int fileLength = fileName.length();

		char* fileNameTmp = new char[fileLength];

		for (int i = 0; i < fileLength; i++) {
			fileNameTmp[i] = fileName[i];
		}*/

		SDL_Surface *loadedImage = SDL_LoadBMP(fileName.c_str());

	if (loadedImage != NULL) {
		return loadedImage;
	}
	else {
		cout << "Bitmap wasn't loaded" << endl;
		}
	}
		return NULL;	
}

Texture::Texture(string filePath)
{
	this->filePath = filePath;
}

Texture::Texture()
{
}

Texture::~Texture()
{
}
