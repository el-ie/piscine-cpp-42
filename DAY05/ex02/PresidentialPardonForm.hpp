#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
# define PRESIDENTIALPARDONFORM_CLASS_HPP

#include <iostream>
#include <string>

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
   	   ~PresidentialPardonForm ();
		PresidentialPardonForm & operator=(const PresidentialPardonForm &other);

		//accessors
		const std::string &	get_target() const;

	private:
	//variables
		const std::string	target;

	//functions
	void	process(void) const;

};

std::ostream&	operator<<(std::ostream &output, const PresidentialPardonForm& formulaire);//nouveau

#endif /* PRESIDENTIALPARDONFORM_CLASS_HPP */
