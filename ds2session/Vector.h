#pragma once
template <class T>
class Vector
{
private:
	int sz;
	int capacity;
	T* arr;
public:
	int size();
	void push_back(T val);
	bool empty();
	void pop_back();
	T back();
	T& operator [](int index);
	Vector();
	Vector(int s);
	Vector(int s, T val);
	~Vector();
};


