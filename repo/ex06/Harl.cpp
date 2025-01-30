#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "[ DEBUG ] Harl is complaining" << std::endl;
}

void Harl::info()
{
	std::cout << "[ INFO ] Harl is complaining" << std::endl;
}

void Harl::warning()
{
	std::cout << "[ WARNING ] Harl is complaining" << std::endl;
}

void Harl::error()
{
	std::cout << "[ ERROR ] Harl is complaining" << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	for (i = 0; i < 4; i++)
	{
		if (level == levels[i])
			break;
	}
	switch (i)
	{
		case 0 :
			debug();
		case 1 :
			info();
		case 2 :
			warning();
		case 3 :
			error();
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
