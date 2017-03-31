
#include "stdafx.h"
#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
void push(Node* &head, int data)
{
	Node *newNode = (Node*)malloc(sizeof(Node*));
	newNode->next = head;
	newNode->data = data;
	head = newNode;
}
int main()
{
		Node *root=NULL, *head, *temp, *temp2, *temp1;
		push(root, 8);
		push(root, 7);
		push(root, 6);
		push(root, 5);
		push(root, 4);
		push(root,3);
		push(root, 2);
		push(root, 1);
		temp1 = root;
		root = root->next;
		temp1->next = NULL;
		while (root)
		{
			temp2 = root->next;
			root->next = temp1;
			temp1 = root;
			root = temp2;
		}
		root = temp1;
		while (root)
		{
			cout << root->data;
			root = root->next;
		}
		return 0;
}