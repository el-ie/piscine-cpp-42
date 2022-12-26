#include "Harl.hpp"

#include <iostream>
#include <string>

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::complain(std::string level) {

	void	(Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};	

	for (int i = 0; i < 4; i++) {
		if (levels[i].compare(level) == 0) {
			(this->*ptr_complain[i])();
			return ;
		}
	}
	std::cout << level << " is not a valid level" << std::endl;
}

void	Harl::debug(void) {

	std::cout << "This is a DEBUG message." << std::endl;
}

void	Harl::info(void) {

	std::cout << "This is an INFO message." << std::endl;
}

void	Harl::warning(void) {

	std::cout << "This is a WARNING message." << std::endl;
}

void	Harl::error(void) {

	std::cout << "This is an ERROR message." << std::endl;
}
