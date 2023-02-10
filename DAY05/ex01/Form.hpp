#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

#include <iostream>
#include <string>

class Form
{
	public:
		Form();
		Form(const std::string &name);
		Form(const Form &other);
   	   ~Form ();
		Form & operator=(const Form &other);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *	what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *	what(void) const throw();
		};

		//accessors
		

	private:

		const std::string	name;
		bool			is_signed;
		long int		grade_sign;
		long int		grade_execute;


};

#endif /* FORM_CLASS_HPP */
