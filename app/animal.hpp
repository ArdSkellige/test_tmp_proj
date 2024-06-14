#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
private:
	int age;
	char* name;
public:
	Animal(int _age = 2, const char* _name = "Undef");
	Animal(const Animal& other);
	~Animal();

	const char* Voice();
	void SetAnimalName(const char* _name);
	int GetAge() const { return age; }
	const char* GetName() const { return name; }

	Animal& operator=(const Animal& other);
	bool operator==(const Animal& other) const;
};

#endif /* ANIMAL_HPP */