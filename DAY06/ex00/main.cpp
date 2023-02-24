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
	
	Literal	test(argv[1]);

	if (test.check_format() == 0)
		test.convert_value();

	return 0;
}
