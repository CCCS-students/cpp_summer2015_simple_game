#ifndef COW_H
#define COW_H

#include <string>
class Cow
{
	public:
	Cow();
	~Cow();
	
	

	private:
	// Filepath for the cow texture
	std::string picFilePath;
	// A name for the cow
	std::string name;
	// Coordinates of the cow's position
	int x;
	int y;

};
#endif
