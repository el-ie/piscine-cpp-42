#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "source.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap (void);
		ScavTrap ( std::string name );
		ScavTrap ( const ScavTrap& copy );
   	   ~ScavTrap (void); //virtual??

	   ScavTrap&	operator=( const ScavTrap& rhs);

	   void			guardGate(void) const ;
	   void			attack( const std::string& target );

};

#endif
