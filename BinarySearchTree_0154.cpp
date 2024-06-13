#include <iostream>
#include <string>
using namespace std;

//BinarySearchTree_4NimBelakang
//Minimal 15 commit

class Node
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	//constructor for the node class
	Node(string i, Node* l, Node* r)
	{
		info = 1;
		leftchild = l;
		rightchild = r;
	}
};

class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree()
	{
	}
};
int main()
{
}