#include<iostream>
#include<string>
using namespace std;

// EX05_01
template <typename T>
T linearSearch(const T list[], T key, int arraySize)
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
	int numNotSort;
	for (int i = 0; i < size; i++)
	{
		if (list[i] < list[i -1])
			numNotSort++;
	}
	if (numNotSort == 0)
		return true;
	else
		return false;
}
	
int main()
{
	///////////////////////////////////////////////////////////////

	/////////////////////////////////////
	// EX05_01
	////////////////////////////////////

	int size = 5;
	int array1[] = {1, 5, 9, 3, 2};
	double array2[] = {3.3, 6.4, 2.2, 2.9, 4.8903};
	string array3[] = {"How", "does", "this", "work", "?"};

	int n1;
	cout << "Enter int to search: ";
	cin >> n1;
	cout << "Search results: " << linearSearch(array1, n1, size) << endl;

	double n2;
	cout << "Enter double to search: ";
	cin >> n2;
	cout << "Search results: " << linearSearch(array2, n2, size) << endl;

	string n3;
	cout << "Enter string to search: ";
	cin >> n3;
	cout << "Search results: " << linearSearch(array3, n3, size) << endl;

	////////////////////////////////////////////////////////////////////////////////////////
}