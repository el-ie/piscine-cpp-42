
#include "Literal.hpp"
#include <sstream>
#include <iostream>
#include <string>

#include <typeinfo>


int	main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "Error bad number of arguments" << std::endl;
		return (1);
	}

	(void)argc;
	
	Literal	test(argv[1]);

	if (test.check_format() == 0)
		test.convert_value();

/*
	std::stringstream obj(argv[1]);
	int a;
	std::cout << "convertion [" << (obj >> a) << "]" << std::endl;
	std::cout << a << " type= " << typeid(a).name() << std::endl;
*/

	return 42;
}
