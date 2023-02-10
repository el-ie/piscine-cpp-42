#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

#include <iostream>

#include <string> //let ?
#include <stdexcept> //?

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, long int grade);
		Bureaucrat(const Bureaucrat &other);
   	   ~Bureaucrat ();
		Bureaucrat & operator=(const Bureaucrat &other); // const ???

	//accessors
		std::string	get_name() const; //put back
		long int		get_grade() const;

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

		const std::string	name;
		long int		grade;

		void	check_grade(void) const;
};

//put back
std::ostream&	operator<<(std::ostream &output, const Bureaucrat& ted);//nouveau

#endif /* BUREAUCRAT_CLASS_HPP */
