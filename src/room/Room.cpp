#include "Room.h"

Room::Room()
{
	rWidth = 64;
	rHeight = 64;
	rPosX = 0;
	rPosY = 0;
}

Room::Room(int width, int height, int x, int y, std::vector<Goblin*> startGobs, std::vector<Tree*> startTrees, std::vector<Cow*> startCows, std::vector<Chest*> startChests) : rWidth(width), rHeight(height), rPosX(x), rPosY(y), goblins(startGobs), trees(startTrees), cows(startCows), chests(startChests)
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

std::vector<Goblin*> Room::getGoblins()
{
	return goblins;
}

std::vector<Tree*> Room::getTrees()
{
	return trees;
}

std::vector<Chest*> Room::getChests()
{
	return chests;
}

std::vector<Cow*> Room::getCows()
{
	return cows;
}

void Room::setGoblins(std::vector<Goblin*> input)
{
	goblins = input;
}

void Room::setTrees(std::vector<Tree*> input)
{
	trees = input;
}

void Room::setChests(std::vector<Chest*> input)
{
	chests = input;
}

void Room::setCows(std::vector<Cow*> input)
{
	cows = input;
}

void Room::addGoblin(Goblin* input)
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
	if(!goblins.empty() || !chests.empty() || !trees.empty() || !cows.empty())
		return true;
	else
		return false;
}

int Room::numTotalContents()
{
	return numGoblins() + numTrees() + numChests() + numCows();
}

int Room::numGoblins()
{
	return goblins.size();
}

int Room::numTrees()
{
	return trees.size();
}

int Room::numChests()
{
	return chests.size();
}

int Room::numCows()
{
	return cows.size();
}
