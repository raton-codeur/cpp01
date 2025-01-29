#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
	name(name)
{
	std::cout << name << " created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->name << " destroyed" << std::endl;
}

