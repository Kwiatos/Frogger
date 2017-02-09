#include "Board.h"

using namespace std;

int Board::getWidth() 
{
	return this->width;
}

int Board::getHeight() 
{
	return this->height;
}

Board::Board(int width, int height, string filePath) :Texture(filePath)
{
	this->width = width;
	this->height = height;
}

Board::Board(int width, int height) 
{
	this->width = width;
	this->height = height;
}

Board::Board(string filePath):Texture(filePath)
{
	this->width = 815;
	this->height = 510;
}

Board::Board()
{
	this->width = 815;
	this->height = 510;
}

Board::~Board()
{
}
