#include "Zombie.hpp"

#include <iostream>
#include <string>

Zombie::Zombie(std::string name) : _name(name) {
}

Zombie::~Zombie(void) {
	std::cout << _name << " has been destroyed." << std::endl;
}

void	Zombie::annonce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
