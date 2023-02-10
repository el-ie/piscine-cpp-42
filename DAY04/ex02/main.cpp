#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define LINE std::cout << std::endl;

int	main(void)
{
	std::cout << "------------------------" << std::endl;
	LINE

	//demande de l'enonce : creation du tableaux d'objets Animal moitie Dog moitiee Cat:
	const Animal*	tab[10];
	
	//remplissage du tableau
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
		}
		
	//deletion du tableau
	for (int i = 0; i < 10; i++)
		delete tab[i];

	//demonstration de l'application d'une copie profonde
	//des idees par le constructeur par copie :

	Dog*	milou = new Dog; //creation de milou

	LINE LINE

	for (int i = 0; i < 4; i++) //idees de milou
		std::cout << milou->get_brain_idea(i) << std::endl;

	LINE LINE
	Dog*	dingo = new Dog(*milou); //creation de dingo

	LINE LINE
	delete milou; //milou est detruit
	LINE LINE

	for (int i = 0; i < 4; i++) //dingo peut toujours acceder a ses idees copiees sur milou (copie profonde)
		std::cout << dingo->get_brain_idea(i) << std::endl;

	LINE LINE
	delete dingo;

	// La classe Animale est une classe abstraite et ne peut pas etre instanciee,
	// decommenter la ligne suivante provoquera donc une erreur
	//new Animal;
}
