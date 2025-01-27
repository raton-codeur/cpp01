#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() :
	name("NO_NAME")
{}

Zombie::Zombie(std::string name) :
	name(name)
{}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
