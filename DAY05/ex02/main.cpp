#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include <stdexcept>




int	main(void)
{
	
	Form *	impot = new ShrubberyCreationForm("impot");
	ShrubberyCreationForm assurance =  ShrubberyCreationForm("assurance");

	//std::cout << assurance.get_target() << std::endl;
	//std::cout << assurance.get_name() << std::endl;

	assurance.process();
	impot->process();

}


/*
int	main(void)
{
	std::cout << " --------------- Signature sans probleme ---------------" << std::endl << std::endl;

	try {

	Form page("avis d'imposition", 10, 100);

	Bureaucrat	ted("tedy", 5);

	std::cout << page << std::endl << ted << std::endl;

	ted.signForm(page);
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
	catch(...) {
		std::cout << "Cathed in ..." << std::endl;
	}

	/////////////////////////////////////////////////////////////////////
	std::cout << std::endl << " --------------- Signature grade insuffisant --------------" << std::endl << std::endl;

	try {

	Form page("avis d'imposition", 10, 100);

	Bureaucrat	ted("tedy", 15);

	std::cout << page << std::endl << ted << std::endl;

	ted.signForm(page);
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
	catch(...) {
		std::cout << "Cathed in ..." << std::endl;
	}

	/////////////////////////////////////////////////////////////////////
	std::cout << std::endl << " --------------- Signature document deja signe ---------------" << std::endl << std::endl;

	try {

	Form page("avis d'imposition", 10, 100);

	Bureaucrat	ted("tedy", 5);

	std::cout << page << std::endl << ted << std::endl;

	ted.signForm(page);
	std::cout << "deuxieme tentative de signature : " << std::endl;
	ted.signForm(page);
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
	catch(...) {
		std::cout << "Cathed in ..." << std::endl;
	}
	std::cout << std::endl;
}
*/
