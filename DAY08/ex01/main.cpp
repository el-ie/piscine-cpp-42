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
	Span	empty_span;
	try {
		empty_span.addNumber(42000);
	}
	catch (std::exception const &e) {
		std::cerr << "Exception: " << e.what() << std::endl << std::endl;
	}

	
		////	Fonctions demandees	////

	std::cout << "---------- Fonctions demandees :" << std::endl << std::endl;

	basic_span.display_span();
	
	//longest span
	std::cout << "Test de la fonction longestSpan :" << std::endl << "resultat = ";

	try {
		std::cout << basic_span.longestSpan() << std::endl;
	}
	catch (std::exception const &e) {
		std::cerr << "Exception: " << e.what() << std::endl << std::endl;
	}

	std::cout << "C'est le plus grand ecart existant dans le span, soit l'ecart entre le nombre le plus petit et le nombre le plus grand du span." << std::endl << std::endl;

	//shortest span
	std::cout << "Test de la fonction shortestSpan :" << std::endl << "resultat = ";

	try {
		std::cout << basic_span.shortestSpan() << std::endl;
	}
	catch (std::exception const &e) {
		std::cerr << "Exception: " << e.what() << std::endl << std::endl;
	}

	std::cout << "Soit l'ecart le plus petit entre 2 nombres existant dans le span." << std::endl << std::endl;

	//Exception des ces fonctions :
	std::cout << "Exceptions des fonctions longestSpan et shortestSpan :" << std::endl << std::endl;

	//LongestSpan :
	std::cout << "LongestSpan :" << std::endl;
	try {
		empty_span.longestSpan();
	}
	catch (std::exception const &e) {
		std::cerr << "Exception: " << e.what() << std::endl << std::endl;
	}

	//shortestSpan :
	std::cout << "shortestSpan :" << std::endl;
	try {
		empty_span.shortestSpan();
	}
	catch (std::exception const &e) {
		std::cerr << "Exception: " << e.what() << std::endl << std::endl;
	}

		////	Tests grands spans	////

	std::cout << std::endl << "---------- Tests avec des span plus grands :" << std::endl << std::endl;

	//creation d'un span de 100 nombres
	std::cout << "On cree un span de 100 nombres :" << std::endl;

	Span	span_100(100);

	//remplissage avec des nombres aleatoires
	std::cout << "On rempli le span avec des nombres aleatoires:" << std::endl;
	span_100.fill_container();

	//utilisation des fonctions :
	std::cout << "On utilise nos fonctions longestSpan et shortestSpan sur le nouveau span :" << std::endl << std::endl;

	std::cout << "LongestSpan :" << std::endl;
	try {
		std::cout << "longestSpan result = " << span_100.longestSpan() << std::endl << std::endl;
	}
	catch (std::exception const &e) {
		std::cerr << "Exception: " << e.what() << std::endl << std::endl;
	}


	//shortestSpan :
	std::cout << "shortestSpan :" << std::endl;
	try {
		std::cout << "shortestSpan result = " << span_100.shortestSpan() << std::endl << std::endl;
	}
	catch (std::exception const &e) {
		std::cerr << "Exception: " << e.what() << std::endl << std::endl;
	}


	return 0;
}
