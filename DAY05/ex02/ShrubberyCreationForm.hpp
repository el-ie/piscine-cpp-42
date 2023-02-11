#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
# define SHRUBBERYCREATIONFORM_CLASS_HPP

#include <iostream>
#include <string>

class ShrubberyCreationForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &name);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
   	   ~ShrubberyCreationForm ();
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &other);

	private:
		std::string	_name;
	protected:
};

#endif /* SHRUBBERYCREATIONFORM_CLASS_HPP */
