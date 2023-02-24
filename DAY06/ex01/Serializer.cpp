#include "Serializer.hpp"
#include "Data.hpp"
#include <stdint.h>

/////////////////// CONSTRUCTORS /////////////////////

Serializer::Serializer() { }

Serializer::Serializer(const Serializer &other) { *this = other; }

Serializer::~Serializer() { }

Serializer&	Serializer::operator=(const Serializer &other)
{ (void)other; return *this; }


//////////////// Utilities /////////////////////////


uintptr_t	Serializer::serialize(Data * ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *		Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}
