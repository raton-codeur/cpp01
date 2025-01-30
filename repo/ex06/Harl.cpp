#include "Harl.hpp"

void Harl::_debug()
{
	std::cout << "[ DEBUG ] Harl is complaining" << std::endl;
}

void Harl::_info()
{
	std::cout << "[ INFO ] Harl is complaining" << std::endl;
}

void Harl::_warning()
{
	std::cout << "[ WARNING ] Harl is complaining" << std::endl;
}

void Harl::_error()
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
			_debug();
		case 1 :
			_info();
		case 2 :
			_warning();
		case 3 :
			_error();
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
