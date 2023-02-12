#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("Shrubbery form", 145, 137),
	target("default target")
{
	std::cout << "ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
	Form("Shrubbery form", 145, 137),
	target(target)
{
	std::cout << "ShrubberyCreationForm constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) :
	Form(other.get_name(), 145, 137),
	target(other.get_target())
{
	std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout << "ShrubberyCreationForm assignation operator" << std::endl;
	(void)other; //rien , laisser fonction ? _______________________________
	return *this;
}



/////////////////////// Utilities /////////////////////////////////

void	ShrubberyCreationForm::process(void) {
	std::cout << "PROCESSING -> " << target << std::endl;
}

/////////////////////// accessors /////////////////////////////////

const std::string &	ShrubberyCreationForm::get_target() const {
	return (target);	
}


