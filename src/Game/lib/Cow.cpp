#include "../include/Cow.h"

// Default constructor: sets cow attributes to default values, except for filepath
Cow::Cow(/*std::string filePath, SDL_Window* window*/)
{
	// Some default values
	x = 0;
	y = 0;
	name = "Cow";
/*
	// Create a renderer
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	// Check renderer
	if(renderer == NULL)
	{
		std::cout << "Could not create renderer! SDL Error: " << SDL_GetError() << "\n";
	}
	else
	{
		// Initialize renderer color
		SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);

		// Initialize PNG loading
		int imgFlags = IMG_INIT_PNG;
		if(!(IMG_Init(imgFlags) & imgFlags))
		{
			std::cout << "SDL could not initialize!\n SDL_image Error: " << SDL_GetError() << "\n";
		}
	}

	// Now we will load the texture
	// Load the image to a surface
	SDL_Surface* image = IMG_Load(filePath);
	// Make sure all is loaded fine
	if(image == NULL)
	{
		// Error message
		std::cout << "Unable to load image " << filePath << " !\nSDL_image Error: " << IMG_GetError() << "\n";
	}
	else
	{
		// Load the texture from surface
		texture = SDL_CreateTextureFromSurface(renderer, image);
		// Check the texture
		if(texture == NULL)
		{
			std::cout << "Unable to create texture from " << filePath << "! \nSDL Error: " << SDL_GetError() << "\n";
		}
		// Get rid of old loaded surface
		SDL_FreeSurface(image);
	}
*/
}

// Copy constructor: takes values to set cow attributes to, sets the attributes
// to their respective provided values
Cow::Cow(int posX, int posY, /*std::string filePath,*/ std::string cowName/*, SDL_Window* window*/) : x(posX), y(posY), name(cowName)
{
	//Cow(filePath, window);
}

// Deconstructor
Cow::~Cow()
{
	
}

// Returns the X coordinate of the Cow's position
int Cow::getX()
{
	return x;
}

// Returns the Y coordinate of the Cow's position
int Cow::getY()
{
	return y;
}

// Sets the Cow's x-coordinate to the provided value
void Cow::setX(int input)
{
	x = input;
}

// Sets the Cow's y-coordinate to the provided value
void Cow::setY(int input)
{
	y = input;
}

// Returns the Cow's name
std::string Cow::getName()
{
	return name;
}

// Sets the Cow's name to the provided value
void Cow::setName(std::string input)
{
	name = input;
}
/*
SDL_Texture* Cow::getTexture()
{
	return texture;
}

void Cow::setTexture(SDL_Texture* input)
{
	texture = input;
}

void Cow::loadNewTexture(std::string filePath, SDL_Window* window)
{
	// Create a renderer
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	// Check renderer
	if(renderer == NULL)
	{
		std::cout << "Could not create renderer! SDL Error: " << SDL_GetError() << "\n";
	}
	else
	{
		// Initialize renderer color
		SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);

		// Initialize PNG loading
		int imgFlags = IMG_INIT_PNG;
		if(!(IMG_Init(imgFlags) & imgFlags))
		{
			std::cout << "SDL could not initialize!\n SDL_image Error: " << SDL_GetError() << "\n";
		}
	}

	// Now we will load the texture
	// Load the image to a surface
	SDL_Surface* image = IMG_Load(filePath);
	// Make sure all is loaded fine
	if(image == NULL)
	{
		// Error message
		std::cout << "Unable to load image " << filePath << " !\nSDL_image Error: " << IMG_GetError() << "\n";
	}
	else
	{
		// Load the texture from surface
		texture = SDL_CreateTextureFromSurface(renderer, image);
		// Check the texture
		if(texture == NULL)
		{
			std::cout << "Unable to create texture from " << filePath << "! \nSDL Error: " << SDL_GetError() << "\n";
		}
		// Get rid of old loaded surface
		SDL_FreeSurface(image);
	}
}
*/
// Moves the cow by the provided amounts
void Cow::move(int mvX, int mvY)
{
	setX(getX() + mvX);
	setY(getY() + mvY);
}

// Makes the cow moo. Length of moo is provided
void Cow::moo(unsigned int mooLength)
{
	std::cout << name << ": m";
	for(int i = 0; i < mooLength; i ++)
	{
		std::cout << "o";
	}
	std::cout << "!\n";
}
