#include <iostream>
#include <string>
#include "./include/Zombie.hpp"

int main()
{
	std::string name = "Zombie";
	int			N = 3;

	Zombie *Horde = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
	{
		Horde[i].announce();
	}
	delete [] Horde;

	return 0;
}