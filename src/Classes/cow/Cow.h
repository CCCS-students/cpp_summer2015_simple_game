#ifndef COW_H
#define COW_H

#include <string>
#include <iostream>
#include "SDL2/include/SDL.h"
#include "SDL2-image/include/SDL-image.h"


class Cow
{
	public:
	// Default/minimalist constructor
	Cow(std::string, SDL_Window*);
	// Copy constructor
	Cow(int, int, std::string, std::string, SDL_Window*);
	~Cow();
	
	// Cow's position accessors
	int getX();
	int getY();
	// Cow's position mutators
	void setX(int);
	void setY(int);
	
	// Cow's name accessor and mutator
	std::string getName();
	void setName(std::string);
	
	// Cow's texture filepath accessor and mutator
	SDL_Texture* getTexture();
	void setTexture(SDL_Texture*);
	void loadNewTexture(std::string, SDL_Window*);
	
	// Move function
	void move(int, int);

	// Moo function
	void moo(unsigned int);

	private:
	// Cow's texture
	SDL_Texture* texture;
	// A name for the cow
	std::string name;
	// Coordinates of the cow's position
	int x;
	int y;

};
#endif
