
#include "easyfind.hpp"

#include <string>
#include <iostream>

// CHCKER
#include <iterator>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>


//for (std::vector<int>::iterator it = liste.begin(); it != liste.end(); ++it)
//	std::cout << *it << " ";

int	main(void)
{

	std::cout << std::endl << "---------------------------------------------------" << std::endl;
	std::cout << std::endl << "Utilisation de la fonction easyfind avec differents containers :" << std::endl;

		////	CONTENEUR VECTOR	////

	std::cout << std::endl << "---------------------------------------------------" << std::endl;
	std::cout << std::endl << "Avec le conteneur VECTOR : " << std::endl;

	//creation du vector
	std::vector<int>	liste;

	//assignation des valeurs
	for (int i = 42; i < 42000; i *= 2)
		liste.push_back(i);

	//affichage des valeurs
	display_values(liste);
		
	//creation de l'iterateur pour stocker le resultat
	std::vector<int>::iterator result;

	// test pour trouver un nombre present dans la liste
	std::cout << std::endl << "Test avec un nombre present dans la liste :" << std::endl;
	result = easyfind(liste, 672);
	std::cout << "returned iterator = " << *result << std::endl;

	std::cout << std::endl << "Test avec un nombre absent de la liste :" << std::endl;
	result = easyfind(liste, 12);

	if (result == liste.end())
		std::cout << "Le retour de easyfind correspond bien a END." << std::endl;

	std::cout << std::endl;

		////	CONTENEUR LIST	////

	std::cout << std::endl << "---------------------------------------------------" << std::endl;
	std::cout << std::endl << "Avec le conteneur LIST : " << std::endl;

	//creation du list
	std::list<int>	liste2;

	//assignation des valeurs
	for (int i = 42; i < 42000; i *= 2)
		liste2.push_back(i);

	//affichage des valeurs
	display_values(liste2);
		
	//creation de l'iterateur pour stocker le resultat
	std::list<int>::iterator result2;

	// test pour trouver un nombre present dans la liste2
	std::cout << std::endl << "Test avec un nombre present dans la liste2 :" << std::endl;
	result2 = easyfind(liste2, 1344);
	std::cout << "returned iterator = " << *result2 << std::endl;

	std::cout << std::endl << "Test avec un nombre absent de la liste2 :" << std::endl;
	result2 = easyfind(liste2, 13);

	if (result2 == liste2.end())
		std::cout << "Le retour de easyfind correspond bien a END." << std::endl;

	std::cout << std::endl;


		////	CONTENEUR DEQUE	////

	std::cout << std::endl << "---------------------------------------------------" << std::endl;
	std::cout << std::endl << "Avec le conteneur DEQUE : " << std::endl;

	//creation du deque
	std::deque<int>	liste3;

	//assignation des valeurs
	for (int i = 42; i < 42000; i *= 2)
		liste3.push_back(i);

	//affichage des valeurs
	display_values(liste3);
		
	//creation de l'iterateur pour stocker le resultat
	std::deque<int>::iterator result3;

	// test pour trouver un nombre present dans la liste3
	std::cout << std::endl << "Test avec un nombre present dans la liste3 :" << std::endl;
	result3 = easyfind(liste3, 2688);
	std::cout << "returned iterator = " << *result3 << std::endl;

	std::cout << std::endl << "Test avec un nombre absent de la liste3 :" << std::endl;
	result3 = easyfind(liste3, 14);

	if (result3 == liste3.end())
		std::cout << "Le retour de easyfind correspond bien a END." << std::endl;

	std::cout << std::endl;
	return 0;
}
