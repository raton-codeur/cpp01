#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() :
	name("NO_NAME")
{}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
