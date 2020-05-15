#include <iostream>
#include "BST.h"
#include "BST.cpp"
using namespace std;
int main()
{
	BST<int> tree;
	tree.insert(7);
	tree.insert(5);
	tree.insert(9);
	tree.insert(8);
	tree.insert(100);
	tree.remove(9);
	cout << "5alas";
	if (tree.find(9) == true)
		cout << "ok";
	else
		cout << "no";
	return 0;
}
