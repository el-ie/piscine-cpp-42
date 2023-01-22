#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* egg = new Animal();
	const Animal* milou = new Dog();
	const Animal* garfield = new Cat();
	std::cout << "milou type = " << milou->getType() << " " << std::endl;
	std::cout << "garfield type = " << garfield->getType() << " " << std::endl;
	garfield->makeSound();
	milou->makeSound();
	egg->makeSound();

	std::cout << "------------------------------------------------" << std::endl;

	const WrongAnimal* pikachu = new WrongAnimal();
	const WrongAnimal* batman = new WrongCat();
	std::cout << "WrongCat type = " <<  batman->getType() << " " << std::endl;
	batman->makeSound();
	pikachu->makeSound();

	delete egg;
	delete milou;
	delete garfield;
	delete pikachu;
	delete batman;

	return (0);
}
