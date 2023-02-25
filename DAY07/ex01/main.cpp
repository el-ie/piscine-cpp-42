#include <string>
#include <iostream>

template <typename T>
void	display(const T& element) {
	std::cout << element << " ";
}

template <typename T>
void	display_double(const T& element) {
	std::cout << (element * 2) << " ";
}

template <typename T>
void	iter(T* array, size_t size, void (*fct)(const T&)) {
	
	std::cout << "iter function called" << std::endl;
	std::cout << "[";
	for (size_t i = 0; i < size; i++)
		(*fct)(array[i]);
	std::cout << "]" << std::endl << std::endl;
}

#include <stdlib.h>

int	main(void)
{

	//tests avec des int
	std::cout << std::endl << "------------Tests avec des INT----------------" << std::endl << std::endl;

	//creation tableau
	int	int_tab[4] = {42, 84, 168, 336};

	//affichage valeurs
	std::cout << "fonction iter avec display :" << std::endl;
	iter<int>(int_tab, 4, &display);

	// affichage du double des valeurs
	std::cout << "fonction iter avec display double :" << std::endl;
	iter<int>(int_tab, 4, &display_double);



	//tests avec des doubles
	std::cout << "------------Tests avec des DOUBLES----------------" << std::endl << std::endl;
	
	//creation tableau
	double	double_tab[4] = {42.42, 84.84, 168.168, 336.336};

	//affichage valeurs
	std::cout << "fonction iter avec display :" << std::endl;
	iter<double>(double_tab, 4, &display);

	//affichage double des valeurs
	std::cout << "fonction iter avec display double :" << std::endl;
	iter<double>(double_tab, 4, &display_double);
}
