#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie z;
	Zombie fred("Fred");
	z.announce();
	fred.announce();
	Zombie* bob = newZombie("Bob");
	bob->announce();
	delete bob;
	randomChump("Jim");
}