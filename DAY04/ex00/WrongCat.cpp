#include "WrongCat.hpp"

WrongCat::WrongCat() : _name("default")
{
	std::cout << "WrongCat default constructor" << std::endl;
}

WrongCat::WrongCat(const std::string &name) : _name(name)
{
	std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "WrongCat copy constructor from " << other._name << std::endl;
	*this = other;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat assignation operator from " << other._name << std::endl;
	this->_name = other._name;
	return *this;
}

//void	WrongCat::set_()
//void	WrongCat::get_()
//void	WrongCat::()
//void	WrongCat::_()
