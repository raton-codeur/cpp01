#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() :
	_name("NO_NAME")
{
	std::cout << "zombie created" << std::endl;
}

Zombie::Zombie(std::string name) :
	_name(name)
{
	std::cout << "zombie created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " destroyed" << std::endl;
}

void Zombie::announce() const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}
