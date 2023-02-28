#ifndef EASYFIND_CLASS_HPP
# define EASYFIND_CLASS_HPP

#include <iostream>
#include <string>

#include <vector>
#include <iterator>
#include <algorithm>

template <typename T>
typename T::iterator	easyfind(T& contain, const int nb) {
	
	std::cout << std::endl;
	typename T::iterator	result;


	result = std::find(contain.begin(), contain.end(), nb);

	if (result == contain.end()) {
		std::cout << nb << " not found in container" << std::endl;	
		return (result);
	}
	std::cout << nb << " found in container." << std::endl;
	return (result);
}

template <typename T>
void	display_values(T& contain) {
	
	std::cout << std::endl;

	typename T::iterator it = contain.begin();

	while (it != contain.end()) {
		std::cout << *it << " ";
		++it;
	}

	std::cout << std::endl;
}

#endif /* EASYFIND_CLASS_HPP */
