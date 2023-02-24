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
	
	Literal::set(argv[1]);

	if (Literal::check_format() == 0)
		Literal::convert_value();

	return 0;
}
