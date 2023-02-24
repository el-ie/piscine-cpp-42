#include "Data.hpp"
#include "Serializer.hpp"

int	main(void)
{
	Data	obj;
	Data *	Dptr = &obj;

	Dptr->a = 42;
	Dptr->b = 42.42;
	Dptr->str = "Hello";

	std::cout << Dptr->a << std::endl;
	std::cout << Dptr->b << std::endl;
	std::cout << Dptr->str << std::endl;

	uintptr_t tmp = Serializer::serialize(Dptr);

	Data * newPtr = Serializer::deserialize(tmp);

	std::cout << newPtr->a << std::endl;
	std::cout << newPtr->b << std::endl;
	std::cout << newPtr->str << std::endl;

	
	return 0;
}
