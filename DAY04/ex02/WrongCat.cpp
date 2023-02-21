#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "wrong cat";
	std::cout << "WC[CONSTRUCTOR DEF] WrongCat is created." << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type)
{
	std::cout << "WC[CONSTRUCTOR STR] WrongCat is created." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
	*this = other;

	std::cout << "WC[CONSTRUCTOR CPY] WrongCat is created." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WC[DESCTRUCTOR] WrongCat is destroyed."<< std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat &other)
{

	std::cout << "WC[ASSIGNATION] WrongCat assignated." << std::endl;

	if (this == &other)
		return *this;

	this->type = other.type;

	return *this;
}

void	WrongCat::makeSound(void) const {
	std::cout << "Miaw Miaw i want tuna." << std::endl;
	return ;
}

std::string	WrongCat::getType(void) const {
	return (type);
}

//void	WrongCat::set_()
//void	WrongCat::get_()
//void	WrongCat::()
//void	WrongCat::_()
