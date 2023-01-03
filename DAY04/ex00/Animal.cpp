#include "Animal.hpp"

Animal::Animal() : _type("default")
{
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type)
{
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor from " << other._type << std::endl;
	*this = other;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal&	Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignation operator from " << other._type << std::endl;
	this->_type = other._type;
	return *this;
}

//void	Animal::set_()
//void	Animal::get_()
//void	Animal::()
//void	Animal::_()
