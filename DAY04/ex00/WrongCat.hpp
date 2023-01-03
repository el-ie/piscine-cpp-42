#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

#include <iostream>
#include <string>

class WrongCat
{
	public:
		WrongCat ();
		WrongCat (const std::string &name);
		WrongCat (const WrongCat &other);
   	   ~WrongCat ();
		WrongCat & operator=(const WrongCat &other);

	private:
		std::string	_name;
	protected:
};

#endif /* WRONGCAT_CLASS_HPP */
