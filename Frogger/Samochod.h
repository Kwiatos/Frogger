#pragma once
#include "Texture.h"
#include <string>

class Samochod :
	public Texture
{
private:
	
public:
	
	Uint32 move(Uint32 interval, void *param);
	Samochod(std::string filePath);
	Samochod();
	~Samochod();
};

