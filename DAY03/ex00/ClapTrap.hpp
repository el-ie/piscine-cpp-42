#ifndef CLAPTRAP_H
# define CLAPTRAP_H

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
	private:

	   std::string	_name;
	   int			_hit_points;
	   int			_energy_points;
	   int			_attack_damages;

	   bool	_incapacity(void) const ;
	   void	_exhausted( std::string action ) const ;

};

#endif

