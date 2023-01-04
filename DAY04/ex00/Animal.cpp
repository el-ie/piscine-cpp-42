#include "Animal.hpp"

Animal::Animal(void) : type("animal")
{
	std::cout << "@Animal default constructor" << std::endl;
}

Animal::Animal(const std::string &type) : type(type)
{
	std::cout << "@Animal constructor" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "@Animal copy constructor" << std::endl;
	*this = other;
}

Animal::~Animal()
{
	std::cout << "@Animal destructor" << std::endl;
}

Animal&	Animal::operator=(const Animal &other)
{
	std::cout << "@Animal assignation operator" << std::endl;
	this->type = other.type;
	return *this;
}

void	Animal::makeSound(void) {
	std::cout << "@Animal making sound" << std::endl;
	return ;
}

//void	Animal::set_()
//void	Animal::get_()
//void	Animal::()
//void	Animal::_()