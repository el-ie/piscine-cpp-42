#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal()
{
	type = "dog";
	std::cout << "D[CONSTRUCTOR DEF] Dog is created." << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type)
{
	std::cout << "D[CONSTRUCTOR STR] Dog is created." << std::endl;
}

Dog::Dog(const Dog &other) : Animal()
{
	*this = other;

	std::cout << "D[CONSTRUCTOR CPY] Dog " << type << " is created." << std::endl;
}

Dog::~Dog()
{
	std::cout << "D[DESCTRUCTOR] Dog is destroyed."<< std::endl;
}

Dog&	Dog::operator=(const Dog &other)
{
	std::cout << "D[ASSIGNATION] Dog assignated." << std::endl;
	if (this == &other)
		return *this;
	this->type = other.type;

	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << type << ": Wouf wouf im a fuging dog" << std::endl;
	return ;
}

std::string	Dog::getType(void) const {
	return (type);
}

//void	Dog::set_()
//void	Dog::get_()
//void	Dog::()
//void	Dog::_()
