#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const std::string &type);
		Cat(const Cat &other);
   	   ~Cat ();
		Cat & operator=(const Cat &other);

		void			makeSound(void) const;
		std::string		getType(void) const ;

};

#endif /* CAT_CLASS_HPP */
