#ifndef COW_H
#define COW_H

#include <cstdlib>
#include <iostream>
#include <vector>

//#include "../room/Room.h"

#include "Room.h"

class Map
{
	public:
	Map(int, int);
	~Map();
	
	std::vector<std::vector<Room*> >* getRooms();
	Room* getRoom(int, int);	
	
	int getWidth();
	void setWidth(int);
	
	int getHeight();
	void setHeight(int);	

	private:
	std::vector<std::vector<Room*> > rooms;
	int width;
	int height;
};

#endif
