#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <stdexcept>

int	main(void)
{

	Intern toby;

	Form *form; 

	//fakeform :

	std::cout << std::endl << "----------- fake form creation -------------" << std::endl << std::endl;
	toby.makeForm("fake form", "target");

	//valid form :
	std::cout << std::endl << "----------- Presidential Pardon form creation -------------" << std::endl << std::endl;

	form = toby.makeForm("presidential pardon", "Nicolas Cage");

	Bureaucrat ted("tedy", 1);

	std::cout << std::endl << "----------- Signing and execution -------------" << std::endl << std::endl;

	if (form)
	{
		ted.signForm(*form);
		ted.executeForm(*form);
	}
	delete form;

	Form *form2;	

	std::cout << std::endl << "----------- Robotomy Request form creation -------------" << std::endl << std::endl;

	form2 = toby.makeForm("robotomy request", "bender");

	std::cout << std::endl << "----------- Signing and execution -------------" << std::endl << std::endl;

	if (form2)
	{
		ted.signForm(*form2);
		ted.executeForm(*form2);
	}

	delete form2;

	Form *form3;

	std::cout << std::endl << "----------- Shrubbery Creation form creation -------------" << std::endl << std::endl;

	form3 = toby.makeForm("shrubbery creation", "TREES");

	std::cout << std::endl << "----------- Signing and execution -------------" << std::endl << std::endl;

	if (form3)
	{
		ted.signForm(*form3);
		ted.executeForm(*form3);
	}
	
	delete form3;

	return 0;
}
