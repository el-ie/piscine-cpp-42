#include "Brain.hpp"

//Brain::Brain() : _name("default")
//{
//	std::cout << "Brain default constructor" << std::endl;
//}
Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
}

//Brain::Brain(const std::string &name) : _name(name)
//{
//	std::cout << "Brain constructor" << std::endl;
//}
// DELETED

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = other;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

Brain&	Brain::operator=(const Brain &other)
{
	std::cout << "Brain assignation operator" << std::endl;
	//this.ideas = &other.ideas; // ??unsure
	(void)other;
	return *this;
}

//void	Brain::set_()
//void	Brain::get_()
//void	Brain::()
//void	Brain::_()
