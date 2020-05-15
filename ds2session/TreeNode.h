#pragma once
template <class T>
class TreeNode
{
public:
	TreeNode<T>* left;
	TreeNode<T>* right;
	T value;
	TreeNode(T val);
};


