#ifndef COW_H
#define COW_H

#include <string>
#include <iostream>
#include "SDL2/include/SDL.h"


class Cow
{
	public:
	// Default/minimalist constructor
	Cow(std::string);
	// Copy constructor
	Cow(int, int, std::string, std::string);
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
	std::string getPicFilePath();
	void setPicFilePath(std::string);
	
	// Move function
	void move(int, int);

	// Moo function
	void moo(unsigned int);

	private:
	// Filepath for the cow texture
	std::string picFilePath;
	// A name for the cow
	std::string name;
	// Coordinates of the cow's position
	int x;
	int y;

};
#endif
