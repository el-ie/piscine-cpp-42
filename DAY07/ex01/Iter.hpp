#ifndef ITER_CLASS_HPP
# define ITER_CLASS_HPP

#include <iostream>
#include <string>
#include <cstddef>

template <typename T>
void	iter(T* array, size_t size, void (*fct)(const T&)) {
	
	std::cout << "iter function called" << std::endl;
	std::cout << "[";
	for (size_t i = 0; i < size; i++)
		(*fct)(array[i]);
	std::cout << "]" << std::endl << std::endl;
}

#endif /* ITER_CLASS_HPP */
