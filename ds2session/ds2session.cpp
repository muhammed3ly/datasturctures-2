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
	if (tree.find(8) == true)
		cout << "eshta 3alena";
	else
		cout << "yalahwy";
	return 0;
}
