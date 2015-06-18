#ifndef COW_H
#define COW_H

#include <cstdlib>
#include <iostream>
#include <vector>

#include "../room/Room.h"

class Map
{
	public:
	Map();
	~Map();

	private:
	std::vector<std::vector<Room> > rooms;
	int xLim;
	int yLim;
};

#endif
