#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie z;
	z.announce();
	Zombie fred("Fred");
	fred.announce();
	Zombie* bob = newZombie("Bob");
	bob->announce();
	delete bob;
	randomChump("Jim");
}