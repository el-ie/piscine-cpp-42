#include "Data.hpp"
#include "Serializer.hpp"

int	main(void)
{
	Data	obj;
	Data *	Dptr = &obj;

	std::cout << std::endl << "Data ptr before serialization :" << std::endl << std::endl;
	Dptr->a = 42;
	Dptr->b = 42.42;
	Dptr->c = 'A';
	Dptr->str = "Hello";

	std::cout << "a = " << Dptr->a << std::endl;
	std::cout << "b = " << Dptr->b << std::endl;
	std::cout << "c = " << Dptr->c << std::endl;
	std::cout << "str = " << Dptr->str << std::endl;

	uintptr_t tmp = Serializer::serialize(Dptr);

	Data * newPtr = Serializer::deserialize(tmp);

	std::cout << std::endl << "----------------------------------" << std::endl;
	std::cout << std::endl << "Data new ptr recovered from deserialization :" << std::endl << std::endl;

	std::cout << "a = " << newPtr->a << std::endl;
	std::cout << "b = " << newPtr->b << std::endl;
	std::cout << "c = " << newPtr->c << std::endl;
	std::cout << "str = " << newPtr->str << std::endl;

	std::cout << std::endl;
	
	return 0;
}
