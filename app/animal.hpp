#pragma once

class Animal
{
private:
   char* name;
   int age;
public:
   Animal(const char* _name = "Undef", int _age = 0);
   ~Animal();
   Animal(const Animal& other);
   Animal& operator=(const Animal& other);

   void SetAnimalName(const char* _name);
   const char* GetAnimalName() const;
   bool operator==(const Animal& other) const;   
};
