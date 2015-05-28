#ifndef TREE_H
#define TREE_H

#include <string>

class Tree
{
public:
    Tree(std::string input = "green", int resourceNum = 0);

    int getResourceNum();
    
    string getColor();
    void setColor(std::string);

private:
    std::string color;
    int resourceNum;
    
};

#endif
