#include "Dog.hpp"

Dog::Dog() : _name("default")
{
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const std::string &name) : _name(name)
{
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog copy constructor from " << other._name << std::endl;
	*this = other;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

Dog&	Dog::operator=(const Dog &other)
{
	std::cout << "Dog assignation operator from " << other._name << std::endl;
	this->_name = other._name;
	return *this;
}

//void	Dog::set_()
//void	Dog::get_()
//void	Dog::()
//void	Dog::_()
