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
	Tree tree;
	Goblin goblin;
	Chest chest;
	Cow cow;

	// make ALL the pointers!
	Tree* treePtr = &tree;
	Goblin* goblinPtr = &goblin;
	Chest* chestPtr = &chest;
	Cow* cowPtr = &cow;

	// Make some vectors
	std::vector<Tree*> trees;
	std::vector<Goblin*> goblins;
	std::vector<Chest*> chests;
	std::vector<Cow*> cows;

	trees.push_back(treePtr);
	goblins.push_back(goblinPtr);
	chests.push_back(chestPtr);
	//cows.push_back(cowPtr);
	
	Room room(64, 64, 0, 0, goblins, trees, cows, chests);
	
	std::cout << "Room details: \n";
	std::cout << "Size: " << room.getRHeight() << " by " << room.getRWidth() << std::endl;
	std::cout << "Position: (" << room.getRPosX() << " , " << room.getRPosY() << ")\n";
	if(room.roomHasContents())
	{
	}
	else
	{
	}
}
