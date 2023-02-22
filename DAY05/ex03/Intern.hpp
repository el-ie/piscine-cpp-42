#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &other);
   	   ~Intern ();
		Intern & operator=(const Intern &other);

		Form *	makeForm(std::string name, std::string target) const;

	private:

		Form *	makeShrubbery(std::string target) const;
		Form *	makeRobotomy(std::string target) const;
		Form *	makePresidential(std::string target) const;

		typedef struct s_papers {
			std::string	name;
			Form * (Intern::*fct)(std::string) const;
		}	t_papers;
};

#endif /* INTERN_CLASS_HPP */
