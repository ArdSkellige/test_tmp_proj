#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

#include "../app/funcs.hpp"
#include "../app/animal.hpp"
#include "../app/dog.hpp"
#include "../app/cat.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

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

	int ar[] = {3, 7, 1, 10, 0, 4, 5, 3, 5, 2, 9, 8};
	SortArray(ar, sizeof(ar)/sizeof(ar[0]));
	for (size_t i = 0; i < sizeof(ar)/sizeof(ar[0]); i++)
	{
		cout << ar[i] << " ";
	}
	cout << endl;

	cout << "Vector: " << endl;
	vector<int> vec;
	for (int i = 0; i < 9; i++)
	{
		vec.push_back(i + 10);
	}
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	int ind = 2;
	vector<int> tmp;
	for (int i = 0; i < vec.size(); i++)
	{
		if (ind != i)
		{
			tmp.push_back(vec[i]);
		}
	}
	vec.swap(tmp);
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	vector<int>::iterator itb = vec.begin(), ite = vec.end();
	vec.erase(itb + 1);
	for (int i = 0; i < vec.size(); i++)
	{
		cout << *(itb + i) << " ";
	}
	cout << endl;

	vector<int>::reverse_iterator ritb = vec.rbegin(), rite = vec.rend();
	vec.erase(--(ritb.base() - 3));
	ritb = vec.rbegin();
	for (int i = 0; i < vec.size(); i++)
	{
		cout << *(ritb + i) << " ";
	}
	cout << endl;

	Animal an;
	cout << an.GetAge() << " ";
	cout << an.GetName() << endl;

	Animal an2(4, "Gauss");
	cout << an2.GetAge() << " ";
	cout << an2.GetName() << endl;

	Dog d1;
	cout << "Age: " << d1.GetAge() << " ";
	cout << "Name: " << d1.GetName() << endl;

	Dog d2(1, "Spike");
	cout << "Age: " << d2.GetAge() << " ";
	cout << "Name: " << d2.GetName() << endl;

	Cat c1;
	cout << "Age: " << c1.GetAge() << " ";
	cout << "Name: " << c1.GetName() << endl;

	Cat c2("Oriental", 4.2, 7, "Bold");
	cout << "Age: " << c2.GetAge() << " ";
	cout << "Name: " << c2.GetName() << " " << "Breed: " << c2.GetBreed() << " " << "Weight: " << c2.GetWeight() << endl;

	return 0;
}