#include "Cat.hpp"

Cat::Cat() : _name("default")
{
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const std::string &name) : _name(name)
{
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor from " << other._name << std::endl;
	*this = other;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

Cat&	Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignation operator from " << other._name << std::endl;
	this->_name = other._name;
	return *this;
}

//void	Cat::set_()
//void	Cat::get_()
//void	Cat::()
//void	Cat::_()
