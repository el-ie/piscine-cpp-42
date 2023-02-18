#ifndef LITERAL_CLASS_HPP
# define LITERAL_CLASS_HPP

#include <iostream>
#include <string>

class Literal
{
	public:
		Literal();
		Literal(const std::string &value);
		Literal(const Literal &other);
   	   ~Literal ();
		Literal & operator=(const Literal &other);

		bool	check_format();
		void	convert_value();

	private:
		std::string	_value;
};

#endif /* LITERAL_CLASS_HPP */
