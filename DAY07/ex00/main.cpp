#include <string>
#include <iostream>

template <typename T>
void	swap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int	main(void)
{
	int a = 5;
	int b = 7;

	std::cout << "---- Swap function utilisation :" << std::endl;

	std::cout << "a = " << a << " b = " << b << std::endl;

	swap<int>(a, b);

	std::cout << "a = " << a << " b = " << b << std::endl;
}
