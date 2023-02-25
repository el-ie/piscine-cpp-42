#include "Iter.hpp"

#include <string>
#include <iostream>

void	display_string_up(std::string str) {
	for (int i = 0; i < (int)str.size(); i++)
		std::cout << (char)std::toupper(str[i]);
	std::cout << " ";
}

template <typename T>
void	call_display_up(const T& element) {
		display_string_up(element);
}

template <typename T>
void	display(const T& element) {
	std::cout << element << " ";
}

template <typename T>
void	display_double(const T& element) {
	std::cout << (element * 2) << " ";
}

int	main(void)
{

			////////	tests avec des INT	////////
	
	std::cout << std::endl << "------------Tests avec des INT----------------" << std::endl << std::endl;

	//creation tableau
	int	int_tab[4] = {42, 84, 168, 336};

	//affichage valeurs
	std::cout << "fonction iter avec display :" << std::endl;
	iter<int>(int_tab, 4, &display);

	// affichage du double des valeurs
	std::cout << "fonction iter avec display double :" << std::endl;
	iter<int>(int_tab, 4, &display_double);



			////////	tests avec des DOUBLES	////////
	std::cout << "------------Tests avec des DOUBLES----------------" << std::endl << std::endl;
	
	//creation tableau
	double	double_tab[4] = {42.42, 84.84, 168.168, 336.336};

	//affichage valeurs
	std::cout << "fonction iter avec display :" << std::endl;
	iter<double>(double_tab, 4, &display);

	//affichage double des valeurs
	std::cout << "fonction iter avec display double :" << std::endl;
	iter<double>(double_tab, 4, &display_double);

	

			////////	tests avec des STD::STRING	////////
	std::cout << "------------Tests avec des STRING ----------------" << std::endl << std::endl;

	//creation du tableau
	std::string liste[5] = {"monsieur", "banane", "mange", "des", "pommes"};

	//affichage des valeurs
	std::cout << "fonction iter avec display :" << std::endl;
	iter<std::string>(liste, 5, &display);

	//affichage double des valeurs
	std::cout << "fonction iter avec to upper :" << std::endl;
	iter<std::string>(liste, 5, &call_display_up);
	
	return 0;
}
