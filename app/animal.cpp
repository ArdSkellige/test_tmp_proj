#include "animal.hpp"

#include <stdio.h>
#include <cstring>

Animal::Animal(int _age, const char* _name) : age(_age)
{
	name = new char [strlen(_name) + 1];
	strcpy(name, _name);
}

Animal::Animal(const Animal& other)
{
	age = other.age;

	name = new char[strlen(other.name) + 1];
	strcpy(name, other.name);
}

Animal::~Animal()
{
	delete[] name;
}

const char* Animal::Voice()
{
	return "Voice";
}

Animal& Animal::operator=(const Animal& other)
{
	age = other.age;
	delete[] name;
	name = new char[strlen(other.name) + 1];
	strcpy(name, other.name);
	return *this;
}


void Animal::SetAnimalName(const char* _name)
{
	if (_name)
	{
		delete[] name;
		name = new char[strlen(_name) + 1];
		strcpy(name, _name);
	}
}

bool Animal::operator==(const Animal& other) const
{
	if (this != &other)
	{
		return (!strcmp(this->name, other.name) && (this->age == other.age));
	}
}