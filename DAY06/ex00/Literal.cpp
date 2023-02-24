#include "Literal.hpp"

#include <iomanip>
#include <cstdlib>
#include <string>
#include <bits/stdc++.h>
#include <climits>
#include <stdint.h>

/////////////////////////// Constructors //////////////////////////

Literal::Literal() : _value("")
{
	//std::cout << "Literal default constructor" << std::endl;
}

Literal::Literal(const std::string &value) : _value(value)
{
	//std::cout << "Literal constructor" << std::endl;
}

Literal::Literal(const Literal &other)
{
	std::cout << "Literal copy constructor" << std::endl;
	*this = other;
}

Literal::~Literal()
{
	//std::cout << "Literal destructor" << std::endl;
}

/////////////////////////// Overloads ////////////////////////////////

Literal&	Literal::operator=(const Literal &other)
{
	std::cout << "Literal assignation operator" << std::endl;
	this->_value = other._value;
	return *this;
}

/////////////////////////// Utilities ////////////////////////////////

	
		//////////////////////// DISPLAY /////////////////////////


				//// CHAR ////

void	Literal::display(const char c, bool outside_limits) const {

	if (outside_limits)
		std::cout << "char: impossible" << std::endl;
	else if (not std::isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << " (DC)" << std::endl;
}

				//// INT ////

void	Literal::display(const int nb, bool outside_limits) const {

	std::cout << "OUTSIDE LIMIT = [" << outside_limits << "] nb =" << nb << std::endl;
	if (outside_limits)
		std::cout << "int: impossible (outside limits)" << std::endl;
	else
		std::cout << "int: " << nb << " (DI)" << std::endl;
}

				//// FLOAT ////

void	Literal::display(const float nb) const {

	// add focus
	//std::cout << std::fixed << std::setprecision(2) << "float: '" << nb << "'" << std::endl;
	std::cout << "float: " << nb << "f" << " (DF)" << std::endl;
}

				//// DOUBLE ////
				
void	Literal::display(const double nb) const {

	// add focus
	std::cout << "double: " << nb << " (DD)" << std::endl;
}

			//////////////////////// CONVERT /////////////////////////


//char convert et int convert : non displayable -> impossible

				//////// CHAR CONVERT ////////

void	Literal::char_convert(void) const {

	std::cout << "CHAR" << std::endl;

	//if (check_char_

	char c = _value[0];

	display(c, 0);
	display(static_cast<int>(c), 0);
	display(static_cast<float>(c));
	display(static_cast<double>(c));
}

bool	Literal::check_int_overflow(void) const {

	double test = std::atof(_value.c_str());

	if (test < INT_MIN || test > INT_MAX)
		return true;

	return false;
}

				//////// INT CONVERT ////////

void	Literal::int_convert(void) {

	std::cout << "INTTT" << std::endl;

	if (check_int_overflow() == true) {
		std::cerr << "Error int outside limits" << std::endl;
		return ;
	}

	int	nb = std::atoi(_value.c_str());

	display(static_cast<char>(nb), (nb < 0 || nb > 127));
	display(nb, 0);
	display(static_cast<float>(nb));
	display(static_cast<double>(nb));
}

				//////// FLOAT CONVERT ////////

void	Literal::float_convert(int special) {

	std::cout << "FLOAT" << std::endl;

	float nb = std::strtof(_value.c_str(), NULL);

	display(static_cast<char>(nb), (nb < 0 || nb > 127));

	if (!special)
		display(static_cast<int>(nb), (nb < -2147483648.0f || nb > 2147483647.0f));
		//display(static_cast<int>(nb), (nb < static_cast<float>(INT_MIN) || nb > static_cast<float>(INT_MAX)));
	else
		std::cout << "int: impossible" << std::endl;

	display(nb);
	display(static_cast<double>(nb));
}

				//////// DOUBLE CONVERT ////////

void	Literal::double_convert(int special) {

	std::cout << "DOUBLE" << std::endl;	

	double nb = std::atof(_value.c_str());

	display(static_cast<char>(nb), (nb < 0 || nb > 127));

	if (!special)
		display(static_cast<int>(nb), (nb < (double)INT_MIN || nb > (double)INT_MAX));
	else
		std::cout << "int: impossible" << std::endl;

	display(static_cast<float>(nb));
	display(nb);
}

int	Literal::is_float_special(std::string str) {

	if (str == "inff" || str == "+inff" || str == "-inff" || str == "nanf" )
		return 1;
	return 0;
}

int	Literal::is_double_special(std::string str) {

	if (str == "inf" || str == "+inf" || str == "-inf" || str == "nan" )
		return 1;
	return 0;
}

void	Literal::convert_value(void) {

	//pour que les float et doubles s affichent toujours a 2 decimales
	std::cout << std::fixed << std::setprecision(1);

	//char ou int
	if (_value.size() == 1) {
		if (std::isdigit(_value[0]))
			return (int_convert());
		else
			return (char_convert());
	}

	//pseudos litteraux
	if (is_double_special(_value))
		return (double_convert(1));
	if (is_float_special(_value))
		return (float_convert(1));

	//float avec partie decimale
	//if (_value.find('.') != std::string::npos && _value.find('f') != std::string::npos)
	//	return (float_convert());

	//float sans partie decimale
	if (_value.find('f') != std::string::npos)
		return (float_convert(0));

	//double
	if (_value.find('.') != std::string::npos)
		return (double_convert(0));

	//pas de '.' ou 'f' donc c'est un int
	return (int_convert());
}

bool	Literal::check_format(void) {


	// "pseudo litteraux"
	if (_value == "inf" || _value == "+inf" || _value == "-inf" || _value == "nan" )
		return 0;
	if (_value == "inff" || _value == "+inff" || _value == "-inff" || _value == "nanf" )
		return 0;

	//verification string vide
	if (_value.empty()) {
		std::cerr << "Error empty argument" << std::endl;
		return 1;
	}

	//verification caracteres affichables
	for (std::string::iterator i = _value.begin(); i != _value.end(); ++i) {
		if (not std::isprint(*i)) {
			std::cerr << "Error non printable character" << std::endl;
			return 1;
		}
	}

	//char or single digit
	if (_value.size() == 1)
		return 0;

	//___verification format int float ou double

	std::string::iterator i = _value.begin();

	//nombre negatif
	if (*i == '-')
		i++;

	//avance sur les nombres
	while (i != _value.end() && std::isdigit(*i))
		i++;

	// simple int
	if (i == _value.end())
		return 0;

	if (*i == 'f') {
		//simple float (sans partie decimale)
		if (i + 1 == _value.end())
			return 0;
		//rien ne doit etre apres le f :
		else {
			std::cerr << "Error bad syntax" << std::endl;
			return 1;
		}
	}

	//passe le point
	if (*i == '.')
		i++;

	//avance sur les nombres
	while (i != _value.end() && std::isdigit(*i))
		i++;

	//c'est un double
	if (i == _value.end())
		return 0;

	//c'est un float	
	if (*i == 'f' && i + 1 == _value.end())
		return 0;

	//mauvaise syntaxe
	std::cerr << "Error bad syntax" << std::endl;
	return 1;
}

//void	Literal::set_()
//void	Literal::get_()
//void	Literal::()
//void	Literal::_()

