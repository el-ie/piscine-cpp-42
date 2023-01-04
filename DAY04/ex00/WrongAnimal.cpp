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
	this->type = other.type;
	return *this;
}

void	WrongAnimal::makeSound(void) {
	std::cout << "@WrongAnimal making sound" << std::endl;
	return ;
}

//void	WrongAnimal::set_()
//void	WrongAnimal::get_()
//void	WrongAnimal::()
//void	WrongAnimal::_()
