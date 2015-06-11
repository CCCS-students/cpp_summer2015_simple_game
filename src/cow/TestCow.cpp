#include "Cow.h"
#include <iostream>
#include <cstdlib>

int main()
{
	srand(time(0));
	Cow aCow(0, 0, "Cow/pics/cow.bmp", "Hamburger");
	// Main loop
	for(int i = 0; i < 100; i ++)
	{
		// Disp cow
		for(int i = 0; i < aCow.getY(); i ++)
		{
			std::cout << "\n";
		}
	
		for(int i = 0; i < aCow.getX(); i ++)
		{
			std::cout << " ";
		}
		
		std::cout << aCow.getName();

		// Move cow
		aCow.move(1, 1);
	
		// Moo
		std::cout << std::endl << std::endl;
		aCow.moo(rand() % 10 + 2);
		
		std::cin.get();

		for(int i = 0; i < 5; i ++)
			std::cout << "\n";
	}
}
