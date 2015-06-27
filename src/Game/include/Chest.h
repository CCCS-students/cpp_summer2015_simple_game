#ifndef CHEST_H
#define CHEST_H

#include <string>
class Chest
{
	public:
	Chest();
	~Chest();

	std::string getName();
	void setName(std::string);	
	
	private:
	std::string name;
};
#endif
