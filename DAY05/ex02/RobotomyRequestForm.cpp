#include <cstdlib>
#include <iostream>
#include <string>
#include <stdexcept>

#include "RobotomyRequestForm.hpp"

///////////////////////// Constructors ////////////////////////////

RobotomyRequestForm::RobotomyRequestForm() :
	Form("Robotomy request form", 72, 45),
	target("default target")
{
	//std::cout << "RobotomyRequestForm default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
	Form("Robotomy request form", 72, 45),
	target(target)
{
	//std::cout << "RobotomyRequestForm constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) :
	Form(other.get_name(), 72, 45),
	target(other.get_target())
{
	std::cout << "RobotomyRequestForm copy constructor" << std::endl;
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	//std::cout << "RobotomyRequestForm destructor" << std::endl;
}

/////////////////////// Overloads ////////////////////////////////

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	std::cout << "RobotomyRequestForm assignation operator" << std::endl;
	(void)other; //rien , laisser fonction ? _______________________________
	return *this;
}

std::ostream&	operator<<(std::ostream &output, const RobotomyRequestForm& formulaire) {
	output << "	| Robotomy Form: " << std::endl << "	|target = " << formulaire.get_target()
	<< ", signed status = " << formulaire.get_signed_status() << std::endl
	<< "	| grade_sign = " << formulaire.get_grade_sign() << " grade execute = "
	<< formulaire.get_grade_execute() << std::endl;
	return (output);
}

/////////////////////// Utilities ////////////////////////////////

void	RobotomyRequestForm::process(void) const {
	std::cout << "rrrrrrrrrrrrriiiiiiiiiiiiiiii *drill noises" << std::endl;

	srand((unsigned) time(NULL));
	
	if (rand() % 2 == 0)
		std::cout << "The robotomy was a sucess, the subject " << target << " is now updated to latest version 23.6.2 distributed by MomCorp ."
		<< std::endl;
	else
		std::cout << "The robotomy was a failure, we lost another subject." << std::endl;
		
}



/////////////////////// accessors /////////////////////////////////

const std::string &	RobotomyRequestForm::get_target() const {
	return (target);	
}


