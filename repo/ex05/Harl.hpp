#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <iostream>

class Harl
{
	private :
		void	_debug();
		void	_info();
		void	_warning();
		void	_error();
	public :
		void	complain(std::string level);
};

#endif