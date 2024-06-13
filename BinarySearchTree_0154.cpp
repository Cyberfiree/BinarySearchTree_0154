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

	//constructor for the node class  // Constructor untuk kelas Node
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
		ROOT = nullptr; //initializing ROOT to null // Inisialisasi ROOT ke null
	}

	void insert(string element) //insert a node in the binary search tree //masukkan node ke dalam pohon pencarian biner
	{
		Node* newNode = new Node(element, nullptr, nullptr); //Allocate memory for the new node // Alokasi memori untuk node baru
		newNode->info = element; // Assign value to the data field of the new node // Berikan nilai ke data field dari node baru
		newNode->leftchild = nullptr; //Make the left child of the new node point to NULL // Buat leftchild dari node baru menunjuk ke NULL
		newNode->rightchild = nullptr; //Make the right child of the new node point to NULL // Buat rightchild dari node baru menunjuk ke NULL

		Node* parent = nullptr;
		Node* currentNode = nullptr;
		search(element, parent, currentNode); //Locate the node which will be the parent of the node to be insearch //Temukan node yang akan menjadi induk dari node yang akan dicari

		if (parent == nullptr) //if the parent is NULL (tree is empty) // Jika ROOT adalah NULL (pohon kosong)
		{
			ROOT = newNode; //Mark the new node as ROOT
			return; //exit
		}

		if (element < parent->info) //if the value in the data field of the new node is less than that of the...
		{
		}
	}
};
int main()
{
}