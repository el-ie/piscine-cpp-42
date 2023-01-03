#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal ();
		Animal (const std::string type);
		Animal (const Animal &other);
   	   	virtual ~Animal (); //virtual ?? dans le fichier cpp?
		Animal & operator=(const Animal &other);

	protected:
		std::string	_type;
};

#endif /* ANIMAL_CLASS_HPP */
