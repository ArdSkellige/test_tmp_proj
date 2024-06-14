#include "cat.hpp"
#include <string.h>

Cat::Cat(const char* _breed, double _weight, int _age, const char* _name) : Animal(_age, _name), weight(_weight)
{
	breed = new char[strlen(_breed) + 1];
	strcpy(breed, _breed);
}

Cat::~Cat()
{
	delete[] breed;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	weight = other.weight;

	breed = new char[strlen(other.breed) + 1];
	strcpy(breed, other.breed);
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);

		weight = other.weight;
		delete[] breed;
		breed = new char[strlen(other.breed) + 1];
		strcpy(breed, other.breed);
	}
	return *this;
}