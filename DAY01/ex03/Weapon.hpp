#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
	public:
		Weapon (const std::string type);
   	   ~Weapon (void);

	   std::string&	getType();
	   void			setType( const std::string new_type );

	private:

	   std::string _type;
};

#endif

