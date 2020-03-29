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

			Node* get_root();

			void insert(int);


			void remove(int);


			int countNodes(Node* node);


			int countEdges(Node* node);


			int height(Node* node);;

	//string methode: pre, in, ..
};