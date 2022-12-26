#include "HumanA.hpp"

#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon& weap)
: _name(name), _weap(weap)
{
}

HumanA::~HumanA(void) {
}

void	HumanA::attack() const {
	std::cout << _name << " attacks with their " << _weap.getType() << std::endl;	
}
