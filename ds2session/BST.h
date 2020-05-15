#pragma once
#include "TreeNode.h"
#include "TreeNode.cpp"
template <class T>
class BST
{
private:
	TreeNode<T>* root;
	int sz;
public:
	void insert(T val);
	bool find(T val);
	BST();
};
