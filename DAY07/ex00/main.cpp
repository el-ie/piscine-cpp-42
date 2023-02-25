#include <string>
#include <iostream>

#include "whatever.hpp"

int	main(void)
{
			////	SWAP FUNCTION	////

	// WITH INT
	int a = 5;
	int b = 7;

	std::cout << std::endl << "---------------- Swap function ----------------" << std::endl << std::endl;
	std::cout << std::endl << "-------- with <INT> :" << std::endl << std::endl;

	std::cout << "--> a = " << a << " b = " << b << std::endl;

	std::cout << "swap function called" << std::endl;
	::swap<int>(a, b);

	std::cout << "--> a = " << a << " b = " << b << std::endl << std::endl;

	// WITH DOUBLE
	std::cout << std::endl << "-------- with <DOUBLE> :" << std::endl << std::endl;

	double c = 10.3;
	double d = 80.6;
	
	std::cout << "--> c = " << c << " d = " << d << std::endl;
	
	std::cout << "swap function called" << std::endl;
	::swap<double>(c, d);

	std::cout << "--> c = " << c << " d = " << d << std::endl << std::endl;

			////	MIN FUNCTION	////

	std::cout << std::endl << "---------------- MIN function ----------------" << std::endl << std::endl;

	//with INT
	std::cout << std::endl << "-------- with <INT> :" << std::endl << std::endl;

	a = 42;
	b = 84;

	std::cout << "--> a = " << a << " b = " << b << std::endl;

	std::cout << "Min function called" << std::endl;
	int	minimum_int = ::min<int>(a, b);

	std::cout << "Result = " << minimum_int << std::endl;

	//with DOUBLE
	std::cout << std::endl << "-------- with <DOUBLE> :" << std::endl << std::endl;

	std::cout << "--> c = " << c << " d = " << d << std::endl;

	std::cout << "Min function called" << std::endl;
	double	minimum_double = ::min<double>(c, d);

	std::cout << "Result = " << minimum_double << std::endl;


		////	MAX FUNCTION	////

	std::cout << std::endl << "---------------- MAX function ----------------" << std::endl << std::endl;

	//with INT
	std::cout << std::endl << "-------- with <INT> :" << std::endl << std::endl;

	a = 42;
	b = 84;

	std::cout << "--> a = " << a << " b = " << b << std::endl;

	std::cout << "Max function called" << std::endl;
	int	maximum_int = ::max<int>(a, b);

	std::cout << "Result = " << maximum_int << std::endl;

	//with DOUBLE
	std::cout << std::endl << "-------- with <DOUBLE> :" << std::endl << std::endl;

	std::cout << "--> c = " << c << " d = " << d << std::endl;

	std::cout << "Max function called" << std::endl;
	double	maximum_double = ::max<double>(c, d);

	std::cout << "Result = " << maximum_double << std::endl;

	std::cout << std::endl;

	std::cout << "----------- main from subject -------------" << std::endl << std::endl;

	int q = 2;
	int r = 3;
	::swap( q, r );
	std::cout << "q = " << q << ", r = " << r << std::endl;
	std::cout << "min( q, r ) = " << ::min( q, r ) << std::endl;
	std::cout << "max( q, r ) = " << ::max( q, r ) << std::endl;
	std::string s = "chaine1";
	std::string t = "chaine2";
	::swap(s, t);
	std::cout << "s = " << s << ", t = " << t << std::endl;
	std::cout << "min( s, t ) = " << ::min( s, t ) << std::endl;
	std::cout << "max( s, t ) = " << ::max( s, t ) << std::endl;
	std::cout << std::endl;

	return 0;
}
