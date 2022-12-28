#include <string>
#include <iostream>

int	main(void) {
	
	std::string	str = "HI THIS IS BRAIN";

	std::string*	stringPTR = &str;

	std::string&	stringREF = str;

	std::cout << std::endl << "		Adresses :" << std::endl << std::endl;
	std::cout << "Adresse &str       = " << &str << std::endl;
	std::cout << "Adresse stringPTR  = " << stringPTR << std::endl;
	std::cout << "Adresse &stringREF = " << &stringREF << std::endl << std::endl;

	std::cout << "		Valeurs :" << std::endl << std::endl;
	std::cout << "str = " << str << std::endl;
	std::cout << "*stringPTR = " << *stringPTR << std::endl;
	std::cout << "stringREF = " << stringREF << std::endl << std::endl;
}
