#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

///////////////////////// Constructors ////////////////////////////

PresidentialPardonForm::PresidentialPardonForm() :
	Form("Presidential Pardon form", 25, 5),
	target("default target")
{
	//std::cout << "PresidentialPardonForm default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
	Form("Presidential Pardon form", 25, 5),
	target(target)
{
	//std::cout << "PresidentialPardonForm constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) :
	Form(other.get_name(), 25, 5),
	target(other.get_target())
{
	std::cout << "PresidentialPardonForm copy constructor" << std::endl;
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	//std::cout << "PresidentialPardonForm destructor" << std::endl;
}

/////////////////////// Overloads ////////////////////////////////

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	std::cout << "PresidentialPardonForm assignation operator" << std::endl;
	(void)other; //rien , laisser fonction ? _______________________________
	return *this;
}

std::ostream&	operator<<(std::ostream &output, const PresidentialPardonForm& formulaire) {
	output << "	| Presidential Pardon Form: " << std::endl << "	|target = " << formulaire.get_target()
	<< ", signed status = " << formulaire.get_signed_status() << std::endl
	<< "	| grade_sign = " << formulaire.get_grade_sign() << " grade execute = "
	<< formulaire.get_grade_execute() << std::endl;
	return (output);
}

/////////////////////// Utilities ////////////////////////////////

void	PresidentialPardonForm::process(void) const {

	std::cout << target << " was forgiven by the great and only Zaphod Beeblebrox." << std::endl;		
}



/////////////////////// accessors /////////////////////////////////

const std::string &	PresidentialPardonForm::get_target() const {
	return (target);	
}


