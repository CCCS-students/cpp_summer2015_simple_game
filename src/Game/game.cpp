#include <iostream>
#include <cstdlib>
#include <vector>
#include <time.h>
#include "include/Chest.h"
#include "include/Cow.h"
#include "include/Goblin.h"
#include "include/Map.h"
#include "include/Room.h"
#include "include/Tree.h"
#include "include/Player.h"

#define WIDTH 30
#define HEIGHT 30
#define R_WIDTH 64
#define R_HEIGHT 64

int main()
{
	// Create map
	Map map(WIDTH, HEIGHT);
	// Fill map
	std::vector<std::vector<Room*> >* roomsPtr = map.getRooms();
	for(int i = 0; i < WIDTH; i ++)
	{
		for(int j = 0; j < HEIGHT; j ++)
		{
			std::vector<Goblin*> gobs;
			std::vector<Tree*> trees;
			std::vector<Chest*> chests;
			std::vector<Cow*> cows;
			for(int a = rand() % 10; a > 0; a --)
			{
				Goblin* gob = new Goblin;
				gob->setName("Goblin");
				gobs.push_back(gob);
			}
			for(int a = rand() % 10; a > 0; a --)
			{
				Chest* chest = new Chest;
				chest->setName("Treasure Chest");
				chests.push_back(chest);
			}
			for(int a = rand() % 10; a > 0; a --)
			{
				Tree* tr = new Tree;
				tr->setName("Tree");
				trees.push_back(tr);
			}
			for(int a = rand() % 10; a > 0; a --)
			{
				Cow* cow = new Cow(i, j, "Cow");
				cows.push_back(cow);
			}
			roomsPtr->at(i).at(j) = new Room(R_WIDTH, R_HEIGHT, i, j, gobs, trees, cows, chests);
		}
	}
	// Create player
	Player player("human");
	// Begin journey!
	int pInput;
	do
	{
		std::cout << "1) Enter room\n2) Quit\n\tChoice: ";
		std::cin >> pInput;
		if(pInput == 1)
		{
			player.interact(&map);
		}
	}while(pInput != 2);
	return 0;
}
