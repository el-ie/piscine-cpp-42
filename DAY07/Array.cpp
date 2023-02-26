#include "Array.hpp"

Array::Array() : _name("default")
{
	std::cout << "Array default constructor" << std::endl;
}

Array::Array(const std::string &name) : _name(name)
{
	std::cout << "Array constructor" << std::endl;
}

Array::Array(const Array &other)
{
	std::cout << "Array copy constructor" << std::endl;
	*this = other;
}

Array::~Array()
{
	std::cout << "Array destructor" << std::endl;
}

Array&	Array::operator=(const Array &other)
{
	std::cout << "Array assignation operator" << std::endl;
	this->_name = other._name;
	return *this;
}

//void	Array::set_()
//void	Array::get_()
//void	Array::()
//void	Array::_()
