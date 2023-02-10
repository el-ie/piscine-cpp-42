#include "Form.hpp"

Form::Form() : name("default") , is_signed(0)
{
	std::cout << "Form default constructor" << std::endl;
}

Form::Form(const std::string &name) : name(name), is_signed(0)
{
	std::cout << "Form constructor" << std::endl;
}

Form::Form(const Form &other)
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
	is_signed = other.is_signed;
	grade_sign = other.grade_sign;
	grade_execute = other.grade_execute;
	return *this;
}

//void	Form::set_()
//void	Form::get_()
//void	Form::()
//void	Form::_()
