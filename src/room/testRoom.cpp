#include <iostream>
#include <cstdlib>
#include <vector>

#include "Room.h"
#include "Tree.h"
#include "Goblin.h"
#include "Chest.h"
#include "Cow.h"

void dispRoomContents(Room room);

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
	cows.push_back(cowPtr);
	
	Room room(64, 64, 0, 0, goblins, trees, cows, chests);
	
	std::cout << "\nRoom details: \n";
	std::cout << "Size: " << room.getRHeight() << " by " << room.getRWidth() << std::endl;
	std::cout << "Position: (" << room.getRPosX() << "," << room.getRPosY() << ")\n";
	if(room.roomHasContents())
	{
		std::cin.get();
		std::cout << "\nRoom contents:\n";
		dispRoomContents(room);
		
		std::cin.get();
		std::cout << "\nAdding\n\tSmeagol\n\tPhoebus\n\tPandora's Box\n\tMinotaur\nto Goblins, Trees, Boxes, Cows...\n\nDone!\n";
		std::cin.get();

		Goblin* gob = new Goblin;
		gob->name = "Smeagol";
		room.addGoblin(gob);		

		Tree* tr = new Tree;
		tr->name = "Phoebus";
		room.addTree(tr);
		
		Chest* box = new Chest;
		box->name = "Pandora's Box";
		room.addChest(box);

		Cow* cw = new Cow;
		cw->name = "Minotaur (dinner)";
		room.addCow(cw);
		
		
		std::cout << "\nRoom contents:\n";
		dispRoomContents(room);
		std::cin.get();

		std::cout << "\nRemoving original contents\n";
		room.removeGoblin(1);
		room.removeChest(1);
		room.removeTree(1);
		room.removeCow(1);
		std::cin.get();

		std::cout << "\nRoom contents: \n";
		dispRoomContents(room);
	}
	else
	{
		std::cout << "\nRoom is empty\n";
	}
	
	std::cout << "\n";
}

void dispRoomContents(Room room)
{
	std::cout << "\n";
	std::vector<Tree*> rmTrees = room.getTrees();
	std::vector<Goblin*> rmGobs = room.getGoblins();
	std::vector<Chest*> rmChests = room.getChests();
	std::vector<Cow*> rmCows = room.getCows();
	
	for(int i = 0; i < room.numTrees() && rmTrees.at(i) != NULL; i ++)
	{
		std::cout << rmTrees.at(i)->name << " : Tree\n";
	}
	for(int i = 0; i < room.numGoblins() && rmGobs.at(i) != NULL; i ++)
	{
		std::cout << rmGobs.at(i)->name << " : Goblin\n";
	}
	for(int i = 0; i < room.numChests() && rmChests.at(i) != NULL; i ++)
	{
		std::cout << rmChests.at(i)->name << " : Chest\n";
	}
	for(int i = 0; i < room.numCows() && rmCows.at(i) != NULL; i ++)
	{
		std::cout << rmCows.at(i)->name << " : Cow\n";
	}

	std::cout << "\nTotal Trees: " << room.numTrees();
	std::cout << "\nTotal Goblins: " << room.numGoblins();
	std::cout << "\nTotal Cows: " << room.numCows();
	std::cout << "\nTotal Chests: " << room.numChests();
	std::cout << "\n\tTotal: " << room.numTotalContents();
	std::cout << "\n";
}
