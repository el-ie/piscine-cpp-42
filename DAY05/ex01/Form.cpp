#include "Form.hpp"

Form::Form() : name("default") , signed_status(0) , grade_sign(150) , grade_execute(150)
{
	std::cout << "Form default constructor" << std::endl;
}

Form::Form(const std::string &name) : name(name), signed_status(0) , grade_sign(150) , grade_execute(150)
{
	std::cout << "Form constructor" << std::endl;
}

Form::Form(const std::string &name, const long int grade_sign, const long int grade_execute) : name(name), signed_status(0) , grade_sign(grade_sign) , grade_execute(grade_execute)
{
	std::cout << "Form constructor" << std::endl;
	check_form_grade();
}

void	Form::check_form_grade(void) const {

	if (grade_sign > 150 || grade_execute > 150)
		throw (Form::GradeTooLowException()); //comprendre+
	if (grade_sign < 1 || grade_execute < 1)
		throw (Form::GradeTooHighException());
}

const char * Form::GradeTooLowException::what(void) const throw() {
	return ("Form GradeTooLowException : the grade can't go below grade 150");
}

const char * Form::GradeTooHighException::what(void) const throw(){
	return ("Form GradeTooHighException : the grade can't go above grade 1");
}

Form::Form(const Form &other) : name(other.name), signed_status(other.signed_status), grade_sign(other.grade_sign), grade_execute(other.grade_execute)
{
	std::cout << "Form copy constructor" << std::endl;
	*this = other;
}

Form::~Form()
{
	std::cout << "Form destructor" << std::endl;
}

Form&	Form::operator=(const Form &other)
{
	std::cout << "Form assignation operator" << std::endl;
	signed_status = other.signed_status;
	return *this;
}

std::ostream&	operator<<(std::ostream &output, const Form& formulaire) {
	output << "Form: " << formulaire.get_name() << ", signed status = " << formulaire.get_signed_status()
	<< " grade_sign = " << formulaire.get_grade_sign() << " grade execute = "
	<< formulaire.get_grade_execute() << std::endl;
	return (output);
}
///////////////////////////////////////////////////////////

//accessors
const std::string &	Form::get_name(void) const {
	return (name);	
}

bool 			Form::get_signed_status(void) const {
	return (signed_status);
}

long int		Form::get_grade_sign(void) const {
	return (grade_sign);
}

long int		Form::get_grade_execute(void) const {
	return (grade_execute);
}
