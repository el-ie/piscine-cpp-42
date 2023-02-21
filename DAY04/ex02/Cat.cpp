#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal()
{
	type = "cat";
	std::cout << "C[CONSTRUCTOR DEF] Cat is created." << std::endl;
	head = new Brain;
}

Cat::Cat(const std::string &type) : Animal(type)
{
	std::cout << "C[CONSTRUCTOR STR] Cat is created." << std::endl;
	head = new Brain;
}

Cat::Cat(const Cat &other) : Animal()
{
	std::cout << "C[CONSTRUCTOR CPY] Cat is created." << std::endl;
	head = new Brain;
	*this = other;
}

Cat&	Cat::operator=(const Cat &other)
{
	std::cout << "C[=] Cat assignated." << std::endl;

	if (this == &other)
		return *this;

	type = other.type;
	*head = *(other.head);

	return *this;
}

Cat::~Cat()
{
	delete head;
	std::cout << "C[DESCTRUCTOR] Cat is destroyed."<< std::endl;
}

std::string	Cat::get_brain_idea(int index) const {
	return (head->get_idea(index));
	}

void	Cat::makeSound(void) const {
	std::cout << type << ": miaw i like tuna" << std::endl;
	return ;
}

std::string	Cat::getType(void) const {
	return (type);
}
