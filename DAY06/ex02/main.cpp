#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdexcept>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base *	generate(void) {

	int	random;

	srand((unsigned) time(NULL));

	random = rand() % 3;

	switch(random)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	
	return (new A);
}

void	identify(Base* p) {

	std::cout << std::endl << "identify with Base * parameter" << std::endl;
	if (p == NULL) {
		std::cerr << "Pointer is NULL" << std::endl << std::endl;
		return ;
	}
	else if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Type = A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Type = B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Type = C" << std::endl;
	else
		return ;
}

void	identify(Base& p) {

	std::cout << std::endl << "identify with Base& parameter" << std::endl;
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "Type = A" << std::endl;
	}
	catch (...) { }

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "Type = B" << std::endl;
	}
	catch (...) { }

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "Type = C" << std::endl;
	}
	catch (...) { }

}

int	main(void)
{
	Base *ptr;

	ptr = generate();

	identify(ptr);

	identify(*ptr);

	delete ptr;

	return 0;
}
