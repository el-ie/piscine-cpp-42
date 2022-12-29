#include "Fixed.hpp"
#include <iostream>


std::ostream &	operator<<( std::ostream & ite , const Fixed & obj) {
	return (ite << obj.toFloat());
}

#define x(test) std::cout << test << std::endl

#include <stdlib.h>
int	main(int argc, char **argv)
{	
	Fixed	a(atoi(argv[1]));
	Fixed	b(atoi(argv[2]));

	//std::cout << (a > b) << std::endl;
	x((a != b));
}

//int main( void ) {
//	Fixed a;
//	Fixed const b( 10 );
//	Fixed const c( 42.42f );
//	Fixed const d( b );
//	a = Fixed( 1234.4321f );
//
//	std::cout << "--------------------------------" << std::endl;
//
//	std::cout << "a is " << a << std::endl;
//	std::cout << "b is " << b << std::endl;
//	std::cout << "c is " << c << std::endl;
//	std::cout << "d is " << d << std::endl;
//
//	std::cout << "--------------------------------" << std::endl;
//
//	std::cout << "a is " << a.toFloat() << " as integer" << std::endl;
//	std::cout << "b is " << b.toFloat() << " as integer" << std::endl;
//	std::cout << "c is " << c.toFloat() << " as integer" << std::endl;
//	std::cout << "d is " << d.toFloat() << " as integer" << std::endl;
//
//	std::cout << "--------------------------------" << std::endl;
//
//	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
//	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
//	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
//	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
//	
//	return (0);
//}
