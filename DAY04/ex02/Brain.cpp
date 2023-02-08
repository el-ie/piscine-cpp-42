#include "Brain.hpp"
#include <cstdlib> //ok?

Brain::Brain() 
{
	std::cout << "Brain default constructor" << std::endl;
	createIdeas();
}

void	Brain::createIdeas(void) {

	std::string creature[10] = {"A penguin ", "A crow ", "A bear ", "An alligator ", "Cartman ", "Rick Sanchez ", "Morty ", "Donald duck ", "Donald Trump ", "Napoleon "};
	std::string verb[10] = {"eating ", "seeing ", "befriending ", "speaking to ", "asking help from ", "questionning ", "attacking ", "hitting ", "escaping ", "loving "};
	std::string item[10] = {"an icecream.", "logan paul.", "emmanuel macron.", "the entire cosmic realm.", "a crazy fox.", "a genius hamster.", "an evil plankton.", "morgan freeman.", "Neil amstrong.", "reality."};

	srand((unsigned) time(NULL));
	int	r1;
	int	r2;
	int	r3;

	for (int i = 0; i < 100; i++) {
		r1 = rand() % 10;	
		r2 = rand() % 10;	
		r3 = rand() % 10;
		std::string str;
		ideas[i] = str.append(creature[r1]).append(verb[r2]).append(item[r3]);
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

std::string	Brain::get_idea(int index) const {
	return (ideas[index]);
}
