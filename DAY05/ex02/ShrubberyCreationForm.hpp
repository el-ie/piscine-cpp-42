#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
# define SHRUBBERYCREATIONFORM_CLASS_HPP

#include <iostream>
#include <string>

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
   	   ~ShrubberyCreationForm ();
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &other);

		//accessors
		const std::string &	get_target() const;

	private:
	//variables
		const std::string	target;

	//functions
	void	process(void) const;

};

std::ostream&	operator<<(std::ostream &output, const ShrubberyCreationForm& formulaire);//nouveau

#endif /* SHRUBBERYCREATIONFORM_CLASS_HPP */
