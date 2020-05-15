#include <iostream>
#include "Queue.h"
#include "Queue.cpp"
using namespace std;
int main()
{
	Queue<int> q;
	q.push(5);
	q.push(7);
	q.push(2);
	cout << q.front() << endl;
	q.pop();
	cout << q.front();
	return 0;
}
