#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>

class Fixed
{
	public:
		Fixed ( void );
		Fixed (	const Fixed & copy );
		Fixed (	const int nb );
		Fixed (	const float nb );
   	   ~Fixed ( void );

	   int	getRawBits( void ) const;
	   void	setRawBits( int const raw );

	   Fixed& operator=( const Fixed & rhs );
	   Fixed	operator+( const Fixed & rhs );
	   Fixed	operator-( const Fixed & rhs );
	   Fixed	operator*( const Fixed & rhs );
	   Fixed	operator/( const Fixed & rhs );


	   bool	operator>( const Fixed & rhs ) const;
	   bool	operator>=( const Fixed & rhs ) const;
	   bool	operator<( const Fixed & rhs ) const;
	   bool	operator<=( const Fixed & rhs ) const;
	   bool	operator==( const Fixed & rhs ) const;
	   bool	operator!=( const Fixed & rhs ) const;

	   Fixed&	operator++();
	   Fixed	operator++(int);
	   Fixed&	operator--();
	   Fixed	operator--(int);

	   static	Fixed&	min(Fixed& a, Fixed& b);
	   static	Fixed	min(const Fixed& a, const Fixed& b);

	   static Fixed&	max(Fixed& a, Fixed& b);
	   static Fixed		max(const Fixed& a, const Fixed& b);

	   float	toFloat( void ) const;
	   int		toInt( void ) const;

	private:

	   int				_number;
	   static const int	_fractional_part = 8;

};

#endif

