#include "Fixed.hpp"

#include <iostream>
#include <string>

#include <cmath>

Fixed::Fixed(void) {
	_number = 0;
}

Fixed::Fixed( const Fixed & copy ) {
	*this = copy;
}

Fixed::Fixed( const int nb ) {
	_number = nb << _fractional_part;
}

Fixed::Fixed( const float nb ) {
	_number = (int)roundf(nb * (1 << _fractional_part));
}

Fixed::~Fixed(void) {
}

void	Fixed::assign_float( const float nb ) {
	_number = (int)roundf(nb * (1 << _fractional_part));
}

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed	Fixed::min(const Fixed& a, const Fixed& b) {
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed	Fixed::max(const Fixed& a, const Fixed& b) {
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed&	Fixed::operator++() {
	_number ++;
	return (*this);
}

Fixed	Fixed::operator++(int) {

	Fixed	temp = *this;
	_number ++;
	return (temp);
}

Fixed&	Fixed::operator--() {
	_number--;
	return (*this);
}

Fixed	Fixed::operator--(int) {

	Fixed	temp = *this;
	_number--;
	return (temp);
}

Fixed&	Fixed::operator=( const Fixed & rhs ) {

	this->_number = rhs.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+( const Fixed & rhs ) const {

	Fixed resultat;
	resultat.setRawBits(this->_number + rhs._number);
	return (resultat);
}

Fixed	Fixed::operator-( const Fixed & rhs ) const {

	Fixed resultat;
	resultat.setRawBits(this->_number - rhs._number);
	return (resultat);
}

Fixed	Fixed::operator*( const Fixed & rhs ) const {
	Fixed resultat(this->toFloat() * rhs.toFloat());
	return (resultat);
}

Fixed	Fixed::operator/( const Fixed & rhs ) const {

	Fixed resultat;
	if (rhs.toFloat() == 0) {
		std::cerr << "Can't divide by 0" << std::endl;
	}
	else
		resultat.assign_float(this->toFloat() / rhs.toFloat());
	return (resultat);
}

bool	Fixed::operator>( const Fixed & rhs ) const {

	if (this->_number > rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=( const Fixed & rhs ) const {

	if (this->_number >= rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<( const Fixed & rhs ) const {

	if (this->_number < rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=( const Fixed & rhs ) const {

	if (this->_number <= rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==( const Fixed & rhs ) const {

	if (this->_number == rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=( const Fixed & rhs ) const {

	if (this->_number != rhs.getRawBits())
		return (true);
	else
		return (false);
}

float	Fixed::toFloat( void ) const {
	return (float(_number) / (1 << _fractional_part));
}

int		Fixed::toInt( void ) const {
	return (_number >> _fractional_part);
}

int	Fixed::getRawBits( void ) const {
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_number);
}

void	Fixed::setRawBits( int const raw ) {
	this->_number = raw;
}
