#include <cstdlib>
#include <ctime>

#include "Tree.h"

Tree::Tree(std::string input, int resourceNum)
    : color(input), resourceNum(rand() % 15 + 10)
{
}

int Tree::getResourceNum()
{
    return resourceNum;
}

std::string Tree::getColor()
{
    return color;
}

void setColor(std::string colorIn)
{
    color = colorIn;
}
