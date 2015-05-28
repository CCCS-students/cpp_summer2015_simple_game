#include "goblin.h"
#include <string>

Goblin::Goblin(double sizeIn, std::string colorIn, std::string weaponIn, std::string statusIn)
    : size(sizeIn), color(colorIn), weapon(weaponIn), status(statusIn)
{
}

void Goblin::set_size(double sizeIn)
{
	size = sizeIn;
}

int Goblin::get_size()
{
	return size;
}

void Goblin::set_color(std::string colorIn)
{
	color = colorIn;
}

std::string Goblin::get_color()
{
	return color;
}

void Goblin::set_weapon(std::string weaponIn)
{
	weapon = weaponIn;
}

std::string Goblin::get_weapon()
{
	return weapon;
}

void Goblin::set_status(std::string statusIn)
{
	status = statusIn;
}

std::string Goblin::get_status()
{
	return status;
}
