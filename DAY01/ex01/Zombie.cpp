#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(void) {
	std::cout << "A zombie is created." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << _name << " has been destroyed." << std::endl;
}

void	Zombie::annonce(void) const{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name) {
	this->_name = name;
}
