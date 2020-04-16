#include<iostream>
#include "BTree.h"
#include "BTTest.h"
#include "Node.h"

using namespace std;

int main()
{
	test();

	InOrder();

	PreOrder();

	PostOrder();

/*
	BTree* tree = new BTree(5);
	tree->insertNode(4);
	tree->insertNode(3);
	//tree->insertNode(6);
	tree->deleteNode(5);
	cout << tree->countNodes(tree->get_root()) << endl;
	cout << tree->inOrder();
	*/
}