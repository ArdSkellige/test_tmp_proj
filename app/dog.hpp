#ifndef DOG_HPP
#define DOG_HPP
#include "animal.hpp"

class Dog
{
	Animal anim;
public:
	Dog();
	Dog(int _age, const char* _name);
	Dog(const Dog& other);
	~Dog();

	Dog& operator=(const Dog& other);

	int GetAge() const;
	const char* GetName() const;
};

#endif /* DOG_HPP */