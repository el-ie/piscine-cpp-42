#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

int	main(void)
{
	int zombie_nb = 7;
	std::string zombie_name = "voldemort";
	
	Zombie* dead = zombieHorde(zombie_nb, zombie_name);

	for (int i = 0; i < zombie_nb; i++)
		dead[i].annonce();

	delete [] dead;

	return (0);
}
