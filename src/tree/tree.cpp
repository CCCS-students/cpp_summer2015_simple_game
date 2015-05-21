#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

Tree::Tree(std::string input, int resourceNum)
{
    color = input;
    resourcNum = rand()%15 + 10;
}

int Tree::getResourceNum()
{
    return resourcNum;
}

string Tree::getColor()
{
    return color;
}
