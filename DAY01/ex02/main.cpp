#include <string>
#include <iostream>

int	main(void) {
	
	std::string	str = "HI THIS IS BRAIN";

	std::string*	stringPTR = &str;

	std::string&	stringREF = str;
	
	std::cout << "Adresse = " << &str << std::endl;
	std::cout << "Adresse = " << stringPTR << std::endl;
	std::cout << "Adresse = " << &stringREF << std::endl;

	std::cout << "str = " << str << std::endl;
	std::cout << "*stringPTR = " << *stringPTR << std::endl;
	std::cout << "stringREF = " << stringREF << std::endl;
}
