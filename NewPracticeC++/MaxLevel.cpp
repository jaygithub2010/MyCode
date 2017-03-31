#include "stdafx.h"
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	struct Node * left, *right;
//};
//struct Node * newNode(int data)
//{
//	struct Node * node = new Node;
//	node->data = data;
//	node->left = node->right = NULL;
//	return (node);
//}
//
//int max_sum = 0;
//int maxSumLevel(Node *root)
//{
//	int sum = maxSumLevel(root->left) + maxSumLevel(root->right );
//	if (sum > max_sum)
//		max_sum = sum;
//	return root->data;
//}
//
//int sum() 
//{
//
//}
//
//int main()
//{
//	struct Node *root = newNode(1);
//	root->left = newNode(2);
//	root->right = newNode(3);
//	root->left->left = newNode(4);
//	root->left->right = newNode(5);
//	root->right->right = newNode(8);
//	root->right->right->left = newNode(6);
//	root->right->right->right = newNode(7);
//
//	/*   Constructed Binary tree is:
//	1
//	/   \
//	2      3
//	/  \      \
//	4    5      8
//	/   \
//	6     7    */
//	cout << "Maximum level sum is "
//		<< maxSumLevel(root) << endl;
//	return 0;
//}