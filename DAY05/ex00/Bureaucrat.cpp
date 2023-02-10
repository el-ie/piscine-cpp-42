#include "Bureaucrat.hpp"
#include <stdexcept> //

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
	//std::cout << "Bureaucrat default constructor" << std::endl;

}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade)
{
	//std::cout << "Bureaucrat constructor" << std::endl;
	check_grade();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << "Bureaucrat copy constructor" << std::endl;
	*this = other;
}

Bureaucrat::~Bureaucrat()
{
	//std::cout << "Bureaucrat destructor" << std::endl;
}

void	Bureaucrat::check_grade(void) const{

	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException()); //comprendre+
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("GradeTooLowException : the grade can't go below grade 150");
}

const char * Bureaucrat::GradeTooHighException::what(void) const throw(){
	return ("GradeTooHighException : the grade can't go above grade 1");
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Bureaucrat assignation operator" << std::endl;
	this->name = other.name;
	this->grade = other.grade;
	return *this;
}

std::ostream&	operator<<(std::ostream &output, const Bureaucrat& ted) {
	output << ted.get_name() << ", bureaucrat grade " << ted.get_grade() << std::endl;
	return (output);
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

std::string	Bureaucrat::get_name(void) const {
	return (name);
}

int		Bureaucrat::get_grade(void) const {
	return (grade);
}
