#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _name("default")
{
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &name) : _name(name)
{
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy constructor from " << other._name << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal assignation operator from " << other._name << std::endl;
	this->_name = other._name;
	return *this;
}

//void	WrongAnimal::set_()
//void	WrongAnimal::get_()
//void	WrongAnimal::()
//void	WrongAnimal::_()
