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
	void insert(TreeNode<T>* startNode, TreeNode<T>* newNode);
	bool find(T val);
	void remove(T val);
	BST();
};
