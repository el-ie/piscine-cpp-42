#include "Fixed.hpp"

#include <iostream>
#include <string>

#include <cmath>

Fixed::Fixed(void) {
	_number = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & copy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed( const int nb ) {
	std::cout << "CONVERTION VIRGULE FIXE constructor called" << std::endl;
	nb *=  256;
	_number = nb << _fractional_part;
}

Fixed::Fixed( const float nb ) {
	std::cout << "CONVERTION VIRGULE FIXE constructor called" << std::endl;
	nb = math::roundf(nb * 256);
	_number = nb << _fractional_part;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( const Fixed & rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_number = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_number);
}

void	Fixed::setRawBits( int const raw ) {
	this->_number = raw;
}
