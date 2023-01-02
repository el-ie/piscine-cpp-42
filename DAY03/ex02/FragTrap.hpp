#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "source.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
	public:
		FragTrap (void);
		FragTrap ( std::string name );
		FragTrap ( const FragTrap& copy );
   	   ~FragTrap (void);

	   FragTrap&	operator=( const FragTrap& rhs);

	   void	highFivesGuys(void);
};

#endif
