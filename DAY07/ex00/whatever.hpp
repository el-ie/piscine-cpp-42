#ifndef WHATEVER_CLASS_HPP
# define WHATEVER_CLASS_HPP

#include <iostream>
#include <string>

template <typename T>
void	swap(T& a, T& b) {

	std::cout << "Swap function called on " << a << " and " << b << std::endl;

	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(T a, T b) {

	std::cout << "Min function called on " << a << " and " << b << std::endl;

	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T	max(T a, T b) {

	std::cout << "Max function called on " << a << " and " << b << std::endl;

	if (a > b)
		return (a);
	else
		return (b);
}

#endif /* WHATEVER_CLASS_HPP */
