#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal()
{
	type = "cat";
	std::cout << "C[CONSTRUCTOR DEF] Cat is created." << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type)
{
	std::cout << "C[CONSTRUCTOR STR] Cat is created." << std::endl;
}

Cat::Cat(const Cat &other) : Animal()
{
	*this = other;

	std::cout << "C[CONSTRUCTOR CPY] Cat is created." << std::endl;
}

Cat::~Cat()
{
	std::cout << "C[DESCTRUCTOR] Cat is destroyed."<< std::endl;
}

Cat&	Cat::operator=(const Cat &other)
{
	std::cout << "C[ASSIGNATION] Cat assignated." << std::endl;
	if (this == &other)
		return *this;
	this->type = other.type;
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << type << ": Miaw Miaw i want tuna." << std::endl;
	return ;
}

std::string	Cat::getType(void) const {
	return (type);
}

//void	Cat::set_()
//void	Cat::get_()
//void	Cat::()
//void	Cat::_()
