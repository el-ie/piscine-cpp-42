#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include "source.hpp"
#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap (void);
		ClapTrap ( std::string name );
   	   ~ClapTrap (void);

	   void	attack( const std::string& target );
	   void takeDamage( unsigned int amount );
	   void	beRepaired( unsigned int amount );

	   void display_points(void) const ;
	   void	add_points(const int points, const int points_type);

	private:

	   std::string	_name;
	   int			_hit_points;
	   int			_energy_points;
	   int			_attack_damages;

	   bool			_incapacity(void) const ;
	   void			_exhausted( std::string action ) const ;
};

#endif
