#include "Zombie.hpp"

Zombie* newZombie(std::string name); // ou le declarer ?
void	randomChump(std::string name);

int	main(void)
{
	Zombie test1("aladin");
	test1.annonce();

	Zombie* test2 = newZombie("obama");
	test2->annonce();

	randomChump("turing");
	
	delete test2;

	return (0);
}
