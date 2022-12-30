#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap iteration("tobi");

	iteration.attack("un arbre");

	for (int i = 0; i < 20; i++)
	iteration.takeDamage(1);

	iteration.beRepaired(1);

	for (int i = 0; i < 20; i++)
	iteration.takeDamage(1);
	return 1;
}
