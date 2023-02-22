#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

#include <iostream>
#include <string>
#include <stdexcept> 

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, long int grade);
		Bureaucrat(const Bureaucrat &other);
   	   ~Bureaucrat ();
		Bureaucrat & operator=(const Bureaucrat &other);

	//accessors
		const std::string&	get_name() const;
		long int		get_grade() const;

	//grade change fct
		void		promotion();
		void		regression();

	// exceptions
		class GradeTooHighException : public std::exception {
			public:
			virtual const char *	what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
			virtual const char *	what(void) const throw();
		};

	private:

		//var
		const std::string	name;
		long int		grade;
		
		//fct
		void		check_grade(void) const;
};

std::ostream&	operator<<(std::ostream &output, const Bureaucrat& ted);

#endif /* BUREAUCRAT_CLASS_HPP */
