#ifndef WRONG_ANIMAL_CLASS_HPP
# define WRONG_ANIMAL_CLASS_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const std::string &type);
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal & operator=(const WrongAnimal &other);
   	    virtual	~WrongAnimal ();

		void			makeSound(void) const;
		std::string		getType(void) const ;


	protected:
		std::string	type;
};

#endif /* WRONG_ANIMAL_CLASS_HPP */
