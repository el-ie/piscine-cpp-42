#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
   	    virtual	~Animal ();

		virtual	void	makeSound(void) const;
		std::string		getType(void) const ;

	protected:
		std::string	type;

		Animal();
		Animal(const std::string &type);
		Animal(const Animal &other);
		Animal & operator=(const Animal &other);
};

#endif /* ANIMAL_CLASS_HPP */
