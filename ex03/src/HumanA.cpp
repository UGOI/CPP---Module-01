#include "./include/HumanA.hpp"
#include "./include/Weapon.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {
}

HumanA::~HumanA() {
}

void HumanA::attack() {
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}