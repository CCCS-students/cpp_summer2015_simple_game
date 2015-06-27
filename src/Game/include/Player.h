#ifndef PLAYER_H
#define PLAYER_H

#include <cstdlib>
#include <vector>
#include <iostream>
#include <string>
#include "Map.h"

class Player
{
	public:
	Player(std::string, unsigned int, unsigned int, int, int);
	Player(std::string);
	~Player();
	
	// Accessors and mutators
	std::string getName();
	void setName(std::string);
	
	unsigned int getHealth();
	void setHealth(unsigned int);

	int getX();
	void setX(int);

	int getY();
	void setY(int);

	unsigned int getDamage();
	void setDamage(unsigned int);

	unsigned int getNumRawFood();
	void setNumRawFood(unsigned int);
	
	unsigned int getNumFood();
	void setNumFood(unsigned int);

	
	// Move function
	void move(int, int);

	// Player interaction with the room	
	void interact(Map*);	
	
	// Check stats
	void dispStats();

	private:
	std::string name;
	unsigned int health;
	unsigned int maxHealth;
	unsigned int damage;
	unsigned int numRawFood;
	unsigned int numFood;
	int x;
	int y;
};

#endif
