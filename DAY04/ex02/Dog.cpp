#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal()
{
	type = "dog";
	std::cout << "D[CONSTRUCTOR DEF] Dog is created." << std::endl;
	head = new Brain;
}

Dog::Dog(const std::string &type) : Animal(type)
{
	std::cout << "D[CONSTRUCTOR STR] Dog is created." << std::endl;
	head = new Brain;
}

Dog::Dog(const Dog &other) : Animal()
{
	std::cout << "D[CONSTRUCTOR CPY] Dog is created." << std::endl;
	head = new Brain;
	*this = other;
}

Dog&	Dog::operator=(const Dog &other)
{
	std::cout << "D[=] Dog assignated." << std::endl;
	if (this == &other)
		return *this;
	type = other.type;
	*head = *(other.head);

	return *this;
}

Dog::~Dog()
{
	delete head;
	std::cout << "D[DESCTRUCTOR] Dog is destroyed."<< std::endl;
}

std::string	Dog::get_brain_idea(long int index) const {
	if (index >= 0 && index < 100)
		return (head->get_idea(index));
	else
		return ("Bad index.");
	}

void	Dog::makeSound(void) const {
	std::cout << type << ": Wouf wouf im a fuging dog" << std::endl;
	return ;
}

std::string	Dog::getType(void) const {
	return (type);
}
