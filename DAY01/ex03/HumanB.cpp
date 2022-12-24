#include "HumanB.hpp"

#include <iostream>
#include <string>

HumanB::HumanB(std::string name) : _name(name) {
	_weap = NULL;
}

HumanB::~HumanB(void) {
}

void	HumanB::setWeapon(Weapon& weap) {

	_weap = &weap;
}

void	HumanB::attack() {
	if (_weap == NULL)
		std::cout << _name << " has no weapon yet, he hides behin a bush for the moment" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weap->getType() << std::endl;
}
