#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP

#include <iostream>
#include <string>

class RobotomyRequestForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &name);
		RobotomyRequestForm(const RobotomyRequestForm &other);
   	   ~RobotomyRequestForm ();
		RobotomyRequestForm & operator=(const RobotomyRequestForm &other);

	private:
		std::string	_name;
	protected:
};

#endif /* ROBOTOMYREQUESTFORM_CLASS_HPP */
