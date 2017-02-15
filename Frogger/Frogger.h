#pragma once
#include "Texture.h"
#include <string>

class Frogger :
	public Texture
{
public:
	Frogger(std::string filePath);
	Frogger();
	~Frogger();
};

