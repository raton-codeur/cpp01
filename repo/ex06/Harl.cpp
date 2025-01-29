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
	void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i;
	for (i = 0; i < 4; i++)
	{
		if (level == levels[i])
			break;
	}
	switch (i)
	{
		case 0 :
			(this->*functions[i++])();
		case 1 :
			(this->*functions[i++])();
		case 2 :
			(this->*functions[i++])();
		case 3 :
			(this->*functions[i++])();
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
