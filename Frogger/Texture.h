#pragma once
#include "SDL.h"
#include <string>

class Texture
{
private:
	std::string filePath;
	int currentX, currentY;
protected:
	
public:
	SDL_Rect image;
	SDL_Rect getImage();
	std::string getFilePath();
	virtual SDL_Surface* prepareToTexture(const std::string fileName);
	Texture(std::string filePath);
	Texture();
	~Texture();
};

