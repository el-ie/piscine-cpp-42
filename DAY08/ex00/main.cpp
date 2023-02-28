
#include "easyfind.hpp"

#include <string>
#include <iostream>

// CHCKER
#include <vector>
#include <iterator>
#include <algorithm>

int	main(void)
{
	
	std::cout << std::endl << "Utilisation de la fonction easyfind avec differents containers:" << std::endl;

	std::cout << "Avec le conteneur VECTOR : " << std::endl << std::endl;

	//creation du vector
	std::vector<int>	liste;

	//assignation des valeurs
	for (int i = 42; i < 1000; i *= 2)
		liste.push_back(i);

	//creation de l'iterator pour afficher la list
	std::vector<int>::iterator it;

//	for (it = liste.begin(); it != liste.end(); ++it)
//		std::cout << *it << " ";

	display_values(liste);

	//easyfind(liste, 5);
	
	std::cout << std::endl;

	/*
	if (it != liste.end())
			std::cout << "element trouve" << std::endl;
	else
		std::cout << "Element absent" << std::endl;
		*/
}
