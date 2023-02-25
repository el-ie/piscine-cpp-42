#include <string>
#include <iostream>

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

int	main(void)
{

		////	SWAP FUNCTION	////

	// WITH INT
	int a = 5;
	int b = 7;

	std::cout << std::endl << "---------------- Swap function ----------------" << std::endl << std::endl;
	std::cout << std::endl << "-------- with <INT> :" << std::endl << std::endl;

	std::cout << "--> a = " << a << " b = " << b << std::endl;

	swap<int>(a, b);

	std::cout << "--> a = " << a << " b = " << b << std::endl << std::endl;

	// WITH DOUBLE
	std::cout << std::endl << "-------- with <DOUBLE> :" << std::endl << std::endl;

	double c = 10.3;
	double d = 80.6;
	
	std::cout << "--> c = " << c << " d = " << d << std::endl;
	
	swap<double>(c, d);

	std::cout << "--> c = " << c << " d = " << d << std::endl << std::endl;

	std::cout << "---------------------------------------------" << std::endl << std::endl;

		//// MIN FUNCTION ////

	std::cout << std::endl << "---------------- MIN function ----------------" << std::endl << std::endl;

	//with INT
	std::cout << std::endl << "-------- with <INT> :" << std::endl << std::endl;

	a = 42;
	b = 84;

	std::cout << "--> a = " << a << " b = " << b << std::endl;

	int	minimum_int = min<int>(a, b);
	std::cout << "Result = " << minimum_int << std::endl;

	//with DOUBLE
	std::cout << std::endl << "-------- with <DOUBLE> :" << std::endl << std::endl;

	std::cout << "--> c = " << c << " d = " << d << std::endl << std::endl;

	double	minimum_double = min<double>(c, d);

	std::cout << "Result = " << minimum_double << std::endl;


}
