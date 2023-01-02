#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "source.hpp"

#define LOOP(nb) for (int i = 0; i < nb; i++)

int	main(void)
{
	ScavTrap instance("bob");

	instance.guardGate();

	instance.attack("un arbre");

	instance.beRepaired(1);

	instance.takeDamage(8);

	return (0);
}
