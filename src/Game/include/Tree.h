#ifndef TREE_H
#define TREE_H

#include <string>
class Tree
{
	public:
	Tree();
	~Tree();

	std::string getName();
	void setName(std::string);	
	
	private:
	std::string name;
};
#endif
