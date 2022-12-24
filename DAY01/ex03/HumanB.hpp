#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

#include <iostream>
#include <string>

class HumanB
{
	public:
		HumanB (std::string name);
   	   ~HumanB (void);

		void		setWeapon(Weapon& weap);
		void		attack();


	private:

		std::string	_name;
	 	Weapon*		_weap;

};

#endif
