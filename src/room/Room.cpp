#include "Room.h"

Room::Room()
{
	rWidth = 64;
	rHeight = 64;
	rPosX = 0;
	rPosY = 0;
}

Room::Room(int width = 64, int height = 64, int x = 0, int y = 0, vector<Goblin*> startGobs, vector<Tree*> startTrees, vector<Cow*> startCows, vector<Chest*> startChests) : rWidth(width), rHeight(height), rPosX(x), rPosY(y), goblins(startGobs), trees(startTrees), cows(startCows), chests(startChests)
{
	
}

Room::~Room()
{
	goblins.clear();
	trees.clear();
	cows.clear();
	chests.clear();
	
}

int Room::getRHeight()
{
	return rHeight;
}

int Room::getRWidth()
{
	return rWidth;
}

int Room::getRPosX()
{
	return rPosX;
}

int Room::getRPosY()
{
	return rPosY;
}

vector<Goblin*> Room::getGoblins()
{
	return goblins;
}

vector<Tree*> Room::getTrees()
{
	return trees;
}

vector<Chest*> Room::getChests()
{
	return chests;
}

vector<Cow*> Room::getCows()
{
	return cows;
}

void Room::setGoblins(vector<Goblin*> input)
{
	goblins = input;
}

void Room::setTrees(vector<Tree*> input)
{
	trees = input;
}

void Room::setChests(vector<Chest*> input)
{
	chests = input;
}

void Room::setCows(vector<Cow*> input)
{
	cows = input;
}

void Room:addGoblin(Goblin* input)
{
	goblins.push_back(input);
}

void Room::addTree(Tree* input)
{
	trees.push_back(input);
}

void Room::addChest(Chest* input)
{
	chests.push_back(input);
}
    
void Room::addCow(Cow* input)
{
	cows.push_back(input);
}

void Room::removeGoblin(int index)
{
	goblins.erase(goblins.begin() + index - 1);
}

void Room::removeTree(int index)
{
	trees.erase(trees.begin() + index - 1);
}

void Room::removeChest(int index)
{
	chests.erase(chests.begin() + index - 1);
}

void Room::removeCow(int index)
{
	cows.erase(cows.begin() + index - 1);
}

bool Room::roomHasContents()
{
	// Check the vectors
	if(!goblins.empty() || !chests.empty() || !trees.empty() || !cows.chests())
		return true;
	else
		return false;
}
