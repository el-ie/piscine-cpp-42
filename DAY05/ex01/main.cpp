
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <stdexcept>

int	main(void)
{
	try {

	Form formulaire("fofo", 150, 15);
	std::cout << formulaire << std::endl;

	} catch(...) {

	std::cout << "Catched" << std::endl;

	}


}
