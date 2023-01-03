#include "ClapTrap.hpp"
#include "source.hpp"

#define LOOP(nb) for (int i = 0; i < nb; i++)

int	main(void)
{
	ClapTrap instance("bob");

	LOOP(11)
	{
		std::cout << i << " -> ";
		instance.attack("un arbre");
	}
	instance.add_points(3, ENERGY);
	instance.attack("une fougere");

	LOOP(3)
		instance.beRepaired(1);

	LOOP(3)
		instance.takeDamage(8);

	return (0);
}
