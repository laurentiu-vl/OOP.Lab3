#pragma once
#include "Node.h"
#include <iostream>
#include <string>

using namespace std;

class BTree
{
	friend class Node;

	private:

			Node* root;

	public:

			BTree();

			BTree(int);

			~BTree();

			Node* get_root(); 

			Node* insertNode(Node*, int);

			Node* removeNode(Node*, int); //de facut;

			int countNodes(Node* n);

			int countEdges(Node* n);

			int countHeight(Node* n);

			string inOrder(Node*);

			string preOrder(Node*); //de facut;

			string postOrder(Node*); //de facut;

};