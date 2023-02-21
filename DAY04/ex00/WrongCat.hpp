#ifndef WRONG_CAT_CLASS_HPP
# define WRONG_CAT_CLASS_HPP

#include <iostream>
#include <string>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const std::string &type);
		WrongCat(const WrongCat &other);
   	   ~WrongCat ();
		WrongCat & operator=(const WrongCat &other);

		void			makeSound(void) const;
		std::string		getType(void) const ;
};

#endif /* WRONG_CAT_CLASS_HPP */
