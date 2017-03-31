//
#include "stdafx.h"
//#include<iostream>
//#include<queue>
//using namespace std;
//
////struct to store each node in tree
//struct Node
//{
//	int data;
//	Node *left=NULL, *right=NULL;
//	
//};
//
////structure to store each node with its breadth relative to root 
////this will be item that will be stored in queue
//struct  QItem
//{
//	Node *node;
//	int breadth;
//};
//
////helper function to create new node
//Node* newNode(int data)
//{
//	Node *node = new Node();
//	node->data = data;
//	return node;
//}
//
////helper function to create new QItem structure
//QItem newQItem(Node *root, int breadth)
//{
//	QItem item;
//	item.node = root;
//	item.breadth = breadth;
//	return item;
//}
//
//int main()
//{
//	 /* Create following Binary Tree
//             1
//           /  \
//          2    3
//           \
//            4
//             \
//              5
//               \
//                6*/
//	Node *root = newNode(1);
//	root->left = newNode(2);
//	root->right = newNode(3);
//	root->left->right = newNode(4);
//	root->left->right->right = newNode(5);
//	root->left->right->right->right = newNode(6);
//
//	//to track upto how much breadth we have printed nodes
//	//we assume -ve value for breadth as we go left
//	//+ve value as we go right
//	//we will be printing root as first element so left breadth=1
//	int leftBreadth = 1, rightBreadth =0;
//
//	//queue to do Breadth First Traversal to print top view of tree
//	queue<QItem> queue;
//
//	//pushing root element as first elemnt in queue
//	//with breadth=0
//	queue.push(newQItem(root, 0));	
//
//	while (!queue.empty())
//	{
//		//pop the element from queue
//		QItem item = queue.front();
//		queue.pop();
//		
//		//we should check whether popped element is null
//		if (item.node!=NULL)
//		{
//			//we will be checking if the breadth of current element
//			//is within the left breadth we have printed till now
//			//if it is more than current breadth we will print that node
//			if (item.breadth < leftBreadth)
//			{
//				cout << item.node->data;
//				leftBreadth--;
//			}
//
//			//same with the right child also
//			//if we print right child then that means right breadth will be increasing
//			else if (item.breadth > rightBreadth)
//			{
//				cout << item.node->data;
//				rightBreadth++;
//			}
//
//			//we are pushing right and left child to do Breadth First Traversal
//			//for left child breadth will be reduced by 1
//			queue.push(newQItem(item.node->left,item.breadth-1));	
//			//for right child breadth will be increased by 1
//			queue.push(newQItem(item.node->right, item.breadth+1));
//		}	
//	}
//}