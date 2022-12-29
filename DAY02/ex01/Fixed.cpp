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
	std::cout << "Int constructor called" << std::endl;
	_number = nb << _fractional_part;
}

Fixed::Fixed( const float nb ) {
	std::cout << "Float constructor called" << std::endl;
	_number = (int)roundf(nb * (1 << _fractional_part));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( const Fixed & rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_number = rhs.getRawBits();
	return (*this);
}

float	Fixed::toFloat( void ) const {
	return (float(_number) / (1 << _fractional_part));
}

int		Fixed::toInt( void ) const {
	return (_number >> _fractional_part);
}

int	Fixed::getRawBits( void ) const {
	return (this->_number);
}

void	Fixed::setRawBits( int const raw ) {
	this->_number = raw;
}
