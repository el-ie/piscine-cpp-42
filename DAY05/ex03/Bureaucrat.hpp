#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, long int grade);
		Bureaucrat(const Bureaucrat &other);
   	   ~Bureaucrat ();
		Bureaucrat & operator=(const Bureaucrat &other); // const ???

		void	signForm(Form & page) const ;

		//accessors
		const std::string&	get_name() const; //put back
		long int		get_grade() const;

		//exceptions
		class GradeTooHighException : public std::exception {
			public:
			virtual const char *	what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
			virtual const char *	what(void) const throw();
		};

		//functions
		void		promotion();
		void		regression();

		void		executeForm(Form const & form) const ;

	private:

		const std::string	name;
		long int		grade;

		void	check_grade(void) const;
};

//put back
std::ostream&	operator<<(std::ostream &output, const Bureaucrat& ted);//nouveau

#endif /* BUREAUCRAT_CLASS_HPP */
