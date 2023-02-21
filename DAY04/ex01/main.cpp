#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include "Brain.hpp"

#define LINE std::cout << std::endl;

int	main(void) {

	Brain *tete = new Brain();

	for (int i = 0; i < 10; i++)
		std::cout << tete->get_idea(i) << std::endl;
	std::cout << std::endl << "-------------" << std::endl;
	
	//Brain *tete2 = new Brain();

	Brain *tete2 = tete;

	*tete = *tete2;
	//delete tete;

	for (int i = 0; i < 10; i++)
		std::cout << tete2->get_idea(i) << std::endl;
	
	delete tete2;

	return 3;
}

int	mainn(void)
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

	return 0;
}
