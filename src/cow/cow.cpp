#include <iostream>
#include "cow.h"

Cow::Cow(int initial_health, bool init_peaceful, int init_room)
{
    health = initial_health;
    peaceful = peaceful;
    current_room = init_room;   
}

Cow::~Cow()
{
}

int Cow::move(int direction)
{
    if direction == 0
    {
        if current_room < 19
        {
            current_room += 5;
        }
    }
    else if direction == 1
    {
        if current_room > 4 
        {
            current_room -= 5;
        }
    }
    else if direction == 2
    {
        current_room += 1;
    }
    else if direction == 3
    {
        current_room -= 1;
    }
}
