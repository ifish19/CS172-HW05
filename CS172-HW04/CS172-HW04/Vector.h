#ifndef VECTOR_H
#define VECTOR_H

// EX05_03

template <typename T>
class vector
{
private:
	int maxSize;
	int sizeV;
	T* arrayV;
	void doubleCapacity();

public:
	vector();
	vector(int size);
	vector(int size, T defaultValue);
	~vector();
	void push_back(T element);
	void pop_back();
	unsigned size() const;
	T at(int index) const;
	bool empty() const;
	void clear();
	void swap(vector v2);
};

template<typename T>
vector<T>::vector()
{
	maxSize = 20;
	arrayV = new T[maxSize];
	sizeV = 0;
}

template<typename T>
vector<T>::vector(int size)
{
	maxSize = size;
	arrayV = new T[maxSize];
	sizeV = 0;
}

template<typename T>
vector<T>::vector(int size, T defaultValue)
{
	maxSize = size;
	arrayV = new T[maxSize];
	for (int i = 0; i < maxSize; i++)
	{
		arrayV[i] = defaultValue;
	}
	sizeV = maxSize;
}

template<typename T>
vector<T>::~vector()
{
	delete [] arrayV;
}

template<typename T>
void vector<T>::push_back(T element)
{
	if(sizeV+1 > maxSize)
		doubleCapacity();
	arrayV[sizeV] = element;
	sizeV++;
}

template<typename T>
void vector<T>::pop_back()
{
	arrayV[sizeV] = NULL;
	sizeV--;
}

template<typename T>
unsigned vector<T>::size() const
{
	return sizeV;
}

template<typename T>
T vector<T>::at(int index) const
{
	if(index < sizeV)
		return arrayV[index];
}

template<typename T>
bool vector<T>::empty() const
{
	if (sizeV == 0)
		return true;
	else 
		return false;
}

template<typename T>
void vector<T>::clear()
{
	for (int i = 0; i < sizeV; i++)
		array[i] = NULL;
	sizeV = 0;
}

template<typename T>
void vector<T>::swap(vector v2)
{
	if (v2.size() > maxSize)
		doubleCapacity();

	T* temp = new T[maxSize];
	for(int i = 0; i < sizeV; i++)
		temp[i] = arrayV[i];
	clear();
	for (int j = 0; j < maxSize; j++)
		arrayV[j] = v2.at[j];
	v2.clear();
	for (int k = 0; k < maxSize; k++)
	{
		v2.push_back(temp[k]);
	}
	
	delete [] temp;
}

template<typename T>
void vector<T>::doubleCapacity()
{
	maxSize = 2 * sizeV;
	T* newList = new T[maxSize];
	for (int i = 0; i < sizeV; i++)
		newList[i] = arrayV[i];

	delete [] arrayV;

	arrayV = newList;
}

#endif