//
#include "stdafx.h"
//#include<iostream>
//#include<queue>
//using namespace std;
//
//enum Color { RED, BLACK };
//
//struct Node
//{
//	int data;
//	bool color;
//	Node *left, *right, *parent;
//	queue<int> a;
//	// Constructor
//	Node(int data)
//	{
//		this->data = data;
//		left = right = parent = NULL;
//	}
//};
//
//// Class to represent Red-Black Tree
//class RBTree
//{
//private:
//	Node *root;
//protected:
//	void rotateLeft(Node *&, Node *&);
//	void rotateRight(Node *&, Node *&);
//	void fixViolation(Node *&, Node *&);
//public:
//	// Constructor
//	RBTree() { root = NULL; }
//	void insert(const int &n);
//	void inorder();
//	void levelOrder();
//};
//
//// A recursive function to do level order traversal
//void inorderHelper(Node *root)
//{
//	if (root == NULL)
//		return;
//
//	inorderHelper(root->left);
//	cout << root->data << "  ";
//	inorderHelper(root->right);
//}
//
///* A utility function to insert a new node with given key
//in BST */
//Node* BSTInsert(Node* root, Node *pt)
//{
//	/* If the tree is empty, return a new node */
//	if (root == NULL)
//		return pt;
//
//	/* Otherwise, recur down the tree */
//	if (pt->data < root->data)
//	{
//		root->left = BSTInsert(root->left, pt);
//		root->left->parent = root;
//	}
//	else if (pt->data > root->data)
//	{
//		root->right = BSTInsert(root->right, pt);
//		root->right->parent = root;
//	}
//
//	/* return the (unchanged) node pointer */
//	return root;
//}
//
//// Utility function to do level order traversal
//void levelOrderHelper(Node *root)
//{
//	if (root == NULL)
//		return;
//
//	std::queue<Node *> q;
//	q.push(root);
//
//	while (!q.empty())
//	{
//		Node *temp = q.front();
//		cout << temp->data << "  ";
//		q.pop();
//
//		if (temp->left != NULL)
//			q.push(temp->left);
//
//		if (temp->right != NULL)
//			q.push(temp->right);
//	}
//}
//
//void RBTree::rotateLeft(Node *&root, Node *&pt)
//{
//	Node *pt_right = pt->right;
//
//	pt->right = pt_right->left;
//
//	if (pt->right != NULL)
//		pt->right->parent = pt;
//
//	pt_right->parent = pt->parent;
//
//	if (pt->parent == NULL)
//		root = pt_right;
//
//	else if (pt == pt->parent->left)
//		pt->parent->left = pt_right;
//
//	else
//		pt->parent->right = pt_right;
//
//	pt_right->left = pt;
//	pt->parent = pt_right;
//}
//
//void RBTree::rotateRight(Node *&root, Node *&pt)
//{
//	Node *pt_left = pt->left;
//
//	pt->left = pt_left->right;
//
//	if (pt->left != NULL)
//		pt->left->parent = pt;
//
//	pt_left->parent = pt->parent;
//
//	if (pt->parent == NULL)
//		root = pt_left;
//
//	else if (pt == pt->parent->left)
//		pt->parent->left = pt_left;
//
//	else
//		pt->parent->right = pt_left;
//
//	pt_left->right = pt;
//	pt->parent = pt_left;
//}
//
//void RBTree::fixViolation(Node * &root, Node* &pt)
//{
//	BSTInsert(root, pt);
//	if(pt!=root && (pt->parent>color!=BLACK) )
//}