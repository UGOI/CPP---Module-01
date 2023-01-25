#include <iostream>
#include <string>
#include "./include/Weapon.hpp"
#include "./include/HumanA.hpp"
#include "./include/HumanB.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	Weapon club2 = Weapon("crude spiked club");
	HumanB jim2("Jim");
	jim2.setWeapon(club2);
	jim2.attack();
	club2.setType("some other type of club");
	jim2.attack();
	return 0;
}
