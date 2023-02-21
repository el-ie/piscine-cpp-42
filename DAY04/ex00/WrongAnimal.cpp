#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("wrong animal")
{
	std::cout << "@WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : type(type)
{
	std::cout << "@WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "@WrongAnimal copy constructor" << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "@WrongAnimal destructor" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "@WrongAnimal assignation operator" << std::endl;
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "@WrongAnimal making sound" << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const {
	return (type);
}

//void	WrongAnimal::set_()
//void	WrongAnimal::get_()
//void	WrongAnimal::()
//void	WrongAnimal::_()
