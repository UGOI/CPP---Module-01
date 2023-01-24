#include "./include/Zombie.hpp"

void	Zombie::announce() {
	std::cout << name << ": " << "Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << name << " is dead" << std::endl;
}