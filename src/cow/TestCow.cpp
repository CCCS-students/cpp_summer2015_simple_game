#include <iostream>
#include "Cow.h"
#include "SDL2/include/SDL.h"

#define WIDTH 640
#define HEIGHT 640

int main( /*int argc, char* args[]*/ )
{
	// Create and initialize SDL window
	SDL_Window* window = NULL;
	// Create a surface contained by the window
	SDL_Surface* screenSurface = NULL;
	
	// Initialize
	if(SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << "\n";
	}
	else
	{
		// Create window
		window = SDL_CreateWindow("Cow Test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, HEIGHT, WIDTH, SDL_WINDOW_SHOWN);
		// Check window
		if(window == NULL)
		{
			std::cout << "Window could not be created! SDL_Error: " << SDL_GetError() << "\n";
		}
	}
	// Create a cow
	Cow aCow(0, 0, "Cow/pics/cow.bmp", "Hamburger");
	/*std::cout << "Created a cow, details:\n\n";
	std::cout << "Name: " << aCow.getName() << "\n";
	std::cout << "Texture location: " << aCow.getPicFilePath() << "\n";
	std::cout << "Cow location: (" << aCow.getX() << "," << aCow.getY() << ")\n";
	std::cout << aCow.getName() << ": ";
	aCow.moo(10);
	std::cout << "\n\n";
	
	std::cout << "Changing cow name to \"Cow\"...\n";
	aCow.setName("Cow");
	std::cout << "Cow name: " << aCow.getName() << "\n\n";
	
	std::cout << "Setting cow coordinates to (5,7)...\n";
	aCow.setX(5);
	aCow.setY(7);
	std::cout << "Cow location: (" << aCow.getX() << "," << aCow.getY() << ")\n";
	std::cout << "Moving cow by (-5,-7), cow should now be at (0,0)...\n";
	aCow.move(-5, -7);
	std::cout << "Cow location: (" << aCow.getX() << "," << aCow.getY() << ")\n\n";

	std::cout << "Setting texture location to \"filepath\"...\n";
	aCow.setPicFilePath("filepath");
	std::cout << "Texture location: " << aCow.getPicFilePath() << "\n\n";
	
	std::cout << "Done testing!\n";*/
}
