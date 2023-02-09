#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

#include <iostream>
#include <string> //let ?

#include <stdexcept>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &other);
   	   ~Bureaucrat ();
		Bureaucrat & operator=(const Bureaucrat &other);

		//std::ostream&	operator<<(std::ostream &output); //probleme

	//accessors
		std::string	get_name() const;	
		int		get_grade() const;

		void		promotion();
		void		regression();

		//nested class, bonne maniere ?
		class GradeTooHighException : public std::exception {
			public:
			virtual const char *	what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
			virtual const char *	what(void) const throw();
		};

	private:
		std::string	name;
		int		grade;

		void	check_grade(void) const;
};

#endif /* BUREAUCRAT_CLASS_HPP */
