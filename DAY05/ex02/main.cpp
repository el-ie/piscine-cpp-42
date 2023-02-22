#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <stdexcept>
#include <iostream>
#include <string>

int	main(void)
{

	std::cout << std::endl << "----------------- Signature grade trop faible --------------------" << std::endl;

	////// echec de signature sur un des noueaux formulaire  //////

	RobotomyRequestForm intervention("Bender");
	
	std::cout << std::endl << intervention << std::endl;

	try {

		Bureaucrat      ted("tedy", 150);

		std::cout << ted << std::endl;

		ted.signForm(intervention);
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
		std::cout << "Other exception." << std::endl;
	}

	std::cout << std::endl << "-------------- Signature ok, execution grade trop faible -----------------" << std::endl << std::endl;

	///////////////// echec execution, peut signer mais pas executer  ////////////

	try {

		Bureaucrat      barney("barneyy", 50);

		std::cout << barney << std::endl;

		barney.signForm(intervention);

		barney.executeForm(intervention);
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
		std::cout << "Other exception." << std::endl;
	}

	std::cout << std::endl << "-------------- Bon grade execution pour la robotomie -----------------" << std::endl << std::endl;

	///////////////// Bon grade execution (deja signe)  ////////////

	Bureaucrat      barney("bernie", 1);

	std::cout << barney << std::endl;

	try {

		barney.executeForm(intervention);
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
		std::cout << "Other exception." << std::endl;
	}

	std::cout << std::endl << "-------------- Execution de la grace presidentielle  -----------------" << std::endl << std::endl;

	try {

		PresidentialPardonForm pardon("Tom Cruise");
		std::cout << pardon << std::endl;
		barney.signForm(pardon);
		barney.executeForm(pardon);
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
		std::cout << "Other exception." << std::endl;
	}

	std::cout << std::endl << "-------------- Execution du Shrubbery Creation Form  -----------------" << std::endl << std::endl;

	try {

		ShrubberyCreationForm trees("foret");
		std::cout << trees << std::endl;
		barney.signForm(trees);
		barney.executeForm(trees);
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
		std::cout << "Other exception." << std::endl;
	}
	std::cout << std::endl;

	return 0;
}
