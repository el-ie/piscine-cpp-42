#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
		Brain();
		Brain(const Brain &other);
		~Brain ();
		Brain & operator=(const Brain &other);

		std::string	get_idea(long int index) const;

	private:
		std::string	ideas[100]; //const ?
		void	createIdeas(void);
};

#endif /* BRAIN_CLASS_HPP */
