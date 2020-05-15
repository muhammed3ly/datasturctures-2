#include "BST.h"
#include <iostream>
#include <assert.h>
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
void BST<T>::insert(TreeNode<T>* startNode, TreeNode<T>* newNode)
{
	TreeNode<T>* current = startNode;
	while (true)
	{
		if (newNode->value > current->value)
		{
			if (current->right == nullptr)
			{
				current->right = newNode;
				return;
			}
			else
			{
				current = current->right;
			}
		}
		else
		{
			if (current->left)
			{
				current->left = newNode;
				return;
			}
			else
			{
				current = current->left;
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
void BST<T>::remove(T val)
{
	assert(find(val) == true);
	if (val == root->value)
	{
		TreeNode<T>* left = root->left;
		TreeNode<T>* right = root->right;

		delete root;
		if (right != nullptr)
		{
			root = right;
			if (left != nullptr)
				insert(root, left);
		}
		else if (left != nullptr)
		{
			root = left;
		}
		else
			root = nullptr;
		return;
	}

	TreeNode<T>* current = root;
	while (true)
	{
		if (val > current->value)
		{
			if (current->right->value == val)
			{
				TreeNode<T>* left = current->right->left;
				TreeNode<T>* right = current->right->right;
				
				delete current->right;
				if (right != nullptr)
				{
					current->right = right;
					if (left != nullptr)
						insert(current->right, left);
				}
				else if (left != nullptr)
				{
					current->right = left;
				}
				else
					current->right = nullptr;
				return;
			}
			current = current->right;
		}
		else
		{
			if (current->left->value == val)
			{
				TreeNode<T>* left = current->left->left;
				TreeNode<T>* right = current->left->right;

				delete current->left;

				if (right != nullptr)
				{
					current->left = right;
					if (left != nullptr)
						insert(current->left, left);
				}
				else if (left != nullptr)
				{
					current->left = left;
				}
				else
					current->left = nullptr;

				return;
			}
			current = current->left;
		}
	}
}

template<class T>
BST<T>::BST() : root(nullptr), sz(0)
{
}
