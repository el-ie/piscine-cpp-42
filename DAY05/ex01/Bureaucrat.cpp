#include "Bureaucrat.hpp"
#include <stdexcept>
#include <string>
#include <iostream>

#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
	//std::cout << "Bureaucrat default constructor" << std::endl;

}

Bureaucrat::Bureaucrat(const std::string &name, long int grade) : name(name), grade(grade)
{
	//std::cout << "Bureaucrat constructor" << std::endl;
	check_grade();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
	std::cout << "Bureaucrat copy constructor" << std::endl;
	*this = other;
}

Bureaucrat::~Bureaucrat()
{
	//std::cout << "Bureaucrat destructor" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Bureaucrat assignation operator" << std::endl;
	if (this == &other)
		return *this;
	this->grade = other.grade;
	return *this;
}

std::ostream&	operator<<(std::ostream &output, const Bureaucrat& ted) {
	output << ted.get_name() << ", bureaucrat grade " << ted.get_grade() << std::endl;
	return (output);
}

//////////////////////////////////////////////////////////////////

void	Bureaucrat::signForm(Form & page) const {

	try  {
		page.beSigned(*this);
		std::cout << this->get_name() << " signed " << page.get_name() << std::endl;
	} catch (Form::AlreadySignedException & e) {
		std::cout << this->get_name() << " couldn't signed " << page.get_name() << " because the form was already signed." << std::endl;
	} catch (Form::GradeTooLowException & e) {
		std::cout << this->get_name() << " couldn't signed " << page.get_name() << " because he didn't have a high enough grade." << std::endl;
	} catch (...) {
		std::cout << this->get_name() << " couldn't signed " << page.get_name() << std::endl;
	}
}

void	Bureaucrat::check_grade(void) const{

	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("Bureaucrat GradeTooLowException : the grade can't go below grade 150");
}

const char * Bureaucrat::GradeTooHighException::what(void) const throw(){
	return ("Bureaucrat GradeTooHighException : the grade can't go above grade 1");
}


void		Bureaucrat::promotion(void) {
	
	if (grade == 1) {

		std::cout << "[PROMOTION] " << name << " is already at the top of the food chain, can't get higher than that." << std::endl;
		throw (Bureaucrat::GradeTooHighException());
	}

	grade--;
	std::cout << "[PROMOTION] " << name << " has been a great worker, he climb up the rank to reach grade " << grade << std::endl;
}

void		Bureaucrat::regression(void) {

	if (grade == 150) {
		std::cout << "[REGRESSION] " << name << " is already serving cofee and polishing shoes he can't get a lower grade" << std::endl;
		throw (Bureaucrat::GradeTooLowException());
	}

	grade++;
	std::cout << "[REGRESSION] " << name << " has had a really unprofessionnal comportment in the working space, he is retrograded to grade " << grade << std::endl;
}

const std::string&	Bureaucrat::get_name(void) const {
	return (name);
}

long int		Bureaucrat::get_grade(void) const {
	return (grade);
}
