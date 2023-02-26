#include <iostream>
#include <Array.hpp>
#include <stdlib.h>

#define MAX_VAL 50
int main(int, char**)
{
	////////	Tests du main donne	////////

	std::cout << std::endl << "	Tests donnes par le sujet :" << std::endl;

    //creation of an instance of array with MAX_VAL _tab size;
    Array<int> numbers(MAX_VAL);

    //similar creation with classic int
    int* mirror = new int[MAX_VAL];

    srand(time(NULL));

    // remplissage des deux tableaux avec des valeurs aleatoires
    std::cout << std::endl << "------ Remplissage de notre tableau de type Array<int> ainsi que du tableau de INT classique avec les memes valeurs:" << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 100;
        numbers[i] = value;
        mirror[i] = value;
    }

    //affichage des valeurs dans l'Array numbers de notre classe
    std::cout << std::endl << "------ Call de la fonction Array::display_all pour afficher nos valeurs :" << std::endl;
    numbers.display_all(); 

    std::cout << std::endl;

   //affichage des valeurs dans le tableau de int classic
   std::cout << "------ Boucle simple pour afficher les valeurs du tableau de INT classic :" << std::endl;
   for (int i = 0; i < MAX_VAL; i++)
   	std::cout << mirror[i] << " - ";
   std::cout << std::endl << std::endl;

    //SCOPE
    std::cout << "------ Test de l'operateur d'assignement et du constructeur par copie :" << std::endl;
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

	std::cout << std::endl << "------ Test d'egalite entre les valeurs de notre tableau Array<int> et les valeurs du tableau de INT (le . indique l'egalite) :" << std::endl << std::endl << "		[";

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
	else
		std::cout << ".";
    }
    std::cout << "]";

    std::cout << std::endl << std::endl;

	//test bad index
	std::cout << "------ Test exception bad index" << std::endl << std::endl;
	std::cout << "test index negatif:" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	std::cout << std::endl << "Test index trop haut" << std::endl;
	
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;

	std::cout << std::endl;

	////////	Tests personnels	////////
	
    Array<std::string> phrases(5);
    
    phrases[0] = "monsieur";
    phrases[1] = "banane";
    phrases[2] = "mange";
    phrases[3] = "une";
    phrases[4] = "poire";


    return 0;
}
