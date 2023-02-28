#ifndef EASYFIND_CLASS_HPP
# define EASYFIND_CLASS_HPP

#include <iostream>
#include <string>

#include <vector>
#include <iterator>
#include <algorithm>

template <typename T>
typename T::iterator	easyfind(const T& contain, const int nb) {
	
	typename T::iterator	result;
	//typename T::iterator	result = contain.begin();


	result = std::find(contain.begin(), contain.end(), nb);

	if (result == contain.end()) {
		std::cout << nb << " not found in container" << std::endl;	
		return (NULL);
	}
	
	return (result);
}

template <typename T>
void	display_values(const T& contain) {
	
	std::cout << std::endl;

	//typename T::iterator it = contain.begin();

	//typename T::iterator it = typename T::iterator(contain.begin());

	typename T::iterator it;

	for (it = contain.begin(); it != contain.end(); ++it)
		std::cout << *it << " ";

/*
	while (it != contain.end()) {
		std::cout << *it << " ";
		++it;
	}
*/
	(void)contain;

	std::cout << std::endl;
}

#endif /* EASYFIND_CLASS_HPP */
