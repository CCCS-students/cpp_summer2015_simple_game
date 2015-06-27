#include "../include/Goblin.h"

Goblin::Goblin()
{
	name = "Azog the Pale";
}

Goblin::~Goblin()
{
}

std::string Goblin::getName()
{
	return name;
}

void Goblin::setName(std::string input)
{
	name = input;
}
