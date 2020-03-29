#pragma once
#include <iostream>

using namespace std;

class Node
{
	private: 
		int data;
		Node* left;
		Node* right;

	public:
		Node();

		~Node();

		Node(int);

		int get_data();

		int set_data(int);

		Node* get_left();

		Node* get_right();

		//Node* set_left(int);  Am pus friend class BTree si nu mai trebuie setter si gettere. Dar am gett., nu le-am mai sters din BTree.cpp si Node.cpp

		//Node* set_right(int);

	public:
		friend class BTree;
		
		
};