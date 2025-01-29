#include <iostream>
#include "Zombie.hpp"

static void local_zombies()
{
	Zombie z;
	Zombie fred("Fred");
	z.announce();
	fred.announce();
}

int main()
{
	local_zombies();
	Zombie* bob = newZombie("Bob");
	bob->announce();
	delete bob;
	randomChump("Jim");
}