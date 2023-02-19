#include "Literal.hpp"

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

void	Literal::char_convert(void) {

	std::cout << "CHAR" << std::endl;	
}

void	Literal::int_convert(void) {
	
	std::cout << "INT" << std::endl;	
}

void	Literal::double_convert(void) {
	
	std::cout << "DOUBLE" << std::endl;	
}

void	Literal::float_convert(void) {
	
	std::cout << "FLOAT" << std::endl;	
}


void	Literal::convert_value(void) {

	//char ou int
	if (_value.size() == 1) {
		if (std::isdigit(_value[0]))
			return (int_convert());
		else
			return (char_convert());
	}

	//pseudos litteraux
	if (_value == "inf" || _value == "+inf" || _value == "-inf" || _value == "nan" )
		return (double_convert());
	if (_value == "inff" || _value == "+inff" || _value == "-inff" || _value == "nanf" )
		return (float_convert());

	//float avec partie decimale
	if (_value.find('.') != std::string::npos && _value.find('f') != std::string::npos)
		return (float_convert());
	
	//float sans partie decimale
	if (_value.find('f') != std::string::npos)
		return (float_convert());

	//double
	if (_value.find('.') != std::string::npos)
		return (double_convert());
	
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
