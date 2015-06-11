#include "Cow.h"

// Default constructor: sets cow attributes to default values, except for filepath
Cow::Cow(std::string filePath)
{
	x = 0;
	y = 0;
	name = "Cow";
	picFilePath = filePath;
}

// Copy constructor: takes values to set cow attributes to, sets the attributes
// to their respective provided values
Cow::Cow(int posX, int posY, std::string filePath, std::string cowName) : x(posX), y(posY), picFilePath(filePath), name(cowName)
{
}

// Deconstructor
Cow::~Cow()
{
	
}

// Returns the X coordinate of the Cow's position
int Cow::getX()
{
	return x;
}

// Returns the Y coordinate of the Cow's position
int Cow::getY()
{
	return y;
}

// Sets the Cow's x-coordinate to the provided value
void Cow::setX(int input)
{
	x = input;
}

// Sets the Cow's y-coordinate to the provided value
void Cow::setY(int input)
{
	y = input;
}

// Returns the Cow's name
std::string Cow::getName()
{
	return name;
}

// Sets the Cow's name to the provided value
void Cow::setName(std::string input)
{
	name = input;
}

// Returns the filepath of the Cow's texture
std::string Cow::getPicFilePath()
{
	return picFilePath;
}

// Set the filepath of the Cow's texture to the provided value
void Cow::setPicFilePath(std::string input)
{
	picFilePath = input;
}

// Moves the cow by the provided amounts
void Cow::move(int mvX, int mvY)
{
	setX(getX() + mvX);
	setY(getY() + mvY);
}

// Makes the cow moo. Length of moo is provided
void Cow::moo(unsigned int mooLength)
{
	std::cout << name << ": m";
	for(int i = 0; i < mooLength; i ++)
	{
		std::cout << "o";
	}
	std::cout << "!\n";
}
