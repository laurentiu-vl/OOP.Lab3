#pragma once
#include "Node.h"
#include <iostream>

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

			Node* get_root(); //folosesc la insert la main

			Node* insertNode(Node*, int);


			Node* removeNode(Node*, int);


			int countNodes(Node* n);


			int countEdges(Node* n);


			int countHeight(Node* n);

	//string methode: pre, in, ..
};