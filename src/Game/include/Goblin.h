#ifndef GOBLIN_H
#define GOBLIN_H

#include <string>
class Goblin
{
	public:
	Goblin();
	~Goblin();
	
	std::string getName();
	void setName(std::string);	

	private:
	std::string name;
};
#endif
