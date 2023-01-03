#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

#include <iostream>
#include <string>

class Cat
{
	public:
		Cat ();
		Cat (const std::string &name);
		Cat (const Cat &other);
   	   ~Cat ();
		Cat & operator=(const Cat &other);

	private:
		std::string	_name;
	protected:
};

#endif /* CAT_CLASS_HPP */
