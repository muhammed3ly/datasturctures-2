#include "BST.h"
#include <iostream>
using namespace std;
template<class T>
void BST<T>::insert(T val)
{
	TreeNode<T>* newNode = new TreeNode<T>(val);
	sz++;
	if (root == nullptr)
	{
		root = newNode;
	}
	else
	{
		TreeNode<T>* current = root;
		while (true)
		{
			if (val > current->value)
			{
				if (current->right != nullptr)
				{
					current = current->right;
				}
				else
				{
					current->right = newNode;
					return;
				}
			}
			else if (val < current->value)
			{
				if (current->left != nullptr)
				{
					current = current->left;
				}
				else
				{
					current->left = newNode;
					return;
				}
			}
			else
			{
				return;
			}
		}
	}
}

template<class T>
bool BST<T>::find(T val)
{
	if (root == nullptr)
		return false;
	TreeNode<T>* current = root;
	while (true)
	{
		if (val > current->value)
		{
			if (current->right != nullptr)
			{
				//cout << "right" << endl;
				current = current->right;
			}
			else
			{
				return false;
			}
		}
		else if (val < current->value)
		{
			if (current->left != nullptr)
			{
				//cout << "left" << endl;
				current = current->left;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return true;
		}
	}
}

template<class T>
BST<T>::BST() : root(nullptr), sz(0)
{
}
