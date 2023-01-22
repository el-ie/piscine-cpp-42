#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const std::string &type);
		Dog(const Dog &other);
   	   ~Dog ();
		Dog & operator=(const Dog &other);

		void			makeSound(void) const;
		std::string		getType(void) const ;

	private:
		Brain*	head;

};

#endif /* DOG_CLASS_HPP */
