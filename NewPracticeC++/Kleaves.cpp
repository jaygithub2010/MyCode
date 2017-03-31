//
#include "stdafx.h"
//#include<iostream>
//using namespace std;
// Driver program to run the case
//struct Node
//{
//	int data;
//	struct Node * left, *right;
//};
//
///* Helper function that allocates a new node with the
//given data and NULL left and right pointers. */
//struct Node * newNode(int data)
//{
//	struct Node * node = new Node;
//	node->data = data;
//	node->left = node->right = NULL;
//	return (node);
//}
//int kLeaves(Node *root, int k)
//{
//	if (root==NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		int a = kLeaves(root->left, k), b = kLeaves(root->right, k);
//		if (a+b == 2*k)
//			cout << root->data<<endl;
//		return a + b;
//	}
//}
//int main()
//{
//	struct Node *root = newNode(1);
//	root->left = newNode(2);
//	root->right = newNode(4);
//	root->left->left = newNode(5);
//	root->left->right = newNode(6);
//	root->left->left->left = newNode(9);
//	root->left->left->right = newNode(10);
//	root->right->right = newNode(8);
//	root->right->left = newNode(7);
//	root->right->left->left = newNode(11);
//	root->right->left->right = newNode(12);
//
//	kLeaves(root, 6);
//
//	return 0;
//}