#include "Brain.hpp"

Brain::Brain() 
{
	std::cout << "Brain default constructor" << std::endl;
	createIdeas();
}

void	Brain::createIdeas(void) {

	for (int i = 0; i < 100; i++) {
		ideas[i] = (i % 26) + 65;
		i++;
	}
}

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
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}
