#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
		Brain();
		Brain(const std::string &name);
		Brain(const Brain &other);
   	   ~Brain ();
		Brain & operator=(const Brain &other);

	private:
		std::string	ideas[100];
};

#endif /* BRAIN_CLASS_HPP */
