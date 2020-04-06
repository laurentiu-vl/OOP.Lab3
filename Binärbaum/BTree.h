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

			string inOrder_private(Node*, string);

			string preOrder_private(Node*, string);

			string postOrder_private(Node*, string);


	public:
			//constructor
			BTree();

			//constructor
			BTree(int);

			//destructor
			~BTree();

			Node* get_root(); 

			Node* insertNode(Node*, int);

			Node* deleteNode(Node*, int); 

			//return nr. of the nodes
			int countNodes(Node* n);

			//return nr. of the edges
			int countEdges(Node* n);

			//return the height of the node
			int countHeight(Node* n);

			//void inOrder(Node*);		//I replaced the void functions with string functions

			//void preOrder(Node*); 

			//void postOrder(Node*); 

			string  inOrder();

			string preOrder();

			string postOrder();

};