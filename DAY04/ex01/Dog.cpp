#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

#include <typeinfo> // remove

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

	type = other.type;
	*head = *(other.head);

	return *this;
}

Dog::~Dog()
{
	delete head;
	std::cout << "D[DESCTRUCTOR] Dog is destroyed."<< std::endl;
}

std::string	Dog::get_brain_idea(int index) {
	return (head->get_idea(index));
	}

void	Dog::makeSound(void) const {
	std::cout << type << ": Wouf wouf im a fuging dog" << std::endl;
	return ;
}

std::string	Dog::getType(void) const {
	return (type);
}
