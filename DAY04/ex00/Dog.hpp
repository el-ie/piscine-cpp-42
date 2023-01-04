#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const std::string &type);
		Dog(const Dog &other);
   	   ~Dog ();
		Dog & operator=(const Dog &other);

		void	makeSound(void);
};

#endif /* DOG_CLASS_HPP */
