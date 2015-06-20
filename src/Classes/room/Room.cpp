#include "Room.h"
// set room paramaters
Room::Room()
{
	rWidth = 64;
	rHeight = 64;
	rPosX = 0;
	rPosY = 0;
}

// sets room attributes to provided values
Room::Room(int width, int height, int x, int y, std::vector<Goblin*> startGobs, std::vector<Tree*> startTrees, std::vector<Cow*> startCows, std::vector<Chest*> startChests) : rWidth(width), rHeight(height), rPosX(x), rPosY(y), goblins(startGobs), trees(startTrees), cows(startCows), chests(startChests)
{
	
}

// make all things in room go poof
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

// adds a goblin onto the end of the goblin vector
void Room::addGoblin(Goblin* input)
{
	goblins.push_back(input);
}

// adds a tree onto the end of the tree vector
void Room::addTree(Tree* input)
{
	trees.push_back(input);
}

// adds a chest onto the end of the chest vector
void Room::addChest(Chest* input)
{
	chests.push_back(input);
}

// adds a cow onto the end of the cow vector    
void Room::addCow(Cow* input)
{
	cows.push_back(input);
}

// removes the goblin at provided index
void Room::removeGoblin(int index)
{
	goblins.erase(goblins.begin() + index - 1);
}

// removes the tree at provided index
void Room::removeTree(int index)
{
	trees.erase(trees.begin() + index - 1);
}

// removes the chest at provided index
void Room::removeChest(int index)
{
	chests.erase(chests.begin() + index - 1);
}

// removes the cow at provided index
void Room::removeCow(int index)
{
	cows.erase(cows.begin() + index - 1);
}

// checks if room contains objects
bool Room::roomHasContents()
{
	// Check the vectors
	if(!goblins.empty() || !chests.empty() || !trees.empty() || !cows.empty())
		return true;
	else
		return false;
}

// return the total number of objects in the room
int Room::numTotalContents()
{
	return numGoblins() + numTrees() + numChests() + numCows();
}

// return number of goblins in the room
int Room::numGoblins()
{
	return goblins.size();
}

// return number of trees in the room
int Room::numTrees()
{
	return trees.size();
}

// return number of chests in the room
int Room::numChests()
{
	return chests.size();
}

// return number of cows in the room
int Room::numCows()
{
	return cows.size();
}
