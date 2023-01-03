#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include <iostream>
#include <string>

class Dog
{
	public:
		Dog ();
		Dog (const std::string &name);
		Dog (const Dog &other);
   	   ~Dog ();
		Dog & operator=(const Dog &other);

	private:
		std::string	_name;
	protected:
};

#endif /* DOG_CLASS_HPP */
