#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
	std::cout << "Bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade)
{
	std::cout << "Bureaucrat constructor" << std::endl;
	adjust_incorrect_grade();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << "Bureaucrat copy constructor" << std::endl;
	*this = other;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Bureaucrat assignation operator" << std::endl;
	this->name = other.name;
	this->grade = other.grade;
	return *this;
}
/*	POURQUOI NE COMPILE PAS ?
std::ostream&	Bureaucrat::operator<<(std::ostream &output) {
	output << name << ", bureaucrat grade " << grade << std::endl;
	return (output);
}
*/

void		Bureaucrat::adjust_incorrect_grade() {
	if (grade < 1)
		grade = 1;
	else if (grade > 150)
		grade = 150;
}

void		Bureaucrat::promotion(void) {
	if (grade == 1) {
		std::cout << name << " is already at the top of the food chain, can't get higher than that." << std::endl;
		return;
	}

	grade--;
	std::cout << name << " has been a great worker, he climb up the rank to reach grade " << grade << std::endl;
}

void		Bureaucrat::regression(void) {
	if (grade == 150) {
		std::cout << name << " is already serving cofee and polishing shoes he can't get a lower grade" << std::endl;
		return ;
	}

	grade++;
	std::cout << name << " has had a really unprofessionnal comportment in the working space, he is retrograded to grade " << grade << std::endl;
}

std::string	Bureaucrat::get_name(void) const {
	return (name);
}

int		Bureaucrat::get_grade(void) const {
	return (grade);
}
