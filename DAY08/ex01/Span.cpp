#include <cstdlib>

#include <vector>
#include <algorithm>
#include <stdexcept>

#include "Span.hpp"

	////	Constructors	////

//Span::Span() : _container() //pourquoi faire ca
Span::Span() : _maxsize(0)
{
	std::cout << std::endl << "Span default constructor (size = 0)" << std::endl << std::endl;
}

Span::Span(unsigned int N) : _container(), _maxsize(N)
{
	std::cout << std::endl << "Span constructor size = " << N << std::endl << std::endl;
}

Span::Span(const Span &other)
{
	std::cout << "Span copy constructor" << std::endl;
	*this = other;
}

Span::~Span()
{
	std::cout << "Span destructor" << std::endl;
}

	////	Overloads	////

Span&	Span::operator=(const Span &other)
{
	std::cout << "Span assignation operator" << std::endl;

	if (this == &other)
		return *this;

	this->_container = other._container; //??

	this->_maxsize = other._maxsize;

	return *this;
}

	////	Exceptions	////

char const *	Span::container_full::what() const throw()
{
	return "Span::container_full";
}

char const *	Span::not_enough_elements::what() const throw()
{
	return "Span::not_enough_elements";
}


////	Other	////

void	Span::addNumber(const int nb) {

	if (_container.size() == _maxsize)
		throw (container_full());

	std::cout << "Number " << nb << " was added to the container." << std::endl;
	_container.push_back(nb);
	return ;
}

///* ////////attention
//*/

void	Span::display_span() {
	
	std::cout << std::endl << "Valeurs contenues :" << std::endl;
	for (std::vector<int>::iterator it = _container.begin(); it != _container.end(); it++)
		std::cout << *it << " " ;
	std::cout << std::endl << std::endl;
}

	////	Shortest Longest Span	////

int	Span::longestSpan(void) const {
	
	if (_container.size() < 2)
		throw (not_enough_elements());
	
	int	max = *std::max_element(_container.begin(), _container.end());
	int	min = *std::min_element(_container.begin(), _container.end());

	return (max - min);
}

int	Span::shortestSpan(void) const {
	
	if (_container.size() < 2)
		throw (not_enough_elements());
	
	//temporary list copied from _container and sorted
	std::vector<int> temp = _container;
	std::sort(temp.begin(), temp.end());

	//temporary list to save the differences between each number of the sorted list
	//variable that will save the shortest diff of all comparisons
	int shortest = temp[1] - temp[0];
	//variable to save the difference at every loop
	int diff;

	for (std::vector<int>::iterator it = temp.begin(); it != temp.end(); it++) {
		if (it != temp.begin()) {
			diff = *it - *(it - 1);
			if (diff < shortest)
				shortest = diff;
		}
	}

	return (shortest);
}

//ici ?
int	generate_number(void) {
	
	return (std::rand() % 1000);
}

void	Span::fill_container(void) {

	if (_maxsize == 0)
		return ;

	
	_container.erase(_container.begin(), _container.end());

	//maxsize - 1 ou pas
	_container.insert(_container.begin(), _maxsize , 0);

	std::generate(_container.begin(), _container.end(), &generate_number);
}
