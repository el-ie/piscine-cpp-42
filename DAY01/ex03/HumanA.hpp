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

	   void		attack() const;

	private:

		const std::string	_name;
		Weapon&				_weap;

};

#endif

