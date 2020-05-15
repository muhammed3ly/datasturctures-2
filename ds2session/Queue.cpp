#include "Queue.h"
#include <assert.h>
template<class T>
bool Queue<T>::empty()
{
	return sz == 0;
}

template<class T>
void Queue<T>::push(T val)
{
	Node<T>* newNode = new Node<T>(val);
	if (head == nullptr)
	{
		head = tail = newNode;
	}
	else
	{
		tail->next = newNode;
		tail = newNode;
	}
	sz++;
}

template<class T>
void Queue<T>::pop()
{
	assert(empty() == false);
	Node<T>* tmp = head->next;
	delete head;
	head = tmp;
	sz--;
}

template<class T>
int Queue<T>::size()
{
	return sz;
}

template<class T>
T Queue<T>::front()
{
	assert(empty() == false);
	return head->value;
}

template<class T>
Queue<T>::Queue() : head(nullptr), tail(nullptr), sz(0)
{
}

template<class T>
Queue<T>::~Queue()
{
	while (!empty())
		pop();
}
