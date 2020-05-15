#include <iostream>
#include "Vector.h"
#include "Vector.cpp"
#include <vector>
using namespace std;
int main()
{
	Vector<int> v(5, 100);
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ' ';

	return 0;
}
