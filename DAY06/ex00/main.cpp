#include "ScalarConverter.hpp"
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
	
	ScalarConverter::set(argv[1]);

	if (ScalarConverter::check_format() == 0)
		ScalarConverter::convert();

	return 0;
}
