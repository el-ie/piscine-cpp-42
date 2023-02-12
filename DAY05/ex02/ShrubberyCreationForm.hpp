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

		void	process(void);

	private:
		const std::string	target;
};

#endif /* SHRUBBERYCREATIONFORM_CLASS_HPP */
