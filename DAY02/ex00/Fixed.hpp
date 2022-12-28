#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>

class Fixed
{
	public:
		Fixed ( void );
		Fixed (	const Fixed & copy );
   	   ~Fixed ( void );

	   int	getRawBits( void ) const;
	   void	setRawBits( int const raw );

	   Fixed & operator=( const Fixed & rhs );

	private:

	   int				_number;
	   static const int	_fractional_part = 8;

};

#endif

