#include "../include/Chest.h"

Chest::Chest()
{
	name = "A Chest";
}

Chest::~Chest()
{
}

std::string Chest::getName()
{
	return name;
}

void Chest::setName(std::string input)
{
	name = input;
}
	
