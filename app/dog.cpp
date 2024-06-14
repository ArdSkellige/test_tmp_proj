#include "../app/dog.hpp"

Dog::Dog()
{

}

Dog::Dog(int _age, const char* _name) : anim(_age, _name)
{

}

Dog::Dog(const Dog& other) : anim(other.anim)
{

}

Dog::~Dog()
{

}

Dog& Dog::operator=(const Dog& other)
{
	anim = other.anim;
	return *this;
}

int Dog::GetAge() const
{
	return anim.GetAge();
}

const char* Dog::GetName() const
{
	return anim.GetName();
}