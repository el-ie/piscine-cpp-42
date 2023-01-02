#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "source.hpp"

#define LOOP(nb) for (int i = 0; i < nb; i++)

int	main(void)
{
	FragTrap instance("bob");

	instance.highFivesGuys();

	instance.attack("un arbre");

	instance.beRepaired(1);

	instance.takeDamage(8);

	return (0);
}
