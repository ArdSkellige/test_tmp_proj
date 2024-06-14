#ifndef CAT_HPP
#define CAT_HPP
#include "../app/animal.hpp"

class Cat : public Animal
{
private:
	char* breed;
	double weight;
public:
	Cat(const char* _breed = "Hommy", double _weight = 3.5, int _age = 2, const char* _name = "Undef");
	~Cat();
	Cat(const Cat& other);

	const char* Voice();
	double GetWeight() const { return weight; }
	const char* GetBreed() const { return breed; }
	Cat& operator=(const Cat& other);
};

#endif /* CAT_HPP */