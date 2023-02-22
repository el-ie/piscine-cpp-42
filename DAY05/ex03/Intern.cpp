#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <stdexcept>
#include <iostream>
#include <string>

////////////////////////// Constructors //////////////////////////

Intern::Intern()
{
	std::cout << "Intern default constructor" << std::endl;
}

Intern::Intern(const Intern &other)
{
	std::cout << "Intern copy constructor" << std::endl;
	*this = other;
}

Intern::~Intern()
{
	std::cout << "Intern destructor" << std::endl;
}

/////////////////////// Overloads ////////////////////////////////

Intern&	Intern::operator=(const Intern &other)
{
	std::cout << "Intern assignation operator" << std::endl;
	(void)other;
	return *this;
}

///////////////////////// Utilities //////////////////////////////

Form *	Intern::makeShrubbery(std::string target) const {
	return (new ShrubberyCreationForm(target));
}
Form *	Intern::makeRobotomy(std::string target) const {
	return (new RobotomyRequestForm(target));
}
Form *	Intern::makePresidential(std::string target) const {
	return (new PresidentialPardonForm(target));
}

Form *	Intern::makeForm(std::string name, std::string target) const {

	t_papers	types[3] = {
	        {"shrubbery creation", &Intern::makeShrubbery},
		{"robotomy request", &Intern::makeRobotomy},
		{"presidential pardon", &Intern::makePresidential}
	};


	for (int i = 0; i < 3; i++) {
		if (name == types[i].name) {
			std::cout << "Intern creates " << types[i].name << " form." << std::endl;
			return (this->*types[i].fct)(target);
		}
	}
	std::cerr << "Can't create " << name << " not a valid form." << std::endl;

	return (NULL);
}

