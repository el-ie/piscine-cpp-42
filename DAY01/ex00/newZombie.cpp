#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
			
	Zombie*	dead = new Zombie(name);
	return (dead);
}
