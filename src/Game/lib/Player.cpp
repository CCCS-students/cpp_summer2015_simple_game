#include "../include/Player.h"

Player::Player(std::string pName, unsigned int pHealth, unsigned int pDamage, int pX, int pY) : name(pName), maxHealth(pHealth), x(pX), y(pY)
{
}

Player::Player(std::string pName) : Player(pName, 100, 10, 0, 0)
{
}

Player::~Player()
{
}

std::string Player::getName()
{
	return name;
}

void Player::setName(std::string input)
{
	name = input;
}

unsigned int Player::getHealth()
{
	return health;
}

void Player::setHealth(unsigned int input)
{
	health = input;
}

int Player::getX()
{
	return x;
}

void Player::setX(int input)
{
	x = input;
}

int Player::getY()
{
	return y;
}

void Player::setY(int input)
{
	y = input;
}

unsigned int Player::getDamage()
{
	return damage;
}

void Player::setDamage(unsigned int input)
{
	damage = input;
}

unsigned int Player::getNumRawFood()
{
	return numRawFood;
}

void Player::setNumRawFood(unsigned int input)
{
	numRawFood = input;
}

unsigned int Player::getNumFood()
{
	return numFood;
}

void Player::setNumFood(unsigned int input)
{
	numFood = input;
}

void Player::move(int mvX, int mvY)
{
	x += mvX;
	y += mvY;
}

void Player::interact(Map* map)
{
	// Player input
	unsigned int input;
	// Look up current room
	Room* room = map->getRoom(getX(), getY());
	// Check to see if room has contents
	if(!room->roomHasContents())
	{
		// If not, choose where to move or whether to eat food
		std::cout << "Room is empty...\n";
		std::cout << "1) Leave room\n2) Eat some food\n\tChoice: ";
		std::cin >> input;
		switch(input)
		{
			case 1:
			std::cout << "\nWhich way to move?\n1) North\n2) East\n3) South\n4) West\n";
			std::cin >> input;
			switch(input)
			{
				case 1:
					move(0, 1);
				break;

				case 2:
					move(1, 0);
				break;

				case 3:
					move(0, -1);
				break;

				case 4:
					move(-1, 0);
				break;

				default:
					std::cout << "You stay in the current room...\n";
				break;
			}
			break;
			
			case 2:
			std::cout << "How much food to eat out of " << numFood << "? ";
			std::cout << "Health: " << health << "/" << maxHealth << "\n";
			std::cin >> input;
			if(input >= numFood)
			{
				std::cout << "You eat all of your food! Healed " << numFood * 5 << " points!\n";
				numFood = 0;
				health += numFood * 5;
			}
			else
			{
				numFood -= input;
				health += input * 5;
				std::cout << "Healed " << input * 5 << " points! Food left: " << numFood << "\n";
			}
			// Make sure we don't heal over max health
			health = (health > maxHealth) ? (maxHealth) : (health);
			break;
			
			default:
			std::cout << "You do nothing...\n";
		}
	}
	else
	{
		// Else, list contents
		room->listContents();
		// Choose what thing to interact with
		std::cout << "\n1) Attack goblin\n2) Hunt cow\n3) Search chest\n4) Chop tree\nElse leave room\n\tChoice: ";
		std::cin >> input;
		switch(input)
		{
			case 1:
			// Goblin: attack
			if(room->numGoblins() > 0)
			{
				std::cout << "Which goblin?\n";
				for(int i = 0; i < room->numGoblins(); i ++)
				{
					std::cout << i + 1 << ") " << room->getGoblins().at(i)->getName() << " " << i << "\n";
				}
				std::cin >> input;
				Goblin* target = (input <= room->numGoblins()) ? (room->getGoblins().at(input -1)) : (NULL);
				if(target != NULL)
				{
					std::cout << "You attack " << target->getName() << "!\n";
					// Calculate damage
				}
				else
				{
					std::cout << "\nInvalid goblin!\n";
				}
			}
			else
			{
				std::cout << "No goblins to attack!\n";
			}
			break;
		
			case 2:
			// Cow: hunt for food
			if(room->numCows() > 0)
			{
				std::cout << "Which cow?\n";
				for(int i = 0; i < room->numCows(); i ++)
				{
					std::cout << i + 1 << ") " << room->getCows().at(i)->getName() << " " << i << "\n";
				}
				std::cin >> input;
				Cow* target = (input <= room->numCows()) ? (room->getCows().at(input -1)) : (NULL);
				if(target != NULL)
				{
					std::cout << "You kill " << target->getName() << "!\n";
					// Calculate food
					int food = rand() % 15;
					std::cout << "Obtained " << food << " units of raw food!\n";
					numRawFood += food;
					room->removeCow(input);
				}
				else
				{
					std::cout << "\nInvalid cow!\n";
				}
			}
			else
			{
				std::cout << "No cows to hunt!\n";
			}
			break;
		
			case 3:
			// Chest: search
			if(room->numChests() > 0)
			{
				std::cout << "Which chest?\n";
				for(int i = 0; i < room->numChests(); i ++)
				{
					std::cout << i + 1 << ") " << room->getChests().at(i)->getName() << " " << i << "\n";
				}
				std::cin >> input;
				Chest* target = (input <= room->numChests()) ? (room->getChests().at(input -1)) : (NULL);
				if(target != NULL)
				{
					std::cout << "Searching " << target->getName() << "...\n";
					// Calculate loot
					int index = rand() % 4;
					switch(index)
					{
						case 1:
						// Found food
						std::cout << "Obtained 5 units of food!\n";
						numFood += 5;
						break;
				
						case 2:
						// Found armor
						std::cout << "Obtained armor: max health + 5!\n";
						maxHealth += 5;
						health += 5;
						break;
		
						case 3:
						// Found weapon
						std::cout << "Obtained new weapon: damage + 5!\n";
						damage += 5;
						break;
			
						default:
						// Empty chest
						std::cout << "The chest is empty!!!\n";
						break;
					}
					room->removeChest(input);
				}
				else
				{
					std::cout << "\nInvalid chest!\n";
				}
			}
			else
			{
				std::cout << "No chests to search!\n";
			}
			break;
	
			case 4:
			// Tree: chop wood, light fire, cook food
			if(room->numTrees() > 0)
			{
				std::cout << "How many trees (" << room->numTrees() << " max)?\n";
				std::cin >> input;
				if(input <= room->numTrees())
				{
					std::cout << "You chop " << input << " trees!\n";
					// Calculate wood
					int wood = 0;
					for(int a = 0; a < input; a ++)
					{
						wood += rand() % 15;
						room->removeTree(a);
					}
					std::cout << "Obtained " << wood << " units of wood!\n";
					std::cout << "Can cook " << wood / 5 << " units of raw food... Cooking...\n";
					int change = (wood / 5 <= numRawFood) ? (wood / 5) : (numRawFood);
					numFood += change;
					numRawFood -= change;
					std::cout << "Cooked " << change << " units of food\n";
				}
				else
				{
					std::cout << "\nThere are not that many trees!\n";
				}
			}
			else
			{
				std::cout << "No trees to chop!\n";
			}
			break;

			default:
			// Otherwise, choose where to move
			std::cout << "\nWhich way to move?\n1) North\n2) East\n3) South\n4) West\n";
			std::cin >> input;
			switch(input)
			{
				case 1:
					move(0, 1);
					break;
				case 2:
					move(1, 0);
					break;
				case 3:
					move(0, -1);
					break;
				case 4:
					move(-1, 0);
					break;
				default:
					std::cout << "You stay in the current room...\n";
					break;
			}
			break;
		}
	}
}

void Player::dispStats()
{
}

