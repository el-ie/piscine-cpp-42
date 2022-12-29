#include "Fixed.hpp"
#include <iostream>


std::ostream &	operator<<( std::ostream & ite , const Fixed & obj) {
	return (ite << obj.toFloat());
}

#define print(test) std::cout << test << std::endl

#include <stdlib.h>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	//std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
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
