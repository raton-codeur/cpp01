#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie z;
	z.announce();
	Zombie zz("Fred");
	zz.announce();
	Zombie* zzz = newZombie("Bob");
	zzz->announce();
	delete zzz;
	randomChump("Jim");
}