#include "../include/Tree.h"

Tree::Tree()
{
	name = "Laurelin";
}
Tree::~Tree()
{
}

std::string Tree::getName()
{
	return name;
}

void Tree::setName(std::string input)
{
	name = input;
}
