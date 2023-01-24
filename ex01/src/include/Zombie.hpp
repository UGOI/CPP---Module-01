#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>
#include <iostream>
class Zombie {
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void announce();
	void setName(std::string name)
	{
		this->name = name;
	}
	std::string getName()
	{
		return (this->name);
	}
};
Zombie* zombieHorde( int N, std::string name );
#endif