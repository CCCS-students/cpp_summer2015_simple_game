#include <iostream>
#include <cstdlib>
#include <vector>

#include "Room.h"
#include "Tree.h"
#include "Goblin.h"
#include "Chest.h"
#include "Cow.h"
int main()
{
	Room room;
	Tree tree;
	Goblin goblin;
	Chest chest;
	Cow cow;

	// make ALL the pointers!
	Tree* treePtr = &tree;
	Goblin* goblinPtr = &goblin;
	Chest* chestPtr = &chest;
	Cow* cowPtr = &cow;
}
