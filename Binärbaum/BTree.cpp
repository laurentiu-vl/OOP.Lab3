#include "BTree.h"
#include "Node.h"
#include <iostream>

using namespace std;

BTree::BTree()
{
	
}

BTree::BTree(int data)
{
	this->root = new Node(data);
}

Node* BTree::get_root()
{
	return root;
}

