#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include "Brain.hpp"

#include <cstdio> // delete
#include <cstdlib> // delete
int	main(void)
{
	Brain* tete = new Brain;

	//std::cout << "idea = [" << tete->ideas[0] << "] <--" << std::endl;


	std::cout << "-------- TETE ---------" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << "[" << tete->get_idea(i) << "]"  << std::endl;
	std::cout << std::endl;
	
	Brain* ballon = new Brain;
	*ballon = *tete;

	delete tete;

	std::cout << std::endl << "-------- BALLON ---------" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << "[" << ballon->get_idea(i) << "]"  << std::endl;
	std::cout << std::endl;

	delete ballon;
	

	//printf("%s", tete->ideas[0].c_str());
}

/*
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
 */
