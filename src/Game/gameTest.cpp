#include <iostream>
#include <cstdlib>
#include <vector>

#include "include/Cow.h"
#include "include/Map.h"
#include "include/Room.h"

bool TestGetRooms()
{
	Map map(10, 10);
	return (map.getRooms() != NULL);
}

bool TestGetRoom()
{
	Map map(10, 10);
	Room* testRoom = new Room;
	map.rooms.at(5).at(4) = testRoom;
	Room* mapRoom = map.getRoom(5,4);
	return (testRoom == mapRoom);
}

bool TestKnowSize()
{
	Map map(10, 10);
	return (map.getWidth() == 10 && map.getHeight() == 10 && map.rooms.size() == 10 && map.rooms.at(1).size() == 10);
}

bool TestChangeSize()
{
	Map map(10, 10);
	map.setHeight(5);
	map.setWidth(20);
	
	return(map.getHeight() == 5 && map.getWidth() == 20 && map.rooms.size() == map.getWidth() && map.rooms.at(1).size() == map.getHeight());
}

int main()
{
	std::cout << "Testing getRooms method ... " << ((TestGetRooms()) ? ("Passed!\n") : ("Failed!\n"));
	std::cout << "Testing getRoom method ... " << ((TestGetRoom()) ? ("Passed!\n") : ("Failed!\n"));
	std::cout << "Testing  size ... " << ((TestKnowSize()) ? ("Passed!\n") : ("Failed!\n"));
	std::cout << "Testing changing size ... " << ((TestChangeSize()) ? ("Passed!\n") : ("Failed!\n"));
}
