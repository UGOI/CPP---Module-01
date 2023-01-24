#include "./include/Zombie.hpp"

void	Zombie::announce() {
	std::cout << name << ": " << "Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie() {
	this->name = "NR";
}

Zombie::~Zombie() {
	std::cout << name << " is dead" << std::endl;
}