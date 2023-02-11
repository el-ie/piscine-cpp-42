#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
# define PRESIDENTIALPARDONFORM_CLASS_HPP

#include <iostream>
#include <string>

class PresidentialPardonForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &name);
		PresidentialPardonForm(const PresidentialPardonForm &other);
   	   ~PresidentialPardonForm ();
		PresidentialPardonForm & operator=(const PresidentialPardonForm &other);

	private:
		std::string	_name;
	protected:
};

#endif /* PRESIDENTIALPARDONFORM_CLASS_HPP */
