#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

#include <iostream>
#include <string>

class HumanB
{
	public:
		HumanB (const std::string name);
   	   ~HumanB (void);

		void		setWeapon(Weapon& weap);
		void		attack() const ;


	private:

		const std::string	_name;
	 	Weapon*		_weap;

};

#endif
