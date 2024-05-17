#pragma once

class Animal
{
private:
   char* name;
public:
   Animal(const char* _name = "Undef");
   ~Animal();
   Animal(const Animal& other);
   Animal& operator=(const Animal& other);

   void SetAnimalName(const char* _name);
   const char* GetAnimalName() const;
};

