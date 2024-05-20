#include <iostream>
#include <algorithm>
#include <string>

#include "../app/funcs.hpp"
#include "../app/animal.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
  cout << "This is the first project is buildt by CMake." << endl;

  const int arrNum = 7;
  int arr[arrNum];
  for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
  {
    arr[i] = i + 1;
  }
  for (size_t i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  Animal animal1;
  animal1.SetAnimalName("Rex");
  string str1 = animal1.GetAnimalName();
  cout << "Animal name is " << str1 << endl;

  Animal animal2("Kot");
  string str2 = animal2.GetAnimalName();
  cout << "Animal name is " << str2 << endl;

  int ar[] = {3, 7, 1, 10, 0, 4, 5, 3, 5, 2, 9, 8};
  SortArray(ar, sizeof(ar)/sizeof(ar[0]));
  for (size_t i = 0; i < sizeof(ar)/sizeof(ar[0]); i++)
  {
    cout << ar[i] << " ";
  }
  cout << endl;
  

  return 0;
}