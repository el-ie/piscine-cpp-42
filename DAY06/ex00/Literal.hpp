#ifndef LITERAL_CLASS_HPP
# define LITERAL_CLASS_HPP

#include <iostream>
#include <string>

class Literal
{
	public:
		static bool	check_format();
		static void	convert_value();
		static void set(const std::string& value);
	private:
		static std::string	_value;

		Literal();
		Literal(const Literal &other);
		~Literal();
		Literal & operator=(const Literal &other);


		//conversion fcts
		static void	char_convert(void);
		static void	int_convert(void);
		static void	double_convert(int special);
		static void	float_convert(int special);

		//display fcts
		static void	display(const char c, bool special_literal, bool outside_limits);
		static void	display(const int nb, bool special_literal, bool outside_limits);
		static void	display(const float nb);
		static void	display(const double nb);

		static int	is_float_special(std::string str);
		static int	is_double_special(std::string str);
		static bool	check_int_overflow(void);
};

#endif /* LITERAL_CLASS_HPP */
