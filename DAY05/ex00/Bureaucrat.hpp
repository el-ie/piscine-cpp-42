#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

#include <iostream>
#include <string>

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

	private:
		std::string	name;
		int		grade;

		void	adjust_incorrect_grade(void);
};

#endif /* BUREAUCRAT_CLASS_HPP */
