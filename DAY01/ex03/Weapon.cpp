#include "Weapon.hpp"

#include <iostream>
#include <string>

Weapon::Weapon(std::string type) : _type(type) {
}

Weapon::~Weapon(void)
{
}

std::string&	Weapon::getType() {
	std::string& str = _type;
	return (str);
}

void	Weapon::setType( std::string new_type ) {
	_type = new_type;
}
