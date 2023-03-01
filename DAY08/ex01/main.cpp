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
	Span basic_span(5);

	//ajout des valeurs dans le span
	std::cout << "Ajout de valeurs dans le span :" << std::endl << std::endl;
	basic_span.addNumber(42);
	basic_span.addNumber(84);
	basic_span.addNumber(168);
	basic_span.addNumber(336);
	basic_span.addNumber(672);

	//affichage des valeurs
	basic_span.display_span();
	

		////	Exceptions	////

	std::cout << "---------- Test des exceptions de base :" << std::endl << std::endl;
	//test de l'ajout d'un nombre alors que le span est full
	std::cout << "Test de l'ajout d'un nombre quand le span est plein :" << std::endl;
	try {
	basic_span.addNumber(42000);
	}
	catch (std::exception const &e) {
		std::cerr << std::endl << "Exception: " << e.what() << std::endl << std::endl;
	}


	//Ajout d'un nombre dans un span vide
	std::cout << "Test de l'ajout d'un nombre dans un span vide :" << std::endl;
	Span	test_empty;
	try {
		test_empty.addNumber(42000);
	}
	catch (std::exception const &e) {
		std::cerr << "Exception: " << e.what() << std::endl << std::endl;
	}



	return 0;
}
