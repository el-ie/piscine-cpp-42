#include "Span.hpp"

int	main(void)
{

	Span elem(30);
	try {

	elem.addNumber(5);
	elem.addNumber(45);
	elem.addNumber(789);
	elem.addNumber(2);
	elem.addNumber(13);


	//std::cout << elem.longestSpan() << std::endl;

	std::cout << "shortest = " << elem.shortestSpan() << std::endl;

	}
	catch (...) {
	std::cout << "Catched" << std::endl;
	}

	//std::cout << elem._container[0] << std::endl;

	return 0;
}
