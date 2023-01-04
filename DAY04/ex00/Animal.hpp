#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(const std::string &type);
		Animal(const Animal &other);
		Animal & operator=(const Animal &other);
   	    virtual	~Animal ();

		virtual	void	makeSound(void);

	protected:
		std::string	type;
};

#endif /* ANIMAL_CLASS_HPP */
