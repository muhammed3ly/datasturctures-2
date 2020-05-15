#include "Vector.h"
#include <assert.h>
template<class T>
int Vector<T>::size()
{
	return sz;
}

template<class T>
void Vector<T>::push_back(T val)
{
	if (sz == capacity)
	{
		capacity *= 2;
		T* newArr = new T[capacity];
		for (int i = 0; i < sz; i++)
			newArr[i] = arr[i];
		delete[] arr;
		arr = newArr;
	}
	arr[sz] = val;
	sz++;
}

template<class T>
bool Vector<T>::empty()
{
	return sz == 0;
}

template<class T>
void Vector<T>::pop_back()
{
	assert(empty() == false);
	sz--;
}

template<class T>
Vector<T>::Vector()
{
	sz = 0;
	capacity = 1;
	arr = new T[capacity];
}

template<class T>
Vector<T>::Vector(int s)
{
	sz = s;
	capacity = 1;
	while (capacity < sz)
	{
		capacity *= 2;
	}
	arr = new T[capacity];
}
