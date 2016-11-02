#include<iostream>
#include<string>
#include"Vector.h"
#include<ctime>
using namespace std;


// EX05_01
template <typename T>
int linearSearch(const T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}

//EX05_02
template <typename T>
bool isSorted(const T list[], int size)
{
	int numNotSort = 0;
	for (int i = 0; i < size; i++)
	{
		T currentMin = list[i];
		for (int j = i + 1; j < size; j++)
		{
			if (currentMin > list[j])
				numNotSort++;
		}
	}
	if (numNotSort == 0)
		return true;
	else
		return false;
}

// EX05_04
template<typename T>
void shuffle(vector<T>& v)
{
	T* temp = new T[v.size];
	int num;
	for (int i = 0; i < v.size(); i++)
	{
		srand(time(0));
		num = rand() % v.size();
		temp[i] = v.at(num);
	}

	v.swap(temp);

	delete [] temp;
}
	
int main()
{
	///////////////////////////////////////////////////////////////

	/////////////////////////////////////
	// EX05_01
	////////////////////////////////////

	int size = 5;
	int arrayI[] = {1, 5, 9, 3, 2};
	double arrayD[] = {3.3, 6.4, 2.2, 2.9, 4.8903};
	string arrayS[] = {"How", "does", "this", "work", "?"};

	int n1;
	cout << "Enter int to search: ";
	cin >> n1;
	cout << "Search results: " << linearSearch(arrayI, n1, size) << endl;

	double n2;
	cout << "Enter double to search: ";
	cin >> n2;
	cout << "Search results: " << linearSearch(arrayD, n2, size) << endl;

	string n3;
	cout << "Enter string to search: ";
	cin >> n3;
	cout << "Search results: " << linearSearch(arrayS, n3, size) << endl;

	////////////////////////////////////////////////////////////////////////////////////////

	// EX05_02

	cout << "arrayI sorted: " << isSorted(arrayI, size) << endl;
	cout << "arrayD sorted: " << isSorted(arrayD, size) << endl;
	cout << "arrayS sorted: " << isSorted(arrayS, size) << endl;

	//////////////////////////////////////////////////////////////////////////////////////

	// EX05_04

	vector<int> v;

	int n;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter int " << i << " of 10: ";
		cin >> n;
		v.push_back(n);
	}

	shuffle(v);

	cout << "Shuffled result: ";
	for(int i = 0; i < v.size(); i++)
		cout << v.at(i);
	cout << endl;
}
	