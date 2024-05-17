#include "animal.hpp"
#include <cstring>

Animal::Animal(const char* _name)
{
   name = new char[strlen(_name) + 1];
   strcpy(name, _name);
}

Animal::~Animal()
{
   delete[] name;
}

Animal::Animal(const Animal& other)
{
   if(other.name)
   {
      delete[] name;
      name = new char[strlen(other.name) + 1];
      strcpy(name, other.name);
   }
}

Animal& Animal::operator=(const Animal& other)
{
   if(this != &other)
   {
      if(other.name)
      {
         delete[] name;
         name = new char[strlen(other.name) + 1];
         strcpy(name, other.name);
      }
   }
   return *this;
}

void Animal::SetAnimalName(const char* _name)
{
   if(_name)
   {
      delete[] name;
      name = new char[strlen(_name) + 1];
      strcpy(name, _name);
   }
}

const char* Animal::GetAnimalName() const
{
   return name;
}