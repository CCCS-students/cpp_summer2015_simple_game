#ifndef ROOM_H
#define ROOM_H

#include <cstdlib>
#include <vector>

#include <Tree.h>
#include <Goblin.h>
#include <Chest.h>
#include <Cow.h>

class Room
{
public:
	Room();
    // Constructor
    Room(int width = 64, int height = 64, int x = 0, int y = 0, vector<Goblin*> startGobs, vector<Tree*> startTrees, vector<Cow*> startCows, vector<Chest*> startChests);
    ~Room();

    // Getters and setters:

    // Room height and width
    int getRHeight();
    int getRWidth();

    // Room position x- and y-coordinates
    int getRPosX();
    int getRPosY();

    // Containers to store objects (tree, goblin, chest, etc.)
    vector<Goblin*> getGoblins();
    vector<Tree*> getTrees();
    vector<Chest*> getChests();
    vector<Cow*> getCows();

    void setGoblins(vector<Goblin*> input);
    void setTrees(vector<Tree*> input);
    void setChests(vector<Chest*> input);
    void setCows(vector<Cow*> input);
    
    // Functions to add to the vectors
    void addGoblin(Goblin* input);
    void addTree(Tree* input);
    void addChest(Chest* input);
    void addCow(Cow* input);

    // Functions to remove to the vectors
    void removeGoblin(int index);
    void removeTree(int index);
    void removeChest(int index);
    void removeCow(int index);

    // Check if there's stuff in the room
    bool roomHasContents();
    
    
private:
    // Room height and width
    int rHeight;
    int rWidth;
    // Room position x- and y-coordinates
    int rPosX;
    int rPosY;
    // Containers to store objects (tree, goblin, chest, etc.)
    vector<Goblin*> goblins;
    vector<Tree*> trees;
    vector<Chest*> chests;
    vector<Cow*> cows;
    // Texture filepath or texture object
};

#endif
