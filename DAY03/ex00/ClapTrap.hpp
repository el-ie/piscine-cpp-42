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
		ClapTrap ( const ClapTrap& copy );
   	   ~ClapTrap (void);

	   ClapTrap&	operator=( const ClapTrap& rhs);

	   void	attack( const std::string& target );
	   void takeDamage( unsigned int amount );
	   void	beRepaired( unsigned int amount );

	   //perso
	   void display_points(void) const ;
	   void	add_points(const int points, const int points_type);

	   //getters
	   int			get_hit_points(void) const;
	   int			get_energy_points(void) const;
	   int			get_attack_damages(void) const;
	   std::string	get_name(void) const;

	private:

	   std::string	_name;
	   int			_hit_points;
	   int			_energy_points;
	   int			_attack_damages;

	   bool			_incapacity(void) const ;
	   void			_exhausted( std::string action ) const ;
};

#endif
