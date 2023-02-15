#include "Intern.hpp"
#include "Form.hpp"

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

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	        {"ShrubberyCreationForm", &Intern::makeShrubbery},
		{"RobotomyRequestForm", &Intern::makeRobotomy},
		{"PresidentialPardonForm", &Intern::makePresidential}
	};


	for (int i = 0; i < 3; i++) {
		if (name == types[i].name)
			return (this->*types[i].fct)(target);
	}
	std::cerr << "Can't create " << name << " not a valid form." << std::endl;

	return (NULL);
}

