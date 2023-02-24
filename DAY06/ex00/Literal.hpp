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


	//conversion fcts
	void	char_convert(void)const ;
	void	int_convert(void);
	void	double_convert(int special);
	void	float_convert(int special);

	//display fcts
	void	display(const char c, bool special_literal, bool outside_limits) const;
	void	display(const int nb, bool special_literal, bool outside_limits) const ;
	void	display(const float nb) const ;
	void	display(const double nb) const ;


	int	is_float_special(std::string str);
	int	is_double_special(std::string str);
	
	bool	check_int_overflow(void) const ;
};

#endif /* LITERAL_CLASS_HPP */
