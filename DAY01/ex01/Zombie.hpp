#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
	public:
		Zombie (void);
   	   ~Zombie (void);

		void	annonce(void) const;
		void	set_name(std::string name);

	private:
	
		std::string _name;
};

#endif

