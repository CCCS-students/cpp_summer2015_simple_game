#ifndef GOBLIN_H
#define GOBLIN_H

#include <iostream>
#include <string>

class Goblin
{	
public:
	Goblin(int, int, bool);
	~Goblin();
    int move(int)

private:
    int health;
    int current_room;
    bool friend; 
};

#endif
