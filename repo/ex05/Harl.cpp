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
	std::string levels[4] = {"debug", "info", "warning", "error"};
	void (Harl::*functions[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			(this->*functions[i])();
	}
}
