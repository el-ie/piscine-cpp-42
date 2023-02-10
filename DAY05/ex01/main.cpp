
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <stdexcept>

int	main(void)
{
	try {

	Form page("fofo", 34, 15);

	Bureaucrat	ted("tedy", 34);

	std::cout << page << std::endl << ted << std::endl;

	//page.beSigned(ted);
	//ted.signForm(page);

	}
	catch(Form::AlreadySignedException & e) {
		std::cerr << e.what() << std::endl;
	}
	catch(Form::GradeTooLowException & e) {
		std::cerr << e.what() << std::endl;
	}
	catch(Form::GradeTooHighException & e) {
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException & e) {
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException & e) {
		std::cerr << e.what() << std::endl;
	}
	catch(...) {
		std::cout << "Cathed in ..." << std::endl;
	}


	std::cout << std::endl;


}
