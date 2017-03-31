//
#include "stdafx.h"
//#include<iostream>
//#include<unordered_map>
//using namespace std;
//
////node of linked list
//struct Node
//{
//	int data;
//	Node *next, *random;
//	Node(int x)
//	{
//		data = x;
//		next = random = NULL;
//	}
//};
//
////returns the root of clone of given linked list
//Node* cloneLinkedList(Node *root)
//{
//	//hash table to store node of orignal node as key and corresponding node in new linked list as key.
//	unordered_map<Node*, Node*> nodeMapper;
//	Node *copyLinkedListRoot = new Node(root->data);
//	Node *copyLinkedList=copyLinkedListRoot;
//	nodeMapper[root] = copyLinkedList;
//	while (root->next!=NULL)
//	{
//			//this is to create a new node if we didn't encounter the node till now
//			if (nodeMapper.find(root->next) == nodeMapper.end())
//			{
//				copyLinkedList->next = new Node(root->next->data);
//				nodeMapper[root->next] = copyLinkedList->next;
//			}
//			//if we already created new node we will use it as next node of current node
//			else
//				copyLinkedList->next = nodeMapper.at(root->next);
//
//			//this is to create a new node if we didn't encounter the node till now
//			if (nodeMapper.find(root->random) == nodeMapper.end())
//			{
//				copyLinkedList->random = new Node(root->random->data);
//				nodeMapper[root->random] = copyLinkedList->random;
//			}
//			//if we already created new node we will use it as random node of current node
//			else
//				copyLinkedList->random = nodeMapper.at(root->random);
//			root = root->next;
//			copyLinkedList = copyLinkedList->next;
//	}
//	copyLinkedList->random = nodeMapper[root->random];
//	return copyLinkedListRoot;
//}
//int main()
//{
//	Node* start = new Node(1);
//	start->next = new Node(2);
//	start->next->next = new Node(3);
//	start->next->next->next = new Node(4);
//	start->next->next->next->next = new Node(5);
//
//	// 1's random points to 3
//	start->random = start->next->next;
//
//	// 2's random points to 1
//	start->next->random = start;
//
//	// 3's and 4's random points to 5
//	start->next->next->random =
//		start->next->next->next->next;
//	start->next->next->next->random =
//		start->next->next->next->next;
//
//	// 5's random points to 2
//	start->next->next->next->next->random =
//		start->next;
//	Node *copy = cloneLinkedList(start);
//
//	cout << "Orginal List" << endl;
//	while (start!=NULL)
//	{
//		cout << "Node Data:" << start->data<<endl;
//		if (start->next!=NULL)
//			cout << "Next Node Data:"<<start->next->data <<'\t';
//		cout <<"Random Node Data:"<<start->random->data<< endl;
//		start = start->next;
//	}
//	cout << "Copy Linked List:" << endl;
//	while (copy != NULL)
//	{
//		cout << "Node Data:" << copy->data << endl;
//		if (copy->next != NULL)
//			cout << "Next Node Data:" << copy->next->data << '\t';
//		cout << "Random Node Data:" << copy->random->data << endl;
//		copy = copy->next;
//	}
//	return 0;
//}