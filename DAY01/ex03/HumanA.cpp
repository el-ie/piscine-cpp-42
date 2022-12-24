#include "HumanA.hpp"

#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon& weap)
: _weap(weap), _name(name)
{
}

HumanA::~HumanA(void) {
}

void	HumanA::attack() {
	std::cout << _name << " attacks with their " << _weap.getType() << std::endl;	
}
