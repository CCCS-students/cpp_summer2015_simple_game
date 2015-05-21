#include <cstdlib>
#include <ctime>
#include "Chest.h"

int Chest::getLockStrength()
{
	return keyLockStrength;
}

int Chest::getMoney()
{
	return money;
}

int Chest::getHealth()
{
	return health;
}

int Chest::getKey();
{
	return key;
}

Chest::Chest()
{
	keyLockStrength = rand() % 4;
	if (keyLockStrength == 3)
		key = rand() % 3 + 1;

	else 
		key = keyLockStrenght + 1;

	money = rand() % 1000;
	money *= keylockStrength + 1
}

