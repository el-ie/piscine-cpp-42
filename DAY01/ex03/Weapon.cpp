#include "Weapon.hpp"

#include <iostream>
#include <string>

Weapon::Weapon(const std::string type) : _type(type) {
}

Weapon::~Weapon(void)
{
}

std::string&	Weapon::getType() {
	std::string& str = _type;
	return (str);
}

void	Weapon::setType( const std::string new_type ) {
	_type = new_type;
}
