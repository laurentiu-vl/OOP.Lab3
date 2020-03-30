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

			Node* deleteNode(Node*, int); 

			int countNodes(Node* n);

			int countEdges(Node* n);

			int countHeight(Node* n);

			void inOrder(Node*);

			void preOrder(Node*); 

			void postOrder(Node*); 

};