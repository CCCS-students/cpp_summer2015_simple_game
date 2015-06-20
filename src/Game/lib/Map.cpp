#include "../include/Map.h"

Map::Map(int mHeight, int mWidth) : height(mHeight), width(mWidth)
{
	for(int i = 0; i < mWidth; i ++)
	{
		std::vector<Room*> vec;
		for(int j = 0; j < mHeight; j ++)
		{
			Room* rm = new Room;
			vec.push_back(rm);
		}
		rooms.push_back(vec);
	}
}

Map::~Map()
{
	
}

std::vector<std::vector<Room*> >* Map::getRooms()
{
	return &rooms;
}

Room* Map::getRoom(int x, int y)
{
	return rooms.at(x).at(y);
}

int Map::getWidth()
{
	return width;
}

void Map::setWidth(int newWidth)
{
	if(newWidth >= width)
	{
		for(int i = width; i < newWidth; i ++)
		{
			std::vector<Room*> vec;
			for(int j = 0; j < height; j ++)
			{
				Room* rm = new Room;
				vec.push_back(rm);
			}
			rooms.push_back(vec);
		}
	}
	else
	{
		for(int i = width; i > newWidth; i --)
		{
			rooms.pop_back();
		}
	}

	width = newWidth;
}

int Map::getHeight()
{
	return height;
}

void Map::setHeight(int newHeight)
{
	if(newHeight >= height)
	{
		for(int i = 0; i < width; i ++)
		{
			for(int j = height; j < newHeight; j ++)
			{
				Room* rm = new Room;
				rooms.at(i).push_back(rm);
			}
		}
	}
	else
	{
		for(int i = 0; i < width; i ++)
		{
			for(int j = height; j > newHeight; j --)
			{
				rooms.at(i).pop_back();
			}
		}
	}
	
	height = newHeight;
}
