#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
	name(name),
	weapon(NULL)
{
	std::cout << name << " created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->name << " destroyed" << std::endl;
}

void HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their bare hands" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}
