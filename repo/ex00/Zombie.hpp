#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class Zombie
{
	private :
		std::string _name;
	public :
				Zombie();
				Zombie(std::string name);
				~Zombie();
		void	announce() const;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif