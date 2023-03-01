#include <string>
#include <iostream>

#include "Span.hpp"

#include <cstdlib>

#include <stdexcept>


int	main(void)
{

	// initialisastion de la graine de srand qui sera utilisee pour generer des nombres aleatoires a mettre dans la liste
	std::srand(time(NULL));

	//fonctionnalitees de base
	std::cout << std::endl << "---------- Fonctionnalitees de base :" << std::endl;

	//initiatisation de la liste avec une taille de 5
	std::cout << std::endl << "Creation d'une span d'une taille de 5 :" << std::endl;
	Span elem(5);

	//ajout des valeurs dans le span
	std::cout << "Ajout de valeurs dans le span :" << std::endl << std::endl;
	elem.addNumber(42);
	elem.addNumber(84);
	elem.addNumber(168);
	elem.addNumber(336);
	elem.addNumber(672);

	//affichage des valeurs
	elem.display_span();
	

		////	Exceptions	////

	std::cout << "---------- Test des exceptions de base :" << std::endl << std::endl;
	//test de l'ajout d'un nombre alors que le span est full
	std::cout << "Test de l'ajout d'un nombre quand le span est plein :" << std::endl;
	try {
	elem.addNumber(42000);
	}
	catch (std::exception const &e) {
		std::cerr << std::endl << "Exception: " << e.what() << std::endl << std::endl;
	}


	//Ajout d'un nombre dans un span vide
	std::cout << "Test de l'ajout d'un nombre dans un span vide :" << std::endl;
	Span	test;
	try {
		test.addNumber(42000);
	}
	catch (std::exception const &e) {
		std::cerr << "Exception: " << e.what() << std::endl << std::endl;
	}


	return 0;
}
