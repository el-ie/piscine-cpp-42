#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const std::string &name);
		Form(const std::string &name, const long int grade_sign, const long int grade_execute);
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
		class AlreadySignedException : public std::exception {
			public:
				virtual const char *	what(void) const throw();
		};
		class NotSignedException : public std::exception {
			public:
				virtual const char *	what(void) const throw();
		};

		void	beSigned(const	Bureaucrat & ted);

		//accessors
		const std::string &	get_name() const;
		bool			get_signed_status() const;
		long int		get_grade_sign() const;
		long int		get_grade_execute() const;

		//ex02
		void	execute(Bureaucrat const & executor) const ; //const ?
		virtual void	process(void) const = 0;

	private:

		const std::string	name;
		bool			signed_status;
		const long int		grade_sign;
		const long int		grade_execute;

		void	check_form_grade() const;

};

std::ostream&	operator<<(std::ostream &output, const Form& formulaire);//nouveau

#endif /* FORM_CLASS_HPP */
