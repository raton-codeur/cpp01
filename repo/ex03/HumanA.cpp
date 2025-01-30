#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) :
	_name(name),
	_weapon(weapon)
{
	std::cout << name << " created with " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << _name << " destroyed" << std::endl;
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
