#include <iostream>
#include "goblin.h"

Goblin::Goblin(int health_, int current_room_,
    bool friend_)
    : health(health_), current_room(current_room_), friend(friend_)
{}

//no-arg constructor
Goblin::~Goblin()
{}

int Goblin::move(int directionX, int directionY)
{
    if (direction == 0)
    {
        if (current_room < 19)
        {
            current_room += 5;
        }
    }
    else (if direction == 1)
    {
        if (current_room > 4) 
        {
            current_room -= 5;
        }
    }
    else if (direction == 2)
    {
        current_room += 1;
    }
    else if (direction == 3)
    {
        current_room -= 1;
    }
}



