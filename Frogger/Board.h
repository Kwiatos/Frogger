#pragma once
#include "Texture.h"
#include <string>

class Board :
	public Texture
{
private:
	int width;
	int height;
public:
	int getWidth();
	int getHeight();
	Board(int width, int height, std::string filePath);
	Board(int width, int height);
	Board(std::string filePath);
	Board();
	~Board();
};

