#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() :
	name("NO_NAME")
{
	std::cout << "zombie created" << std::endl;
}

Zombie::Zombie(std::string name) :
	name(name)
{
	std::cout << "zombie created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " destroyed" << std::endl;
}

void Zombie::announce() const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
