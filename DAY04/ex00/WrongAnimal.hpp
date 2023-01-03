#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal ();
		WrongAnimal (const std::string &name);
		WrongAnimal (const WrongAnimal &other);
   	   ~WrongAnimal ();
		WrongAnimal & operator=(const WrongAnimal &other);

	private:
		std::string	_name;
	protected:
};

#endif /* WRONGANIMAL_CLASS_HPP */
