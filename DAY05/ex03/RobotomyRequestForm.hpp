#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP

#include <iostream>
#include <string>
#include <stdexcept>

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &other);
   	   ~RobotomyRequestForm ();
		RobotomyRequestForm & operator=(const RobotomyRequestForm &other);

		//accessors
		const std::string &	get_target() const;

	private:
	//variables
		const std::string	target;

	//functions
	void	process(void) const;

};

std::ostream&	operator<<(std::ostream &output, const RobotomyRequestForm& formulaire);//nouveau

#endif /* ROBOTOMYREQUESTFORM_CLASS_HPP */
