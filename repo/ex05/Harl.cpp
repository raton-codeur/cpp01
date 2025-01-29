#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "[DEBUG] Harl is complaining" << std::endl;
}

void Harl::info()
{
	std::cout << "[INFO] Harl is complaining" << std::endl;
}

void Harl::warning()
{
	std::cout << "[WARNING] Harl is complaining" << std::endl;
}

void Harl::error()
{
	std::cout << "[ERROR] Harl is complaining" << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"debug", "info", "warning", "error"};
	void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			(this->*functions[i])();
	}
}
