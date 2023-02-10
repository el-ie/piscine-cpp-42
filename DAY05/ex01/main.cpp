
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <stdexcept>

int	main(void)
{
	try {

	Form formulaire("fofo", 15, 15);

	Bureaucrat	ted("tedy", 15);

	std::cout << formulaire << std::endl << ted << std::endl;

	formulaire.beSigned(ted);
	formulaire.beSigned(ted);
	formulaire.beSigned(ted);

	}
	catch(Form::AlreadySignedException & e) {
		std::cerr << e.what() << std::endl;
	}
	catch(Form::GradeTooLowException & e) {
		std::cerr << e.what() << std::endl;
	}
	catch(...) {
		std::cout << "Cathed in ..." << std::endl;
	}


	std::cout << std::endl;


}
