#ifndef ROOM_H
#define ROOM_H

#include <cstdlib>
#include <vector>

#include "Tree.h"
#include "Goblin.h"
#include "Chest.h"
#include "../cow/Cow.h"

class Room
{
public:
	Room();
    // Constructor
    Room(int width, int height, int x, int y, std::vector<Goblin*> startGobs, std::vector<Tree*> startTrees, std::vector<Cow*> startCows, std::vector<Chest*> startChests);
    ~Room();

    // Getters and setters:

    // Room height and width
    int getRHeight();
    int getRWidth();

    // Room position x- and y-coordinates
    int getRPosX();
    int getRPosY();

    // Containers to store objects (tree, goblin, chest, etc.)
    std::vector<Goblin*> getGoblins();
    std::vector<Tree*> getTrees();
    std::vector<Chest*> getChests();
    std::vector<Cow*> getCows();

    void setGoblins(std::vector<Goblin*> input);
    void setTrees(std::vector<Tree*> input);
    void setChests(std::vector<Chest*> input);
    void setCows(std::vector<Cow*> input);
    
    // Functions to add to the std::vectors
    void addGoblin(Goblin* input);
    void addTree(Tree* input);
    void addChest(Chest* input);
    void addCow(Cow* input);

    // Functions to remove to the std::vectors
    void removeGoblin(int index);
    void removeTree(int index);
    void removeChest(int index);
    void removeCow(int index);

    // Check if there's stuff in the room
    bool roomHasContents();
	// Calculators for numbers of various contents in the room
	int numTotalContents();
	int numGoblins();
	int numTrees();
	int numChests();
	int numCows();
    
    
private:
    // Room height and width
    int rHeight;
    int rWidth;
    // Room position x- and y-coordinates
    int rPosX;
    int rPosY;
    // Containers to store objects (tree, goblin, chest, etc.)
    std::vector<Goblin*> goblins;
    std::vector<Tree*> trees;
    std::vector<Chest*> chests;
    std::vector<Cow*> cows;
    // Texture filepath or texture object
};

#endif
