#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
	_name(name),
	_weapon(NULL)
{
	std::cout << name << " created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << _name << " destroyed" << std::endl;
}

void HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with their bare hands" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}
