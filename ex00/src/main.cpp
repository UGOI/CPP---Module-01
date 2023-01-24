#include <iostream>
#include <string>
#include "./include/Zombie.hpp"

int main()
{
	Zombie* zombie = newZombie("Zombie");
	zombie->announce();
	delete zombie;
	randomChump("RandomZombie");
	return 0;
}