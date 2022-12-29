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

	   Fixed & operator=( const Fixed & rhs );
	   Fixed	operator+( const Fixed & rhs );
	   Fixed	operator-( const Fixed & rhs );
	   Fixed	operator*( const Fixed & rhs );
	   Fixed	operator/( const Fixed & rhs );


	   bool	operator>( const Fixed & rhs );
	   bool	operator>=( const Fixed & rhs );
	   bool	operator<( const Fixed & rhs );
	   bool	operator<=( const Fixed & rhs );
	   bool	operator==( const Fixed & rhs );
	   bool	operator!=( const Fixed & rhs );


	   float	toFloat( void ) const;
	   int		toInt( void ) const;

	private:

	   int				_number;
	   static const int	_fractional_part = 8;

};

#endif

