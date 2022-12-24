#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

#include <iostream>
#include <string>

class HumanA
{
	public:
		HumanA (std::string name, Weapon& weap);
   	   ~HumanA (void);

	   void		attack();

	private:

	   Weapon&		_weap;
	   std::string	_name;

};

#endif

