#pragma once
#include "Node.h"
#include "Node.cpp"
template <class T>
class Queue
{
private:
	Node<T>* head;
	Node<T>* tail;
	int sz;
public:
	bool empty();
	void push(T val);
	void pop();
	int size();
	T front();
	Queue();
	~Queue();
};

