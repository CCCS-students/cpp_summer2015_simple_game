#ifndef ROOM_H
#define ROOM_H

#include <cstdlib.h>
#include <vector.h>

#include <Tree.h>
#include <Goblin.h>
#include <Chest.h>

class Room
{
public:
    Room();
    ~Room();

private:
    int rHeight;
    int rWidth;
    int rPosX;
    int rPosY;
    // Some sort of container to store objects (tree, goblin, chest, etc.)
    // Texture filepath
};

#endif
