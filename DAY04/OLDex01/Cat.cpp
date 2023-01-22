#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal()
{
	type = "cat";
	head = new Brain(); // ADD TO OTHER CONSTRUCTORS
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
	delete head;
}

Cat&	Cat::operator=(const Cat &other)
{
	this->type = other.type;

	std::cout << "C[ASSIGNATION] Cat assignated." << std::endl;
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Miaw Miaw i want tuna." << std::endl;
	return ;
}

std::string	Cat::getType(void) const {
	return (type);
}

//void	Cat::set_()
//void	Cat::get_()
//void	Cat::()
//void	Cat::_()
