//
#include "stdafx.h"
//#include<iostream>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* next;
//};
//void push(Node* &head, int data)
//{
//	Node *newNode = (Node*)malloc(sizeof(Node*));
//	newNode->next = head;
//	newNode->data = data;
//	head = newNode;
//}
//int main()
//{
//	Node *root=NULL, *head, *temp;
//	push(root, 7);
//	push(root, 6);
//	push(root, 5);
//	push(root, 4);
//	push(root,3);
//	push(root, 2);
//	push(root, 1);
//	head = root->next ? root->next : root;
//	while (1)
//	{
//		temp = root->next->next;
//		root->next->next = root;
//		root->next = temp;
//		if (temp!=NULL&&temp->next != NULL)
//				root->next = temp->next;
//		else
//			break;
//		root = temp;
//	}
//	root = head;
//	while (root)
//	{
//		cout << root->data;
//		root = root -> next;
//	}
//	return 0;
//}